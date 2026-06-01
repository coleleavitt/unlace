/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_483630
// Address: 0x0000000000483630

//----- (0000000000483630) ----------------------------------------------------
__int64 __fastcall sub_483630(__pid_t a1, int *a2, int a3)
{
  int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v3 = a3;
  if ( a3 == 1 )
    v3 = -1;
  v4 = sub_4835F0(&v8, a1, 0, v3);
  if ( v4 )
  {
    v5 = v4;
    if ( v4 == -1 )
    {
      if ( a2 )
        *a2 = *__errno_location();
    }
    else
    {
      v6 = v8 & 0x7F;
      if ( (v8 & 0x7F) != 0 )
      {
        if ( (char)(v6 + 1) <= 1 )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(1150);
          BUG();
        }
        if ( a2 )
          *a2 = -v6;
      }
      else if ( a2 )
      {
        *a2 = BYTE1(v8);
      }
      return 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
// 4C94E1: using guessed type char byte_4C94E1;
