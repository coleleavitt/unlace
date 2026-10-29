/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407670
// Address: 0x00407670

//----- (00407670) --------------------------------------------------------
char __userpurge sub_407670@<al>(int a1@<ecx>, __m128i a2@<xmm0>, const __m128i *a3, const char *a4)
{
  unsigned int v5; // kr00_4
  const __m128i *v6; // eax
  bool v7; // zf
  const char *v8; // ebx
  __m128i *v9; // eax
  const char *v10; // ecx
  unsigned int v11; // edi
  int v12; // esi
  void *v13; // eax
  unsigned int v14; // esi
  int v15; // edi
  void *v16; // eax
  unsigned int v17; // esi
  int v18; // edi
  void *v19; // eax
  int v20; // ebx
  void *v21; // esi
  unsigned int v22; // edx
  unsigned int v23; // ecx
  char v24; // bl
  void *v26; // [esp+10h] [ebp-28h] BYREF
  unsigned int v27; // [esp+14h] [ebp-24h]
  unsigned int v28; // [esp+18h] [ebp-20h]
  int v29; // [esp+1Ch] [ebp-1Ch]
  unsigned int v30; // [esp+20h] [ebp-18h]
  const __m128i *v31; // [esp+24h] [ebp-14h]
  __m128i *v32; // [esp+28h] [ebp-10h]
  int v33; // [esp+34h] [ebp-4h]

  v29 = a1;
  v26 = nullptr;
  v27 = 0;
  v28 = 0;
  v33 = 0;
  v5 = strlen(a3->m128i_i8);
  v6 = (const __m128i *)MultiByteStr;
  v7 = *(_DWORD *)(a1 + 4) == 0;
  v30 = v5;
  if ( !v7 )
    v6 = *(const __m128i **)a1;
  v31 = v6;
  v8 = (const char *)v6;
  v9 = sub_464A10(a2, v6, a3);
  v32 = v9;
  if ( !v9 )
    goto LABEL_23;
  v10 = a4;
  do
  {
    v11 = (char *)v9 - v8;
    if ( v9 != (__m128i *)v8 )
    {
      v12 = v27 != 0 ? v27 - 1 : 0;
      if ( v11 + v12 + 1 <= v28 )
      {
        v13 = v26;
      }
      else
      {
        v13 = sub_453B00((int)&v26, v26, v11 + v12 + 1, 1u);
        v26 = v13;
      }
      v27 = v11 + v12 + 1;
      *((_BYTE *)v13 + v12 + v11) = 0;
      sub_464310((unsigned int)v26 + v12, (unsigned int)v8, v11);
      v10 = a4;
    }
    if ( v10 )
    {
      v14 = strlen(v10);
      v15 = v27 != 0 ? v27 - 1 : 0;
      if ( v14 + v15 + 1 <= v28 )
      {
        v16 = v26;
      }
      else
      {
        v16 = sub_453B00((int)&v26, v26, v14 + v15 + 1, 1u);
        v10 = a4;
        v26 = v16;
      }
      v27 = v14 + v15 + 1;
      *((_BYTE *)v16 + v15 + v14) = 0;
      sub_464310((unsigned int)v26 + v15, (unsigned int)v10, v14);
    }
    v8 = &v32->m128i_i8[v30];
    v9 = sub_464A10(a2, (__m128i *)((char *)v32 + v30), a3);
    v10 = a4;
    v32 = v9;
  }
  while ( v9 );
  if ( v8 == (const char *)v31 )
  {
LABEL_23:
    v21 = v26;
    v24 = 0;
  }
  else
  {
    if ( *v8 )
    {
      v17 = strlen(v8);
      v18 = v27 != 0 ? v27 - 1 : 0;
      if ( v17 + v18 + 1 <= v28 )
      {
        v19 = v26;
      }
      else
      {
        v19 = sub_453B00((int)&v26, v26, v17 + v18 + 1, 1u);
        v26 = v19;
      }
      v27 = v17 + v18 + 1;
      *((_BYTE *)v19 + v18 + v17) = 0;
      sub_464310((unsigned int)v26 + v18, (unsigned int)v8, v17);
    }
    v20 = v29;
    v21 = *(void **)v29;
    v22 = *(_DWORD *)(v29 + 4);
    v23 = *(_DWORD *)(v29 + 8);
    *(_DWORD *)v29 = v26;
    *(_DWORD *)(v20 + 4) = v27;
    *(_DWORD *)(v20 + 8) = v28;
    v24 = 1;
    v26 = v21;
    v27 = v22;
    v28 = v23;
  }
  v33 = 2;
  if ( v21 )
  {
    v27 = 0;
    sub_453A20(v21);
  }
  return v24;
}
