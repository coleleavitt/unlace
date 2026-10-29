/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417990
// Address: 0x00417990

//----- (00417990) --------------------------------------------------------
int __userpurge sub_417990@<eax>(__m128i a1@<xmm0>, _DWORD *a2, int a3, int a4, const char *a5, int a6)
{
  int v6; // ebx
  const char *v7; // eax
  int v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  int v12; // ecx
  int v13; // esi
  unsigned int v14; // eax
  char **v15; // esi
  LPVOID v16; // edi
  char *v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // eax
  LPVOID v20; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v21; // [esp+14h] [ebp-18h]
  unsigned int v22; // [esp+18h] [ebp-14h]
  char v23; // [esp+1Ch] [ebp-10h] BYREF
  int v24; // [esp+28h] [ebp-4h]

  v6 = a3 + a2[3];
  v7 = (const char *)a2[5];
  if ( !v7 )
  {
    v20 = nullptr;
    v21 = 0;
    v22 = 0;
    v12 = a2[2];
    v24 = 0;
    if ( *a5 )
      sub_402970(a1, &v20, "%s_%s", v12, a5);
    else
      sub_402970(a1, &v20, "%s_%u", v12, a4);
    v13 = a2[4];
    v14 = *(_DWORD *)(v13 + 4) + 1;
    if ( v14 > *(_DWORD *)(v13 + 8) )
      *(_DWORD *)v13 = sub_453B00(v13, *(void **)v13, v14, 4u);
    *(_DWORD *)(*(_DWORD *)v13 + 4 * (*(_DWORD *)(v13 + 4))++) = v6;
    v15 = (char **)(a2[4] + 12);
    if ( v22 <= v21 || (v16 = v20) != nullptr && v21 && (v16 = sub_453A30(v20, v21)) == nullptr )
      v16 = v20;
    v22 = 0;
    v21 = 0;
    v20 = nullptr;
    v17 = *v15;
    if ( &v23 < *v15 || &v23 >= &v17[4 * (_DWORD)v15[2]] )
    {
      v19 = (unsigned int)(v15[1] + 1);
      if ( v19 > (unsigned int)v15[2] )
      {
        v17 = (char *)sub_453B00((int)v15, v17, v19, 4u);
        *v15 = v17;
      }
      *(_DWORD *)&v17[4 * (_DWORD)v15[1]] = v16;
    }
    else
    {
      v18 = (unsigned int)(v15[1] + 1);
      if ( v18 > (unsigned int)v15[2] )
      {
        v17 = (char *)sub_453B00((int)v15, v17, v18, 4u);
        *v15 = v17;
      }
      *(_DWORD *)&v17[4 * (_DWORD)v15[1]] = v16;
    }
    ++v15[1];
    v24 = 1;
    if ( v20 )
    {
      v21 = 0;
      sub_453A20(v20);
    }
    return 0;
  }
  v8 = strcmp(v7, a5);
  if ( v8 )
    v8 = v8 < 0 ? -1 : 1;
  if ( v8 )
    return 0;
  v9 = a2[4];
  v10 = *(_DWORD *)(v9 + 4) + 1;
  if ( v10 > *(_DWORD *)(v9 + 8) )
    *(_DWORD *)v9 = sub_453B00(v9, *(void **)v9, v10, 4u);
  *(_DWORD *)(*(_DWORD *)v9 + 4 * (*(_DWORD *)(v9 + 4))++) = v6;
  return 1;
}
