/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046A50
// Address: 0x0000000140046A50

//----- (0000000140046A50) ----------------------------------------------------
__int64 __fastcall sub_140046A50(unsigned __int64 *a1)
{
  char v2; // cl
  char *v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  char *v7; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h] BYREF
  char v9[7]; // [rsp+29h] [rbp-1Fh] BYREF

  v2 = 0;
  v3 = (char *)*a1;
  v4 = *a1 + 1;
  if ( v4 >= *a1 && v4 <= a1[1] )
  {
    *a1 = v4;
    v2 = *v3;
  }
  v8 = v2;
  if ( v2 < 0 )
  {
    if ( (v2 & 0xC0) == 0xC0 )
      v5 = ((v2 & 0xE0) == 0xE0) + 4LL;
    else
      v5 = 2;
  }
  else
  {
    v5 = 1;
  }
  sub_140046AF0((__int64)a1, v9, v5 - 1);
  v7 = &v8;
  return sub_14005B690((unsigned __int64 *)&v7, (unsigned __int64)&v9[v5 - 1]);
}
