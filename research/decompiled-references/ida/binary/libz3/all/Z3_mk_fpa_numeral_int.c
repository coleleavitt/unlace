__int64 __fastcall Z3_mk_fpa_numeral_int(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // bp
  _DWORD *v5; // rax
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // r15
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // [rsp+0h] [rbp-78h]
  __int64 v15; // [rsp+0h] [rbp-78h]
  __int64 v16; // [rsp+10h] [rbp-68h]
  _BYTE v17[8]; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v18[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_2A0F60();
  v5 = *(_DWORD **)(a3 + 24);
  v6 = *(_DWORD *)(a1 + 384);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( v5 && *v5 == v6 && !v5[1] )
  {
    v16 = *(_QWORD *)(a1 + 376) + 24LL;
    sub_181A6B0(v17);
    v8 = *(_QWORD *)(a1 + 376) + 24LL;
    v14 = sub_15C5560(a1 + 368, a3);
    v13 = sub_15C5540((int)a1 + 368, a3, v9, v10, v11, v12);
    sub_181AAB0(v8, v17, v13, v14, a2);
    v15 = sub_15CC210(*(_QWORD *)(a1 + 376), v17);
    sub_251FD0(a1, v15);
    if ( !v4 )
    {
      sub_182EF00(*(_QWORD *)(v16 + 728), v18);
      return v15;
    }
    sub_2BB620(v15);
    sub_182EF00(*(_QWORD *)(v16 + 728), v18);
    result = v15;
    goto LABEL_11;
  }
  sub_24EA30(a1, 3u, "fp sort expected");
  result = 0;
  if ( v4 )
  {
    sub_2BB620(0);
    result = 0;
LABEL_11:
    byte_1C7EBA0 = 1;
  }
  return result;
}

