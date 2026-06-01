__int64 __fastcall sub_9041D0(_WORD *a1, __int16 *a2, unsigned int a3, int a4, _WORD *a5, unsigned __int64 a6)
{
  __int64 v6; // r10
  unsigned int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rdx
  unsigned __int8 *v11; // r11
  __int64 result; // rax
  __int16 v13; // r14
  _WORD *v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // ebp
  __int16 v17; // r9
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int16 v20; // cx
  _WORD *v21; // r13
  __int64 v22; // rcx
  __int64 v23; // r13
  unsigned int v24; // ecx
  int v25; // ebx
  int i; // r9d
  __int16 *v27; // r15
  __int64 v28; // r14
  unsigned __int8 *v29; // r13
  __int64 v30; // rbx
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int8 *v35; // r9
  __int64 v36; // rcx
  unsigned __int8 v37; // r12
  __int64 v38; // rbp
  __int64 v39; // rcx
  __int16 v40; // r10
  _WORD *v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // r8d
  int v44; // r10d
  unsigned int v45; // ecx
  __int16 *v46; // r9
  int v47; // eax
  _DWORD *v48; // rdx
  int v49; // eax
  unsigned int v50; // [rsp+0h] [rbp-60h]
  __int64 v52; // [rsp+8h] [rbp-58h]
  __int64 v53; // [rsp+10h] [rbp-50h]
  unsigned __int8 *v55; // [rsp+20h] [rbp-40h]
  unsigned int v56; // [rsp+28h] [rbp-38h]

  v6 = (unsigned int)((1 << a4) - 1);
  v50 = 1 << a4;
  v7 = (unsigned int)(1 << a4) >> 1;
  v52 = 8;
  if ( a4 )
    v52 = 4LL * v7 + 4;
  v8 = a3 + 2;
  v9 = a3 + 1;
  v10 = v7 + (v50 >> 3) + 3;
  v11 = (unsigned __int8 *)&a5[v8];
  result = -44;
  if ( 4 * ((unsigned __int64)(v8 + (1LL << a4)) >> 1) + 8 > a6 )
    return result;
  a1[1] = a3;
  v13 = v50 + 1;
  *a1 = a4;
  v14 = &a5[v9];
  *a5 = 0;
  if ( !v9 )
  {
    *v14 = v13;
    v53 = v50;
    v55 = &v11[v50];
    v34 = (unsigned int)v6;
    goto LABEL_26;
  }
  v15 = (1 << a4) - 1;
  v16 = 0;
  v17 = 0;
  v18 = 1;
  v19 = 0;
  while ( 1 )
  {
    v20 = a2[v19];
    v21 = &a5[v18];
    if ( v20 == -1 )
      break;
    ++v18;
    ++v16;
    *v21 = v17 + v20;
    if ( v9 < v18 )
      goto LABEL_10;
LABEL_7:
    v19 = v16;
    v17 = a5[v16];
  }
  ++v18;
  *v21 = v17 + 1;
  v22 = v15--;
  v11[v22] = v16++;
  if ( v9 >= v18 )
    goto LABEL_7;
LABEL_10:
  *v14 = v13;
  if ( v15 != (_DWORD)v6 )
  {
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      v25 = a2[v23];
      if ( v25 > 0 )
      {
        for ( i = 0; i != v25; ++i )
        {
          v11[v24] = v23;
          do
            v24 = v6 & (v10 + v24);
          while ( v15 < v24 );
        }
      }
      if ( a3 == v23 )
        break;
      ++v23;
    }
LABEL_29:
    if ( v50 )
    {
      v39 = (__int64)&v11[v6 + 1];
      v40 = v50 - (_WORD)v11;
      do
      {
        v41 = &a5[*v11];
        v42 = (unsigned __int16)*v41;
        *v41 = v42 + 1;
        LOWORD(v41) = v40 + (_WORD)v11++;
        a1[v42 + 2] = (_WORD)v41;
      }
      while ( (unsigned __int8 *)v39 != v11 );
    }
    goto LABEL_32;
  }
  v56 = v15;
  v27 = a2;
  v28 = 0;
  v29 = &v11[v50];
  v53 = v50;
  v30 = 0;
  v55 = v29;
  do
  {
    v31 = *v27;
    v32 = 8;
    for ( *(_QWORD *)&v29[v28] = v30; (int)v31 > v32; *(_QWORD *)&v29[v28 + v33] = v30 )
    {
      v33 = v32;
      v32 += 8;
    }
    ++v27;
    v28 += v31;
    v30 += 0x101010101010101LL;
  }
  while ( &a2[a3 + 1] != v27 );
  v34 = v56;
  v10 = (unsigned int)v10;
LABEL_26:
  if ( v53 )
  {
    v35 = v55;
    v36 = 0;
    do
    {
      v37 = *v35;
      v35 += 2;
      v11[v34 & v36] = v37;
      v38 = v34 & (v10 + v36);
      v36 = v34 & (v10 + v10 + v36);
      v11[v38] = *(v35 - 1);
    }
    while ( &v55[((v53 - 1) & 0xFFFFFFFFFFFFFFFELL) + 2] != v35 );
    goto LABEL_29;
  }
LABEL_32:
  v43 = 0;
  v44 = 0;
  do
  {
    v46 = &a2[v43];
    v47 = *v46;
    v48 = (_DWORD *)((char *)&a1[4 * v43] + v52);
    if ( *v46 )
    {
      if ( (_WORD)v47 == 1 || (_WORD)v47 == 0xFFFF )
      {
        v49 = v44 - 1;
        v48[1] = (a4 << 16) - v50;
        ++v44;
        *v48 = v49;
      }
      else
      {
        _BitScanReverse(&v45, v47 - 1);
        v48[1] = ((a4 - 31 + (v45 ^ 0x1F)) << 16) - (v47 << (a4 - 31 + (v45 ^ 0x1F)));
        *v48 = v44 - *v46;
        v44 += *v46;
      }
    }
    else
    {
      v48[1] = ((a4 + 1) << 16) - v50;
    }
    ++v43;
  }
  while ( a3 >= v43 );
  return 0;
}
