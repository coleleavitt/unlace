/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415880
// Address: 0x00415880

//----- (00415880) --------------------------------------------------------
char __userpurge sub_415880@<al>(int a1@<ecx>, __m128i a2@<xmm0>, int a3, char a4, char a5)
{
  unsigned __int16 *v6; // esi
  __int16 v7; // ax
  __int16 v8; // cx
  __int16 v9; // ax
  __int16 v10; // dx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  char result; // al
  __int32 v16; // eax
  void **v17; // esi
  char *v18; // eax
  __m128i v19; // [esp+Ch] [ebp-14h] BYREF

  v19.m128i_i32[0] = 0;
  *(_BYTE *)(a1 + 576) = 0;
  sub_45C810(a1, a3, a3, 0, 0);
  v6 = (unsigned __int16 *)(a1 + 16);
  if ( sub_45C7E0(a3, (__m128i *)(a1 + 16), 28) != 28 )
    return 0;
  v7 = *v6;
  if ( *v6 == 17744 )
  {
LABEL_20:
    v16 = v19.m128i_i32[0];
    *(_DWORD *)(a1 + 572) = v19.m128i_i32[0];
    sub_45C810(a1, a3, a3, v16, 0);
    v17 = (void **)(a1 + 304);
    sub_464890((__m128i *)(a1 + 304), 0, 0x108u);
    sub_45C810(a1, a3, a3, *(int *)(a1 + 572), 0);
    if ( (unsigned int)(sub_45C7E0(a3, (__m128i *)(a1 + 304), 264) - 93) > 0xAB )
      return 0;
    v18 = (char *)*v17;
    if ( *v17 != (void *)17744 && v18 != (char *)&loc_455041 + 1 && v18 != (char *)19536 )
      return 0;
    if ( !sub_414870(a2, (__m128i *)(a1 + 56), (__m128i *)(a1 + 304), a4, a5) )
      return 0;
    result = 1;
    if ( *(_WORD *)(a1 + 80) == 523 )
    {
      *(_DWORD *)(a1 + 568) = *(_DWORD *)(a1 + 104);
    }
    else
    {
      *(_DWORD *)(a1 + 568) = *(_DWORD *)(a1 + 108);
      v19.m128i_i32[1] = 0;
    }
    return result;
  }
  if ( v7 != 23126 )
  {
    if ( v7 == 23117 || v7 == 19802 )
    {
      if ( sub_45C7E0(a3, (__m128i *)&v19.m128i_u64[1], 8) == 8
        && v19.m128i_i32[2] == 1281977941
        && v19.m128i_i32[3] == 7040617 )
      {
        *(_BYTE *)(a1 + 576) = 1;
      }
      sub_45C810(a1, a3, a3, 60, 0);
      if ( sub_45C7E0(a3, &v19, 4) != 4 )
        return 0;
    }
    goto LABEL_20;
  }
  sub_45C810(a1, a3, a3, v19.m128i_u32[0], 0);
  if ( sub_45C7E0(a3, (__m128i *)(a1 + 16), 40) != 40 )
    return 0;
  sub_464890((__m128i *)(a1 + 60), 0, 0xF4u);
  *(_DWORD *)(a1 + 56) = *v6;
  v8 = *(_WORD *)(a1 + 18);
  *(_WORD *)(a1 + 60) = v8;
  *(_WORD *)(a1 + 62) = *(unsigned __int8 *)(a1 + 20);
  if ( v8 == -31132 || v8 == 512 || (v9 = 267, v8 == -21916) )
    v9 = 523;
  v10 = v9;
  *(_WORD *)(a1 + 80) = v9;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a1 + 28) - *(unsigned __int16 *)(a1 + 22) + 40;
  v11 = *(_DWORD *)(a1 + 32);
  if ( v10 == 523 )
  {
    v12 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 104) = v11;
    *(_DWORD *)(a1 + 108) = v12;
  }
  else
  {
    *(_DWORD *)(a1 + 108) = v11;
  }
  *(_WORD *)(a1 + 148) = *(unsigned __int8 *)(a1 + 21);
  v13 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 220) = v13;
  v14 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 224) = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 228) = v14;
  *(_DWORD *)(a1 + 112) = 1;
  *(_DWORD *)(a1 + 116) = 1;
  *(_DWORD *)(a1 + 568) = sub_4135E0(a1 + 56);
  *(_DWORD *)(a1 + 572) = v19.m128i_i32[0];
  return 1;
}
