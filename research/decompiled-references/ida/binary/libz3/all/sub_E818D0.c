__int64 __fastcall sub_E818D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 **v5; // rbx
  bool v6; // cc
  unsigned int v7; // r14d
  __int64 v8; // rsi
  int v9; // edx
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 **v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // ecx
  __int64 *v30; // r14
  __int64 *v31; // r12
  __int64 v32; // rsi
  __int64 *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // r14d
  int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // edx
  __int64 v41; // [rsp+8h] [rbp-C8h]
  __int64 v42; // [rsp+10h] [rbp-C0h]
  __int64 *v43; // [rsp+18h] [rbp-B8h]
  __int64 v44; // [rsp+38h] [rbp-98h] BYREF
  __int64 v45; // [rsp+40h] [rbp-90h] BYREF
  __int64 v46; // [rsp+48h] [rbp-88h]
  __int64 v47; // [rsp+50h] [rbp-80h]
  unsigned int v48; // [rsp+5Ch] [rbp-74h]
  __int64 **v49; // [rsp+60h] [rbp-70h]
  unsigned int v50; // [rsp+68h] [rbp-68h]
  unsigned int v51; // [rsp+6Ch] [rbp-64h]
  __int64 v52; // [rsp+70h] [rbp-60h] BYREF
  __int64 v53; // [rsp+78h] [rbp-58h]
  __int64 v54; // [rsp+80h] [rbp-50h] BYREF
  __int64 v55; // [rsp+88h] [rbp-48h]
  _OWORD v56[4]; // [rsp+90h] [rbp-40h] BYREF

  v5 = (__int64 **)a2;
  v6 = *(_DWORD *)(a3 + 8) <= 0x3Fu;
  v48 = *(_DWORD *)(a2 + 20);
  if ( v6 )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v35 = *(_QWORD *)(a1 + 160);
    if ( v35 )
      v36 = *(_DWORD *)(v35 - 4);
    else
      v36 = 0;
    if ( v48 )
    {
      v49 = (__int64 **)a2;
      v51 = v48;
      v37 = 0;
      while ( 1 )
      {
        if ( !v35 || (v40 = *(_DWORD *)(v35 - 4), v40 == *(_DWORD *)(v35 - 8)) )
        {
          sub_23A6F0((unsigned int **)(a1 + 160));
          v35 = *(_QWORD *)(a1 + 160);
          v40 = *(_DWORD *)(v35 - 4);
        }
        *(_QWORD *)(v35 + 8LL * v40) = 0;
        *(_DWORD *)(v35 - 4) = v40 + 1;
        v38 = *(_QWORD *)(a1 + 528);
        if ( !v38 || (v39 = *(unsigned int *)(v38 - 4), (_DWORD)v39 == *(_DWORD *)(v38 - 8)) )
        {
          sub_2FD3F0((unsigned int **)(a1 + 528));
          v38 = *(_QWORD *)(a1 + 528);
          v39 = *(unsigned int *)(v38 - 4);
        }
        *(_DWORD *)(v38 + 4 * v39) = v36;
        ++v37;
        ++*(_DWORD *)(v38 - 4);
        if ( v37 == v51 )
          break;
        v35 = *(_QWORD *)(a1 + 160);
      }
      v5 = v49;
    }
    *(_DWORD *)(a1 + 128) += v48;
  }
  v7 = *((_DWORD *)v5 + 18) + *((_DWORD *)v5 + 19) + 1;
  while ( 1 )
  {
    v11 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v11 >= v7 )
      break;
    if ( v11 )
    {
      v12 = *((_DWORD *)v5 + 18);
      if ( v12 < v11 )
        v13 = &v5[v11 - v12 - 1];
      else
        v13 = &v5[v11 - 1];
      v8 = (__int64)v13[2 * *((unsigned int *)v5 + 5) + 10];
    }
    else
    {
      v8 = (__int64)v5[3];
    }
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_E75040(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v14 = *(unsigned int *)(a3 + 12);
  v15 = *(_QWORD *)(a1 + 56);
  v53 = 0;
  v16 = *((_DWORD *)v5 + 18);
  v17 = (__int64 *)(v15 + 8 * v14);
  v18 = *((unsigned int *)v5 + 5);
  v43 = v17;
  v42 = *v17;
  v51 = *((_DWORD *)v5 + 19);
  v52 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v52, v16, (__int64 *)&v5[2 * v18 + 10]);
  v55 = 0;
  v45 = v52;
  v47 = v53;
  v19 = (__int64 *)&v5[2 * *((unsigned int *)v5 + 5) + 10];
  v54 = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v54, v51, v19);
  v44 = v54;
  v46 = v55;
  v20 = v16;
  v41 = v16;
  if ( v16 )
  {
    v16 = 0;
    v33 = v43;
    v49 = (__int64 **)&v43[v20];
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v33[1]) )
      {
        v34 = v33[1];
        v50 = v16 + 1;
        v56[0] = _mm_loadh_ps((const double *)&v45);
        sub_E65C70((__int64 **)v56, v34);
        v16 = v50;
      }
      ++v33;
    }
    while ( v49 != (__int64 **)v33 );
  }
  sub_39BEE0(&v52, v16);
  v21 = v51;
  if ( v51 )
  {
    v51 = 0;
    v30 = &v43[v41];
    v31 = &v43[v41 + v21];
    v49 = (__int64 **)v56;
    do
    {
      if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), v30[1]) )
      {
        v32 = v30[1];
        ++v51;
        v56[0] = _mm_loadh_ps((const double *)&v44);
        sub_E65C70(v49, v32);
      }
      ++v30;
    }
    while ( v30 != v31 );
  }
  sub_39BEE0(&v54, v51);
  sub_E671C0(*(_QWORD **)(a1 + 144), (__int64)v5, v42, v47, v46, (__int64 *)(a1 + 480), (__int64 *)(a1 + 496));
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v22 = *(_QWORD *)(a1 + 480);
  *(_QWORD *)&v56[0] = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  sub_E67160((unsigned int **)(a1 + 56), v56);
  v23 = *(_QWORD *)(a1 + 160);
  if ( v23 )
    *(_DWORD *)(v23 - 4) -= v48;
  v24 = *(_QWORD *)(a1 + 528);
  if ( v24 )
    *(_DWORD *)(v24 - 4) -= v48;
  sub_15844D0(a1);
  v25 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, v5, 0, *(_QWORD *)(a1 + 480));
    v25 = *(_QWORD *)(a1 + 480);
  }
  sub_E65BC0(v25, *(_QWORD *)(a1 + 488));
  v26 = *(_QWORD *)(a1 + 504);
  v27 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_E65BA0(v27, v26);
  *(_QWORD *)(a1 + 496) = 0;
  v28 = *(_QWORD *)(a1 + 40);
  v29 = *(_DWORD *)(v28 - 4);
  *(_DWORD *)(v28 - 4) = v29 - 1;
  if ( *(__int64 ***)(a1 + 480) != v5 && v29 != 1 )
    *(_BYTE *)(v28 + 16LL * (unsigned int)(v29 - 2) + 8) |= 2u;
  sub_2334C0(&v54);
  return sub_2334C0(&v52);
}

