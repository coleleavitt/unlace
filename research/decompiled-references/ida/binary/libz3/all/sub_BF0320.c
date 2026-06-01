__int64 __fastcall sub_BF0320(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  void *v5; // rdi
  char v6; // al
  bool v7; // r13
  void *v8; // r13
  __int64 v9; // rsi
  void *v10; // rdi
  bool v11; // zf
  void *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned int **v18; // r8
  __int64 v19; // r14
  int v20; // ecx
  __int64 v21; // rax
  unsigned int *v22; // r14
  __int64 v23; // rdi
  __int64 v24; // r15
  unsigned int *v25; // rax
  unsigned int *v26; // r12
  __int64 v27; // rsi
  void *v28; // rdi
  __int64 v29; // rsi
  void *v30; // rdi
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  void *v35; // rbx
  __int64 v36; // rsi
  void *v37; // rdi
  int v38; // eax
  int v39; // [rsp+0h] [rbp-C0h]
  int v41; // [rsp+10h] [rbp-B0h]
  int v43; // [rsp+18h] [rbp-A8h]
  __int64 v44; // [rsp+20h] [rbp-A0h]
  __int64 *v45; // [rsp+30h] [rbp-90h]
  __int64 v46; // [rsp+38h] [rbp-88h]
  __int64 v47; // [rsp+40h] [rbp-80h] BYREF
  void *v48; // [rsp+48h] [rbp-78h]
  __int64 v49; // [rsp+50h] [rbp-70h] BYREF
  void *v50; // [rsp+58h] [rbp-68h]
  _QWORD v51[2]; // [rsp+60h] [rbp-60h] BYREF
  __m128 v52; // [rsp+70h] [rbp-50h] BYREF
  _QWORD v53[8]; // [rsp+80h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a3 + 8);
  v46 = a1;
  if ( !v3 )
    return 0;
  v4 = *(unsigned int *)(v3 - 4);
  if ( !(_DWORD)v4 )
    return 0;
  v44 = v3 + 8 * v4;
  v45 = &v47;
  while ( 1 )
  {
    sub_BB1EF0((__int64)&v47, v46);
    v49 = 0;
    v50 = nullptr;
    v51[0] = 1;
    v51[1] = 0;
    if ( sub_BB1F40(v46, v47, (__int64)&v49) )
    {
      v52 = 0u;
      v53[0] = 1;
      v53[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v53);
      BYTE4(v53[0]) &= ~1u;
      v5 = qword_1C7F2C0;
      LODWORD(v53[0]) = 1;
      if ( (v51[0] & 0x100000000LL) == 0 && LODWORD(v51[0]) == 1 )
      {
        if ( (v52.m128_i8[4] & 1) != 0 || (v49 & 0x100000000LL) != 0 )
        {
          v38 = sub_182C7B0(qword_1C7F2C0, &v52, &v49);
          v5 = qword_1C7F2C0;
          v7 = v38 < 0;
        }
        else
        {
          v7 = v52.m128_i32[0] < (int)v49;
        }
      }
      else
      {
        v6 = sub_1848D40(qword_1C7F2C0, &v52, &v49);
        v5 = qword_1C7F2C0;
        v7 = v6;
      }
      v43 = (int)v5;
      sub_182CBA0(v5, &v52);
      sub_182CBA0(v5, v53);
      if ( v7 )
        break;
    }
    v8 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v49);
    sub_182CBA0(v8, v51);
    v9 = v47;
    if ( v47 )
    {
      v10 = v48;
      v11 = (*(_DWORD *)(v47 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v10, v9);
    }
    v3 += 8;
    if ( v44 == v3 )
    {
      v12 = *(void **)(v46 + 24);
      v13 = *(unsigned int *)(*(_QWORD *)(v46 + 336) + 4LL * a2);
      v47 = 0;
      v49 = 0;
      v48 = v12;
      v14 = 7 * v13;
      v15 = *(_QWORD *)(v46 + 320);
      v50 = v12;
      v16 = v15 + 8 * v14;
      v17 = sub_15D1F10(**(_QWORD **)(a3 + 8));
      v18 = *(unsigned int ***)(a3 + 8);
      v19 = *(_QWORD *)(v46 + 1736);
      if ( v18 && (v20 = *((_DWORD *)v18 - 1)) != 0 )
      {
        if ( v20 != 1 )
        {
          v21 = sub_15E1AF0(*(_QWORD *)(v46 + 1736));
          goto LABEL_17;
        }
        v22 = *v18;
      }
      else
      {
        v32 = sub_15D2D60(v19, *(_DWORD *)(v46 + 1744), 1, 0, 0, 0, 0, v17);
        v21 = sub_15DC610(v19, v32, 0, 0, v33, v34, v39, a3, v41, v43, v44, (char)v53, (int)&v47, v46, v47, v48);
LABEL_17:
        v22 = (unsigned int *)v21;
      }
      if ( v22 )
        ++v22[2];
      sub_14078B0(v46 + 1848, v22, v45, &v49);
      v23 = *(_QWORD *)(v46 + 1736);
      v24 = *(_QWORD *)(v46 + 24);
      v52 = _mm_loadh_ps((const double *)&v49);
      v25 = (unsigned int *)sub_15E1AF0(v23);
      v26 = v25;
      if ( v25 )
        ++v25[2];
      sub_BC5010(v46, *(_DWORD **)(v16 + 48), (int **)(v16 + 40), v22, v25, 1);
      if ( v26 )
      {
        v11 = v26[2]-- == 1;
        if ( v11 )
          sub_15D7BC0(v24, v26);
      }
      v27 = v49;
      if ( v49 )
      {
        v28 = v50;
        v11 = (*(_DWORD *)(v49 + 8))-- == 1;
        if ( v11 )
          sub_15D7BC0(v28, v27);
      }
      v29 = v47;
      if ( v47 )
      {
        v30 = v48;
        v11 = (*(_DWORD *)(v47 + 8))-- == 1;
        if ( v11 )
          sub_15D7BC0(v30, v29);
      }
      if ( v22 )
      {
        v11 = v22[2]-- == 1;
        if ( v11 )
          sub_15D7BC0(v12, v22);
      }
      return 1;
    }
  }
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v49);
  sub_182CBA0(v35, v51);
  v36 = v47;
  if ( v47 )
  {
    v37 = v48;
    v11 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v37, v36);
  }
  return 1;
}

