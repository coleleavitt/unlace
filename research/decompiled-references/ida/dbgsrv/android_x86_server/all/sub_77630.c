/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77630
// Address: 0x00077630

//----- (00077630) --------------------------------------------------------
int __cdecl sub_77630(int *a1, unsigned int a2, unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // edx
  unsigned int *v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // edx
  bool v9; // cc
  unsigned int v10; // edx
  int *v11; // esi
  int result; // eax
  _DWORD *v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // [esp-Ch] [ebp-38h]
  unsigned int v16; // [esp-8h] [ebp-34h]
  int v17; // [esp-8h] [ebp-34h]
  int v18; // [esp-4h] [ebp-30h]
  int v19; // [esp+8h] [ebp-24h]
  int v20; // [esp+8h] [ebp-24h]
  _WORD v21[11]; // [esp+16h] [ebp-16h] BYREF

  *(_DWORD *)&v21[1] = __readgsdword(0x14u);
  v3 = a1[2];
  v4 = *(_DWORD *)(v3 + 196);
  v5 = (unsigned int *)(v4 + 40 * *(_DWORD *)(v3 + 200) - 40);
  v6 = a3;
  do
  {
    if ( (unsigned int)v5 < v4 )
      return -1;
    v7 = *v5;
    v5 -= 10;
  }
  while ( v7 >= a3 );
  v8 = v5[11];
  if ( v8 <= a3 )
    v6 = v5[11];
  if ( v6 == -1 )
    return -1;
  v9 = v8 <= a2;
  v10 = v7;
  if ( !v9 )
    v10 = a2;
  if ( v7 > a2 )
    v10 = v7;
  v19 = v10;
  if ( (*(int (__cdecl **)(int, unsigned int, char *, int, _DWORD))(*(_DWORD *)a1[2] + 144))(
         a1[2],
         v10,
         (char *)v21 + 1,
         1,
         0) != 1 )
  {
    v18 = v6;
    v11 = a1;
    sub_8A3F0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", v19, v18);
LABEL_16:
    while ( 1 )
    {
      v13 = (_DWORD *)v11[2];
      if ( (unsigned int)v5 < v13[49] || v5[1] <= a2 )
        break;
      v20 = v5[1];
      v14 = *v5;
      if ( *v5 <= a2 )
        v14 = a2;
      if ( (*(int (__cdecl **)(_DWORD *, unsigned int, _WORD *, int, _DWORD))(*v13 + 144))(v13, v14, v21, 1, 0) == 1 )
      {
        v15 = v14;
        v11 = a1;
        result = (*(int (__cdecl **)(int *, unsigned int, int))(*a1 + 12))(a1, v15, v20);
        if ( result != -1 )
          return result;
        v5 -= 10;
      }
      else
      {
        v17 = v14;
        v11 = a1;
        sub_8A3F0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", v17, v20);
        v5 -= 10;
      }
    }
    return -1;
  }
  v16 = v6;
  v11 = a1;
  result = (*(int (__cdecl **)(int *, int, unsigned int))(*a1 + 12))(a1, v19, v16);
  if ( result == -1 )
    goto LABEL_16;
  return result;
}
