/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8075180
// Address: 0x08075180

//----- (08075180) --------------------------------------------------------
int __cdecl sub_8075180(int a1)
{
  unsigned int v1; // eax
  int v2; // ebp
  int v3; // edi
  __m128i *v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int result; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // [esp-18h] [ebp-58h]
  int v17; // [esp-14h] [ebp-54h]
  int v18; // [esp-10h] [ebp-50h]
  __m128i *v19; // [esp+0h] [ebp-40h]
  unsigned __int8 v20[4]; // [esp+Ch] [ebp-34h] BYREF
  __int128 v21; // [esp+10h] [ebp-30h]
  unsigned int v22; // [esp+20h] [ebp-20h]

  v22 = __readgsdword(0x14u);
  v1 = *(_DWORD *)(a1 + 232);
  if ( v1 <= 2 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v22 == __readgsdword(0x14u) )
        sub_80CFF40(1439, v16, v17, v18);
      sub_80D7AB0();
    }
    JUMPOUT(0x804D654);
  }
  v2 = *(_DWORD *)(a1 + 228);
  v3 = 4 * (5 * v1 - 15);
  v19 = (__m128i *)(v2 + v3);
  if ( (unsigned __int8)sub_808AB90(v2 + v3) )
  {
    v4 = (__m128i *)(v2 + v3 + 40);
    if ( v19->m128i_i32[1] )
      v4 = (__m128i *)(v2 + v3 + 20);
    sub_8084300(v19, v4);
    v5 = *(_DWORD *)(a1 + 232);
    v20[0] = 2;
    v6 = 5 * v5;
    v7 = *(_DWORD *)(a1 + 228);
    v21 = 0;
    sub_8089810(v20, (unsigned __int8 *)(v7 + 4 * v6 - 20));
    v8 = *(_DWORD *)(a1 + 232);
    if ( v8 )
    {
      v14 = *(_DWORD *)(a1 + 228);
      v15 = v8 - 1;
      *(_DWORD *)(a1 + 232) = v15;
      sub_8089430(v14 + 20 * v15);
    }
    sub_8089430((int)v20);
    v9 = *(_DWORD *)(a1 + 232);
    v20[0] = 2;
    v21 = 0;
    sub_8089810(v20, (unsigned __int8 *)(*(_DWORD *)(a1 + 228) + 20 * v9 - 20));
    v10 = *(_DWORD *)(a1 + 232);
    if ( v10 )
    {
      v12 = *(_DWORD *)(a1 + 228);
      v13 = v10 - 1;
      *(_DWORD *)(a1 + 232) = v13;
      sub_8089430(v12 + 20 * v13);
    }
    sub_8089430((int)v20);
    result = 0;
  }
  else
  {
    result = -1;
  }
  if ( v22 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 8075313: control flows out of bounds to 804D654
// 807532E: variable 'v16' is possibly undefined
// 807532E: variable 'v17' is possibly undefined
// 807532E: variable 'v18' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
