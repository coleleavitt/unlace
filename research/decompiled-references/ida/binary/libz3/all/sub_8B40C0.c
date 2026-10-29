__int64 __fastcall sub_8B40C0(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r13
  int v11; // eax
  int v12; // esi
  __int64 v13; // rdx
  __int64 i; // rax
  unsigned int v15; // r12d
  unsigned int *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *v19; // r14
  __int64 v20; // r15
  int *v21; // rax
  int v22; // ecx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  int v30; // [rsp+1Ch] [rbp-ECh]
  __int64 v33; // [rsp+28h] [rbp-E0h]
  __int64 v34; // [rsp+28h] [rbp-E0h]
  __int64 v35; // [rsp+28h] [rbp-E0h]
  __int64 v36; // [rsp+28h] [rbp-E0h]
  __int64 v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+30h] [rbp-D8h]
  _QWORD v39[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v40[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v41[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v42[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v43; // [rsp+80h] [rbp-88h]
  _QWORD v44[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v45[2]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v46[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v47[10]; // [rsp+B8h] [rbp-50h] BYREF

  v3 = a2;
  v4 = (__int64)(a1 + 92);
  v38 = (__int64)(a1 + 92);
  v39[0] = 0;
  v39[1] = 0;
  v40[0] = 1;
  v40[1] = 0;
  v41[0] = 0;
  v41[1] = 0;
  v42[0] = 1;
  v42[1] = 0;
  v43 = a1 + 92;
  v44[0] = 0;
  v44[1] = 0;
  v45[0] = 1;
  v45[1] = 0;
  v46[0] = 0;
  v46[1] = 0;
  v5 = a1[199] + 232LL * a2;
  v47[0] = 1;
  v47[1] = 0;
  if ( a3 )
  {
    v6 = v5 + 72;
    v7 = v5 + 8;
    if ( (*(_BYTE *)(v5 + 28) & 1) != 0
      || *(_DWORD *)(v5 + 24) != 1
      || (*(_BYTE *)(v5 + 92) & 1) != 0
      || *(_DWORD *)(v5 + 88) != 1 )
    {
      sub_1854300(a1 + 92, v7, v6, v39);
    }
    else
    {
      sub_183A580(a1 + 92, v7, v6, v39);
      sub_182EF00(v4, v40);
      BYTE4(v40[0]) &= ~1u;
      LODWORD(v40[0]) = 1;
    }
    v8 = v5 + 104;
    v9 = v5 + 40;
    if ( (*(_BYTE *)(v5 + 60) & 1) != 0
      || *(_DWORD *)(v5 + 56) != 1
      || (*(_BYTE *)(v5 + 124) & 1) != 0
      || *(_DWORD *)(v5 + 120) != 1 )
    {
      sub_1854300(v4, v9, v8, v41);
    }
    else
    {
      sub_183A580(v4, v9, v8, v41);
      sub_182EF00(v4, v42);
      BYTE4(v42[0]) &= ~1u;
      LODWORD(v42[0]) = 1;
    }
  }
  else
  {
    sub_8B3C30((__int64)(a1 + 92), v5 + 136, v5 + 8, (__int64)v39);
  }
  v10 = a1[187] + 24 * v3;
  v11 = *(_DWORD *)(v10 + 16);
  v12 = v11 + 2;
  *(_DWORD *)(v10 + 16) = v11 + 1;
  v13 = *(_QWORD *)v10;
  if ( *(_QWORD *)v10 )
  {
    for ( i = 0; *(_DWORD *)(v13 - 4) != i && *(_DWORD *)(v13 + 8 * i) == -1; ++i )
      ;
    *(_DWORD *)(v10 + 16) = v12;
    v15 = i;
    v30 = *(_DWORD *)(v13 - 4);
    if ( v30 != (_DWORD)i )
    {
      do
      {
        if ( SLODWORD(v39[0]) <= 0 && (LODWORD(v39[0]) || SLODWORD(v41[0]) <= 0) )
          break;
        v16 = (unsigned int *)(v13 + 8LL * v15);
        v17 = *v16;
        v18 = a1[199] + 232LL * *(unsigned int *)(a1[200] + 4 * v17);
        v19 = (_DWORD *)(*(_QWORD *)(a1[185] + 16 * v17) + 40LL * v16[1]);
        if ( ((*v19 > 0) ^ (*(_DWORD *)(v18 + 200) > 0)) == a3 )
        {
          if ( (*(_BYTE *)(v18 + 3) & 0x40) != 0 )
          {
            v20 = v18 + 72;
LABEL_31:
            v24 = v18 + 8;
            if ( (*(_BYTE *)(v20 + 20) & 1) != 0
              || *(_DWORD *)(v20 + 16) != 1
              || (*(_BYTE *)(v18 + 28) & 1) != 0
              || *(_DWORD *)(v18 + 24) != 1 )
            {
              v33 = a1[199] + 232LL * *(unsigned int *)(a1[200] + 4 * v17);
              sub_1854300(v4, v20, v24, v44);
              v25 = v33;
            }
            else
            {
              v37 = a1[199] + 232LL * *(unsigned int *)(a1[200] + 4 * v17);
              sub_183A580(v4, v20, v24, v44);
              sub_182EF00(v4, v45);
              BYTE4(v45[0]) &= ~1u;
              v25 = v37;
              LODWORD(v45[0]) = 1;
            }
            v26 = v25 + 40;
            v27 = v20 + 32;
            if ( (*(_BYTE *)(v20 + 52) & 1) != 0
              || *(_DWORD *)(v20 + 48) != 1
              || (*(_BYTE *)(v25 + 60) & 1) != 0
              || *(_DWORD *)(v25 + 56) != 1 )
            {
              v34 = v25;
              sub_1854300(v4, v27, v26, v46);
              v28 = v34;
            }
            else
            {
              v36 = v25;
              sub_183A580(v4, v27, v26, v46);
              sub_182EF00(v4, v47);
              BYTE4(v47[0]) &= ~1u;
              v28 = v36;
              LODWORD(v47[0]) = 1;
            }
            v35 = v28 + 200;
            sub_8ADE20(v4, (__int64)v44, v28 + 200, (__int64)v44);
            sub_8ADE20(v4, (__int64)v46, v35, (__int64)v46);
            sub_8AE7F0(v4, (int *)v44, (__int64)v19, (__int64)v44);
            sub_8AE7F0(v4, (int *)v46, (__int64)v19, (__int64)v46);
            if ( SLODWORD(v44[0]) < 0 || !LODWORD(v44[0]) && SLODWORD(v46[0]) < 0 )
            {
              sub_1839100(v4, v44);
              sub_1839100(v4, v46);
            }
            if ( sub_8AEDF0((__int64)v43, (__int64)v44, (__int64)v39) )
            {
              sub_8ADE80(v38, (__int64)v39, (int *)v44);
              sub_8ADE80(v38, (__int64)v41, (int *)v46);
            }
            v13 = *(_QWORD *)v10;
          }
        }
        else
        {
          v20 = v18 + 136;
          if ( *(char *)(v18 + 3) < 0 )
            goto LABEL_31;
        }
        ++v15;
        if ( v13 )
        {
          v21 = (int *)(v13 + 8LL * v15);
          while ( v15 < *(_DWORD *)(v13 - 4) )
          {
            v22 = *v21;
            v21 += 2;
            if ( v22 != -1 )
              break;
            ++v15;
          }
        }
      }
      while ( v15 != v30 );
    }
  }
  else
  {
    *(_DWORD *)(v10 + 16) = v12;
  }
  if ( a3 )
  {
    sub_1839100(v38, v39);
    sub_1839100(v38, v41);
  }
  sub_8B2760(a1, a2, (__int64)v39);
  *(_DWORD *)(v10 + 16) -= 2;
  sub_8AD4E0((__int64)v43, (__int64)v44);
  return sub_8AD4E0(v38, (__int64)v39);
}

