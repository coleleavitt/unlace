/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0060
// Address: 0x080D0060

//----- (080D0060) --------------------------------------------------------
bool __cdecl sub_80D0060(int a1)
{
  pthread_mutex_t *v1; // edi
  _DWORD *v2; // edx
  void *v3; // ebx
  char *v4; // ecx
  char *v5; // eax
  unsigned int v7; // eax
  char *v8; // eax
  int v9; // ecx
  int v10; // [esp-14h] [ebp-34h]
  int v11; // [esp-10h] [ebp-30h]
  int v12; // [esp-Ch] [ebp-2Ch]
  int v13; // [esp+0h] [ebp-20h]
  _DWORD *v14; // [esp+4h] [ebp-1Ch]

  v1 = (pthread_mutex_t *)dword_811F8B0;
  if ( !dword_811F8B0 )
  {
    dword_811F8B0 = (int)sub_80D1320();
    v1 = (pthread_mutex_t *)dword_811F8B0;
    if ( !dword_811F8B0 )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(547, v10, v11, v12);
      BUG();
    }
  }
  sub_80D15A0(v1);
  v2 = (_DWORD *)dword_811F8B4;
  if ( !dword_811F8B4 )
  {
    v2 = sub_80CF8B0(0xCu);
    *v2 = 0;
    v4 = nullptr;
    v2[1] = 0;
    v3 = nullptr;
    v2[2] = 0;
    dword_811F8B4 = (int)v2;
    v7 = 1;
    if ( v2[2] )
      goto LABEL_10;
    goto LABEL_12;
  }
  v3 = *(void **)dword_811F8B4;
  v4 = (char *)(*(_DWORD *)dword_811F8B4 + 4 * *(_DWORD *)(dword_811F8B4 + 4));
  v13 = *(_DWORD *)(dword_811F8B4 + 4);
  if ( *(char **)dword_811F8B4 == v4 )
    goto LABEL_9;
  v5 = *(char **)dword_811F8B4;
  while ( *(_DWORD *)v5 != a1 )
  {
    v5 += 4;
    if ( v5 == v4 )
      goto LABEL_9;
  }
  if ( v5 == v4 )
  {
LABEL_9:
    v7 = v13 + 1;
    if ( *(_DWORD *)(dword_811F8B4 + 8) >= (unsigned int)(v13 + 1) )
    {
LABEL_10:
      *(_DWORD *)v4 = a1;
      ++v2[1];
      return sub_80D1600(v1);
    }
LABEL_12:
    v14 = v2;
    v8 = (char *)sub_80CF920((int)v2, v3, v7, 4u);
    v2 = v14;
    v9 = v14[1];
    *v14 = v8;
    v4 = &v8[4 * v9];
    goto LABEL_10;
  }
  return sub_80D1600(v1);
}
// 80D018E: variable 'v10' is possibly undefined
// 80D018E: variable 'v11' is possibly undefined
// 80D018E: variable 'v12' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
// 811F8B0: using guessed type int dword_811F8B0;
// 811F8B4: using guessed type int dword_811F8B4;
