unsigned __int64 __fastcall sub_19C5A80(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 *v14; // rbx
  unsigned __int64 result; // rax
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // [rsp+8h] [rbp-40h]

  v7 = a2;
  v27 = a4;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 35 > 1 )
  {
    v19 = sub_F63050(v9, a2, a3, a4);
    a4 = *(_BYTE *)(v19 + 19) >> 2;
    v11 = a4 + ((*(_WORD *)(v19 + 18) >> 3) & 0x7F);
    v12 = v19 + 8 * v11 + 48;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 35 > 1 )
      v9 = sub_F63050(v9, a2, v11, a4);
    v10 = (*(_WORD *)(v9 + 18) >> 3) & 0x7F;
  }
  else
  {
    v10 = (*(_WORD *)(v9 + 18) >> 3) & 0x7F;
    v11 = v10 + (*(_BYTE *)(v9 + 19) >> 2);
    v12 = v9 + 8 * v11 + 48;
  }
  v13 = v9 + 8 * v10 + 48;
  if ( v13 == v12 )
  {
LABEL_16:
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v20 + 16) - 35 > 1 )
    {
      v24 = sub_F63050(v20, a2, v11, a4);
      v25 = *(_BYTE *)(v24 + 19) >> 2;
      v26 = v25 + ((*(_WORD *)(v24 + 18) >> 3) & 0x7F);
      v22 = v24 + 8 * v26 + 48;
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v20 + 16) - 35 > 1 )
        v20 = sub_F63050(v20, a2, v26, v25);
      v21 = (*(_WORD *)(v20 + 18) >> 3) & 0x7F;
    }
    else
    {
      v21 = (*(_WORD *)(v20 + 18) >> 3) & 0x7F;
      v22 = v20 + 8 * (v21 + (*(_BYTE *)(v20 + 19) >> 2)) + 48;
    }
    v23 = (__int64 *)(v20 + 8 * v21 + 48);
    if ( v23 == (__int64 *)v22 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        result = sub_19C57A0(*v23, v7, a3, v27, a5, a6);
        if ( result )
          break;
        if ( (__int64 *)v22 == ++v23 )
          return 0;
      }
    }
  }
  else
  {
    v14 = (__int64 *)v13;
    if ( a2 )
    {
      while ( 1 )
      {
        v16 = *v14;
        result = sub_BAD2F0(*v14, v7, 1, a4, a5, a6);
        if ( result )
          break;
        a2 = *a3;
        result = sub_BAA9D0(v16, *a3, 1, 0, v17, v18);
        if ( result )
          break;
        if ( (__int64 *)v12 == ++v14 )
          goto LABEL_16;
      }
    }
    else
    {
      while ( 1 )
      {
        a2 = *a3;
        result = sub_BAA9D0(*v14, *a3, 1, 0, a5, a6);
        if ( result )
          break;
        if ( (__int64 *)v12 == ++v14 )
          goto LABEL_16;
      }
    }
  }
  return result;
}
