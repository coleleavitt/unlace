__int64 __fastcall sub_66F9D0(__int64 a1, __int64 *a2, unsigned int *a3, int a4, int a5, unsigned int a6, __int64 a7)
{
  unsigned int v7; // r15d
  int v10; // edx
  int v11; // eax
  bool v12; // sf
  int v13; // edx
  __int64 result; // rax
  unsigned int v16[4]; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( (a5 & 0x600) != 0x400 || (a5 & 0xF0000000) != 0x50000000 )
  {
    if ( !under_debugger )
      interr(1549);
    BUG();
  }
  v16[0] = *a3;
  v7 = v16[0];
  v10 = nbits(v16[0]);
  v11 = v10 + 14;
  v12 = v10 + 7 < 0;
  v13 = v10 + 7;
  v16[2] = a6;
  if ( !v12 )
    v11 = v13;
  v16[1] = a4 * (v11 >> 3);
  result = sub_66F830(a1, a2, v16, a7);
  if ( (_BYTE)result )
    *a3 = v7 + a4;
  return result;
}

