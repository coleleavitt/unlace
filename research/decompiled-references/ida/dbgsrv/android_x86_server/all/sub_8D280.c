/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D280
// Address: 0x0008D280

//----- (0008D280) --------------------------------------------------------
int __cdecl sub_8D280(int a1, char **a2, int a3, unsigned int a4)
{
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // edx
  char *v7; // eax
  char *v8; // ecx
  char v10; // [esp+7h] [ebp-15h] BYREF
  unsigned int v11; // [esp+8h] [ebp-14h]

  v4 = a4;
  v5 = a1;
  v11 = __readgsdword(0x14u);
  a2[1] = nullptr;
  if ( (*(_BYTE *)(a1 + 352) & 0x10) != 0 )
  {
    v10 = 0;
    sub_43860(a2, a4, &v10);
  }
  else
  {
    v6 = a3;
    if ( a4 )
    {
      if ( (unsigned int)a2[2] >= a4 )
      {
        v7 = *a2;
        v8 = nullptr;
      }
      else
      {
        v7 = (char *)qvector_reserve((int)a2, *a2, a4, 1u);
        *a2 = v7;
        v8 = a2[1];
      }
      memset(&v7[(_DWORD)v8], 0, a4 - (_DWORD)v8);
      a2[1] = (char *)a4;
      v5 = a1;
      v6 = a3;
    }
    if ( (*(int (__cdecl **)(int, int, char *, unsigned int, _DWORD))(*(_DWORD *)v5 + 144))(v5, v6, *a2, a4, 0) <= 0 )
      return -1;
  }
  return v4;
}
