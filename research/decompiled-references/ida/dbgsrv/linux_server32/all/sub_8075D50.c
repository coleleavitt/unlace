/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8075D50
// Address: 0x08075D50

//----- (08075D50) --------------------------------------------------------
int __cdecl sub_8075D50(_DWORD *a1)
{
  _DWORD *v1; // eax
  size_t v2; // edx
  unsigned int v3; // ecx
  char *v4; // edi
  int v5; // edx
  char *v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  char *v9; // eax
  void *v10; // edx
  int v11; // edx
  int v12; // edi
  void *v13; // eax
  int v14; // edx
  void *v15; // eax
  __int64 v17; // xmm0_8
  void *v18; // edi
  char *v19; // eax
  void *v20; // eax
  int v21; // eax
  size_t n; // [esp+34h] [ebp-40h]
  unsigned int v23; // [esp+38h] [ebp-3Ch]
  __int64 v24; // [esp+3Ch] [ebp-38h]
  int v25; // [esp+44h] [ebp-30h]
  void *ptr; // [esp+4Ch] [ebp-28h] BYREF
  __int64 v27; // [esp+50h] [ebp-24h]
  unsigned int v28; // [esp+58h] [ebp-1Ch]

  v28 = __readgsdword(0x14u);
  v1 = *(_DWORD **)(a1[47] + 4 * a1[48] - 4);
  if ( *v1 != 1 )
  {
    ptr = nullptr;
    v2 = 0;
    v3 = 1;
    v27 = 0;
    v25 = (int)(a1 + 22);
    v4 = "";
LABEL_3:
    n = v2;
    v23 = v3;
    LODWORD(v24) = &ptr;
    ptr = sub_80CF920((int)&ptr, nullptr, v3, 1u);
    LODWORD(v27) = v23;
    memmove(ptr, v4, n);
    *((_BYTE *)ptr + n) = 0;
    goto LABEL_4;
  }
  v21 = v1[2];
  v4 = (char *)&qword_811CFF4 - 258076;
  if ( *(_DWORD *)(v21 + 4) )
    v4 = *(char **)v21;
  ptr = nullptr;
  v25 = (int)(a1 + 22);
  v27 = 0;
  LODWORD(v24) = &ptr;
  if ( v4 )
  {
    v2 = strlen(v4);
    v3 = v2 + 1;
    goto LABEL_3;
  }
LABEL_4:
  v5 = a1[23];
  v6 = (char *)a1[22];
  v7 = a1[24];
  v8 = v5 + 1;
  if ( (unsigned int)v24 >= (unsigned int)v6 && (unsigned int)v24 < (unsigned int)&v6[12 * v7] )
  {
    v17 = v27;
    v18 = ptr;
    v27 = 0;
    ptr = nullptr;
    if ( v7 < v8 )
    {
      v24 = v17;
      v6 = (char *)sub_80CF920(v25, v6, v5 + 1, 0xCu);
      v5 = a1[23];
      a1[22] = v6;
    }
    v19 = &v6[12 * v5];
    *(_DWORD *)v19 = v18;
    *(_QWORD *)(v19 + 4) = v17;
    v20 = ptr;
    ++a1[23];
    if ( v20 )
    {
      LODWORD(v27) = 0;
      sub_80CF780(v20);
    }
  }
  else
  {
    if ( v7 < v8 )
    {
      v6 = (char *)sub_80CF920(v25, v6, v5 + 1, 0xCu);
      v5 = a1[23];
      a1[22] = v6;
    }
    v9 = &v6[12 * v5];
    v10 = ptr;
    *(_QWORD *)(v9 + 4) = v27;
    *(_DWORD *)v9 = v10;
    ++a1[23];
  }
  v11 = a1[36];
  v12 = a1[28];
  v13 = (void *)a1[35];
  if ( a1[37] < (unsigned int)(v11 + 1) )
  {
    v13 = sub_80CF920((int)(a1 + 35), v13, v11 + 1, 4u);
    v11 = a1[36];
    a1[35] = v13;
  }
  *((_DWORD *)v13 + v11) = v12;
  v14 = a1[45];
  ++a1[36];
  v15 = (void *)a1[44];
  if ( a1[46] < (unsigned int)(v14 + 1) )
  {
    v15 = sub_80CF920((int)(a1 + 44), v15, v14 + 1, 2u);
    v14 = a1[45];
    a1[44] = v15;
  }
  *((_WORD *)v15 + v14) = 0;
  ++a1[45];
  if ( v28 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
