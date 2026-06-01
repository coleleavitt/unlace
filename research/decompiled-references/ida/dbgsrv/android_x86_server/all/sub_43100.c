/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43100
// Address: 0x00043100

//----- (00043100) --------------------------------------------------------
char __cdecl sub_43100(int a1, _DWORD *a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned __int64 v6; // kr00_8
  __int128 v8; // [esp+10h] [ebp-5Ch] BYREF
  __int128 v9; // [esp+20h] [ebp-4Ch]
  __int128 v10; // [esp+30h] [ebp-3Ch]
  __int128 v11; // [esp+40h] [ebp-2Ch]
  __int16 v12; // [esp+50h] [ebp-1Ch]
  char v13; // [esp+52h] [ebp-1Ah]
  unsigned int v14; // [esp+58h] [ebp-14h]

  v14 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 52);
  if ( v2 >= v3 )
  {
    v4 = *(_DWORD *)(a1 + 44);
    v5 = *(_DWORD *)(a1 + 40);
    v6 = *(_QWORD *)(a1 + 16) - __PAIR64__(v4, v5);
    if ( !v6 )
      return 0;
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v6 )
    {
      v11 = 0;
      v10 = 0;
      v9 = 0;
      v8 = 0;
      v13 = 0;
      v12 = 0;
      sub_43540((int *)(a1 + 28), v6, (unsigned int)&v8);
      if ( HIDWORD(v8) )
      {
        LODWORD(v9) = 0;
        qfree((void *)HIDWORD(v8));
        HIDWORD(v8) = 0;
        DWORD1(v9) = 0;
      }
      if ( (_DWORD)v8 )
      {
        DWORD1(v8) = 0;
        qfree((void *)v8);
        LODWORD(v8) = 0;
        DWORD2(v8) = 0;
      }
      v5 = *(_DWORD *)(a1 + 40);
      v4 = *(_DWORD *)(a1 + 44);
    }
    *(_DWORD *)(a1 + 48) = 0;
    if ( !(v4 | v5) )
      (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 468) + 8))(
        *(_DWORD *)(*(_DWORD *)(a1 + 4) + 468),
        *(_DWORD *)(a1 + 4));
    v3 = sub_433B0(a1, v6);
    *(_DWORD *)(a1 + 52) = v3;
    if ( !v3 )
      return 0;
    *(_QWORD *)(a1 + 40) += v3;
    v2 = *(_DWORD *)(a1 + 48);
  }
  if ( v2 < v3 )
  {
    *a2 = *(_DWORD *)(a1 + 28) + 68 * v2;
    ++*(_DWORD *)(a1 + 48);
    return 1;
  }
  return 0;
}
