__int64 __fastcall sub_B180(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdi
  int *v9; // rbp
  int *v10; // rax
  __int64 v11; // r13
  int *v12; // rdi
  int *v13; // r13
  int *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  struct _Unwind_Exception *v18; // rbx
  unsigned __int64 v19; // [rsp+10h] [rbp-168h] BYREF
  __int128 v20; // [rsp+18h] [rbp-160h]
  __int64 v21; // [rsp+30h] [rbp-148h] BYREF
  __int128 v22; // [rsp+38h] [rbp-140h]
  __int64 (__fastcall **v23)(); // [rsp+50h] [rbp-128h] BYREF
  __int64 v24; // [rsp+58h] [rbp-120h]
  __int128 v25; // [rsp+60h] [rbp-118h]
  __int64 v26; // [rsp+70h] [rbp-108h]
  const char *v27; // [rsp+78h] [rbp-100h]
  int v28; // [rsp+80h] [rbp-F8h]
  __m128i v29; // [rsp+88h] [rbp-F0h]
  int v30; // [rsp+98h] [rbp-E0h]
  _BYTE v31[72]; // [rsp+A0h] [rbp-D8h] BYREF
  int v32; // [rsp+100h] [rbp-78h] BYREF
  __int64 v33; // [rsp+108h] [rbp-70h]
  unsigned __int64 *v34; // [rsp+110h] [rbp-68h]
  int *v35; // [rsp+118h] [rbp-60h]
  __int128 v36; // [rsp+120h] [rbp-58h]
  unsigned __int64 v37; // [rsp+138h] [rbp-40h]

  v1 = 104;
  v37 = __readfsqword(0x28u);
  if ( netnode_supfirst(*(_QWORD *)(a1 + 104), 104) != -1 )
    return sub_AC60(a1, v1, v3);
  v8 = *(_QWORD *)(a1 + 112);
  v19 = 0;
  v20 = 0;
  sub_9980(v8, &v19, v3, v4, v5, v6);
  if ( (_QWORD)v20 )
  {
    v26 = 0;
    v23 = (__int64 (__fastcall **)())&unk_1EB20;
    v9 = &v32;
    v24 = 0x7FF000004LL;
    v27 = "choose branch mapping(s) to load";
    v25 = -1;
    v28 = 4;
    v30 = -1;
    v10 = (int *)v31;
    v29 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1EAC8), (__m128i)(unsigned __int64)off_1EA60);
    do
    {
      *(_QWORD *)v10 = 0;
      v10 += 6;
      *((_OWORD *)v10 - 1) = 0;
    }
    while ( v10 != &v32 );
    v32 = 0;
    if ( ((HIDWORD(v24) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v24) != 0xFF )
      {
        if ( !under_debugger )
        {
          v18 = (struct _Unwind_Exception *)interr(3449);
          if ( v21 )
          {
            *(_QWORD *)&v22 = 0;
            qfree(v21);
          }
          sub_67B0(&v23);
          if ( v19 )
          {
            *(_QWORD *)&v20 = 0;
            qfree(v19);
          }
          _Unwind_Resume(v18);
        }
        BUG();
      }
      BYTE3(v24) = ((HIDWORD(v24) >> 19) & 0x3F) - 1;
      HIDWORD(v24) &= 0xFE07FFFF;
    }
    v34 = &v19;
    v1 = 0;
    v23 = off_1E810;
    v33 = a1;
    v35 = nullptr;
    v21 = 0;
    v36 = 0;
    v22 = 0;
    v11 = callui(16, 0, &v23);
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21);
    }
    v12 = v35;
    if ( v11 >= 0 )
    {
      v13 = &v35[2 * v36];
      if ( v13 != v35 )
      {
        v14 = v35;
        do
        {
          v15 = *(_QWORD *)(a1 + 104);
          v1 = *(_QWORD *)(v19 + 16LL * *v14);
          v21 = 1;
          netnode_supset(v15, v1, &v21, 8, 104);
          v14 += 2;
        }
        while ( v13 != v14 );
        v12 = v35;
      }
      v23 = off_1E810;
      if ( v12 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v12);
      }
      v23 = (__int64 (__fastcall **)())&unk_1EB20;
      do
      {
        v16 = *((_QWORD *)v9 - 3);
        v9 -= 6;
        if ( v16 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v16);
        }
      }
      while ( v9 != (int *)v31 );
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree(v19);
      }
      return sub_AC60(a1, v1, v3);
    }
    v23 = off_1E810;
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35);
    }
    v23 = (__int64 (__fastcall **)())&unk_1EB20;
    do
    {
      v17 = *((_QWORD *)v9 - 3);
      v9 -= 6;
      if ( v17 )
      {
        *((_QWORD *)v9 + 1) = 0;
        qfree(v17);
      }
    }
    while ( v9 != (int *)v31 );
  }
  else
  {
    sub_78B0((__int64)"No branch mappings detected\n");
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  return 0;
}
