/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B83C
// Address: 0x0001B83C

//----- (0001B83C) --------------------------------------------------------
int __fastcall sub_1B83C(int a1, _BYTE *a2, _DWORD *a3)
{
  int v6; // r2
  int v7; // r1
  int result; // r0
  _BOOL4 v9; // r3
  int v10; // r2
  bool v11; // zf
  _BOOL4 v12; // r2
  _BOOL4 v13; // r1
  int v14; // [sp+0h] [bp-Ch] BYREF

  if ( a2 )
    *a2 = 0;
  v6 = a3[1];
  v7 = v6 >> 16;
  result = (unsigned __int8)v6;
  v9 = v6 >> 16 == 0;
  if ( (unsigned __int8)v6 != 127 )
    v9 = 1;
  if ( !v9 )
  {
    v10 = BYTE1(v6);
    v11 = v10 == 5;
    if ( v10 != 5 )
      v11 = v7 == 128;
    v12 = !v11;
    if ( v11 )
    {
      if ( v7 == 3 )
      {
        ptrace(PTRACE_GETEVENTMSG, *a3, v12, &v14);
        sub_172A8(v14);
        result = sub_1B5FC(a1, v14, -1, 1);
        if ( !a2 )
          return result;
      }
      else
      {
        v13 = v7 == 128;
        if ( !a2 )
          v13 = 0;
        if ( !v13 )
          return result;
      }
      *a2 = 1;
    }
  }
  return result;
}
