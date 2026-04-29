__int64 __fastcall sub_396680(__int64 a1, __int64 a2, double a3, __m128 a4, __m128 a5)
{
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rbp
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rsi
  int *v18; // rax
  int *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdi
  __m128i *v23; // rbx
  __int64 v24; // rdi
  __m128i v25; // [rsp+0h] [rbp-158h] BYREF
  _DWORD v26[4]; // [rsp+10h] [rbp-148h] BYREF
  __int64 v27; // [rsp+20h] [rbp-138h]
  __int64 (__fastcall **v28)(); // [rsp+30h] [rbp-128h] BYREF
  __int64 v29; // [rsp+38h] [rbp-120h]
  __int128 v30; // [rsp+40h] [rbp-118h]
  __int64 v31; // [rsp+50h] [rbp-108h]
  const char *v32; // [rsp+58h] [rbp-100h]
  int v33; // [rsp+60h] [rbp-F8h]
  __m128i v34; // [rsp+68h] [rbp-F0h] BYREF
  int v35; // [rsp+78h] [rbp-E0h]
  _BYTE v36[72]; // [rsp+80h] [rbp-D8h] BYREF
  char v37; // [rsp+C8h] [rbp-90h] BYREF
  int v38; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-70h]
  __int64 v40; // [rsp+F0h] [rbp-68h]
  __int128 v41; // [rsp+F8h] [rbp-60h]
  __int64 v42; // [rsp+108h] [rbp-50h]
  __m128i *v43; // [rsp+110h] [rbp-48h]
  unsigned __int64 v44; // [rsp+118h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 32);
  v44 = __readfsqword(0x28u);
  v25 = 0;
  if ( !(unsigned __int8)sub_20C200(v6, &v25, a2, (__m128i)0LL, a4, a5) )
    return 0;
  sub_33C190((__int64)"AUTOHIDE REGISTRY\n"
                      "The 'split variable' command allows you to create\n"
                      "a new variable at the specified location.\n"
                      "However, the decompiler does not perform any checks.\n"
                      "A wrong split variable will render the output incorrect.\n"
                      "Use this command cautiously!");
  if ( *(_DWORD *)(a2 + 8) != 65 )
  {
    v16 = *(_QWORD *)(a1 + 24);
    v17 = *(_QWORD *)(a1 + 32);
    v29 = 0x3FF000004LL;
    v32 = "Select the variable to split";
    v30 = -1;
    v28 = (__int64 (__fastcall **)())&unk_4EBE48;
    v18 = (int *)v36;
    v19 = &v38;
    v31 = 0;
    v33 = 1;
    v35 = -1;
    v34 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E6CB8), (__m128i)(unsigned __int64)off_4E6CB0);
    do
    {
      *(_QWORD *)v18 = 0;
      v18 += 6;
      *((_OWORD *)v18 - 1) = 0;
    }
    while ( &v38 != v18 );
    v38 = 0;
    v20 = HIDWORD(v29);
    v21 = ((HIDWORD(v29) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v29) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v29) != 0xFF )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      v20 = HIDWORD(v29) & 0xFE07FFFF;
      BYTE3(v29) = ((HIDWORD(v29) >> 19) & 0x3F) - 1;
      HIDWORD(v29) &= 0xFE07FFFF;
    }
    v39 = v16;
    v42 = v17;
    v40 = 0;
    v28 = off_4E68F0;
    v43 = &v25;
    v41 = 0;
    if ( !sub_38B610(&v28, 0, v20, v9, v21, v10) )
    {
      v28 = off_4E6680;
      if ( v40 )
      {
        *(_QWORD *)&v41 = 0;
        qfree(v40);
      }
      v28 = (__int64 (__fastcall **)())&unk_4EBE48;
      v23 = (__m128i *)&v37;
      do
      {
        v24 = v23->m128i_i64[0];
        if ( v23->m128i_i64[0] )
        {
          v23->m128i_i64[1] = 0;
          qfree(v24);
        }
        v23 = (__m128i *)((char *)v23 - 24);
      }
      while ( &v34 != v23 );
      return 0;
    }
    v28 = off_4E6680;
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v40);
    }
    v28 = (__int64 (__fastcall **)())&unk_4EBE48;
    do
    {
      v22 = *((_QWORD *)v19 - 3);
      v19 -= 6;
      if ( v22 )
      {
        *((_QWORD *)v19 + 1) = 0;
        qfree(v22);
      }
    }
    while ( v19 != (int *)v36 );
  }
  v26[0] = 0;
  v11 = *(_QWORD *)(v25.m128i_i64[1] + 24);
  copy_argloc();
  v12 = *(_QWORD **)(a1 + 24);
  v27 = v11;
  v7 = sub_216AF0(v12, (__int64)v26);
  if ( (_BYTE)v7 )
  {
    sub_2B9C00(*(_QWORD *)(a1 + 24));
    nullsub_114();
    sub_395A90(a1, 0, 0.0, v13, v14, v15);
  }
  cleanup_argloc();
  return v7;
}
