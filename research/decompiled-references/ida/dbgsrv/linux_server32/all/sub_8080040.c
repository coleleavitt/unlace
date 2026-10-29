/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8080040
// Address: 0x08080040

//----- (08080040) --------------------------------------------------------
unsigned int __cdecl sub_8080040(_DWORD *a1, int a2, int a3)
{
  int v3; // esi
  const void **v4; // edx
  _DWORD *v5; // edi
  int v6; // eax
  const char *v7; // ecx
  const char *v8; // ebx
  unsigned int v9; // edx
  char *v10; // edi
  unsigned int v11; // ecx
  __int64 v12; // xmm3_8
  char *v13; // esi
  __int64 v14; // xmm1_8
  char *v15; // edi
  unsigned int result; // eax
  int v17; // edx
  int v18; // esi
  _DWORD *v19; // eax
  int v20; // ecx
  char *v21; // edx
  int v22; // ebx
  int v23; // ebx
  __int64 v24; // xmm0_8
  bool v25; // cf
  int v26; // edx
  int v27; // esi
  _DWORD *v28; // eax
  int v29; // ecx
  char *v30; // edx
  int v31; // ebx
  int v32; // ebx
  __int64 v33; // xmm2_8
  void *v34; // ecx
  void *v35; // eax
  const void **v36; // [esp-58h] [ebp-58h]
  unsigned int v37; // [esp-58h] [ebp-58h]
  int v38; // [esp-54h] [ebp-54h]
  void *v39; // [esp-50h] [ebp-50h]
  size_t v40; // [esp-4Ch] [ebp-4Ch]
  int v41; // [esp-4Ch] [ebp-4Ch]
  const char *v42; // [esp-40h] [ebp-40h]
  int v43; // [esp-34h] [ebp-34h] BYREF
  void *v44; // [esp-30h] [ebp-30h]
  __int64 v45; // [esp-2Ch] [ebp-2Ch]
  unsigned int v46; // [esp-20h] [ebp-20h]

  v3 = a1[12];
  v46 = __readgsdword(0x14u);
  v4 = (const void **)a3;
  v40 = *(_DWORD *)(a3 + 4);
  if ( !v3 )
    goto LABEL_7;
  v5 = (_DWORD *)(a1[11] + 16 * (v3 + 0xFFFFFFF));
  v6 = v5[2];
  if ( *(_DWORD *)(a3 + 4) )
  {
    v8 = *(const char **)a3;
    v7 = (char *)&qword_811CFF4 - 258076;
    if ( v6 )
      v7 = (const char *)v5[1];
  }
  else
  {
    if ( !v6 )
      goto LABEL_16;
    v7 = (const char *)v5[1];
    v8 = (const char *)&dword_80DDFD8;
  }
  if ( strcmp(v7, v8) )
  {
    v4 = (const void **)a3;
    if ( *v5 != a2 )
    {
LABEL_7:
      v44 = nullptr;
      v45 = 0;
      v38 = (int)(a1 + 11);
      v39 = nullptr;
      v43 = a2;
      if ( v40 )
      {
        v36 = v4;
        HIDWORD(v45) = v40;
        v39 = sub_80CF8B0(v40);
        v44 = v39;
        memcpy(v39, *v36, v40);
        LODWORD(v45) = v40;
        v3 = a1[12];
      }
      v9 = v3 + 1;
      v10 = (char *)a1[11];
      v11 = a1[13];
      if ( &v43 < (int *)v10 || &v43 >= (int *)&v10[16 * v11] )
      {
        if ( v11 < v9 )
        {
          v41 = a1[13];
          v10 = (char *)sub_80CF920(v38, nullptr, v3 + 1, 0x10u);
          v17 = a1[12];
          v18 = a1[13];
          a1[13] = v41;
          v19 = (_DWORD *)a1[11];
          v20 = v17 - 1;
          if ( v17 - 1 >= 0 )
          {
            v21 = v10;
            do
            {
              v22 = *v19;
              v21 += 16;
              v19 += 4;
              *((_DWORD *)v21 - 4) = v22;
              v23 = *(v19 - 3);
              v24 = *((_QWORD *)v19 - 1);
              *(v19 - 3) = 0;
              *((_DWORD *)v21 - 3) = v23;
              *((_QWORD *)v21 - 1) = v24;
              *(v19 - 1) = 0;
              v25 = v20-- == 0;
            }
            while ( !v25 );
            v19 = (_DWORD *)a1[11];
          }
          sub_80CF780(v19);
          a1[13] = v18;
          v3 = a1[12];
          a1[11] = v10;
        }
        v14 = v45;
        v15 = &v10[16 * v3];
        *(_DWORD *)v15 = a2;
        *((_QWORD *)v15 + 1) = v14;
        *((_DWORD *)v15 + 1) = v39;
      }
      else
      {
        v12 = v45;
        v44 = nullptr;
        v45 = 0;
        if ( v11 < v9 )
        {
          v37 = v11;
          v10 = (char *)sub_80CF920(v38, nullptr, v3 + 1, 0x10u);
          v26 = a1[12];
          v27 = a1[13];
          a1[13] = v37;
          v28 = (_DWORD *)a1[11];
          v29 = v26 - 1;
          if ( v26 - 1 >= 0 )
          {
            v30 = v10;
            do
            {
              v31 = *v28;
              v30 += 16;
              v28 += 4;
              *((_DWORD *)v30 - 4) = v31;
              v32 = *(v28 - 3);
              v33 = *((_QWORD *)v28 - 1);
              *(v28 - 3) = 0;
              *((_DWORD *)v30 - 3) = v32;
              *((_QWORD *)v30 - 1) = v33;
              *(v28 - 1) = 0;
              v25 = v29-- == 0;
            }
            while ( !v25 );
            v28 = (_DWORD *)a1[11];
          }
          sub_80CF780(v28);
          a1[13] = v27;
          v3 = a1[12];
          a1[11] = v10;
        }
        v13 = &v10[16 * v3];
        *(_DWORD *)v13 = a2;
        *((_QWORD *)v13 + 1) = v12;
        *((_DWORD *)v13 + 1) = v39;
      }
      ++a1[12];
      goto LABEL_16;
    }
    if ( v5 + 1 != (_DWORD *)a3 )
    {
      if ( v40 > 1 )
      {
        v34 = (void *)v5[1];
        v42 = *(const char **)a3;
        if ( v5[3] < v40 )
        {
          v35 = sub_80CF920((int)(v5 + 1), v34, v40, 1u);
          v5[1] = v35;
          v34 = v35;
        }
        v5[2] = v40;
        memmove(v34, v42, v40 - 1);
        *(_BYTE *)(v5[1] + v40 - 1) = 0;
      }
      else
      {
        v5[2] = 0;
      }
    }
  }
LABEL_16:
  result = v46 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
