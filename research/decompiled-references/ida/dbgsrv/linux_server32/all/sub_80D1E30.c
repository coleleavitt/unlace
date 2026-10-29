/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D1E30
// Address: 0x080D1E30

//----- (080D1E30) --------------------------------------------------------
int __cdecl sub_80D1E30(__pid_t pid, int *a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // edx
  int v8; // [esp-14h] [ebp-28h]
  int v9; // [esp-10h] [ebp-24h]
  int v10; // [esp-Ch] [ebp-20h]
  int v11; // [esp+0h] [ebp-14h] BYREF
  unsigned int v12; // [esp+4h] [ebp-10h]

  v12 = __readgsdword(0x14u);
  v3 = a3;
  if ( a3 == 1 )
    v3 = -1;
  v4 = sub_80D1E00(&v11, pid, 0, v3);
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
      v6 = v11 & 0x7F;
      if ( (v11 & 0x7F) != 0 )
      {
        if ( (char)(v6 + 1) <= 1 )
        {
          if ( !byte_811F8A1 )
          {
            if ( v12 == __readgsdword(0x14u) )
              sub_80CFF40(1150, v8, v9, v10);
            sub_80D7AB0();
          }
          JUMPOUT(0x80524E4);
        }
        if ( a2 )
          *a2 = -v6;
      }
      else if ( a2 )
      {
        *a2 = BYTE1(v11);
      }
      v5 = 0;
    }
  }
  else
  {
    v5 = 1;
  }
  if ( v12 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v5;
}
// 80D1EED: control flows out of bounds to 80524E4
// 80D1F08: variable 'v8' is possibly undefined
// 80D1F08: variable 'v9' is possibly undefined
// 80D1F08: variable 'v10' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
