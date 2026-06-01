/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FDA0
// Address: 0x0003FDA0

//----- (0003FDA0) --------------------------------------------------------
int __cdecl sub_3FDA0(int a1, int a2)
{
  unsigned int v2; // ecx
  void *v3; // eax
  int v4; // esi
  __int128 v6; // [esp+10h] [ebp-5Ch] BYREF
  __int128 v7; // [esp+20h] [ebp-4Ch]
  __int128 v8; // [esp+30h] [ebp-3Ch]
  __int128 v9; // [esp+40h] [ebp-2Ch]
  __int16 v10; // [esp+50h] [ebp-1Ch]
  char v11; // [esp+52h] [ebp-1Ah]
  unsigned int v12; // [esp+58h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  if ( (unsigned int)(a2 - 1) >= 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20098);
LABEL_19:
    BUG();
  }
  v2 = *(_DWORD *)(a1 + 8 * (a2 == 1) + 4);
  if ( a2 == 1 )
    ++*(_DWORD *)(a1 + 12);
  if ( v2 == *(_DWORD *)(a1 + 4) )
  {
    if ( *(_DWORD *)(a1 + 8) >= v2 + 1 )
    {
      v3 = *(void **)a1;
    }
    else
    {
      v3 = qvector_reserve(a1, *(void **)a1, v2 + 1, 0x44u);
      *(_DWORD *)a1 = v3;
      v2 = *(_DWORD *)(a1 + 4);
    }
    v4 = (int)v3 + 68 * v2;
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 20) = 0;
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 28) = 0;
    *(_DWORD *)(v4 + 24) = 0;
    *(_DWORD *)(v4 + 36) = 0;
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 44) = 0;
    *(_DWORD *)(v4 + 40) = 0;
    *(_DWORD *)(v4 + 52) = 0;
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 60) = 0;
    *(_DWORD *)(v4 + 56) = 0;
    *(_BYTE *)(v4 + 66) = 0;
    *(_WORD *)(v4 + 64) = 0;
    ++*(_DWORD *)(a1 + 4);
    return v4;
  }
  if ( v2 > *(_DWORD *)(a1 + 4) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20133);
    goto LABEL_19;
  }
  v4 = *(_DWORD *)a1 + 68 * v2;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  v6 = 0;
  v11 = 0;
  v10 = 0;
  sub_40020((void **)a1, v4, (int)&v6);
  if ( HIDWORD(v6) )
  {
    LODWORD(v7) = 0;
    qfree((void *)HIDWORD(v6));
    HIDWORD(v6) = 0;
    DWORD1(v7) = 0;
  }
  if ( (_DWORD)v6 )
  {
    DWORD1(v6) = 0;
    qfree((void *)v6);
    LODWORD(v6) = 0;
    DWORD2(v6) = 0;
  }
  return v4;
}
// 13E34C: using guessed type int under_debugger;
