/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A2840
// Address: 0x080A2840

//----- (080A2840) --------------------------------------------------------
unsigned int __cdecl sub_80A2840(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // edx
  int *v4; // ecx
  char *v5; // eax
  unsigned int v6; // esi
  int *v7; // esi
  int v8; // eax
  size_t v9; // ebx
  unsigned int v10; // edi
  int *v11; // eax
  void *v12; // ecx
  unsigned int result; // eax
  void *v14; // eax
  void *v15; // eax
  int *v16; // [esp-5Ch] [ebp-5Ch]
  _DWORD *v17; // [esp-50h] [ebp-50h]
  unsigned int v18; // [esp-50h] [ebp-50h]
  int v19; // [esp-40h] [ebp-40h] BYREF
  __int64 v20; // [esp-3Ch] [ebp-3Ch]
  int v21; // [esp-34h] [ebp-34h]
  int v22; // [esp-30h] [ebp-30h] BYREF
  int v23; // [esp-2Ch] [ebp-2Ch]
  int v24; // [esp-28h] [ebp-28h]
  int v25; // [esp-24h] [ebp-24h]
  unsigned int v26; // [esp-20h] [ebp-20h]
  unsigned int v27; // [esp+8h] [ebp+8h]

  v17 = a1;
  v2 = a1[1];
  v26 = __readgsdword(0x14u);
  v3 = a2;
  if ( v2 == a2 )
    goto LABEL_24;
  v19 = -2;
  v4 = &v19;
  v21 = 0;
  v20 = -1;
  if ( a2 < v2 )
  {
    v18 = v2;
    v10 = a2;
    do
    {
      v11 = (int *)(*a1 + 16 * v10);
      if ( *v11 >= -1 )
      {
        v12 = (void *)v11[1];
        if ( v12 )
        {
          v11[2] = 0;
          sub_80CF780(v12);
        }
      }
      ++v10;
    }
    while ( v18 != v10 );
    v17 = a1;
    v3 = a2;
  }
  else
  {
    v5 = (char *)*a1;
    v6 = a1[2];
    if ( (unsigned int)&v19 >= *a1 && &v19 < (int *)&v5[16 * v6] )
    {
      v22 = -2;
      v25 = 0;
      v23 = -1;
      v24 = -1;
      sub_80A2720((int)a1, a2, (int)&v22);
      if ( v22 >= -1 && v23 )
      {
        v24 = 0;
        sub_80CF780((void *)v23);
      }
      goto LABEL_21;
    }
    if ( v6 < a2 )
    {
      v15 = sub_80CF920((int)a1, v5, a2, 0x10u);
      v4 = &v19;
      v3 = a2;
      *a1 = v15;
      v2 = a1[1];
    }
    for ( ; v2 < v3; ++v2 )
    {
      v7 = (int *)(*a1 + 16 * v2);
      *v7 = -2;
      v7[1] = 0;
      v7[2] = 0;
      v7[3] = 0;
      if ( v7 != v4 )
      {
        v8 = v19;
        if ( v19 < -1 )
        {
          *(_QWORD *)(v7 + 1) = v20;
        }
        else
        {
          v7[1] = 0;
          v7[2] = 0;
          v9 = HIDWORD(v20);
          v7[3] = 0;
          if ( v9 )
          {
            v16 = v4;
            v27 = v3;
            v14 = sub_80CF8B0(v9);
            v7[1] = (int)v14;
            v7[3] = v9;
            memcpy(v14, (const void *)v20, v9);
            v8 = v19;
            v3 = v27;
            v7[2] = v9;
            v4 = v16;
          }
        }
        *v7 = v8;
      }
    }
  }
  v17[1] = v3;
LABEL_21:
  if ( v19 >= -1 && (_DWORD)v20 )
  {
    HIDWORD(v20) = 0;
    sub_80CF780((void *)v20);
  }
LABEL_24:
  result = v26 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
