/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8082CB0
// Address: 0x08082CB0

//----- (08082CB0) --------------------------------------------------------
unsigned int __cdecl sub_8082CB0(_DWORD *a1, int a2, int a3, const char **a4)
{
  int v4; // eax
  char *v5; // eax
  int v6; // edx
  int (*v7)(); // eax
  char *v8; // ecx
  int (*v10)(); // eax
  int v11; // [esp+4h] [ebp-24h]
  char *s; // [esp+8h] [ebp-20h]

  v4 = a1[11];
  a1[24] = a1[16];
  s = (char *)*a4;
  v11 = v4 + 24 * a3;
  v5 = strstr(*a4, *(const char **)(v11 + 12));
  if ( v5 )
  {
    v6 = *(_DWORD *)(v11 + 16);
    if ( v6 )
      v5 = &v5[v6 - 1];
    *a4 = v5;
    v7 = *(int (**)())(*(_DWORD *)a2 + 20);
    if ( v7 != nullsub_8 )
      ((void (__cdecl *)(int, _DWORD))v7)(a2, 0);
    a1[24] = a1[15];
    v8 = (char *)*a4;
  }
  else
  {
    v8 = &s[strlen(s)];
    *a4 = v8;
    v10 = *(int (**)())(*(_DWORD *)a2 + 20);
    if ( v10 != nullsub_8 )
    {
      ((void (__cdecl *)(int, int))v10)(a2, a3 + 1);
      v8 = (char *)*a4;
    }
  }
  return sub_8082980((int)a1, a2, v8, a1[16]);
}
// 80828F0: using guessed type int nullsub_8();
