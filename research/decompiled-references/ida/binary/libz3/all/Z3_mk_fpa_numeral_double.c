__int64 __fastcall Z3_mk_fpa_numeral_double(__int64 a1, __int64 a2, double a3)
{
  char v3; // bp
  _DWORD *v4; // rax
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // r15
  unsigned int v8; // r13d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // eax
  __int64 v14; // [rsp+0h] [rbp-78h]
  __int64 v15; // [rsp+10h] [rbp-68h]
  _BYTE v16[8]; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v17[88]; // [rsp+20h] [rbp-58h] BYREF

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_2A0F10();
  v4 = *(_DWORD **)(a2 + 24);
  v5 = *(_DWORD *)(a1 + 384);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( v4 && *v4 == v5 && !v4[1] )
  {
    v15 = *(_QWORD *)(a1 + 376) + 24LL;
    sub_181A6B0(v16);
    v7 = *(_QWORD *)(a1 + 376) + 24LL;
    v8 = sub_15C5560(a1 + 368, a2);
    v13 = sub_15C5540((int)a1 + 368, a2, v9, v10, v11, v12);
    sub_181ABC0(v7, v16, v13, v8, a3);
    v14 = sub_15CC210(*(_QWORD *)(a1 + 376), v16);
    sub_251FD0(a1, v14);
    if ( !v3 )
    {
      sub_182EF00(*(_QWORD *)(v15 + 728), v17);
      return v14;
    }
    sub_2BB620(v14);
    sub_182EF00(*(_QWORD *)(v15 + 728), v17);
    result = v14;
    goto LABEL_11;
  }
  sub_24EA30(a1, 3u, "fp sort expected");
  result = 0;
  if ( v3 )
  {
    sub_2BB620(0);
    result = 0;
LABEL_11:
    byte_1C7EBA0 = 1;
  }
  return result;
}

