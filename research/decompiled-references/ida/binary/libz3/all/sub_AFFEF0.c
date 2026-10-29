__int64 __fastcall sub_AFFEF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  _OWORD *v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx
  _OWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r12
  _DWORD *v19; // r14
  __int64 *v21; // r12
  __int64 *v22; // r14
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 *v25; // rax
  int v27; // [rsp+0h] [rbp-C8h]
  __int64 v28; // [rsp+8h] [rbp-C0h]
  __int64 v30; // [rsp+20h] [rbp-A8h] BYREF
  int v31; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+30h] [rbp-98h] BYREF
  __int64 v33; // [rsp+38h] [rbp-90h]
  __int128 v34; // [rsp+40h] [rbp-88h]
  __int64 v35; // [rsp+50h] [rbp-78h]
  _OWORD *v36; // [rsp+58h] [rbp-70h]
  void *v37; // [rsp+60h] [rbp-68h]
  int v38; // [rsp+68h] [rbp-60h]
  __int128 v39; // [rsp+70h] [rbp-58h]
  int v40; // [rsp+80h] [rbp-48h]

  v33 = a2;
  v32 = sub_8E35C0(a1 + 880);
  v4 = v32;
  v35 = 0;
  v34 = 0;
  v5 = (_OWORD *)sub_186B270(0x80u);
  v36 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v37 = &byte_8;
  v38 = 0;
  v40 = 0;
  v39 = 0;
  if ( a2 != v4 )
  {
    sub_15DA640(v33, v32, v6, v7, v8, v9, v27);
    sub_15D2280(v33, v32);
  }
  v10 = sub_186B270(0x6B0u);
  sub_E1F060(v10, a2);
  *(_QWORD *)v10 = &off_1C71A08;
  *(_QWORD *)(v10 + 72) = off_1C71C10;
  v28 = v10 + 120;
  sub_2527E0(v10 + 120, a3);
  v30 = 0;
  sub_8E4C30(v10 + 880, a2, v10 + 120, &v30);
  sub_18572D0(&v30);
  *(_WORD *)(v10 + 904) = 0;
  *(_DWORD *)(v10 + 908) = -1;
  *(_BYTE *)(v10 + 912) = 0;
  *(_OWORD *)(v10 + 888) = 0;
  v11 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v10 + 920) = v11;
  *(_QWORD *)(v10 + 928) = 8;
  *(_DWORD *)(v10 + 936) = 0;
  *(_QWORD *)(v10 + 944) = 0;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  v30 = 0;
  sub_2527E0(v10 + 952, (__int64)&v30);
  sub_18572D0(&v30);
  v12 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(v10 + 896) = v12;
  if ( v12 )
    sub_8E35E0(v10 + 880, v12);
  sub_E5E9C0(v10, a3);
  sub_15B6B30(v28, v10 + 80);
  sub_8E3AA0((_QWORD *)(v10 + 880));
  v30 = v10 + 80;
  sub_17F9A60(&v31, "smt");
  *(_BYTE *)(v10 + 905) = sub_1859630(v30, "core.extend_patterns", &v31, 0);
  *(_DWORD *)(v10 + 908) = sub_1859980(v30, "core.extend_patterns.max_distance", &v31, 0xFFFFFFFFLL);
  *(_BYTE *)(v10 + 912) = sub_1859630(v30, "core.extend_nonlocal_patterns", &v31, 0);
  sub_18572D0(&v31);
  sub_8E35D0(
    (_QWORD *)(a1 + 880),
    (_QWORD *)(v10 + 880),
    1,
    v13,
    v14,
    v15,
    v27,
    v28,
    a3,
    a1 + 880,
    v30,
    v31,
    v32,
    v33,
    v34,
    *((__int64 *)&v34 + 1),
    v35,
    (__int64)v36,
    v37);
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 56LL))(v16, &v32);
    v18 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v19 = *(_DWORD **)(v10 + 56);
    if ( v19 )
    {
      if ( v19[2]-- == 1 )
      {
        (**(void (__fastcall ***)(_DWORD *))v19)(v19);
        sub_186B220(v19);
      }
    }
    *(_QWORD *)(v10 + 56) = v18;
  }
  v21 = *(__int64 **)(a1 + 920);
  v22 = &v21[2 * *(unsigned int *)(a1 + 928)];
  if ( v21 != v22 )
  {
    while ( (unsigned __int64)*v21 <= 1 )
    {
      v21 += 2;
      if ( v22 == v21 )
        goto LABEL_26;
    }
    if ( v21 != v22 )
    {
      v23 = *v21;
      do
      {
        if ( v32 == v33 )
        {
          v24 = v21[1];
        }
        else
        {
          v23 = sub_15CFF50(&v32, v23);
          v24 = v21[1];
          if ( v32 != v33 )
            v24 = sub_15CFF50(&v32, v21[1]);
        }
        sub_E5EC60(v10, v23, v24);
        v25 = v21 + 2;
        if ( v22 == v21 + 2 )
          break;
        while ( 1 )
        {
          v23 = *v25;
          v21 = v25;
          if ( (unsigned __int64)*v25 > 1 )
            break;
          v25 += 2;
          if ( v22 == v25 )
            goto LABEL_26;
        }
      }
      while ( v22 != v25 );
    }
  }
LABEL_26:
  sub_15CE760(&v32);
  return v10;
}

