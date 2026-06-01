__int64 __fastcall sub_5A1E52(__int64 a1, __int64 *a2, char a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // r12d
  __int64 v10; // r13
  __int64 v11; // r12
  int v12; // eax
  int v13; // r12d
  unsigned int v14; // eax
  _BYTE v20[76]; // [rsp+30h] [rbp-2E0h] BYREF
  int v21; // [rsp+7Ch] [rbp-294h] BYREF
  _BYTE v22[24]; // [rsp+80h] [rbp-290h] BYREF
  _BYTE v23[4]; // [rsp+98h] [rbp-278h] BYREF
  int v24; // [rsp+9Ch] [rbp-274h]
  _BYTE v25[4]; // [rsp+A0h] [rbp-270h] BYREF
  unsigned int v26; // [rsp+A4h] [rbp-26Ch]
  unsigned __int16 v27; // [rsp+A8h] [rbp-268h]
  unsigned __int16 v28; // [rsp+AAh] [rbp-266h]
  char v29; // [rsp+ACh] [rbp-264h]
  char v30; // [rsp+ADh] [rbp-263h]
  char v31; // [rsp+AEh] [rbp-262h]
  char v32; // [rsp+AFh] [rbp-261h]
  char v33; // [rsp+B0h] [rbp-260h]
  char v34; // [rsp+B1h] [rbp-25Fh]
  char v35; // [rsp+B2h] [rbp-25Eh]
  char v36; // [rsp+B3h] [rbp-25Dh]
  unsigned int v37; // [rsp+B4h] [rbp-25Ch]
  char v38[256]; // [rsp+C0h] [rbp-250h] BYREF
  char s[264]; // [rsp+1C0h] [rbp-150h] BYREF
  __int64 v40; // [rsp+2C8h] [rbp-48h] BYREF
  __int64 v41; // [rsp+2D0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+2D8h] [rbp-38h]
  size_t v43; // [rsp+2E0h] [rbp-30h]
  int v44; // [rsp+2ECh] [rbp-24h]

  sub_5ADF07(a5, 0, 108);
  *(_QWORD *)a5 = *a2;
  *(_DWORD *)(a5 + 8) = a2[1];
  sub_59A94A(*(_QWORD *)(a1 + 32), (__int64)a2, (__int64)v38, 0xFFu, (__int64)s, 255);
  v44 = sub_5A7664(v38, v25);
  if ( !v44 )
  {
    v7 = sub_59837C(*(_QWORD *)(a1 + 32));
    sub_5984EC((__int64)v20, v7);
    if ( a6 )
    {
      v41 = sub_5985B0((__int64)v20);
      sub_5985DA(&v40, (__int64)&v41);
      sub_598604((__int64)v20, v40, a6, a6 + 16);
    }
    else
    {
      sub_59A1CA(*(_QWORD *)(a1 + 32), a2, a3, a4, (__int64)v20);
      sub_59A94A(*(_QWORD *)(a1 + 32), (__int64)a2, (__int64)v38, 0xFFu, (__int64)s, 255);
    }
    if ( (unsigned __int8)sub_5A4ADC(v20) != 1 )
    {
      sub_5A4100(v22, a1 + 40);
      v8 = sub_5986CE((__int64)v20);
      if ( (unsigned __int8)sub_5A8344(v22, v8 + 4) != 1 )
      {
        v6 = 0;
        v9 = 0;
        goto LABEL_10;
      }
      v21 = 1114654028;
      sub_5A4176(v22, &v21, 4);
      v10 = sub_5986CE((__int64)v20);
      v11 = sub_5986B0((__int64)v20, 0);
      v12 = sub_5A4140(v22);
      sub_5A83BE(v22, (unsigned int)(v12 + 4), v11, v10);
      *(_QWORD *)(a5 + 76) = sub_5A4152(v22);
    }
    v9 = 1;
LABEL_10:
    sub_5983F8((__int64)v20);
    if ( v9 != 1 )
      return v6;
    goto LABEL_21;
  }
  v43 = strlen(s);
  sub_5A4B1E(v20, a1 + 40);
  if ( (unsigned __int8)sub_5A4B9A(v20, v43 + 1, 1) != 1 )
  {
    v6 = 0;
    v13 = 0;
  }
  else if ( (unsigned __int8)sub_5A4C12(v20, 0, s, v43) != 1 )
  {
    v6 = 0;
    v13 = 0;
  }
  else
  {
    v42 = sub_5A4C9E(v20);
    *(_DWORD *)v42 = 1396986706;
    if ( v44 == 2 )
    {
      *(_DWORD *)(v42 + 4) = _byteswap_ulong(v26);
      *(_WORD *)(v42 + 8) = _byteswap_ushort(v27);
      *(_WORD *)(v42 + 10) = _byteswap_ushort(v28);
      *(_BYTE *)(v42 + 12) = v29;
      *(_BYTE *)(v42 + 13) = v30;
      *(_BYTE *)(v42 + 14) = v31;
      *(_BYTE *)(v42 + 15) = v32;
      *(_BYTE *)(v42 + 16) = v33;
      *(_BYTE *)(v42 + 17) = v34;
      *(_BYTE *)(v42 + 18) = v35;
      *(_BYTE *)(v42 + 19) = v36;
      *(_DWORD *)(v42 + 20) = _byteswap_ulong(v37);
    }
    else
    {
      *(_DWORD *)(v42 + 20) = 0;
    }
    *(_QWORD *)(a5 + 76) = sub_5A4152(v20);
    v13 = 1;
  }
  sub_5A4B72(v20);
  if ( v13 == 1 )
  {
LABEL_21:
    v14 = sub_5ADA92(v38);
    if ( (unsigned __int8)sub_5A7FEE(a1 + 40, v38, v14, v23) != 1 )
    {
      return 0;
    }
    else
    {
      *(_DWORD *)(a5 + 20) = v24;
      return 1;
    }
  }
  return v6;
}
