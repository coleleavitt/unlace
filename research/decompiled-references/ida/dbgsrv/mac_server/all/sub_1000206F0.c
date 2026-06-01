/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000206F0
// Address: 0x00000001000206F0

//----- (00000001000206F0) ----------------------------------------------------
char __fastcall sub_1000206F0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  char result; // al
  _BYTE v9[24]; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+18h] [rbp-C8h]
  int v11; // [rsp+20h] [rbp-C0h]
  int v12; // [rsp+28h] [rbp-B8h]

  result = sub_10001EF70(a1, a2, (__int64)v9);
  if ( result )
  {
    *a3 = v11;
    *a4 = v12;
    *a5 = v10;
  }
  return result;
}
