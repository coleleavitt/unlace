__int64 __fastcall sub_685970(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  void *v8; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v11 = 0;
  ptr = nullptr;
  sub_685800(a1, (__int64 *)&ptr, a2);
  v5 = v11;
  v6 = ptr;
  if ( *((_QWORD *)&v11 + 1) < (unsigned __int64)(v11 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v11 + 1, 8);
    v6 = ptr;
    v5 = v11;
  }
  v6[v5] = a3;
  *(_QWORD *)&v11 = v11 + 1;
  v7 = sub_685680(a1, a2, (__int64 *)&ptr);
  if ( (_BYTE)v7 )
  {
    sub_652960(a1, -1, -1, 1);
    v8 = ptr;
    if ( !ptr )
      return v7;
    goto LABEL_6;
  }
  v8 = ptr;
  if ( ptr )
  {
LABEL_6:
    *(_QWORD *)&v11 = 0;
    qfree(v8);
  }
  return v7;
}
