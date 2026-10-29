/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67A40
// Address: 0x00067A40

//----- (00067A40) --------------------------------------------------------
int __cdecl sub_67A40(void **a1, int a2, char *a3)
{
  void *v3; // edx
  int v4; // eax
  char *v5; // edi
  int v6; // esi
  int v8; // [esp+1Ch] [ebp-30h]
  int v9; // [esp+1Ch] [ebp-30h]
  int v10; // [esp+20h] [ebp-2Ch] BYREF
  void *v11; // [esp+24h] [ebp-28h]
  int v12; // [esp+28h] [ebp-24h]
  int v13; // [esp+2Ch] [ebp-20h]
  int v14; // [esp+30h] [ebp-1Ch]
  unsigned int v15; // [esp+38h] [ebp-14h]

  v15 = __readgsdword(0x14u);
  LOBYTE(v10) = 2;
  v12 = 0;
  v11 = nullptr;
  v14 = 0;
  v13 = 0;
  copy_idcv((char *)&v10, a3);
  v3 = *a1;
  v4 = (int)a1[1];
  v5 = (char *)*a1;
  if ( (unsigned int)a1[2] < v4 + 1 )
  {
    v8 = (int)*a1;
    v5 = (char *)qvector_reserve((int)a1, v3, v4 + 1, 0x14u);
    *a1 = v5;
    v4 = (int)a1[1];
    v3 = (void *)v8;
  }
  v6 = a2 - (_DWORD)v3;
  v9 = (int)&v5[a2 - (_DWORD)v3];
  memmove((void *)(v9 + 20), (const void *)v9, 20 * v4 - (a2 - (_DWORD)v3));
  v5[v6] = 2;
  *(_DWORD *)&v5[v6 + 8] = 0;
  *(_DWORD *)&v5[v6 + 4] = 0;
  *(_DWORD *)&v5[v6 + 16] = 0;
  *(_DWORD *)&v5[v6 + 12] = 0;
  copy_idcv((char *)v9, (char *)&v10);
  a1[1] = (char *)a1[1] + 1;
  if ( (char)v10 == 5 )
  {
    sub_59680(v11, (char *)&v10);
  }
  else if ( (char)v10 == 7 && v11 )
  {
    v12 = 0;
    qfree(v11);
    v11 = nullptr;
    v13 = 0;
  }
  return v9;
}
