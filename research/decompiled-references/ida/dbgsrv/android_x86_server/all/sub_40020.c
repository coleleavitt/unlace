/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40020
// Address: 0x00040020

//----- (00040020) --------------------------------------------------------
int __cdecl sub_40020(void **a1, int a2, int a3)
{
  void *v3; // ecx
  void *v4; // edi
  void *v5; // eax
  void *v6; // esi
  int v7; // esi
  void *v9[3]; // [esp+10h] [ebp-5Ch] BYREF
  void *v10; // [esp+1Ch] [ebp-50h]
  int v11; // [esp+20h] [ebp-4Ch]
  int v12; // [esp+24h] [ebp-48h]
  unsigned int v13; // [esp+58h] [ebp-14h]

  v13 = __readgsdword(0x14u);
  sub_42790((int)v9, a3);
  v3 = *a1;
  v4 = a1[1];
  v5 = *a1;
  if ( a1[2] < (char *)v4 + 1 )
  {
    v6 = *a1;
    v5 = qvector_reserve((int)a1, v3, (unsigned int)v4 + 1, 0x44u);
    *a1 = v5;
    v4 = a1[1];
    v3 = v6;
  }
  v7 = (int)v5 + a2 - (_DWORD)v3;
  memmove((void *)(v7 + 68), (const void *)v7, 68 * (_DWORD)v4 - (a2 - (_DWORD)v3));
  sub_42790(v7, (int)v9);
  a1[1] = (char *)a1[1] + 1;
  if ( v10 )
  {
    v11 = 0;
    qfree(v10);
    v10 = nullptr;
    v12 = 0;
  }
  if ( v9[0] )
  {
    v9[1] = nullptr;
    qfree(v9[0]);
    v9[0] = nullptr;
    v9[2] = nullptr;
  }
  return v7;
}
