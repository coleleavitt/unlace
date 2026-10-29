/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400618A0
// Address: 0x00000001400618A0

//----- (00000001400618A0) ----------------------------------------------------
char __fastcall sub_1400618A0(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int8 *v6; // rbx
  int v7; // eax
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int8 *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    *a1 = -1;
  v5 = *a2;
  v6 = (unsigned __int8 *)(*a2 - 1);
  if ( (unsigned __int64)v6 < a3 )
    return 0;
  v7 = *v6;
  if ( (v7 & 0x80u) != 0 )
  {
    if ( (v7 & 0xC0) == 0x80 )
    {
      v9 = 1;
      while ( 1 )
      {
        --v6;
        ++v9;
        if ( (unsigned __int64)v6 < a3 || v9 > 4 )
          break;
        if ( (*v6 & 0xC0) != 0x80 )
        {
          v11 = v6;
          v10 = sub_1400615C0(&v11);
          if ( v10 == -1 || (unsigned __int64)v11 > v5 )
            return 0;
          if ( a1 )
            *a1 = v10;
          *a2 = (unsigned __int64)v6;
          return 1;
        }
      }
    }
    return 0;
  }
  if ( a1 )
    *a1 = v7;
  *a2 = (unsigned __int64)v6;
  return 1;
}
