/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80ADB80
// Address: 0x080ADB80

//----- (080ADB80) --------------------------------------------------------
int __cdecl sub_80ADB80(int a1, char **a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // eax
  size_t v10; // ecx
  int *v11; // esi
  int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // eax
  char *v15; // ecx
  int v16; // esi
  char *v18; // edx
  int *v19; // [esp-40h] [ebp-40h]
  const void **v20; // [esp-40h] [ebp-40h]
  size_t v21; // [esp-34h] [ebp-34h]
  _DWORD *v22; // [esp-34h] [ebp-34h]
  int v23; // [esp-24h] [ebp-24h] BYREF
  unsigned int v24; // [esp-20h] [ebp-20h]

  v6 = *(unsigned __int16 *)(a1 + 4);
  v24 = __readgsdword(0x14u);
  v7 = *(_DWORD **)a6;
  v8 = *(_DWORD *)a6 + 4 * *(_DWORD *)(a6 + 4);
  if ( *(_DWORD *)a6 == v8 )
    goto LABEL_27;
  while ( v6 != *v7 )
  {
    if ( (_DWORD *)v8 == ++v7 )
      goto LABEL_27;
  }
  if ( (_DWORD *)v8 == v7 )
  {
LABEL_27:
    v16 = -1;
    sub_8058290();
    goto LABEL_18;
  }
  v9 = (*(int (__cdecl **)(_DWORD))(*(_DWORD *)*a4 + 8))(*a4);
  v10 = *(_DWORD *)(v9 + 4);
  v19 = nullptr;
  v11 = &dword_80DDFD8;
  if ( v10 )
  {
    v20 = (const void **)v9;
    v21 = *(_DWORD *)(v9 + 4);
    v11 = (int *)sub_80CF8B0(v10);
    memcpy(v11, *v20, v21);
    v19 = v11;
  }
  v22 = sub_80CD4D0((int)v11, 0);
  if ( v22 )
  {
    v12 = a4[13] + 100 * *(unsigned __int16 *)(a1 + 4);
    sub_80CD730((int)v22, *(_QWORD *)(v12 + 32), 0);
    v13 = *(_DWORD *)(v12 + 8);
    v14 = (unsigned int)a2[1];
    if ( v14 < v13 )
    {
      v18 = *a2;
      if ( (unsigned int)a2[2] < v13 )
      {
        v18 = (char *)sub_80CF920((int)a2, v18, v13, 1u);
        *a2 = v18;
        v14 = (unsigned int)a2[1];
      }
      memset(&v18[v14], 0, v13 - v14);
      a2[1] = (char *)v13;
    }
    else if ( v13 != v14 )
    {
      a2[1] = (char *)v13;
    }
    v15 = *a2;
    if ( (*(_DWORD *)(v12 + 56) & 0x800LL) != 0 )
    {
      if ( sub_80AD860((int)v22, v12, v15, &v23) && *(_DWORD *)(v12 + 8) )
        goto LABEL_14;
    }
    else if ( sub_80CD690((int)v22, v15, *(_DWORD *)(v12 + 8)) != *(_DWORD *)(v12 + 8) )
    {
LABEL_14:
      sub_8058290();
      v16 = -1;
LABEL_15:
      sub_80CD620(v22);
      goto LABEL_16;
    }
    v16 = 0;
    goto LABEL_15;
  }
  sub_8058290();
  v16 = -1;
LABEL_16:
  if ( v19 )
    sub_80CF780(v19);
LABEL_18:
  if ( v24 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v16;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
