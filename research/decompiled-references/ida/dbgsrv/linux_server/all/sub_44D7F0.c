/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D7F0
// Address: 0x000000000044D7F0

//----- (000000000044D7F0) ----------------------------------------------------
__int64 __fastcall sub_44D7F0(__m128i *a1, __int64 a2, _BYTE *a3)
{
  const char *v3; // r13
  bool v4; // zf
  _QWORD *v6; // rax
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 result; // rax
  const char *v12; // rax
  char *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rbx
  char *v16; // rdx
  void *v17; // rax
  char *v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rbx
  char *v21; // rcx
  void *v22; // rdx
  int v23; // [rsp+Ch] [rbp-5Ch]
  unsigned int v24; // [rsp+Ch] [rbp-5Ch]
  char v25; // [rsp+1Fh] [rbp-49h] BYREF
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v27; // [rsp+28h] [rbp-40h]
  unsigned __int64 v28; // [rsp+38h] [rbp-30h]

  v3 = s1;
  v4 = *(_QWORD *)(a2 + 8) == 0;
  v28 = __readfsqword(0x28u);
  if ( !v4 )
    v3 = *(const char **)a2;
  v6 = sub_44AF90((__int64)a1, v3);
  *a3 = 0;
  v7 = (__int64)v6;
  if ( !v6 || (unsigned __int8)sub_4497A0((__int64)a1, (__int64)v6) )
    return 0;
  v4 = *(_BYTE *)(v7 + 25) == 0;
  ptr = nullptr;
  v27 = 0;
  if ( v4 )
  {
LABEL_8:
    if ( *(_QWORD *)(v7 + 8) > 1u )
    {
      sub_449530(a1->m128i_i64, v7, (__int64 *)&ptr);
      a1[5].m128i_i32[0] = a1[4].m128i_i32[0] - 1;
      v12 = s1;
      if ( *(_QWORD *)(v7 + 8) )
        v12 = *(const char **)v7;
      *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
    }
    v13 = (char *)ptr;
    *a3 = 1;
    if ( v13 )
    {
      v14 = v27;
      if ( (_QWORD)v27 )
      {
        v15 = 0;
        do
        {
          v16 = &v13[24 * v15];
          v17 = *(void **)v16;
          if ( *(_QWORD *)v16 )
          {
            *((_QWORD *)v16 + 1) = 0;
            j__free(v17);
            v13 = (char *)ptr;
          }
          ++v15;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&v27 = 0;
      j__free(v13);
    }
    return 0;
  }
  result = sub_44D280(a1, (char **)&ptr, &v25, v8, v9, v10);
  if ( !(_DWORD)result && v25 )
  {
    if ( *(unsigned __int8 *)(v7 + 24) == (_QWORD)v27 )
      goto LABEL_8;
    sub_479F30(0, v3);
    result = sub_479EB0(0x27u);
  }
  v18 = (char *)ptr;
  if ( ptr )
  {
    v19 = v27;
    if ( (_QWORD)v27 )
    {
      v20 = 0;
      do
      {
        v21 = &v18[24 * v20];
        v22 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          v23 = result;
          j__free(v22);
          v18 = (char *)ptr;
          LODWORD(result) = v23;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    v24 = result;
    *(_QWORD *)&v27 = 0;
    j__free(v18);
    return v24;
  }
  return result;
}
// 44D948: variable 'v8' is possibly undefined
// 44D948: variable 'v9' is possibly undefined
// 44D948: variable 'v10' is possibly undefined
