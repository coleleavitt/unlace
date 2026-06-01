/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8096B50
// Address: 0x08096B50

//----- (08096B50) --------------------------------------------------------
int __cdecl sub_8096B50(int *a1, int a2, _BYTE *a3)
{
  char *v3; // edi
  int v4; // edx
  char v5; // al
  int v6; // edx
  int result; // eax
  bool v8; // zf
  __m128i v9; // xmm0
  char *v10; // edx
  void *v11; // edi
  char *v12; // ecx
  void *v13; // eax
  char *v14; // edx
  void *v15; // edi
  char *v16; // ebx
  void *v17; // ecx
  int v18; // [esp+4h] [ebp-40h]
  unsigned int *v19; // [esp+4h] [ebp-40h]
  int v20; // [esp+4h] [ebp-40h]
  void *v21; // [esp+8h] [ebp-3Ch]
  void *v22; // [esp+8h] [ebp-3Ch]
  int v23; // [esp+8h] [ebp-3Ch]
  char v24; // [esp+1Bh] [ebp-29h] BYREF
  void *ptr[3]; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v26; // [esp+28h] [ebp-1Ch]

  v3 = (char *)&dword_80DDFD8;
  v26 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a2 + 4) )
    v3 = *(char **)a2;
  v4 = sub_80940C0((int)a1, v3);
  *a3 = 0;
  if ( !v4 )
    goto LABEL_5;
  v18 = v4;
  v5 = sub_80927B0((int)a1, v4);
  v6 = v18;
  if ( v5 )
    goto LABEL_5;
  v8 = *(_BYTE *)(v18 + 13) == 0;
  memset(ptr, 0, sizeof(ptr));
  if ( v8 )
  {
LABEL_9:
    if ( *(_DWORD *)(v6 + 4) > 1u )
    {
      v19 = (unsigned int *)v6;
      sub_8092550(a1, v6, (int *)ptr);
      a1[10] = a1[8] - 1;
      v9 = _mm_cvtsi32_si128((unsigned int)&dword_80DDFD8);
      if ( v19[1] )
        v9 = _mm_cvtsi32_si128(*v19);
      *(_QWORD *)a1 = _mm_unpacklo_epi32(v9, v9).m128i_u64[0];
    }
    v10 = (char *)ptr[0];
    *a3 = 1;
    if ( v10 )
    {
      v21 = ptr[1];
      if ( ptr[1] )
      {
        v11 = nullptr;
        do
        {
          v12 = &v10[12 * (_DWORD)v11];
          v13 = *(void **)v12;
          if ( *(_DWORD *)v12 )
          {
            *((_DWORD *)v12 + 1) = 0;
            sub_80CF780(v13);
            v10 = (char *)ptr[0];
          }
          v11 = (char *)v11 + 1;
        }
        while ( v21 != v11 );
      }
      ptr[1] = nullptr;
      sub_80CF780(v10);
    }
LABEL_5:
    result = 0;
    goto LABEL_6;
  }
  result = sub_8096690((int)a1, (__int64 *)ptr, (__int64 *)&v24);
  if ( !result && v24 )
  {
    v6 = v18;
    if ( (void *)*(unsigned __int8 *)(v18 + 12) == ptr[1] )
      goto LABEL_9;
    sub_80C7910(0, v3);
    result = sub_80C7880(39);
  }
  v14 = (char *)ptr[0];
  if ( ptr[0] )
  {
    v22 = ptr[1];
    if ( ptr[1] )
    {
      v15 = nullptr;
      do
      {
        v16 = &v14[12 * (_DWORD)v15];
        v17 = *(void **)v16;
        if ( *(_DWORD *)v16 )
        {
          v20 = result;
          *((_DWORD *)v16 + 1) = 0;
          sub_80CF780(v17);
          v14 = (char *)ptr[0];
          result = v20;
        }
        v15 = (char *)v15 + 1;
      }
      while ( v22 != v15 );
    }
    v23 = result;
    ptr[1] = nullptr;
    sub_80CF780(v14);
    result = v23;
  }
LABEL_6:
  if ( v26 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
