/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8061880
// Address: 0x08061880

//----- (08061880) --------------------------------------------------------
int __cdecl sub_8061880(int a1, int a2, char a3)
{
  int v3; // ecx
  int v4; // eax
  int *v5; // eax
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  int (__cdecl **v9)(_DWORD, int); // eax
  int v10; // edi
  int v11; // edx
  _DWORD *v12; // ebx
  _DWORD *v13; // edx
  int v14; // eax
  _DWORD *v15; // eax
  unsigned int i; // ebx
  int v18; // edx
  char *v19; // ebx
  unsigned int v20; // edx
  void *v21; // eax
  char *v22; // eax
  int v23; // [esp-5Ch] [ebp-5Ch]
  int v24; // [esp-58h] [ebp-58h]
  int v25; // [esp-58h] [ebp-58h]
  char *v26; // [esp-54h] [ebp-54h]
  int (__cdecl **v27)(_DWORD, int); // [esp-40h] [ebp-40h] BYREF
  char *v28; // [esp-3Ch] [ebp-3Ch] BYREF
  int v29; // [esp-38h] [ebp-38h]
  unsigned int v30; // [esp-34h] [ebp-34h]
  void *v31; // [esp-2Ch] [ebp-2Ch] BYREF
  unsigned int v32; // [esp-28h] [ebp-28h]
  unsigned int v33; // [esp-24h] [ebp-24h]
  unsigned int v34; // [esp-20h] [ebp-20h]

  v3 = *(_DWORD *)(a1 + 668);
  v34 = __readgsdword(0x14u);
  v28 = nullptr;
  v29 = 0;
  v30 = 0;
  v31 = nullptr;
  v32 = 0;
  v33 = 0;
  if ( v3 == a1 + 660 )
    goto LABEL_26;
  do
  {
    if ( (*(_DWORD *)(v3 + 16) == a2) == a3 )
      goto LABEL_9;
    if ( *(_DWORD *)(v3 + 40) || *(_BYTE *)(v3 + 44) || *(_BYTE *)(v3 + 45) )
      goto LABEL_33;
    v24 = v3;
    v4 = sub_8054B10(*(_DWORD *)(v3 + 20), 19);
    v3 = v24;
    if ( !v4 )
    {
      v18 = v29;
      v19 = v28;
      v27 = (int (__cdecl **)(_DWORD, int))(v24 + 20);
      if ( v30 < v29 + 1 )
      {
        v22 = (char *)sub_80CF920((int)&v28, v28, v29 + 1, 4u);
        v18 = v29;
        v28 = v22;
        v19 = v22;
        v3 = v24;
      }
      *(_DWORD *)&v19[4 * v18] = v24 + 20;
      ++v29;
      *(_BYTE *)(v3 + 44) = 1;
LABEL_33:
      ++*(_DWORD *)(v3 + 24);
      goto LABEL_9;
    }
    v5 = __errno_location();
    v3 = v24;
    v6 = *v5;
    if ( v6 == 3 )
    {
      v20 = v32;
      v25 = *(_DWORD *)(v24 + 20);
      v21 = v31;
      if ( v33 < v32 + 1 )
      {
        v23 = v3;
        v21 = sub_80CF920((int)&v31, v31, v32 + 1, 4u);
        v20 = v32;
        v3 = v23;
        v31 = v21;
      }
      *((_DWORD *)v21 + v20) = v25;
      ++v32;
    }
    else
    {
      v7 = strerror(v6);
      sub_8058E20(a1, (char *)&qword_811CFF4 - 269696, *(_DWORD *)(v24 + 20), v7);
      v3 = v24;
    }
LABEL_9:
    v3 = std::_Rb_tree_increment(v3);
  }
  while ( v3 != a1 + 660 );
  if ( v29 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *(unsigned __int8 *)(a1 + 733);
        v27 = nullptr;
        v9 = (int (__cdecl **)(_DWORD, int))sub_8068DC0(a1, (int *)&v27, -1, -v8);
        v10 = v29;
        v11 = v29;
        if ( (int)v9 > 0 )
          break;
LABEL_12:
        if ( !v11 )
          goto LABEL_21;
      }
      v26 = v28;
      v12 = v28;
      if ( !(4 * v29) )
      {
LABEL_34:
        sub_805A080((_DWORD *)a1, v9, v27);
        v11 = v29;
        goto LABEL_12;
      }
      while ( 1 )
      {
        v13 = (_DWORD *)*v12;
        if ( *(int (__cdecl ***)(_DWORD, int))*v12 == v9 )
          break;
        if ( ++v12 == (_DWORD *)&v28[4 * v29] )
          goto LABEL_34;
      }
      if ( (_WORD)v27 == 4991 )
      {
        *((_BYTE *)v13 + 24) = 0;
        v13[5] = 1;
      }
      else
      {
        sub_805A080((_DWORD *)a1, v9, v27);
        v10 = v29;
        v26 = v28;
      }
      memmove(v12, v12 + 1, &v26[4 * v10] - (char *)v12 - 4);
      v14 = v29--;
    }
    while ( v14 != 1 );
  }
LABEL_21:
  v15 = v31;
  if ( v32 )
  {
    for ( i = 0; i < v32; ++i )
    {
      sub_8061680(a1, v15[i], 3);
      v15 = v31;
    }
  }
  if ( v15 )
  {
    v32 = 0;
    sub_80CF780(v15);
  }
LABEL_26:
  if ( v28 )
  {
    v29 = 0;
    sub_80CF780(v28);
  }
  if ( v34 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 1;
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
