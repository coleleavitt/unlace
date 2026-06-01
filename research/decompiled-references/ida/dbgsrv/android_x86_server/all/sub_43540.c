/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43540
// Address: 0x00043540

//----- (00043540) --------------------------------------------------------
unsigned int __cdecl sub_43540(int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  void *v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // edi
  int v8; // esi
  unsigned int v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // edi
  int v12; // esi
  unsigned int v13; // edi
  void *v15[3]; // [esp+20h] [ebp-5Ch] BYREF
  void *v16; // [esp+2Ch] [ebp-50h]
  int v17; // [esp+30h] [ebp-4Ch]
  int v18; // [esp+34h] [ebp-48h]
  unsigned int v19; // [esp+68h] [ebp-14h]

  v19 = __readgsdword(0x14u);
  v3 = a1[1];
  if ( v3 > a2 )
  {
    sub_41610(a1, a2);
    return __readgsdword(0x14u);
  }
  if ( v3 >= a2 )
    return __readgsdword(0x14u);
  v4 = (void *)*a1;
  v5 = a1[2];
  if ( *a1 > a3 || (unsigned int)v4 + 68 * v5 <= a3 )
  {
    if ( v5 >= a2 )
    {
      v9 = a1[1];
      if ( v9 >= a2 )
      {
LABEL_22:
        a1[1] = a2;
        return __readgsdword(0x14u);
      }
    }
    else
    {
      v4 = qvector_reserve((int)a1, v4, a2, 0x44u);
      *a1 = (int)v4;
      v9 = a1[1];
      if ( v9 >= a2 )
        goto LABEL_22;
    }
    v10 = v9 << 6;
    v11 = v9;
    sub_42790((int)v4 + 68 * v9, a3);
    if ( v11 + 1 != a2 )
    {
      v12 = v10 + 4 * v11 + 68;
      v13 = a2 - 1 - v11;
      do
      {
        sub_42790(v12 + *a1, a3);
        v12 += 68;
        --v13;
      }
      while ( v13 );
    }
    goto LABEL_22;
  }
  sub_42790((int)v15, a3);
  if ( a1[2] < a2 )
    *a1 = (int)qvector_reserve((int)a1, (void *)*a1, a2, 0x44u);
  v6 = a1[1];
  if ( v6 < a2 )
  {
    v7 = a2 - v6;
    v8 = 68 * v6;
    do
    {
      sub_42790(v8 + *a1, (int)v15);
      v8 += 68;
      --v7;
    }
    while ( v7 );
  }
  a1[1] = a2;
  if ( v16 )
  {
    v17 = 0;
    qfree(v16);
    v16 = nullptr;
    v18 = 0;
  }
  if ( v15[0] )
  {
    v15[1] = nullptr;
    qfree(v15[0]);
    v15[0] = nullptr;
    v15[2] = nullptr;
  }
  return __readgsdword(0x14u);
}
