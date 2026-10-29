__int64 __fastcall Z3_mk_fpa_numeral_int_uint(__int64 a1, unsigned __int8 a2, int a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // r14
  char v8; // al
  _DWORD *v9; // rax
  int v10; // edx
  __int64 result; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int v17; // [rsp+14h] [rbp-7Ch]
  __int64 v18; // [rsp+20h] [rbp-70h]
  __int64 v19; // [rsp+20h] [rbp-70h]
  char v20; // [rsp+28h] [rbp-68h]
  __int64 v21; // [rsp+30h] [rbp-60h]
  _BYTE v22[8]; // [rsp+38h] [rbp-58h] BYREF
  _BYTE v23[80]; // [rsp+40h] [rbp-50h] BYREF

  v6 = a4;
  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v20 = v8;
  if ( v8 )
    sub_2A1000(a1, a2, a3, a4);
  v9 = *(_DWORD **)(a5 + 24);
  v10 = *(_DWORD *)(a1 + 384);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( v9 && *v9 == v10 && !v9[1] )
  {
    v21 = *(_QWORD *)(a1 + 376) + 24LL;
    sub_181A6B0(v22);
    v18 = *(_QWORD *)(a1 + 376) + 24LL;
    v17 = sub_15C5560(a1 + 368, a5);
    v16 = sub_15C5540((int)a1 + 368, a5, v12, v13, v14, v15);
    sub_181AE50(v18, (unsigned int)v22, v16, v17, a2, a3, v6);
    v19 = sub_15CC210(*(_QWORD *)(a1 + 376), v22);
    sub_251FD0(a1, v19);
    if ( !v20 )
    {
      sub_182EF00(*(_QWORD *)(v21 + 728), v23);
      return v19;
    }
    sub_2BB620(v19);
    sub_182EF00(*(_QWORD *)(v21 + 728), v23);
    result = v19;
    goto LABEL_11;
  }
  sub_24EA30(a1, 3u, "fp sort expected");
  result = 0;
  if ( v20 )
  {
    sub_2BB620(0);
    result = 0;
LABEL_11:
    byte_1C7EBA0 = 1;
  }
  return result;
}

