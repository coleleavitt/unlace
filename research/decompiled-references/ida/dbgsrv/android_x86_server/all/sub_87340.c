/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87340
// Address: 0x00087340

//----- (00087340) --------------------------------------------------------
int __cdecl sub_87340(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // edx
  int v7; // edi
  _DWORD *v8; // esi
  int v9; // eax
  size_t v10; // esi
  const void **v11; // edi
  char *v12; // eax
  char *v13; // edi
  char *v14; // esi
  int v15; // edi
  __int64 v16; // rax
  int v17; // edi
  _DWORD *v18; // edx
  unsigned int v19; // esi
  unsigned int v20; // ecx
  char *v21; // eax
  size_t *v22; // esi
  __int64 v24; // [esp-10h] [ebp-3Ch]
  const void *v25; // [esp-Ch] [ebp-38h]
  char *v26; // [esp+8h] [ebp-24h]
  __int64 v27; // [esp+Ch] [ebp-20h]
  char v28; // [esp+17h] [ebp-15h] BYREF
  unsigned int v29; // [esp+18h] [ebp-14h]

  v29 = __readgsdword(0x14u);
  v6 = *(_DWORD *)(a6 + 4);
  v7 = 4 * v6;
  v8 = *(_DWORD **)a6;
  if ( 4 * v6 )
  {
    v8 = *(_DWORD **)a6;
    while ( *v8 != *(unsigned __int16 *)(a1 + 4) )
    {
      ++v8;
      v7 -= 4;
      if ( !v7 )
        goto LABEL_9;
    }
  }
  if ( v8 == (_DWORD *)(*(_DWORD *)a6 + 4 * v6) )
  {
LABEL_9:
    sub_1C900();
    return -1;
  }
  else
  {
    v9 = (*(int (__cdecl **)(_DWORD))(*(_DWORD *)*a4 + 8))(*a4);
    v10 = *(_DWORD *)(v9 + 4);
    if ( v10 )
    {
      v11 = (const void **)v9;
      v12 = (char *)qalloc_or_throw(*(_DWORD *)(v9 + 4));
      v25 = *v11;
      v13 = v12;
      memcpy(v12, v25, v10);
      v14 = v13;
    }
    else
    {
      v14 = nullptr;
      v13 = byte_EF875;
    }
    LODWORD(v16) = open_linput(v13, 0);
    if ( (_DWORD)v16 )
    {
      v26 = v14;
      HIDWORD(v16) = a4[13];
      v17 = 100 * *(unsigned __int16 *)(a1 + 4);
      v27 = v16;
      qlseek(v16, *(_QWORD *)(HIDWORD(v16) + v17 + 32), 0);
      v18 = (_DWORD *)a2;
      v19 = *(_DWORD *)(HIDWORD(v27) + v17 + 8);
      v20 = *(_DWORD *)(a2 + 4);
      if ( v20 >= v19 )
      {
        if ( v20 != v19 )
        {
          v28 = 0;
          sub_43860((char **)a2, v19, &v28);
          v18 = (_DWORD *)a2;
        }
      }
      else
      {
        if ( *(_DWORD *)(a2 + 8) >= v19 )
        {
          v21 = *(char **)a2;
        }
        else
        {
          v21 = (char *)qvector_reserve(a2, *(void **)a2, v19, 1u);
          *(_DWORD *)a2 = v21;
          v20 = *(_DWORD *)(a2 + 4);
        }
        memset(&v21[v20], 0, v19 - v20);
        *(_DWORD *)(a2 + 4) = v19;
        v18 = (_DWORD *)a2;
      }
      v22 = (size_t *)(HIDWORD(v27) + v17 + 8);
      HIDWORD(v24) = *v18;
      LODWORD(v24) = v27;
      v15 = 0;
      if ( qlread(v24, *v22) != *v22 )
      {
        v15 = -1;
        sub_1C900();
      }
      close_linput((void *)v27);
      v14 = v26;
    }
    else
    {
      v15 = -1;
      sub_1C900();
    }
    if ( v14 )
      qfree(v14);
  }
  return v15;
}
