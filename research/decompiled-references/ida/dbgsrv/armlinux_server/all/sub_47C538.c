/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C538
// Address: 0x000000000047C538

//----- (000000000047C538) ----------------------------------------------------
__int64 __fastcall sub_47C538(_QWORD *a1, int a2, char *a3, _QWORD *a4)
{
  __int64 (__fastcall *v4)(__int64, int); // x6
  __int64 v5; // x5
  __int64 v6; // x0
  __int64 v7; // x1
  char v9; // w0
  char *v10; // [xsp+10h] [xbp-30h]
  _QWORD *v11; // [xsp+18h] [xbp-28h]
  _QWORD v12[4]; // [xsp+20h] [xbp-20h] BYREF

  v4 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 24LL);
  if ( v4 == sub_47C2E8 )
  {
    if ( a2 <= 1 && !*(_BYTE *)(a1[1] + 107LL) )
      return 0;
LABEL_3:
    v5 = a4[1];
    v6 = a4[2];
    v7 = a4[3];
    v12[0] = *a4;
    v12[1] = v5;
    v12[2] = v6;
    v12[3] = v7;
    return sub_47B470(a3, v12);
  }
  v10 = a3;
  v11 = a4;
  v9 = ((__int64 (*)(void))v4)();
  a3 = v10;
  a4 = v11;
  if ( v9 )
    goto LABEL_3;
  return 0;
}
