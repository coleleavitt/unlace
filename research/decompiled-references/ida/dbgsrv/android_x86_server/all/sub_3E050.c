/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E050
// Address: 0x0003E050

//----- (0003E050) --------------------------------------------------------
char __cdecl sub_3E050(int a1, int a2)
{
  void *v2; // eax
  void *v3; // eax
  int v4; // edi
  unsigned __int8 v5; // al
  char v6; // dl
  int v7; // eax
  __int128 v9; // [esp+10h] [ebp-5Ch] BYREF
  __int128 v10; // [esp+20h] [ebp-4Ch]
  __int128 v11; // [esp+30h] [ebp-3Ch]
  __int128 v12; // [esp+40h] [ebp-2Ch]
  __int16 v13; // [esp+50h] [ebp-1Ch]
  char v14; // [esp+52h] [ebp-1Ah]
  unsigned int v15; // [esp+58h] [ebp-14h]

  v15 = __readgsdword(0x14u);
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v14 = 0;
  v13 = 0;
  if ( &v9 != (__int128 *)a2 )
  {
    v2 = *(void **)(a2 + 12);
    if ( v2 )
    {
      *(_DWORD *)(a2 + 16) = 0;
      qfree(v2);
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 20) = 0;
    }
    v3 = *(void **)a2;
    if ( *(_DWORD *)a2 )
    {
      *(_DWORD *)(a2 + 4) = 0;
      qfree(v3);
      *(_DWORD *)a2 = 0;
      *(_DWORD *)(a2 + 8) = 0;
    }
    sub_42790(a2, (int)&v9);
    if ( HIDWORD(v9) )
    {
      LODWORD(v10) = 0;
      qfree((void *)HIDWORD(v9));
      HIDWORD(v9) = 0;
      DWORD1(v10) = 0;
    }
  }
  if ( (_DWORD)v9 )
  {
    DWORD1(v9) = 0;
    qfree((void *)v9);
    LODWORD(v9) = 0;
    DWORD2(v9) = 0;
  }
  v4 = a1;
  if ( sub_33D50(*(_DWORD *)(a1 + 4), (char *)(a2 + 24)) < 0 )
    return 0;
  v5 = *(_BYTE *)(a2 + 28);
  if ( v5 < 0x30u
    || (v5 >> 4 != 14 || (v6 = 2, v4 = a1, *(_WORD *)(*(_DWORD *)(a1 + 4) + 402) != 40)) && (v6 = -2, v5 >= 0xA0u) )
  {
    v6 = v5 >> 4;
  }
  *(_BYTE *)(a2 + 64) = v6;
  *(_DWORD *)(a2 + 60) = 0;
  *(_BYTE *)(a2 + 65) = v5 & 0xF;
  *(_DWORD *)(a2 + 56) = *(_DWORD *)(a2 + 32) + *(_DWORD *)(*(_DWORD *)(v4 + 4) + 472);
  v7 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 52) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a2 + 48) = v7;
  return 1;
}
