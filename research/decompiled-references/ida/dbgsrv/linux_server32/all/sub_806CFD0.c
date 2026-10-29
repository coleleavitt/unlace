/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806CFD0
// Address: 0x0806CFD0

//----- (0806CFD0) --------------------------------------------------------
int __cdecl sub_806CFD0(int a1, int a2)
{
  void *v2; // eax
  void *v3; // eax
  int v4; // ecx
  int result; // eax
  unsigned __int8 v6; // al
  char v7; // cl
  __int64 v8; // xmm0_8
  int v9; // eax
  int v10; // eax
  _DWORD v11[8]; // [esp+8h] [ebp-68h] BYREF
  __int128 v12; // [esp+28h] [ebp-48h]
  int v13; // [esp+38h] [ebp-38h]
  int v14; // [esp+3Ch] [ebp-34h]
  int v15; // [esp+40h] [ebp-30h]
  int v16; // [esp+44h] [ebp-2Ch]
  __int16 v17; // [esp+48h] [ebp-28h]
  char v18; // [esp+4Ah] [ebp-26h]
  unsigned int v19; // [esp+54h] [ebp-1Ch]

  v19 = __readgsdword(0x14u);
  v2 = *(void **)(a2 + 12);
  memset(v11, 0, sizeof(v11));
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v12 = 0;
  if ( v2 )
  {
    *(_DWORD *)(a2 + 16) = 0;
    sub_80CF780(v2);
  }
  v3 = *(void **)a2;
  if ( *(_DWORD *)a2 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    sub_80CF780(v3);
  }
  sub_8069850(a2, (int)v11);
  v4 = sub_806A240(*(_DWORD *)(a1 + 4), a2 + 24);
  result = 0;
  if ( v4 != -1 )
  {
    v6 = *(_BYTE *)(a2 + 28);
    v7 = v6 >> 4;
    if ( v6 > 0x2Fu )
    {
      if ( *(_WORD *)((char *)&off_811D184 + *(_DWORD *)(a1 + 4) - 135385074) == 40 && v7 == 14 )
      {
        v7 = 2;
      }
      else if ( (unsigned __int8)v7 <= 9u )
      {
        v7 = -2;
      }
    }
    *(_BYTE *)(a2 + 65) = v6 & 0xF;
    v8 = *(_QWORD *)(a2 + 40);
    *(_BYTE *)(a2 + 64) = v7;
    v9 = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 60) = 0;
    v10 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 472) + v9;
    *(_QWORD *)(a2 + 48) = v8;
    *(_DWORD *)(a2 + 56) = v10;
    result = 1;
  }
  if ( v19 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811D184: using guessed type _UNKNOWN *off_811D184;
