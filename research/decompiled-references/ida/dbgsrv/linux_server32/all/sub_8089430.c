/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8089430
// Address: 0x08089430

//----- (08089430) --------------------------------------------------------
void __cdecl sub_8089430(int a1)
{
  void *v1; // eax
  int v2; // [esp-10h] [ebp-18h]
  int v3; // [esp-Ch] [ebp-14h]
  int v4; // [esp-8h] [ebp-10h]

  if ( !a1 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(2656, v2, v3, v4);
    JUMPOUT(0x804E4D0);
  }
  if ( *(_BYTE *)a1 == 5 )
  {
    sub_80891F0(*(_DWORD *)(a1 + 4), (unsigned __int8 *)a1);
    *(_BYTE *)a1 = 2;
    *(_DWORD *)(a1 + 4) = 0;
  }
  else if ( *(_BYTE *)a1 == 7 && (v1 = *(void **)(a1 + 4)) != nullptr )
  {
    *(_DWORD *)(a1 + 8) = 0;
    sub_80CF780(v1);
    *(_BYTE *)a1 = 2;
    *(_DWORD *)(a1 + 4) = 0;
  }
  else
  {
    *(_BYTE *)a1 = 2;
    *(_DWORD *)(a1 + 4) = 0;
  }
}
// 80894C0: control flows out of bounds to 804E4D0
// 80894CE: variable 'v2' is possibly undefined
// 80894CE: variable 'v3' is possibly undefined
// 80894CE: variable 'v4' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
