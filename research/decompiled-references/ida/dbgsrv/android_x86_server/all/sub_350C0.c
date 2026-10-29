/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_350C0
// Address: 0x000350C0

//----- (000350C0) --------------------------------------------------------
unsigned int __cdecl sub_350C0(int a1, __int64 *a2, int a3, char a4)
{
  unsigned int v4; // edi
  int v5; // eax
  char *v6; // eax
  __int64 *v8; // eax
  int v9; // ecx
  int v10; // [esp+18h] [ebp-34h]
  int v11; // [esp+28h] [ebp-24h] BYREF
  unsigned int v12; // [esp+2Ch] [ebp-20h]
  int v13; // [esp+30h] [ebp-1Ch]
  unsigned int v14; // [esp+38h] [ebp-14h]

  v14 = __readgsdword(0x14u);
  v4 = *(_DWORD *)(a3 + 4);
  if ( v4 > 0xB || (v5 = 2645, !_bittest(&v5, v4)) )
  {
    if ( !*(_QWORD *)(a3 + 24) )
    {
      sub_1C900();
      return __readgsdword(0x14u);
    }
    v10 = *(_DWORD *)(a3 + 28);
    v8 = a2;
    if ( *a2 < 1 )
    {
      v9 = *(_DWORD *)(a3 + 24);
    }
    else
    {
      v9 = *(_DWORD *)(a3 + 24);
      if ( a2[2] )
      {
        if ( *a2 == *(_QWORD *)(a3 + 24) )
          return __readgsdword(0x14u);
        sub_333F0();
        if ( !a4 )
          return __readgsdword(0x14u);
        v9 = *(_DWORD *)(a3 + 24);
        v10 = *(_DWORD *)(a3 + 28);
        v8 = a2;
      }
    }
    *(_DWORD *)v8 = v9;
    *((_DWORD *)v8 + 1) = v10;
    v8[1] = *(_QWORD *)(a3 + 16);
    v8[2] = *(_QWORD *)(a3 + 32);
    return __readgsdword(0x14u);
  }
  v6 = (char *)sub_3C990(a1 + 40, *(_DWORD *)(a3 + 4));
  sub_1B530((int)&v11, v6);
  if ( v12 <= 1 )
    sub_1F400((int)&v11, "%X", v4);
  sub_1C900();
  if ( v11 )
  {
    v12 = 0;
    qfree((void *)v11);
    v11 = 0;
    v13 = 0;
  }
  return __readgsdword(0x14u);
}
