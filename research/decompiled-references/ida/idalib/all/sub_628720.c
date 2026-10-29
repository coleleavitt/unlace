__int64 __fastcall sub_628720(unsigned __int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // r12
  __int64 v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v15; // [rsp+8h] [rbp-60h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  void *ptr; // [rsp+18h] [rbp-50h] BYREF
  __int128 v18; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+30h] [rbp-38h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v4 = *(_DWORD *)(a4 + 120);
  v15 = a1;
  v20 = __readfsqword(0x28u);
  if ( a2 )
  {
    v16 = -1;
    ptr = nullptr;
    v18 = 0;
    v6 = strlen(a2);
    v7 = v6 + 1;
    v8 = v6;
    ptr = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
    *(_QWORD *)&v18 = v7;
    memmove(ptr, a2, v8);
    *((_BYTE *)ptr + v8) = 0;
    v9 = -1;
  }
  else
  {
    v16 = a3;
    v9 = a3;
    ptr = nullptr;
    v18 = 0;
  }
  v10 = *(_QWORD **)(a4 + 56);
  v19 = v4;
  v11 = (_QWORD *)(a4 + 48);
  if ( !v10 )
    goto LABEL_14;
  do
  {
    while ( 1 )
    {
      v12 = v10[2];
      v13 = v10[3];
      if ( v10[4] < v15 )
        break;
      v11 = v10;
      v10 = (_QWORD *)v10[2];
      if ( !v12 )
        goto LABEL_8;
    }
    v10 = (_QWORD *)v10[3];
  }
  while ( v13 );
LABEL_8:
  if ( (_QWORD *)(a4 + 48) == v11 || v15 < v11[4] )
  {
LABEL_14:
    sub_6281E0((_QWORD *)(a4 + 40), v11, &v15, (__int64)&v16);
    if ( ptr )
    {
      *(_QWORD *)&v18 = 0;
      qfree(ptr);
    }
  }
  else
  {
    if ( ptr )
    {
      *(_QWORD *)&v18 = 0;
      qfree(ptr);
    }
    v11[5] = v9;
  }
  return 1;
}
