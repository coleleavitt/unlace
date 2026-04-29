__int64 __fastcall sub_3E86B0(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v8; // rdi
  int v9; // r13d
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(_DWORD *, unsigned int); // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r10
  int v15; // r15d
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // [rsp+18h] [rbp-40h]
  int v20; // [rsp+18h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 105) != 5 || *(_BYTE *)(a1 + 145) != 5 || *(_BYTE *)(a1 + 185) != 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCE32u, a2, a4);
LABEL_28:
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 112);
  v6 = *(_QWORD *)(a1 + 152);
  if ( (int)v5 < 0 || (int)v6 + (int)v5 > 8 * *(unsigned __int16 *)(a1 + 842) )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEE6u, a2, a4);
    goto LABEL_28;
  }
  if ( (int)v6 <= 0 )
    return 0;
  v8 = *(_QWORD *)(a1 + 832);
  v9 = a2;
  v10 = *(unsigned __int16 *)(a1 + 190);
  v11 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v8 + 168LL);
  if ( v11 == sub_3E40F0 )
  {
    if ( (unsigned __int16)v10 <= 0x1Fu )
    {
      v10 = (unsigned int)(*(_DWORD *)(v8 + 352) + *(_DWORD *)(v8 + 80) * v10);
      v12 = (int)v10;
    }
    else if ( (_DWORD)v10 == 48 )
    {
      v12 = *(int *)(v8 + 480);
    }
    else if ( (_DWORD)v10 == 49 )
    {
      v12 = *(int *)(v8 + 484);
    }
    else
    {
      v12 = -1;
    }
  }
  else
  {
    v20 = v6;
    v18 = v11((_DWORD *)v8, v10);
    v8 = *(_QWORD *)(a1 + 832);
    LODWORD(v6) = v20;
    v12 = v18;
  }
  v13 = *(_QWORD *)(v8 + 584);
  if ( !v13 )
    sub_3E4140(a4, v8, v10);
  v14 = -1;
  v15 = *(_DWORD *)(*(_QWORD *)(v8 + 576) + 4 * v13 - 4);
  *(_QWORD *)(v8 + 584) = v13 - 1;
  if ( (unsigned __int64)(int)v6 <= 0x3F )
    v14 = (1LL << v6) - 1;
  v19 = v14;
  v16 = ~(v14 << v5);
  if ( (unsigned __int64)(int)v5 >= 0x40 )
    v16 = -1;
  sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), v16, 0x3BEA45E214ADDC55LL, v15, 2);
  sub_3E8420(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), v12, v15, v12, 0);
  sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), v19, 0x3BEA45E214ADDC55LL, v15, 2);
  sub_3E8420(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), v9, v15, v15, 0);
  sub_3E8420(a1, 0x16u, *(unsigned __int16 *)(a1 + 842), v15, a3, v15, 0);
  sub_3E8420(a1, 0x13u, *(unsigned __int16 *)(a1 + 842), v12, v15, v12, 0);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v15);
  return 1;
}
