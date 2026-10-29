__int64 __fastcall sub_7F4200(_QWORD *a1, __int64 *a2)
{
  __int64 *v4; // rax
  unsigned __int64 v5; // r14
  int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned __int64 v13; // r15
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // r11
  __int64 v19; // rdx
  signed __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx

  v4 = (__int64 *)a1[9];
  v5 = a1[68];
  v6 = *((_DWORD *)v4 + 32);
  if ( v6 && (v4[14] << v4[9]) + v4[15] == v5 )
    goto LABEL_35;
  v7 = v4[3];
  v8 = a1[2] + a1[64];
  if ( v8 < v7 >> 1 )
  {
    v9 = a1[78];
    if ( v5 >= v9 )
      goto LABEL_5;
    goto LABEL_24;
  }
  v7 = ((v7 >> 1) + 2 * *v4 + v8) & ~v4[10];
  v9 = a1[78];
  if ( v5 < v9 )
  {
LABEL_24:
    a1[68] = v9;
    v5 = v9;
    v6 = *((_DWORD *)v4 + 32);
  }
LABEL_5:
  v10 = v5;
  if ( v7 >= v5 )
    v10 = v7;
  if ( v5 < v7 )
  {
    do
    {
      v11 = v4[9];
      if ( v6 )
      {
        if ( v5 >= v4[15] + (v4[14] << v11) )
          goto LABEL_33;
      }
      v12 = v4[10];
      v13 = v5 >> v11;
      result = sub_7F3CF0(a1, v5 >> v11);
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result == -17709 )
          return 4294949586LL;
        return result;
      }
      v4 = (__int64 *)a1[9];
      v15 = *v4;
      v16 = *v4;
      if ( v13 == v4[14] )
        v16 = v4[15];
      v17 = a1[34];
      v18 = v13 + 1;
      if ( v17 > v16 )
      {
        v5 = v15 * v18;
      }
      else
      {
        v19 = v4[6];
        v20 = v16 - v17;
        v21 = v13 * v15 + 1;
        if ( v17 )
        {
LABEL_18:
          v22 = 0;
          v23 = 0;
          v24 = v19 + v20;
          do
          {
            v25 = *(_QWORD *)(a1[47] + 8 * v23) * *(unsigned __int8 *)(v24 + v23);
            ++v23;
            v22 += v25;
          }
          while ( v23 != v17 );
          goto LABEL_20;
        }
        while ( 1 )
        {
          v22 = 0;
LABEL_20:
          *(_QWORD *)(a1[41] + 8 * (a1[44] & v22 ^ (v22 >> a1[43]))) = v20 + v21;
          v20 -= a1[35];
          v4 = (__int64 *)a1[9];
          if ( (__int64)(v5 & v12) > v20 )
            break;
          v17 = a1[34];
          v19 = v4[6];
          if ( v17 )
            goto LABEL_18;
        }
        v5 = *v4 * v18;
      }
      a1[68] = v5;
      v6 = *((_DWORD *)v4 + 32);
    }
    while ( v5 < v10 );
  }
  if ( v6 )
  {
LABEL_33:
    v27 = v4[15] + (v4[14] << v4[9]);
    if ( v5 < v27 )
      goto LABEL_31;
    a1[68] = v27;
LABEL_35:
    v26 = -1;
    goto LABEL_32;
  }
LABEL_31:
  v26 = a1[64] + *v4 - (v4[10] & (v5 - v10));
LABEL_32:
  *a2 = v26;
  return 0;
}

