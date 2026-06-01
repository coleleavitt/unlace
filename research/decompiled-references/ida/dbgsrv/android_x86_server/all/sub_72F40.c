/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_72F40
// Address: 0x00072F40

//----- (00072F40) --------------------------------------------------------
unsigned int __cdecl sub_72F40(int a1, int a2, char a3)
{
  int v3; // eax
  _BOOL4 v4; // edx
  char v6[4]; // [esp+8h] [ebp-24h] BYREF
  __int64 v7; // [esp+Ch] [ebp-20h]
  unsigned int v8; // [esp+18h] [ebp-14h]

  v8 = __readgsdword(0x14u);
  sub_71D00(a1, a2, a3);
  while ( 1 )
  {
    v6[0] = 1;
    v7 = 0;
    v3 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
    if ( v3 != 8509 )
      break;
    sub_71D00(a1, (int)v6, 1);
    v4 = v7 != *(_QWORD *)(a2 + 4);
LABEL_2:
    *(_DWORD *)(a2 + 4) = v4;
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)a2 = 0;
  }
  if ( (unsigned __int16)v3 == 15677 )
  {
    sub_71D00(a1, (int)v6, 1);
    v4 = v7 == *(_QWORD *)(a2 + 4);
    goto LABEL_2;
  }
  return __readgsdword(0x14u);
}
