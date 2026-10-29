/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E170
// Address: 0x0007E170

//----- (0007E170) --------------------------------------------------------
int __cdecl sub_7E170(int a1, int a2, int *a3, unsigned int *a4, unsigned int *a5)
{
  int result; // eax
  unsigned int v6; // eax
  _BYTE *v7; // ecx
  bool v8; // zf
  unsigned int v9; // eax
  _BYTE *v10; // ecx
  int v11; // edi
  int v12; // edx
  int v13; // edi
  __int16 v14; // ax
  char *v15; // [esp+8h] [ebp-24h]
  int v16; // [esp+8h] [ebp-24h]
  char *v17; // [esp+Ch] [ebp-20h]
  int v18; // [esp+Ch] [ebp-20h]
  int v19; // [esp+10h] [ebp-1Ch] BYREF
  __int16 v20; // [esp+14h] [ebp-18h]
  unsigned int v21; // [esp+18h] [ebp-14h]

  v21 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 96) )
    sub_1C900();
  if ( a2 == 16777218 )
  {
    v9 = a5[1];
    v10 = (_BYTE *)*a5;
    while ( (unsigned int)v10 < v9 )
    {
      v8 = *v10++ == 0;
      if ( v8 )
      {
        v15 = (char *)*a5;
        *a5 = (unsigned int)v10;
        goto LABEL_18;
      }
    }
    v15 = nullptr;
LABEL_18:
    v18 = unpack_dd(a5, v9);
    v13 = unpack_dd(a5, a5[1]);
    if ( *(_BYTE *)(a1 + 96) )
      sub_1C900();
    v14 = unpack_dw((unsigned __int8 **)a5, a5[1]);
    v19 = (int)&off_13842C;
    v20 = v14;
    return sub_7E350(
             (int (__cdecl ***)(_DWORD, int *, int, _DWORD **, int *, int *))&v19,
             a1,
             a3,
             a4,
             v15,
             v18,
             v13 != 0);
  }
  else
  {
    result = -1;
    if ( a2 == 16777217 )
    {
      v6 = a5[1];
      v7 = (_BYTE *)*a5;
      while ( (unsigned int)v7 < v6 )
      {
        v8 = *v7++ == 0;
        if ( v8 )
        {
          v17 = (char *)*a5;
          *a5 = (unsigned int)v7;
          goto LABEL_14;
        }
      }
      v17 = nullptr;
LABEL_14:
      v16 = unpack_dd(a5, v6);
      v11 = unpack_dd(a5, a5[1]);
      v12 = a1;
      if ( *(_BYTE *)(a1 + 96) )
      {
        sub_1C900();
        v12 = a1;
      }
      v19 = (int)&off_138420;
      return sub_7E350(
               (int (__cdecl ***)(_DWORD, int *, int, _DWORD **, int *, int *))&v19,
               v12,
               a3,
               a4,
               v17,
               v16,
               v11 != 0);
    }
  }
  return result;
}
// 138420: using guessed type int (__cdecl *off_138420)(int, int, int, int, int, int);
// 13842C: using guessed type int (__cdecl *off_13842C)(int, int, int, int, int, int);
