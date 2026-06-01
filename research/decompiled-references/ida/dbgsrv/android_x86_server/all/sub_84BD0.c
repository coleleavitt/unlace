/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84BD0
// Address: 0x00084BD0

//----- (00084BD0) --------------------------------------------------------
char *__cdecl sub_84BD0(void **a1, int a2, int *a3)
{
  void *v3; // eax
  void *v4; // edx
  char *v5; // esi
  int v6; // edi
  void *v8; // [esp+Ch] [ebp-20h]
  char *v9; // [esp+Ch] [ebp-20h]
  int v10; // [esp+10h] [ebp-1Ch]
  int v11; // [esp+14h] [ebp-18h]
  int v12; // [esp+18h] [ebp-14h]

  v10 = *a3;
  v12 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v11 = a3[2];
  a3[2] = 0;
  v3 = a1[1];
  v4 = *a1;
  v5 = (char *)*a1;
  if ( a1[2] < (char *)v3 + 1 )
  {
    v8 = *a1;
    v5 = (char *)qvector_reserve((int)a1, v4, (unsigned int)v3 + 1, 0xCu);
    *a1 = v5;
    v3 = a1[1];
    v4 = v8;
  }
  v6 = a2 - (_DWORD)v4;
  v9 = &v5[a2 - (_DWORD)v4];
  memmove(v9 + 12, v9, 12 * (_DWORD)v3 - (a2 - (_DWORD)v4));
  *(_DWORD *)&v5[v6] = v10;
  *(_DWORD *)&v5[v6 + 4] = v12;
  *(_DWORD *)&v5[v6 + 8] = v11;
  a1[1] = (char *)a1[1] + 1;
  return v9;
}
