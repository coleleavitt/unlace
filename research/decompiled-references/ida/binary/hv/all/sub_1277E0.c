__int64 __fastcall sub_1277E0(
        unsigned int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // r9d
  char v10; // di
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rcx
  int *v14; // rax
  int v15; // edx
  int v16; // edi
  int v17; // edi
  __int64 i; // rax
  _DWORD *v19; // rdi
  __int64 v20; // rdx
  unsigned int v21; // edi
  unsigned int v22; // ecx
  int *v23; // rax
  unsigned int v24; // edi
  int v25; // edx
  int v26; // r10d
  int v27; // r10d
  unsigned int v28; // esi
  unsigned int v29; // ecx
  unsigned int v30; // r10d
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v34; // r13
  signed int v35; // ebp
  int v36; // esi
  __int64 v37; // r15
  int v38; // eax
  int v39; // r12d
  __int64 *v40; // r14
  __int64 v41; // rdx
  int v42; // ecx
  int j; // r8d
  __int64 v44; // rsi
  __int64 v45; // rax
  int *v46; // r13
  __int64 v47; // rbx
  signed int v48; // r15d
  __int64 v49; // rdi
  __int64 v50; // rdx
  unsigned int v51; // eax
  signed int v52; // [rsp+4h] [rbp-D4h]
  __int64 v53; // [rsp+8h] [rbp-D0h]
  __int64 v54; // [rsp+10h] [rbp-C8h]
  unsigned int v55; // [rsp+18h] [rbp-C0h]
  int v56; // [rsp+20h] [rbp-B8h]
  int v57; // [rsp+24h] [rbp-B4h]
  signed int v58; // [rsp+28h] [rbp-B0h]
  int v59; // [rsp+2Ch] [rbp-ACh]
  _DWORD *v60; // [rsp+30h] [rbp-A8h]
  unsigned int v61; // [rsp+38h] [rbp-A0h]
  int v62; // [rsp+3Ch] [rbp-9Ch]
  __int64 v63; // [rsp+40h] [rbp-98h]
  int v64; // [rsp+48h] [rbp-90h]
  unsigned int *v65; // [rsp+50h] [rbp-88h]
  unsigned __int64 v66; // [rsp+58h] [rbp-80h]
  unsigned int v67; // [rsp+60h] [rbp-78h]
  int v68; // [rsp+64h] [rbp-74h]
  unsigned int v69; // [rsp+68h] [rbp-70h]
  unsigned int v70; // [rsp+6Ch] [rbp-6Ch]
  int *v71; // [rsp+70h] [rbp-68h]
  unsigned __int8 v73; // [rsp+83h] [rbp-55h]
  unsigned int v74; // [rsp+84h] [rbp-54h]
  __int64 v75; // [rsp+88h] [rbp-50h]
  unsigned int v76; // [rsp+90h] [rbp-48h] BYREF
  unsigned int v77; // [rsp+94h] [rbp-44h] BYREF
  unsigned __int64 v78; // [rsp+98h] [rbp-40h]

  v7 = *a1;
  v78 = __readfsqword(0x28u);
  v73 = v7;
  v66 = -1;
  v74 = v7;
  if ( a5 <= 0x84B )
    return v66;
  *(_OWORD *)(a4 + 624) = 0;
  v55 = (unsigned __int8)v7;
  *(_OWORD *)(a4 + 640) = 0;
  *(_OWORD *)(a4 + 656) = 0;
  *(_DWORD *)(a4 + 672) = 0;
  v53 = a4 + 676;
  *(_OWORD *)(a4 + 676) = 0;
  *(_OWORD *)(a4 + 692) = 0;
  *(_OWORD *)(a4 + 708) = 0;
  *(_QWORD *)(a4 + 724) = 0;
  *(_DWORD *)(a4 + 732) = 0;
  if ( (unsigned __int8)v7 > 0xCu )
    return -44;
  v66 = sub_115090((unsigned __int8 *)(a4 + 992), 0x100u, a4 + 624, &v77, &v76, a2, a3, a4 + 1248, 876, a6);
  if ( v66 > 0xFFFFFFFFFFFFFF88LL )
    return v66;
  v8 = v76;
  v9 = v76;
  if ( v76 > v55 )
    return -44;
  if ( v76 != 12 )
  {
    v10 = v73;
    v11 = 11;
    if ( v55 == 12 )
      v10 = 11;
    else
      v11 = v55;
    v73 = v10;
    v55 = v11;
  }
  if ( *(_DWORD *)(a4 + 4LL * v76 + 624) )
  {
    v9 = v76 + 1;
    v12 = v76;
    v13 = a4 + 680;
    if ( v76 + 1 > 1 )
    {
LABEL_12:
      v14 = (int *)(a4 + 628);
      v15 = 0;
      do
      {
        v16 = *v14;
        v14[14] = v15;
        ++v14;
        v17 = v15 + v16;
        v15 = v17;
      }
      while ( (int *)(a4 + 4LL * (v9 - 2) + 632) != v14 );
      goto LABEL_14;
    }
  }
  else
  {
    while ( 1 )
    {
      v12 = v9 - 1;
      if ( *(_DWORD *)(a4 + 4LL * (v9 - 1) + 624) )
        break;
      --v9;
    }
    v13 = a4 + 680;
    if ( v9 > 1 )
      goto LABEL_12;
  }
  v17 = 0;
LABEL_14:
  *(_DWORD *)(a4 + 680) = v17;
  *(_DWORD *)(v13 + 4LL * v9) = v17;
  for ( i = 0; v77 > (unsigned int)i; ++i )
  {
    v19 = (_DWORD *)(v13 + 4LL * *(unsigned __int8 *)(a4 + i + 992));
    v20 = (unsigned int)*v19;
    *v19 = v20 + 1;
    *(_BYTE *)(a4 + v20 + 736) = i;
  }
  *(_DWORD *)(a4 + 680) = 0;
  v21 = v55 + ~v8;
  if ( v9 > 1 )
  {
    v22 = v21 + 1;
    v23 = (int *)(a4 + 628);
    v24 = v9 + v21;
    v25 = 0;
    do
    {
      v26 = *v23;
      *(v23 - 156) = v25;
      ++v23;
      v27 = v26 << v22++;
      v25 += v27;
    }
    while ( v24 != v22 );
  }
  v28 = v8 + 1;
  v29 = v28 - v12;
  v30 = v55 + v12 - v28;
  v69 = v28 - v12;
  if ( v28 - v12 < v30 + 1 )
  {
    v31 = a4 + 52LL * v29;
    while ( 1 )
    {
      v32 = 1;
      if ( v9 > 1 )
      {
        do
        {
          *(_DWORD *)(v31 + 4 * v32) = *(_DWORD *)(a4 + 4 * v32) >> v29;
          ++v32;
        }
        while ( v9 - 2 + 2LL != v32 );
      }
      v31 += 52;
      if ( v30 == v29 )
        break;
      ++v29;
    }
    v28 = v76 + 1;
    v69 = v76 + 1 - v12;
  }
  v34 = a4 + 736;
  v52 = v12 + 1;
  if ( (int)(v12 + 1) > 1 )
  {
    v75 = a4;
    v65 = (unsigned int *)(a4 + 4);
    v60 = a1 + 1;
    v61 = v55 - v28 + 1;
    v68 = 2 * v28 - 1;
    v67 = v28 - 1;
    v59 = v68 - v55;
    v70 = v52 + v55 - v28;
    do
    {
      v35 = v65[169];
      v58 = v65[170];
      if ( v61 < v69 )
      {
        sub_11D450(&v60[*v65], (unsigned __int8 *)(v34 + v35), (unsigned __int8 *)(v34 + v58), v67, v55, 0, 1);
      }
      else
      {
        v56 = *v65;
        v57 = 1 << v61;
        v36 = 1;
        if ( v59 > 0 )
          v36 = v59;
        v64 = v36;
        if ( v35 != v65[170] )
        {
          v37 = v34;
          v54 = v75 + 52LL * v67;
          v71 = (int *)(v54 + 4LL * v36);
          v38 = 1;
          if ( v59 > 1 )
            v38 = v36;
          v62 = v38;
          v63 = v75 + 4LL * (v38 + 1) + 676;
          do
          {
            v39 = *(unsigned __int8 *)(v37 + v35);
            v40 = (__int64 *)&v60[v56];
            if ( v59 <= 1 )
              goto LABEL_49;
            v41 = 0x100000001LL * (v39 + (v67 << 16) + 0x1000000);
            if ( v57 == 2 )
            {
              *v40 = v41;
            }
            else if ( v57 == 4 )
            {
              *v40 = v41;
              v40[1] = v41;
            }
            else
            {
              v42 = 0;
              for ( j = *v71; j > v42; *(__int64 *)((char *)v40 + v45 + 24) = v41 )
              {
                v44 = v42;
                v42 += 8;
                v45 = 4 * v44;
                *(__int64 *)((char *)v40 + 4 * v44) = v41;
                *(__int64 *)((char *)v40 + v45 + 8) = v41;
                *(__int64 *)((char *)v40 + v45 + 16) = v41;
              }
            }
            if ( v64 < v52 )
            {
LABEL_49:
              v46 = (int *)v63;
              v47 = v37;
              v48 = v62;
              do
              {
                v49 = v48;
                v50 = *v46;
                ++v48;
                ++v46;
                sub_11D450(
                  (__int64 *)((char *)v40 + 4 * *(unsigned int *)(v54 + 4 * v49)),
                  (unsigned __int8 *)(v47 + *(int *)(v53 + 4 * v49)),
                  (unsigned __int8 *)(v47 + v50),
                  v68 + 1 - v48,
                  v55,
                  v39,
                  2);
              }
              while ( v52 > v48 );
              v37 = v47;
            }
            ++v35;
            v56 += v57;
          }
          while ( v58 != v35 );
          v34 = v37;
        }
      }
      ++v61;
      ++v65;
      --v67;
      --v59;
      --v68;
    }
    while ( v70 != v61 );
  }
  v51 = (v73 << 16) | v74 & 0xFF00FFFF;
  BYTE1(v51) = 1;
  *a1 = v51;
  return v66;
}

