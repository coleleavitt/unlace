unsigned __int64 __fastcall sub_3F9D00(__int64 a1, unsigned __int8 *a2, int a3, char a4, char a5, double a6)
{
  unsigned __int8 v6; // r15
  __int64 v9; // r12
  _DWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, int); // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  unsigned int v21; // r14d
  __int64 (__fastcall *v22)(__int64, int); // rcx
  int v23; // r14d
  __int64 v24; // [rsp-10h] [rbp-58h]
  __int64 v25; // [rsp+0h] [rbp-48h]
  __int64 (__fastcall *v26)(__int64, int); // [rsp+0h] [rbp-48h]
  _DWORD *v27; // [rsp+8h] [rbp-40h]

  v6 = 7;
  v9 = a3;
  v12 = *(_DWORD **)(a1 + 832);
  if ( v12[21] != 8 )
    v6 = 2;
  v13 = *(_DWORD *)(a1 + 52);
  if ( (v13 & 0x800000) != 0
    && (unsigned __int8)(a2[5] - 16) <= 1u
    && (*(_QWORD *)a2 & 0xFFFF00000000FF00LL) == 0xA2000000000300LL )
  {
    v21 = a2[32];
    v22 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 168LL);
    if ( v21 == 147 && (a2[1] != 3 || a2[33] || *((_QWORD *)a2 + 1) || (v13 & 0xB0) != 0) )
    {
      v27 = *(_DWORD **)(a1 + 832);
      v26 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 168LL);
      sub_3F5420(a1, a6);
      v12 = v27;
      v22 = v26;
    }
    if ( v22 == sub_3EA010 )
      v23 = sub_3EA010((__int64)v12, v21);
    else
      v23 = v22((__int64)v12, v21);
    sub_3F56D0(a1, 3u, v6, *((_QWORD *)a2 + 1), 0x3BEA45E214ADDC55LL, v9, *a2);
    return sub_3F6E70(a1, 0xCu, v6, v23, v9, v9, a6, 0, a5);
  }
  else
  {
    sub_3F89A0(a1, *((unsigned __int16 *)a2 + 3));
    v14 = *(_QWORD *)(a1 + 832);
    v15 = *((unsigned __int16 *)a2 + 3);
    v16 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v14 + 168LL);
    if ( v16 == sub_3EA010 )
      v17 = sub_3EA010(v14, v15);
    else
      v17 = v16(v14, v15);
    if ( a4 )
    {
      v25 = v17;
      v18 = sub_3F9C10(a1, (__int64)a2, v9, a6);
      v19 = sub_3F6E70(a1, 0xCu, v6, v25, v18, (int)v9, a6, 0, a5);
      return sub_3F5110(a1, v19, *a2);
    }
    else
    {
      sub_3F6E70(a1, 4u, v6, v17, 0x3BEA45E214ADDC55LL, (int)v9, a6, 0, a5);
      return v24;
    }
  }
}
