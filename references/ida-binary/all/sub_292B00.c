__int64 __fastcall drawable_graph_t::assign_edge_ports(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int v6; // r12d
  int v7; // ebp
  int v8; // ebx
  __int64 v9; // rdi
  __int64 (*v10)(void); // rdx
  __int64 (*v11)(void); // rax
  int v12; // eax
  _DWORD *v13; // rcx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, unsigned int); // rdx
  __int64 (*v16)(void); // rax
  int v17; // eax
  _DWORD *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r10
  _BOOL4 v26; // r10d
  __int64 v27; // r11
  __int64 v28; // rdx
  __int64 v29; // rsi
  _BOOL4 v30; // r15d
  _QWORD *v31; // rdi
  __int64 (__fastcall *v32)(__int64, int); // rax
  int v33; // esi
  int v34; // eax
  int v35; // esi
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  _QWORD *v39; // rdi
  __int64 (__fastcall *v40)(__int64, int); // rax
  int v41; // esi
  int v42; // esi
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  __int64 v47; // rax
  int v48; // eax
  int v49; // eax
  __int64 v50; // rax
  _DWORD *v51; // [rsp+0h] [rbp-58h]
  _DWORD *v52; // [rsp+0h] [rbp-58h]
  _DWORD *v53; // [rsp+0h] [rbp-58h]
  _DWORD *v54; // [rsp+8h] [rbp-50h]
  __int64 v55; // [rsp+8h] [rbp-50h]
  _DWORD *v56; // [rsp+8h] [rbp-50h]
  _BOOL4 v57; // [rsp+10h] [rbp-48h]
  __int64 v58; // [rsp+10h] [rbp-48h]
  __int64 v59; // [rsp+18h] [rbp-40h]

  v4 = a2 >> 32;
  v6 = a2;
  v7 = HIDWORD(a2);
  v8 = a2;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 152LL);
  if ( (char *)v10 == (char *)interactive_graph_t__::vfunc_19 )
  {
    v11 = *(__int64 (**)(void))(*(_QWORD *)v9 + 56LL);
    if ( (char *)v11 == (char *)interactive_graph_t__::vfunc_7 )
    {
      v12 = *(_DWORD *)(v9 + 184);
    }
    else
    {
      v12 = v11();
      v4 = a2 >> 32;
    }
    if ( (int)a2 >= v12 )
      sub_16B930((__int64)"nrect(%d) failed", (unsigned int)a2);
    v13 = (_DWORD *)(*(_QWORD *)(v9 + 224) + 16LL * (int)a2);
  }
  else
  {
    v47 = v10();
    v4 = a2 >> 32;
    v13 = (_DWORD *)v47;
  }
  v14 = *(_QWORD *)(a1 + 16);
  v15 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v14 + 152LL);
  if ( v15 == interactive_graph_t__::vfunc_19 )
  {
    v16 = *(__int64 (**)(void))(*(_QWORD *)v14 + 56LL);
    if ( (char *)v16 == (char *)interactive_graph_t__::vfunc_7 )
    {
      v17 = *(_DWORD *)(v14 + 184);
    }
    else
    {
      v58 = v4;
      v56 = v13;
      v17 = v16();
      v4 = v58;
      v13 = v56;
    }
    if ( (int)v4 >= v17 )
      sub_16B930((__int64)"nrect(%d) failed", HIDWORD(a2));
    v18 = (_DWORD *)(*(_QWORD *)(v14 + 224) + 16 * v4);
  }
  else
  {
    v55 = v4;
    v53 = v13;
    v50 = v15(v14, HIDWORD(a2));
    v4 = v55;
    v13 = v53;
    v18 = (_DWORD *)v50;
  }
  v19 = *(_QWORD *)(a1 + 24);
  v20 = v19 + 8;
  v21 = *(_QWORD *)(v19 + 16);
  if ( v21 )
  {
    v22 = v20;
    v23 = v21;
    do
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(v23 + 16);
        v25 = *(_QWORD *)(v23 + 24);
        if ( v6 <= *(_DWORD *)(v23 + 32) )
          break;
        v23 = *(_QWORD *)(v23 + 24);
        if ( !v25 )
          goto LABEL_16;
      }
      v22 = v23;
      v23 = *(_QWORD *)(v23 + 16);
    }
    while ( v24 );
LABEL_16:
    v26 = 0;
    if ( v22 != v20 )
      v26 = v8 >= *(_DWORD *)(v22 + 32);
    v27 = v20;
    do
    {
      while ( 1 )
      {
        v28 = *(_QWORD *)(v21 + 16);
        v29 = *(_QWORD *)(v21 + 24);
        if ( v7 <= *(_DWORD *)(v21 + 32) )
          break;
        v21 = *(_QWORD *)(v21 + 24);
        if ( !v29 )
          goto LABEL_22;
      }
      v27 = v21;
      v21 = *(_QWORD *)(v21 + 16);
    }
    while ( v28 );
LABEL_22:
    v30 = 0;
    if ( v20 != v27 )
      v30 = (int)v4 >= *(_DWORD *)(v27 + 32);
  }
  else
  {
    v30 = 0;
    v26 = 0;
  }
  v31 = *(_QWORD **)(a1 + 16);
  v32 = *(__int64 (__fastcall **)(__int64, int))(*v31 + 96LL);
  if ( v32 == interactive_graph_t__::vfunc_12 )
  {
    v33 = *(_DWORD *)(v31[22] + 24LL * v8 + 8);
  }
  else
  {
    v59 = v4;
    v57 = v26;
    v54 = v18;
    v52 = v13;
    v49 = v32((__int64)v31, v6);
    v4 = v59;
    v26 = v57;
    v18 = v54;
    v13 = v52;
    v33 = v49;
  }
  v34 = v13[2] - *v13;
  v35 = v26 + v33;
  v36 = v34 / 2;
  v37 = (v34 - 4) / (v35 + 1);
  if ( v37 > 8 )
  {
    if ( v37 > 20 )
      v37 = 20;
    v38 = v36 - v37 * (v35 / 2);
    if ( (v35 & 1) == 0 )
      v38 += v37 >> 1;
    v36 = v37 * (*(_DWORD *)(a3 + 8) + v26) + v38;
  }
  *(_DWORD *)(a3 + 8) = v36;
  v39 = *(_QWORD **)(a1 + 16);
  v40 = *(__int64 (__fastcall **)(__int64, int))(*v39 + 104LL);
  if ( v40 == interactive_graph_t__::vfunc_13 )
  {
    v41 = *(_DWORD *)(v39[25] + 24 * v4 + 8);
  }
  else
  {
    v51 = v18;
    v48 = v40((__int64)v39, v7);
    v18 = v51;
    v41 = v48;
  }
  v42 = v30 + v41;
  v43 = (v18[2] - *v18) / 2;
  v44 = (v18[2] - *v18 - 4) / (v42 + 1);
  if ( v44 > 8 )
  {
    if ( v44 > 20 )
      v44 = 20;
    v45 = v43 - v44 * (v42 / 2);
    if ( (v42 & 1) == 0 )
      v45 += v44 >> 1;
    v43 = v44 * (*(_DWORD *)(a3 + 12) + v30) + v45;
  }
  *(_DWORD *)(a3 + 12) = v43;
  return 0;
}
