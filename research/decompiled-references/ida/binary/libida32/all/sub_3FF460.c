__int64 __fastcall sub_3FF460(__int64 ***a1, __int64 *a2, int *a3)
{
  unsigned __int64 v3; // rax
  __int64 *v4; // r13
  __int64 v5; // r11
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r10
  unsigned __int8 v11; // bl
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // r8
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int8 v22; // cl
  __int64 v23; // rdx
  unsigned __int8 *v24; // rax
  unsigned __int8 v26; // al
  __int64 v27; // [rsp+0h] [rbp-48h]
  __int64 **v28; // [rsp+8h] [rbp-40h]

  v3 = *a2;
  v4 = **a1;
  v28 = *a1;
  v5 = *v4;
  v6 = 56 * *a2;
  v7 = (unsigned __int64)(*a1)[1] & *(_QWORD *)(*v4 + v6 + 48);
  if ( v7 )
  {
    v8 = *a3;
    v9 = *a2;
    if ( (_DWORD)v8 != 1 )
    {
      v9 = v3 + 1;
      v6 += 56;
    }
    v10 = v4[1];
    v11 = 0;
    v12 = v8 + v3;
    v13 = v9;
    v14 = 56 * (v8 + v3);
    while ( v13 < v10 )
    {
      if ( (*((_BYTE *)v4 + 52) & 7) != 0 )
      {
        v15 = 1 << ((*((_BYTE *)v4 + 52) & 7) - 1);
      }
      else
      {
        v27 = v14;
        v26 = getinf(61);
        v10 = v4[1];
        v5 = *v4;
        v14 = v27;
        v15 = v26;
      }
      v16 = 8 * v15;
      if ( v16 > 63 )
      {
        v18 = v7;
        v17 = v7;
      }
      else
      {
        v17 = v7 & ((1LL << v16) - 1);
        v18 = v7 | -(1LL << v16);
      }
      v19 = v14;
      if ( v10 < v12 )
        v19 = 56 * v10;
      v20 = v5 + v19;
      v21 = v5 + v6;
      if ( v19 == v6 )
        break;
      v22 = v11;
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(v21 + 48);
          if ( v23 == v17 || v23 == v18 )
            break;
          v21 += 56;
          if ( v20 == v21 )
            goto LABEL_19;
        }
        if ( !v22 )
          break;
        v21 += 56;
        --v22;
        if ( v20 == v21 )
          goto LABEL_19;
      }
      if ( v21 - v5 < 0 )
        break;
      if ( ++v11 == 0xFF )
        goto LABEL_21;
    }
LABEL_19:
    if ( !v11 )
      return 0;
    --v11;
LABEL_21:
    v24 = (unsigned __int8 *)v28[2];
    if ( *v24 < v11 )
      *v24 = v11;
  }
  return 0;
}

