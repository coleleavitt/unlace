__int64 __fastcall sub_3DAC00(__int64 *a1)
{
  __int64 v2; // r9
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 *v8; // rbp
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  const char *v12; // rdx
  unsigned int v13; // ebp
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rax
  char *v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v21; // r12
  const void *v22; // rbp
  void *v23; // rdi
  __int64 v24; // rax
  _QWORD v25[3]; // [rsp+0h] [rbp-188h] BYREF
  char v26; // [rsp+18h] [rbp-170h]
  _QWORD v27[4]; // [rsp+20h] [rbp-168h] BYREF
  __int64 (__fastcall **v28)(); // [rsp+40h] [rbp-148h] BYREF
  char v29; // [rsp+90h] [rbp-F8h] BYREF
  char v30; // [rsp+F0h] [rbp-98h] BYREF
  __m128i v31; // [rsp+F8h] [rbp-90h]
  __m128i v32; // [rsp+108h] [rbp-80h]
  __int64 v33; // [rsp+118h] [rbp-70h]
  unsigned __int64 v34; // [rsp+120h] [rbp-68h]
  _QWORD v35[11]; // [rsp+130h] [rbp-58h] BYREF

  v35[5] = __readfsqword(0x28u);
  sub_3DA810((__int64)v27, 1u);
  v25[0] = 0;
  v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, &v28, v25, &callui, v2);
  if ( v3 < 0 )
    goto LABEL_11;
  if ( v3 >= v34 || (v8 = (__int64 *)(v33 + 32 * v3)) == 0 )
  {
    sub_2B1D90((unsigned int)"Stock comments: could not get chosen item %llX", v3, v4, v5, v6, v7);
LABEL_10:
    sub_3D77D0();
LABEL_11:
    v13 = 0;
    goto LABEL_12;
  }
  sub_3D9100((__int64)v25, (__int64)v35, *v8);
  if ( v26 )
  {
    v12 = s1;
    if ( v8[2] )
      v12 = (const char *)v8[1];
    sub_2B1D90(
      (unsigned int)"Stock comments: detected corruption when moving chosen comment %llX \"%s\" to front",
      *v8,
      (_DWORD)v12,
      v9,
      v10,
      v11);
    if ( v25[0] )
      qfree();
    goto LABEL_10;
  }
  if ( a1 != v8 + 1 )
  {
    v21 = v8[2];
    if ( v21 < 2 )
    {
      a1[1] = 0;
    }
    else
    {
      v22 = (const void *)v8[1];
      v23 = (void *)*a1;
      if ( a1[2] < v21 )
      {
        v24 = qvector_reserve();
        *a1 = v24;
        v23 = (void *)v24;
      }
      a1[1] = v21;
      memmove(v23, v22, v21 - 1);
      *(_BYTE *)(*a1 + v21 - 1) = 0;
    }
  }
  v13 = 1;
LABEL_12:
  v27[0] = off_4E87E8;
  v28 = off_4E8848;
  v31 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4E8978), (__m128i)(unsigned __int64)&off_4E8920);
  v32 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E8980), (__m128i)(unsigned __int64)&off_4E8950);
  if ( v35[0] )
  {
    v35[1] = 0;
    qfree();
  }
  v14 = v33;
  v27[0] = &unk_4EBA00;
  v28 = (__int64 (__fastcall **)())&unk_4EBA38;
  v31 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4E8988), (__m128i)(unsigned __int64)&off_4EBB10);
  v32 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E8990), (__m128i)(unsigned __int64)&off_4EBB40);
  if ( v33 )
  {
    v15 = v34;
    if ( v34 )
    {
      v16 = 0;
      do
      {
        v17 = v14 + 32 * v16;
        if ( *(_QWORD *)(v17 + 8) )
        {
          *(_QWORD *)(v17 + 16) = 0;
          qfree();
          v14 = v33;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    v34 = 0;
    qfree();
  }
  v18 = &v30;
  v28 = (__int64 (__fastcall **)())&unk_4EB238;
  do
  {
    v19 = *((_QWORD *)v18 - 3);
    v18 -= 24;
    if ( v19 )
    {
      *((_QWORD *)v18 + 1) = 0;
      qfree();
    }
  }
  while ( v18 != &v29 );
  v27[0] = &off_4E6AE8;
  if ( v27[1] )
  {
    v27[2] = 0;
    qfree();
  }
  return v13;
}
