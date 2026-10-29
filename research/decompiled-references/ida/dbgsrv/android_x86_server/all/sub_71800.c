/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71800
// Address: 0x00071800

//----- (00071800) --------------------------------------------------------
unsigned int __cdecl sub_71800(int a1, int a2, char a3)
{
  int v3; // eax
  char v5[4]; // [esp+8h] [ebp-24h] BYREF
  __int64 v6; // [esp+Ch] [ebp-20h]
  unsigned int v7; // [esp+18h] [ebp-14h]

  v7 = __readgsdword(0x14u);
  sub_71530(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v5[0] = 1;
      v6 = 0;
      v3 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
      if ( v3 != 45 )
        break;
      sub_71530(a1, (int)v5, 1);
      *(_QWORD *)(a2 + 4) -= v6;
    }
    if ( (unsigned __int16)v3 != 43 )
      break;
    sub_71530(a1, (int)v5, 1);
    *(_QWORD *)(a2 + 4) += v6;
  }
  return __readgsdword(0x14u);
}
