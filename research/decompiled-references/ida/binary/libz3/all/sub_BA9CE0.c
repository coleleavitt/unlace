__int64 __fastcall sub_BA9CE0(__int64 a1, unsigned int a2, __int64 a3, __m128 a4, __m128 a5, __m128 a6)
{
  _QWORD *v6; // rax
  unsigned int *v8; // r15
  unsigned int *v9; // rax
  _QWORD *v10; // r13
  unsigned int *v11; // rax
  _QWORD *v12; // r12
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned int v23; // r15d
  unsigned int v24; // r12d
  unsigned int *v25; // rsi
  __int64 result; // rax
  __int64 v27; // rdi
  bool v28; // zf
  unsigned int *v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // [rsp-10h] [rbp-70h]
  __int64 v32; // [rsp+8h] [rbp-58h]
  unsigned int *v33; // [rsp+10h] [rbp-50h] BYREF
  __int64 v34; // [rsp+18h] [rbp-48h]
  unsigned int *v35; // [rsp+20h] [rbp-40h] BYREF
  __int64 v36; // [rsp+28h] [rbp-38h]

  if ( *(_WORD *)(a3 + 4)
    || (v6 = *(_QWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr
    || *v6 != (*(unsigned int *)(*(_QWORD *)(a1 + 72) + 16LL) | 0x500000000LL)
    || *(_DWORD *)(a3 + 24) != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 166);
  }
  v8 = *(unsigned int **)(a3 + 32);
  v9 = (unsigned int *)sub_163B390(a1 + 56, 48);
  v10 = sub_966570(a1, v9);
  v11 = (unsigned int *)sub_163B390(a1 + 56, 57);
  v12 = sub_966570(a1, v11);
  LODWORD(v8) = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v8), *(_DWORD *)(a1 + 8));
  v13 = (unsigned int)sub_B39350((__int64)v10, *(_DWORD *)(a1 + 8));
  v14 = (unsigned int)sub_B39350((__int64)v12, *(_DWORD *)(a1 + 8));
  sub_BA8A20((_QWORD *)a1, (unsigned int)v8, a4, a5, a6);
  sub_BA8A20((_QWORD *)a1, v13, a4, a5, a6);
  sub_BA8A20((_QWORD *)a1, v14, a4, a5, a6);
  sub_BA8A20((_QWORD *)a1, (unsigned int)v8, a4, a5, a6);
  v32 = *(_QWORD *)(a1 + 200) + 16LL * (unsigned int)v8;
  sub_BA8A20((_QWORD *)a1, v13, a4, a5, a6);
  v15 = *(_QWORD *)(a1 + 200) + 16 * v13;
  sub_BA8A20((_QWORD *)a1, v14, a4, a5, a6);
  v16 = *(_QWORD *)(a1 + 24);
  v33 = nullptr;
  v35 = nullptr;
  v17 = *(_QWORD *)(v15 + 8);
  v34 = v16;
  v18 = *(_QWORD *)(a1 + 200) + 16 * v14;
  v36 = v16;
  v19 = *(_QWORD *)(v32 + 8);
  if ( v19 )
    v20 = *(unsigned int *)(v19 - 4);
  else
    v20 = 0;
  sub_FD8930(a1 + 224, v20, v17, v19, &v33);
  v21 = *(_QWORD *)(v32 + 8);
  if ( v21 )
    v22 = *(unsigned int *)(v21 - 4);
  else
    v22 = 0;
  sub_FD8930(a1 + 224, v22, v21, *(_QWORD *)(v18 + 8), &v35);
  v23 = sub_966440(a1, v33);
  v24 = sub_966440(a1, v35);
  sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), a2 ^ 1, v23, 0, 0);
  sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), a2 ^ 1, v24, 0, 0);
  sub_B6A4A0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v23 ^ 1, v24 ^ 1, a2, 0, 0);
  v25 = v35;
  result = v31;
  if ( v35 )
  {
    v27 = v36;
    v28 = v35[2]-- == 1;
    if ( v28 )
      result = sub_15D7BC0(v27, v25);
  }
  v29 = v33;
  if ( v33 )
  {
    v30 = v34;
    v28 = v33[2]-- == 1;
    if ( v28 )
      return sub_15D7BC0(v30, v29);
  }
  return result;
}

