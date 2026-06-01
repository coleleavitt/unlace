/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4751B8
// Address: 0x00000000004751B8

//----- (00000000004751B8) ----------------------------------------------------
__int64 __fastcall sub_4751B8(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 (*v13)(); // x4
  __int64 v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 (*v17)(); // x4
  __int64 (*v18)(); // x1
  int v19; // [xsp+44h] [xbp-Ch] BYREF

  if ( a2 == 8 )
  {
    if ( (unsigned int)sub_474F38(a1, &v19, a3) )
      return 0;
    v14 = v19;
    v15 = 0;
    v16 = a1 + 24LL * v19;
    *(_DWORD *)(v16 + 872) = 8;
    *(_QWORD *)(v16 + 880) = a3;
    v12 = *(_QWORD *)a1;
    v17 = *(__int64 (**)())(*(_QWORD *)a1 + 632LL);
    if ( v17 != sub_4071D8 )
    {
      v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))v17)(a1, 8, a3, a4);
      v12 = *(_QWORD *)a1;
    }
    *(_QWORD *)(a1 + 24 * v14 + 888) = v15;
  }
  else
  {
    if ( (unsigned int)sub_475000(a1, &v19, a3) )
      return 0;
    v9 = v19;
    v10 = 0;
    v11 = a1 + 24LL * v19;
    *(_DWORD *)(v11 + 1256) = a2;
    *(_QWORD *)(v11 + 1264) = a3;
    v12 = *(_QWORD *)a1;
    v13 = *(__int64 (**)())(*(_QWORD *)a1 + 640LL);
    if ( v13 != sub_4071E0 )
    {
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))v13)(a1, a2, a3, a4);
      v12 = *(_QWORD *)a1;
    }
    *(_QWORD *)(a1 + 24 * v9 + 1272) = v10;
  }
  v18 = *(__int64 (**)())(v12 + 648);
  if ( v18 != sub_4071E8 )
    return ((unsigned __int8 (__fastcall *)(__int64))v18)(a1);
  return 0;
}
