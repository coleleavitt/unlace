void __fastcall sub_3EC9C0(__int64 a1, __int64 a2, int a3, int a4, int a5, double a6)
{
  __int64 v6; // r14
  int v9; // ebx
  __int16 v10; // cx
  unsigned __int16 v11; // cx
  __int64 v12; // rax
  int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // r13d
  int v17; // ecx
  __int64 v18; // r13
  __int64 v19; // r15
  int v20; // edx
  unsigned int v21; // r11d
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // r15d
  int v27; // ecx
  __int64 v28; // [rsp+0h] [rbp-78h]
  _DWORD *v29; // [rsp+18h] [rbp-60h]
  unsigned int v30; // [rsp+24h] [rbp-54h]
  unsigned int v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  int v33; // [rsp+38h] [rbp-40h]

  v6 = a1;
  v9 = a3;
  v10 = *(_WORD *)(a1 + 48);
  v29 = (_DWORD *)a2;
  if ( v10 == 48 )
  {
    v12 = *(_QWORD *)(a1 + 832);
    v30 = 18;
    v13 = 16;
    if ( **(_DWORD **)(v12 + 528) != a3 )
      goto LABEL_7;
    goto LABEL_15;
  }
  v11 = v10 - 88;
  if ( v11 > 0x17u )
    goto LABEL_24;
  if ( ((1LL << v11) & 0x400005) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 832);
    v30 = 18;
    v13 = 16;
    v14 = **(int **)(v12 + 528);
    if ( a3 != (_DWORD)v14 )
      goto LABEL_6;
LABEL_15:
    v18 = a3;
    a2 = 33;
    sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), a3, a3, 3, 0);
    goto LABEL_16;
  }
  if ( ((1LL << v11) & 0x80000A) == 0 )
  {
LABEL_24:
    if ( !under_debugger )
      sub_37CFE0(0xCEF2u, a2, a6);
    BUG();
  }
  v12 = *(_QWORD *)(a1 + 832);
  v30 = 17;
  v13 = 15;
  v14 = **(int **)(v12 + 528);
  if ( a3 == (_DWORD)v14 )
  {
    v18 = a3;
    sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), a3, a3, 3, 0);
LABEL_10:
    v19 = a4;
    v20 = *(unsigned __int16 *)(v6 + 842);
    v21 = 15;
    if ( *(_WORD *)(v6 + 48) != 48 )
      goto LABEL_11;
LABEL_19:
    sub_3E8420(v6, v21, v20, v19, v18, v19, 0);
    goto LABEL_13;
  }
LABEL_6:
  if ( v11 <= 1u )
  {
LABEL_7:
    v15 = *(_QWORD *)(v12 + 584);
    if ( !v15 )
      goto LABEL_26;
    v16 = *(_DWORD *)(*(_QWORD *)(v12 + 576) + 4 * v15 - 4);
    v17 = v9;
    *(_QWORD *)(v12 + 584) = v15 - 1;
    v9 = v16;
    sub_3EC660(a1, 2, *(unsigned __int16 *)(a1 + 842), v17, v16, v13 == 16, a6);
    v14 = **(int **)(*(_QWORD *)(a1 + 832) + 528LL);
  }
  v18 = v9;
  a2 = 33;
  sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), v9, v14, 3, 0);
  a1 = v28;
  if ( v13 != 16 )
    goto LABEL_10;
LABEL_16:
  v22 = *(_QWORD *)(v6 + 832);
  v23 = *(_QWORD *)(v22 + 584);
  if ( !v23
    || (a2 = *(unsigned int *)(*(_QWORD *)(v22 + 576) + 4 * v23 - 4),
        *(_QWORD *)(v22 + 584) = v23 - 1,
        v24 = *(_QWORD *)(v6 + 832),
        (v25 = *(_QWORD *)(v24 + 584)) == 0) )
  {
LABEL_26:
    sub_3E4140(a6, a1, a2);
  }
  v26 = *(_DWORD *)(*(_QWORD *)(v24 + 576) + 4 * v25 - 4);
  *(_QWORD *)(v24 + 584) = v25 - 1;
  sub_3EC020(v6, -1, 0, v26, *(unsigned __int16 *)(v6 + 842));
  v32 = v26;
  sub_3E8420(v6, 0x21u, *(unsigned __int16 *)(v6 + 842), v18, v26, (int)a2, 0);
  v33 = v26;
  v27 = v26;
  v19 = a4;
  sub_3EC020(v6, 1LL << (8 * (unsigned __int8)*(_WORD *)(v6 + 842) - 1), 1, v27, *(unsigned __int16 *)(v6 + 842));
  sub_3E8420(v6, 0x21u, *(unsigned __int16 *)(v6 + 842), a4, v32, v32, 0);
  sub_3E8420(v6, 0x14u, 1, (int)a2, v32, (int)a2, 0);
  sub_3E8420(v6, 0x13u, 1, 3, (int)a2, 3, 0);
  sub_3E62F0(*(_QWORD *)(v6 + 832), a2);
  sub_3E62F0(*(_QWORD *)(v6 + 832), v33);
  v20 = *(unsigned __int16 *)(v6 + 842);
  v21 = 16;
  if ( *(_WORD *)(v6 + 48) == 48 )
    goto LABEL_19;
LABEL_11:
  if ( a4 == a5 )
  {
    sub_3E8420(v6, v30, v20, v19, v18, a5, 0);
    sub_3E8420(v6, 0x3Du, 1, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 1, 0);
    sub_3E8420(v6, 0x3Du, 1, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 2, 0);
    a4 = -1;
  }
  else
  {
    v31 = v21;
    sub_3E8420(v6, v30, v20, v19, v18, a5, 0);
    sub_3E8420(v6, v31, *(unsigned __int16 *)(v6 + 842), v19, v18, v19, 0);
  }
LABEL_13:
  *v29 = a4;
  sub_3E62F0(*(_QWORD *)(v6 + 832), v9);
}
