/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140035520
// Address: 0x0000000140035520

//----- (0000000140035520) ----------------------------------------------------
__int64 __fastcall sub_140035520(char *a1, void **a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 *v7; // rax
  unsigned __int8 v8; // bp
  _QWORD *v9; // rsi
  _QWORD *v10; // rdx
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v7 = off_1400C6AE8();
  sub_14003DA80(v7, nullptr, 0);
  v8 = 0;
  v9 = sub_14002DA30();
  if ( (unsigned int)sub_14003E7D0(v9[4], a1) )
  {
    sub_140033C70(v9[4], -1, 0, a2);
  }
  else
  {
    v12[0] = &off_140094B80;
    v12[1] = -1;
    v10 = v12;
    if ( (a3 & 2) == 0 )
      v10 = nullptr;
    v8 = sub_140032D80((__int64)v9, (__int64)v10, a2, (a3 & 4) == 0);
  }
  sub_14003ED30(v9[4], a3 & 1);
  sub_14005D6D0(v6);
  return v8;
}
// 140094B80: using guessed type _UNKNOWN *off_140094B80;
// 1400C6AE8: using guessed type __int64 *(*off_1400C6AE8)();
