__int64 __fastcall sub_E7BF20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  bool v6; // cc
  unsigned int v7; // r14d
  __int64 v8; // rsi
  int v9; // edx
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r14d
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  int v31; // ecx
  __int64 *v32; // r14
  __int64 v33; // rsi
  __int64 *v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r14d
  int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // edx
  __int64 v43; // [rsp+8h] [rbp-C8h]
  __int64 v44; // [rsp+10h] [rbp-C0h]
  __int64 *v45; // [rsp+18h] [rbp-B8h]
  __int64 v46; // [rsp+38h] [rbp-98h] BYREF
  __int64 v47; // [rsp+40h] [rbp-90h] BYREF
  __int64 v48; // [rsp+48h] [rbp-88h]
  __int64 v49; // [rsp+50h] [rbp-80h]
  __int64 **v50; // [rsp+58h] [rbp-78h]
  __int64 *v51; // [rsp+60h] [rbp-70h]
  unsigned int v52; // [rsp+68h] [rbp-68h]
  unsigned int v53; // [rsp+6Ch] [rbp-64h]
  __int64 v54; // [rsp+70h] [rbp-60h] BYREF
  __int64 v55; // [rsp+78h] [rbp-58h]
  __int64 v56; // [rsp+80h] [rbp-50h] BYREF
  __int64 v57; // [rsp+88h] [rbp-48h]
  _OWORD v58[4]; // [rsp+90h] [rbp-40h] BYREF

  v5 = a2;
  v6 = *(_DWORD *)(a3 + 8) <= 0x3Fu;
  v52 = *(_DWORD *)(a2 + 20);
  if ( v6 )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v37 = *(_QWORD *)(a1 + 160);
    if ( v37 )
      v38 = *(_DWORD *)(v37 - 4);
    else
      v38 = 0;
    if ( v52 )
    {
      v51 = (__int64 *)a2;
      v53 = v52;
      v39 = 0;
      while ( 1 )
      {
        if ( !v37 || (v42 = *(_DWORD *)(v37 - 4), v42 == *(_DWORD *)(v37 - 8)) )
        {
          sub_23A6F0((unsigned int **)(a1 + 160));
          v37 = *(_QWORD *)(a1 + 160);
          v42 = *(_DWORD *)(v37 - 4);
        }
        *(_QWORD *)(v37 + 8LL * v42) = 0;
        *(_DWORD *)(v37 - 4) = v42 + 1;
        v40 = *(_QWORD *)(a1 + 528);
        if ( !v40 || (v41 = *(unsigned int *)(v40 - 4), (_DWORD)v41 == *(_DWORD *)(v40 - 8)) )
        {
          sub_2FD3F0((unsigned int **)(a1 + 528));
          v40 = *(_QWORD *)(a1 + 528);
          v41 = *(unsigned int *)(v40 - 4);
        }
        *(_DWORD *)(v40 + 4 * v41) = v38;
        ++v39;
        ++*(_DWORD *)(v40 - 4);
        if ( v39 == v53 )
          break;
        v37 = *(_QWORD *)(a1 + 160);
      }
      v5 = (__int64)v51;
    }
    *(_DWORD *)(a1 + 128) += v52;
  }
  v7 = *(_DWORD *)(v5 + 72) + *(_DWORD *)(v5 + 76) + 1;
  while ( 1 )
  {
    v11 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v11 >= v7 )
      break;
    if ( v11 )
    {
      v12 = *(_DWORD *)(v5 + 72);
      if ( v12 < v11 )
        v13 = v5 + 8LL * (v11 - v12 - 1);
      else
        v13 = v5 + 8LL * (v11 - 1);
      v8 = *(_QWORD *)(16LL * *(unsigned int *)(v5 + 20) + v13 + 80);
    }
    else
    {
      v8 = *(_QWORD *)(v5 + 24);
    }
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_E75730(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v14 = *(unsigned int *)(a3 + 12);
  v15 = *(_QWORD *)(a1 + 56);
  v55 = 0;
  v16 = *(_DWORD *)(v5 + 72);
  v17 = (__int64 *)(v15 + 8 * v14);
  v18 = *(unsigned int *)(v5 + 20);
  v45 = v17;
  v43 = *v17;
  v53 = *(_DWORD *)(v5 + 76);
  v54 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v54, v16, (__int64 *)(v5 + 80 + 16 * v18));
  v57 = 0;
  v47 = v54;
  v49 = v55;
  v19 = (__int64 *)(v5 + 80 + 16LL * *(unsigned int *)(v5 + 20));
  v56 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v56, v53, v19);
  v46 = v56;
  v48 = v57;
  v20 = v16;
  v44 = v16;
  if ( v16 )
  {
    v16 = 0;
    v34 = v45;
    v51 = &v45[v20];
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v34[1]) )
      {
        v35 = v34[1];
        LODWORD(v50) = v16 + 1;
        v58[0] = _mm_loadh_ps((const double *)&v47);
        sub_E65C70((__int64 **)v58, v35);
        v16 = (unsigned int)v50;
      }
      ++v34;
    }
    while ( v51 != v34 );
  }
  sub_39BEE0(&v54, v16);
  v21 = v53;
  if ( v53 )
  {
    v53 = 0;
    v32 = &v45[v44];
    v51 = &v45[v44 + v21];
    v50 = (__int64 **)v58;
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v32[1]) )
      {
        v33 = v32[1];
        ++v53;
        v58[0] = _mm_loadh_ps((const double *)&v46);
        sub_E65C70(v50, v33);
      }
      ++v32;
    }
    while ( v32 != v51 );
  }
  v22 = v53;
  sub_39BEE0(&v56, v53);
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v36 = sub_15DBA30(*(_QWORD *)(a1 + 8), v5, v16, v49, v22, v48, v43);
    v23 = v36;
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    sub_E65BC0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  else
  {
    ++*(_DWORD *)(v5 + 8);
    sub_E65BC0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v23 = v5;
  }
  *(_QWORD *)(a1 + 480) = v23;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v24 = *(_QWORD *)(a1 + 480);
  *(_QWORD *)&v58[0] = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  sub_E67160((unsigned int **)(a1 + 56), v58);
  v25 = *(_QWORD *)(a1 + 160);
  if ( v25 )
    *(_DWORD *)(v25 - 4) -= v52;
  v26 = *(_QWORD *)(a1 + 528);
  if ( v26 )
    *(_DWORD *)(v26 - 4) -= v52;
  sub_15844D0(a1);
  v27 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, v5, 0, *(_QWORD *)(a1 + 480));
    v27 = *(_QWORD *)(a1 + 480);
  }
  sub_E65BC0(v27, *(_QWORD *)(a1 + 488));
  v28 = *(_QWORD *)(a1 + 504);
  v29 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_E65BA0(v29, v28);
  *(_QWORD *)(a1 + 496) = 0;
  v30 = *(_QWORD *)(a1 + 40);
  v31 = *(_DWORD *)(v30 - 4);
  *(_DWORD *)(v30 - 4) = v31 - 1;
  if ( *(_QWORD *)(a1 + 480) != v5 && v31 != 1 )
    *(_BYTE *)(v30 + 16LL * (unsigned int)(v31 - 2) + 8) |= 2u;
  sub_2334C0(&v56);
  return sub_2334C0(&v54);
}

