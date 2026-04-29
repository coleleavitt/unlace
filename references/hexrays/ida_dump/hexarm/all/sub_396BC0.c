__int64 __fastcall sub_396BC0(__int64 a1, __int64 a2, double a3, __m128 a4, __m128 a5)
{
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rbp
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rsi
  int *v19; // rax
  int *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdi
  __m128i *v24; // rbx
  __int64 v25; // rdi
  __m128i v26; // [rsp+0h] [rbp-158h] BYREF
  _DWORD v27[4]; // [rsp+10h] [rbp-148h] BYREF
  __int64 v28; // [rsp+20h] [rbp-138h]
  __int64 (__fastcall **v29)(); // [rsp+30h] [rbp-128h] BYREF
  __int64 v30; // [rsp+38h] [rbp-120h]
  __int128 v31; // [rsp+40h] [rbp-118h]
  __int64 v32; // [rsp+50h] [rbp-108h]
  const char *v33; // [rsp+58h] [rbp-100h]
  int v34; // [rsp+60h] [rbp-F8h]
  __m128i v35; // [rsp+68h] [rbp-F0h] BYREF
  int v36; // [rsp+78h] [rbp-E0h]
  _BYTE v37[72]; // [rsp+80h] [rbp-D8h] BYREF
  char v38; // [rsp+C8h] [rbp-90h] BYREF
  int v39; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v40; // [rsp+E8h] [rbp-70h]
  __int64 v41; // [rsp+F0h] [rbp-68h]
  __int128 v42; // [rsp+F8h] [rbp-60h]
  __int64 v43; // [rsp+108h] [rbp-50h]
  __m128i *v44; // [rsp+110h] [rbp-48h]
  unsigned __int64 v45; // [rsp+118h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 32);
  v45 = __readfsqword(0x28u);
  v26 = 0;
  if ( !(unsigned __int8)sub_20C5C0(v6, &v26, a2, (__m128i)0LL, a4, a5) )
    return 0;
  sub_33C600((__int64)"AUTOHIDE REGISTRY\n"
                      "The 'split variable' command allows you to create\n"
                      "a new variable at the specified location.\n"
                      "However, the decompiler does not perform any checks.\n"
                      "A wrong split variable will render the output incorrect.\n"
                      "Use this command cautiously!");
  if ( *(_DWORD *)(a2 + 8) == 65 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 432LL) + 104LL * *(int *)(a2 + 32);
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 24);
    v18 = *(_QWORD *)(a1 + 32);
    v30 = 0x3FF000004LL;
    v33 = "Select the variable to split";
    v31 = -1;
    v29 = (__int64 (__fastcall **)())&unk_4E7D28;
    v19 = (int *)v37;
    v20 = &v39;
    v32 = 0;
    v34 = 1;
    v36 = -1;
    v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E1378), (__m128i)(unsigned __int64)off_4E1370);
    do
    {
      *(_QWORD *)v19 = 0;
      v19 += 6;
      *((_OWORD *)v19 - 1) = 0;
    }
    while ( &v39 != v19 );
    v39 = 0;
    v21 = HIDWORD(v30);
    v22 = ((HIDWORD(v30) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v30) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v30) != 0xFF )
      {
        if ( !under_debugger )
          interr(3449, v18, HIDWORD(v30), v9, v22);
        BUG();
      }
      v21 = HIDWORD(v30) & 0xFE07FFFF;
      BYTE3(v30) = ((HIDWORD(v30) >> 19) & 0x3F) - 1;
      HIDWORD(v30) &= 0xFE07FFFF;
    }
    v40 = v17;
    v43 = v18;
    v41 = 0;
    v29 = off_4E0FB0;
    v44 = &v26;
    v42 = 0;
    v11 = sub_38BB50(&v29, 0, v21, v9, v22, v10);
    if ( !v11 )
    {
      v29 = off_4E0D40;
      if ( v41 )
      {
        *(_QWORD *)&v42 = 0;
        qfree(v41);
      }
      v29 = (__int64 (__fastcall **)())&unk_4E7D28;
      v24 = (__m128i *)&v38;
      do
      {
        v25 = v24->m128i_i64[0];
        if ( v24->m128i_i64[0] )
        {
          v24->m128i_i64[1] = 0;
          qfree(v25);
        }
        v24 = (__m128i *)((char *)v24 - 24);
      }
      while ( &v35 != v24 );
      return 0;
    }
    v29 = off_4E0D40;
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
    v29 = (__int64 (__fastcall **)())&unk_4E7D28;
    do
    {
      v23 = *((_QWORD *)v20 - 3);
      v20 -= 6;
      if ( v23 )
      {
        *((_QWORD *)v20 + 1) = 0;
        qfree(v23);
      }
    }
    while ( v20 != (int *)v37 );
  }
  v27[0] = 0;
  v12 = *(_QWORD *)(v26.m128i_i64[1] + 24);
  copy_argloc(v27, v11);
  v13 = *(_QWORD **)(a1 + 24);
  v28 = v12;
  v7 = sub_216EB0(v13, (__int64)v27, v11 + 80);
  if ( (_BYTE)v7 )
  {
    sub_2B9FC0(*(_QWORD *)(a1 + 24));
    nullsub_114();
    sub_395FD0(a1, 0, 0.0, v14, v15, v16);
  }
  cleanup_argloc(v27);
  return v7;
}
