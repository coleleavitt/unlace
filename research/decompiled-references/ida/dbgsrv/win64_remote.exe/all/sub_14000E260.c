/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000E260
// Address: 0x000000014000E260

//----- (000000014000E260) ----------------------------------------------------
__int64 __fastcall sub_14000E260(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  _DWORD v5[64]; // [rsp+20h] [rbp-118h] BYREF

  v2 = sub_140014780(a1, a2, v5);
  v3 = v5[20];
  if ( v2 == -1 )
    return 0;
  return v3;
}
