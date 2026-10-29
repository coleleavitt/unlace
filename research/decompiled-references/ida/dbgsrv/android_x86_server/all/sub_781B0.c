/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_781B0
// Address: 0x000781B0

//----- (000781B0) --------------------------------------------------------
int __cdecl sub_781B0(int *a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v3; // ecx
  int *v4; // edi
  int *v5; // edx
  unsigned int v6; // esi
  int result; // eax
  int *v8; // edi
  _DWORD *v9; // ecx
  unsigned int v10; // esi
  int v11; // [esp+Ch] [ebp-20h]
  int v12; // [esp+Ch] [ebp-20h]
  _WORD v13[11]; // [esp+16h] [ebp-16h] BYREF

  *(_DWORD *)&v13[1] = __readgsdword(0x14u);
  v3 = (_DWORD *)a1[2];
  v4 = (int *)v3[49];
  v5 = &v4[10 * v3[50]];
  if ( v4 < v5 )
  {
    while ( *v4 <= a2 )
    {
      v6 = v4[1];
      if ( v6 > a2 )
      {
        v11 = a2;
        goto LABEL_9;
      }
      v4 += 10;
      if ( v4 >= v5 )
        break;
    }
  }
  result = -1;
  if ( v4 != v5 )
  {
    v11 = *v4;
    if ( *v4 < a3 )
    {
      v6 = v4[1];
LABEL_9:
      if ( v6 > a3 )
        v6 = a3;
      if ( (*(int (__cdecl **)(_DWORD *, int, char *, int, _DWORD))(*v3 + 144))(v3, v11, (char *)v13 + 1, 1, 0) == 1 )
      {
        result = (*(int (__cdecl **)(int *, int, unsigned int))(*a1 + 12))(a1, v11, v6);
        if ( result != -1 )
          return result;
      }
      else
      {
        sub_8A3F0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", v11, v6);
      }
      v8 = v4 + 10;
      do
      {
        v9 = (_DWORD *)a1[2];
        result = -1;
        if ( (unsigned int)v8 >= v9[49] + 40 * v9[50] )
          break;
        v10 = v8[1];
        if ( v10 > a3 )
          break;
        v12 = *v8;
        if ( (*(int (__cdecl **)(_DWORD *, int, _WORD *, int, _DWORD))(*v9 + 144))(v9, *v8, v13, 1, 0) == 1 )
        {
          result = (*(int (__cdecl **)(int *, int, unsigned int))(*a1 + 12))(a1, v12, v10);
        }
        else
        {
          sub_8A3F0(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", v12, v10);
          result = -1;
        }
        v8 += 10;
      }
      while ( result == -1 );
    }
  }
  return result;
}
