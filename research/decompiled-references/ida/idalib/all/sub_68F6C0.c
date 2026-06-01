unsigned __int64 __fastcall sub_68F6C0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v6; // rbp
  __int64 v7; // r13
  void *v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(a1 + 48);
  v4 = &v3[*(_QWORD *)(a1 + 56)];
  if ( v3 == v4 )
    return v14 - __readfsqword(0x28u);
  while ( 1 )
  {
    v6 = (_QWORD *)*v3;
    if ( *(_QWORD *)*v3 == a2 && v6[1] == a3 )
      break;
    if ( v4 == ++v3 )
      return v14 - __readfsqword(0x28u);
  }
  v7 = v6[5];
  if ( v7 != -1 )
  {
    v11 = *(_QWORD *)(a1 + 120);
    v12 = *(_QWORD *)(a1 + 128);
    if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(v12 + 1) )
    {
      v13 = qvector_reserve(a1 + 120, v11, v12 + 1, 8);
      *(_QWORD *)(a1 + 120) = v13;
      v11 = v13;
      v12 = *(_QWORD *)(a1 + 128);
    }
    *(_QWORD *)(v11 + 8 * v12) = v7;
    ++*(_QWORD *)(a1 + 128);
    v6[5] = -1;
    v6 = (_QWORD *)*v3;
    if ( !*v3 )
      goto LABEL_11;
    goto LABEL_8;
  }
  if ( v6 )
  {
LABEL_8:
    v8 = (void *)v6[2];
    if ( v8 )
    {
      v6[3] = 0;
      qfree(v8);
    }
    operator delete(v6, 0x38u);
  }
LABEL_11:
  v9 = *(_QWORD *)(a1 + 56);
  if ( ((*(_QWORD *)(a1 + 48) + 8 * v9 - (__int64)v3) >> 3) - 2 >= 0 )
  {
    memmove(v3, v3 + 1, *(_QWORD *)(a1 + 48) + 8 * v9 - (_QWORD)v3 - 8);
    v9 = *(_QWORD *)(a1 + 56);
  }
  *(_BYTE *)(a1 + 144) = 1;
  *(_QWORD *)(a1 + 56) = v9 - 1;
  return v14 - __readfsqword(0x28u);
}
