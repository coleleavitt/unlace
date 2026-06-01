/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C040
// Address: 0x0006C040

//----- (0006C040) --------------------------------------------------------
int __cdecl sub_6C040(int a1, char *s)
{
  size_t v2; // eax
  size_t v3; // ecx
  char *v4; // esi
  size_t v5; // edi
  size_t v6; // esi
  char *v7; // eax
  size_t v8; // edi
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // esi
  unsigned int v13; // edx
  char *v14; // esi
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // esi
  void *v20; // eax
  _DWORD *v21; // eax
  int v22; // edi
  int v24; // [esp+24h] [ebp-38h]
  int v25; // [esp+28h] [ebp-34h]
  _DWORD *v26; // [esp+30h] [ebp-2Ch] BYREF
  int v27; // [esp+38h] [ebp-24h] BYREF
  size_t v28; // [esp+3Ch] [ebp-20h]
  void *v29; // [esp+40h] [ebp-1Ch]
  unsigned int v30; // [esp+48h] [ebp-14h]

  v30 = __readgsdword(0x14u);
  v28 = 0;
  v27 = 0;
  v29 = nullptr;
  v2 = strlen(s);
  if ( v2 >= 0xFFFFFFF0 )
    sub_758B0();
  v3 = v2;
  if ( v2 >= 0xB )
  {
    v5 = (v2 + 16) & 0xFFFFFFF0;
    v6 = v2;
    v7 = (char *)operator new(v5);
    v3 = v6;
    v4 = v7;
    v29 = v7;
    v27 = v5 | 1;
    v28 = v3;
  }
  else
  {
    LOBYTE(v27) = 2 * v2;
    v4 = (char *)&v27 + 1;
    if ( !v2 )
      goto LABEL_7;
  }
  v8 = v3;
  memcpy(v4, s, v3);
  v3 = v8;
LABEL_7:
  v4[v3] = 0;
  sub_767F0(&v26, (_DWORD *)(a1 + 252), (unsigned __int8 *)&v27);
  v9 = v26;
  if ( (v27 & 1) != 0 )
    operator delete(v29);
  if ( !v9 )
    return set_qerrno(1509);
  v10 = v9[5];
  v11 = 16 * (v9[6] - 1);
  v12 = *(_DWORD *)(v10 + v11 + 4);
  v13 = *(unsigned __int8 *)(v10 + v11 + 12);
  if ( v12 > 1 )
    goto LABEL_14;
  if ( !(_BYTE)v13 && !*(_BYTE *)(v10 + v11 + 13) )
  {
    sub_6C2D0(a1, s);
    v15 = 0;
    goto LABEL_16;
  }
  if ( v12 )
LABEL_14:
    v14 = *(char **)(v10 + v11);
  else
    v14 = byte_EF875;
  v15 = sub_6ADB0(a1, s, v14, v13, *(_BYTE *)(v10 + v11 + 13), nullptr);
LABEL_16:
  v16 = v9[6];
  if ( !v16 )
    goto LABEL_20;
  v25 = v15;
  v17 = v9[5];
  v18 = v16 - 1;
  v9[6] = v18;
  v19 = 16 * v18;
  v20 = *(void **)(v17 + 16 * v18);
  if ( v20 )
  {
    v24 = v17;
    *(_DWORD *)(v17 + v19 + 4) = 0;
    qfree(v20);
    v21 = (_DWORD *)(v24 + v19);
    *v21 = 0;
    v21[2] = 0;
    v18 = v9[6];
  }
  v15 = v25;
  if ( !v18 )
  {
LABEL_20:
    v26 = v9;
    sub_769D0((int)&v27, (_DWORD *)(a1 + 252), v9);
    v22 = v27;
    v27 = 0;
    if ( v22 )
    {
      if ( (_BYTE)v29 )
      {
        sub_757F0((char **)(v22 + 20));
        if ( (*(_BYTE *)(v22 + 8) & 1) != 0 )
          operator delete(*(void **)(v22 + 16));
      }
      operator delete((void *)v22);
    }
  }
  return v15;
}
