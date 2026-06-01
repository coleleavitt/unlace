/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008E860
// Address: 0x000000014008E860

//----- (000000014008E860) ----------------------------------------------------
__int64 __fastcall sub_14008E860(__int64 a1, _QWORD *a2)
{
  sub_140002FB0(
    (__int64)(a2 + 14),
    "Internal error %d occurred when running a script. Either\n"
    "  - the script misused the IDA API, or\n"
    "  - there is a logic error in IDA\n"
    "Please check the script first.\n"
    "If it appears correct, send a bug report to <support@hex-rays.com>.\n"
    "In any case we strongly recommend you to restart IDA as soon as possible.",
    *(_DWORD *)(a2[17] + 24LL));
  a2[5] = a2[14];
  return 0;
}
