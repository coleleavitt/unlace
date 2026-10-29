__int64 __fastcall sub_3E5800(unsigned __int64 *a1, int a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int64 *v5; // rbp
  const char *v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  char *v13; // rbx
  __int64 v14; // rdi
  unsigned __int64 v16; // r13
  const void *v17; // rbp
  void *v18; // rdi
  __int64 v19; // rax
  _QWORD v20[3]; // [rsp+0h] [rbp-188h] BYREF
  char v21; // [rsp+18h] [rbp-170h]
  _QWORD v22[4]; // [rsp+20h] [rbp-168h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+40h] [rbp-148h] BYREF
  char v24; // [rsp+90h] [rbp-F8h] BYREF
  char v25; // [rsp+F0h] [rbp-98h] BYREF
  __m128i v26; // [rsp+F8h] [rbp-90h]
  __m128i v27; // [rsp+108h] [rbp-80h]
  __int64 v28; // [rsp+118h] [rbp-70h]
  unsigned __int64 v29; // [rsp+120h] [rbp-68h]
  _QWORD v30[11]; // [rsp+130h] [rbp-58h] BYREF

  v30[5] = __readfsqword(0x28u);
  sub_3E4380((__int64)v22, a2, 1u);
  v20[0] = 0;
  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, &v23, v20, &callui, v3);
  if ( v4 < 0 )
    goto LABEL_11;
  if ( v4 >= v29 || (v5 = (unsigned __int64 *)(v28 + 32 * v4)) == nullptr )
  {
    sub_2B4E70((__int64)"Stock comments: could not get chosen item %llX", v4);
LABEL_10:
    netnode_kill();
    netnode_check();
LABEL_11:
    v8 = 0;
    goto LABEL_12;
  }
  sub_3E55B0((__int64)v20, (__int64)v30, *v5);
  if ( v21 )
  {
    v6 = s1;
    if ( v5[2] )
      v6 = (const char *)v5[1];
    v7 = v20[0];
    sub_2B4E70((__int64)"Stock comments: detected corruption when moving chosen comment %llX \"%s\" to front", *v5, v6);
    if ( v7 )
      qfree();
    goto LABEL_10;
  }
  if ( a1 != v5 + 1 )
  {
    v16 = v5[2];
    if ( v16 < 2 )
    {
      a1[1] = 0;
    }
    else
    {
      v17 = (const void *)v5[1];
      v18 = (void *)*a1;
      if ( a1[2] < v16 )
      {
        v19 = qvector_reserve();
        *a1 = v19;
        v18 = (void *)v19;
      }
      a1[1] = v16;
      memmove(v18, v17, v16 - 1);
      *(_BYTE *)(*a1 + v16 - 1) = 0;
    }
  }
  v8 = 1;
LABEL_12:
  v22[0] = off_4E9770;
  v23 = off_4E97D0;
  v26 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4E98F8), (__m128i)(unsigned __int64)&off_4E98A8);
  v27 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E9900), (__m128i)(unsigned __int64)&off_4E98D8);
  if ( v30[0] )
  {
    v30[1] = 0;
    qfree();
  }
  v9 = v28;
  v22[0] = &unk_4ECA40;
  v23 = (__int64 (__fastcall **)())&unk_4ECA78;
  v26 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4E9908), (__m128i)(unsigned __int64)&off_4ECB50);
  v27 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E9910), (__m128i)(unsigned __int64)&off_4ECB80);
  if ( v28 )
  {
    v10 = v29;
    if ( v29 )
    {
      v11 = 0;
      do
      {
        v12 = v9 + 32 * v11;
        if ( *(_QWORD *)(v12 + 8) )
        {
          *(_QWORD *)(v12 + 16) = 0;
          qfree();
          v9 = v28;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    v29 = 0;
    qfree();
  }
  v13 = &v25;
  v23 = (__int64 (__fastcall **)())&unk_4EBE48;
  do
  {
    v14 = *((_QWORD *)v13 - 3);
    v13 -= 24;
    if ( v14 )
    {
      *((_QWORD *)v13 + 1) = 0;
      qfree();
    }
  }
  while ( v13 != &v24 );
  v22[0] = &off_4E7588;
  if ( v22[1] )
  {
    v22[2] = 0;
    qfree();
  }
  return v8;
}
