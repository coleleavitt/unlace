__int64 __fastcall sub_689540(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rax
  unsigned int v4; // r13d
  const void *v6; // r8
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  const void *v11; // [rsp+8h] [rbp-40h]

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    v2 = v3 - 1;
  v4 = sub_692580(a1, v2);
  if ( (_BYTE)v4 )
  {
    v6 = *(const void **)a2;
    v7 = a1[1];
    v8 = (int)v2;
    if ( v7 )
    {
      --v7;
      v8 = (int)v2 + v7;
    }
    v9 = *a1;
    if ( a1[2] < (unsigned __int64)(v8 + 1) )
    {
      v11 = v6;
      v10 = qvector_reserve(a1, v9, v8 + 1, 1);
      v6 = v11;
      *a1 = v10;
      v9 = v10;
    }
    a1[1] = v8 + 1;
    *(_BYTE *)(v9 + v8) = 0;
    memmove((void *)(v7 + *a1), v6, (int)v2);
  }
  return v4;
}

