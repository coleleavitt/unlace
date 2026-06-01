/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A5C0
// Address: 0x000000014005A5C0

//----- (000000014005A5C0) ----------------------------------------------------
_BOOL8 __fastcall sub_14005A5C0(char *a1, size_t a2, int a3)
{
  errno_t v5; // eax
  bool v6; // bl
  _BOOL8 result; // rax
  __time64_t Time; // [rsp+48h] [rbp+20h] BYREF

  Time = a3;
  v5 = ctime64_s(a1, a2, &Time);
  v6 = v5 == 0;
  if ( v5 )
  {
    sub_1400621E0(a1, "[wrong timestamp]\n", a2);
    return v6;
  }
  if ( a2 <= 8 )
    return v6;
  result = v6;
  if ( a1[8] == 32 )
    a1[8] = 48;
  return result;
}
