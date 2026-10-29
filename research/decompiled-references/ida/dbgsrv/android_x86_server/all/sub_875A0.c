/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_875A0
// Address: 0x000875A0

//----- (000875A0) --------------------------------------------------------
unsigned int __cdecl sub_875A0(int *a1, int a2)
{
  void *v2; // eax
  char *v3; // edx
  char *v4; // eax
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // esi
  _BOOL4 v8; // edx
  size_t v9; // ecx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rax
  char *v13; // edx
  char *v14; // eax
  unsigned int v15; // ecx
  int v16; // edx
  int *v17; // edi
  int v18; // edx
  char *v19; // edx
  int v20; // edx
  char *v21; // edx
  unsigned int v22; // esi
  unsigned int v23; // ecx
  void **v24; // edi
  char *v25; // eax
  char *v26; // eax
  unsigned int v27; // ecx
  void *v28; // edx
  void **v30; // [esp+Ch] [ebp-30h]
  _BOOL4 v31; // [esp+10h] [ebp-2Ch]
  int v32; // [esp+10h] [ebp-2Ch]
  int v33; // [esp+14h] [ebp-28h]
  size_t v34; // [esp+14h] [ebp-28h]
  char *v35; // [esp+1Ch] [ebp-20h] BYREF
  char v36[25]; // [esp+23h] [ebp-19h] BYREF
  _DWORD v37[6]; // [esp+24h] [ebp-18h] BYREF

  v37[1] = __readgsdword(0x14u);
  if ( *a1 >= -1 )
  {
    v2 = (void *)a1[1];
    if ( v2 )
    {
      a1[2] = 0;
      qfree(v2);
      a1[1] = 0;
      a1[3] = 0;
    }
    *a1 = -2;
  }
  v3 = *(char **)a2;
  v4 = (char *)(*(_DWORD *)a2 + 1);
  if ( (unsigned int)v4 < *(_DWORD *)a2 || (v5 = *(_DWORD *)(a2 + 4), (unsigned int)v4 > v5) )
  {
    v36[0] = 0;
    v7 = 1;
  }
  else
  {
    *(_DWORD *)a2 = v4;
    v6 = (unsigned __int8)*v3;
    v36[0] = v6;
    v7 = 1;
    if ( (v6 & 0x80u) != 0 )
    {
      if ( (v6 & 0xFFFFFFC0) == 0xC0 )
      {
        v8 = (v6 & 0xFFFFFFE0) == 224;
        v9 = v8 + 3;
        v7 = v8 | 4;
      }
      else
      {
        v7 = 2;
        v9 = 1;
      }
      v19 = &v4[v9];
      if ( &v4[v9] >= v4 && (unsigned int)v19 <= v5 )
      {
        *(_DWORD *)a2 = v19;
        memcpy(v37, v4, v9);
      }
    }
  }
  v35 = v36;
  v10 = unpack_dd((unsigned int *)&v35, (unsigned int)&v36[v7]);
  v11 = v10 - 3;
  *a1 = v10 - 3;
  if ( v10 == 1 )
  {
    LODWORD(v12) = sub_878D0((char **)a2);
    *(_QWORD *)(a1 + 1) = v12 - 1;
    return __readgsdword(0x14u);
  }
  if ( !v10 )
    return __readgsdword(0x14u);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  *a1 = v11;
  if ( v11 <= -2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(3216);
    BUG();
  }
  v30 = (void **)(a1 + 1);
  v13 = *(char **)a2;
  v14 = (char *)(*(_DWORD *)a2 + 1);
  if ( (unsigned int)v14 < *(_DWORD *)a2 || (v15 = *(_DWORD *)(a2 + 4), (unsigned int)v14 > v15) )
  {
    v36[0] = 0;
    v18 = 1;
    v17 = a1;
  }
  else
  {
    *(_DWORD *)a2 = v14;
    v16 = (unsigned __int8)*v13;
    v36[0] = v16;
    if ( (v16 & 0x80u) != 0 )
    {
      if ( (v16 & 0xFFFFFFC0) == 0xC0 )
      {
        v31 = (v16 & 0xFFFFFFE0) == 224;
        v33 = v31 + 3;
        v17 = a1;
        v32 = v31 + 4;
        v20 = v33;
      }
      else
      {
        v32 = 2;
        v20 = 1;
        v17 = a1;
      }
      v34 = v20;
      v21 = &v14[v20];
      if ( v21 >= v14 && (unsigned int)v21 <= v15 )
      {
        *(_DWORD *)a2 = v21;
        memcpy(v37, v14, v34);
      }
      v18 = v32;
    }
    else
    {
      v17 = a1;
      v18 = 1;
    }
  }
  v35 = v36;
  v22 = unpack_dd((unsigned int *)&v35, (unsigned int)&v36[v18]);
  v23 = a1[2];
  if ( v23 < v22 )
  {
    if ( v17[3] >= v22 )
    {
      v24 = (void **)(a1 + 1);
      v25 = (char *)*v30;
    }
    else
    {
      v24 = (void **)(a1 + 1);
      v25 = (char *)qvector_reserve((int)v30, *v30, v22, 1u);
      *v30 = v25;
      v23 = a1[2];
    }
    memset(&v25[v23], 0, v22 - v23);
    v24[1] = (void *)v22;
LABEL_40:
    v26 = *(char **)a2;
    v27 = *(_DWORD *)a2 + v22;
    if ( v27 >= *(_DWORD *)a2 && v27 <= *(_DWORD *)(a2 + 4) )
    {
      v28 = *v24;
      *(_DWORD *)a2 = v27;
      memcpy(v28, v26, v22);
    }
    return __readgsdword(0x14u);
  }
  v24 = (void **)(a1 + 1);
  if ( v23 != v22 )
  {
    v36[0] = 0;
    sub_43860((char **)v30, v22, v36);
  }
  if ( v22 )
    goto LABEL_40;
  return __readgsdword(0x14u);
}
// 87781: conditional instruction was optimized away because %0x20.4<2u
// 87641: conditional instruction was optimized away because edx.4<2u
// 87692: variable 'v12' is possibly undefined
// 13E34C: using guessed type int under_debugger;
