__int64 __fastcall sub_390F70(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  const char *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rcx
  int *v10; // rax
  __int64 v11; // rdx
  int *v12; // rax
  __int64 v13; // r14
  const char *v14; // rdx
  const char *v15; // rsi
  unsigned int v16; // ebp
  __m128i *v17; // rbx
  __int64 v18; // rdi
  const char *v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  const char *v25; // [rsp+10h] [rbp-568h] BYREF
  __int128 v26; // [rsp+18h] [rbp-560h]
  __int64 v27; // [rsp+30h] [rbp-548h] BYREF
  __int128 v28; // [rsp+38h] [rbp-540h]
  __int64 (__fastcall **v29)(); // [rsp+50h] [rbp-528h] BYREF
  __int64 v30; // [rsp+58h] [rbp-520h]
  __int128 v31; // [rsp+60h] [rbp-518h]
  __int64 v32; // [rsp+70h] [rbp-508h]
  _BYTE *v33; // [rsp+78h] [rbp-500h]
  int v34; // [rsp+80h] [rbp-4F8h]
  __m128i v35; // [rsp+88h] [rbp-4F0h] BYREF
  int v36; // [rsp+98h] [rbp-4E0h]
  char v37; // [rsp+A0h] [rbp-4D8h] BYREF
  char v38; // [rsp+E8h] [rbp-490h] BYREF
  int v39; // [rsp+100h] [rbp-478h] BYREF
  __int64 v40; // [rsp+108h] [rbp-470h]
  __int64 v41; // [rsp+110h] [rbp-468h]
  __int128 v42; // [rsp+118h] [rbp-460h]
  __int64 *v43; // [rsp+128h] [rbp-450h]
  _BYTE v44[1032]; // [rsp+130h] [rbp-448h] BYREF
  unsigned __int64 v45; // [rsp+538h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  sub_336F00((__int64)"AUTOHIDE REGISTRY\n"
                      "The 'map variable' command allows you to replace all occurrences of\n"
                      "a variable by another variable of the same type.\n"
                      "The decompiler does not perform any checks.\n"
                      "A wrong mapping may render the decompiler output incorrect.\n"
                      "Use this command cautiously!");
  v4 = *(_QWORD *)(a1 + 24);
  v25 = nullptr;
  v27 = 0;
  v26 = 0;
  v28 = 0;
  sub_212320(v4, a2, &v27, (__int64 *)&v25);
  if ( !(_QWORD)v28 )
  {
    v19 = s1;
    if ( (_QWORD)v26 )
      v19 = v25;
    sub_2B0270((__int64)&unk_3F40D1, v19);
    v16 = 0;
    goto LABEL_28;
  }
  v5 = s1;
  if ( *(_QWORD *)(a2 + 40) )
    v5 = *(const char **)(a2 + 32);
  qsnprintf(v44, 1024, "Map %s to...", v5);
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v21 = sub_252170(*(_QWORD *)(a1 + 32) + 16LL, *(_QWORD *)(a1 + 88));
    if ( *(_DWORD *)(v21 + 8) == 2 )
    {
      v22 = *(_QWORD *)(v21 + 24);
      if ( *(_DWORD *)(v22 + 8) == 65 )
      {
        v23 = *(_QWORD *)(v21 + 32);
        if ( *(_DWORD *)(v23 + 8) == 65 )
        {
          v24 = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 432LL) + 104LL * *(int *)(v22 + 32);
          v8 = *(_QWORD *)(*(_QWORD *)(v23 + 24) + 432LL) + 104LL * *(int *)(v23 + 32);
          if ( a2 == v24 )
            goto LABEL_7;
          if ( a2 == v8 )
          {
            v8 = v24;
            goto LABEL_7;
          }
        }
      }
    }
  }
  v8 = 0;
LABEL_7:
  v32 = 0;
  v30 = 0x3FF000004LL;
  v9 = *(_QWORD *)(a1 + 24);
  v31 = -1;
  v10 = (int *)&v37;
  v29 = (__int64 (__fastcall **)())&unk_4BDC88;
  v34 = 1;
  v36 = -1;
  v33 = v44;
  v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4B96D8), (__m128i)(unsigned __int64)off_4B96D0);
  do
  {
    *(_QWORD *)v10 = 0;
    v10 += 6;
    *((_OWORD *)v10 - 1) = 0;
  }
  while ( &v39 != v10 );
  v39 = 0;
  v11 = HIDWORD(v30);
  if ( ((HIDWORD(v30) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v30) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, v8, HIDWORD(v30), v9, v6);
      BUG();
    }
    v11 = HIDWORD(v30) & 0xFE07FFFF;
    BYTE3(v30) = ((HIDWORD(v30) >> 19) & 0x3F) - 1;
    HIDWORD(v30) &= 0xFE07FFFF;
  }
  v40 = v9;
  v41 = 0;
  v29 = off_4B9240;
  v43 = &v27;
  v42 = 0;
  v12 = (int *)sub_386390(&v29, v8, v11, v9, v6, v7);
  v13 = (__int64)v12;
  if ( !v12 )
  {
    v16 = 0;
    goto LABEL_18;
  }
  if ( (unsigned int)sub_1BE450((int *)a2, v12) )
  {
    v14 = s1;
    if ( *(_QWORD *)(v13 + 40) )
    {
      v14 = *(const char **)(v13 + 32);
      v15 = s1;
      if ( !*(_QWORD *)(a2 + 40) )
        goto LABEL_16;
    }
    else
    {
      v15 = s1;
      if ( !*(_QWORD *)(a2 + 40) )
      {
LABEL_16:
        sub_2B0270(
          (__int64)"AUTOHIDE REGISTRY\n"
                   "Variables %s and %s have different locations.\n"
                   "Please verify that this mapping does not render the output incorrect.",
          v15,
          v14);
        goto LABEL_17;
      }
    }
    v15 = *(const char **)(a2 + 32);
    goto LABEL_16;
  }
LABEL_17:
  v16 = sub_390CB0(a1, a2, v13, 0.0);
LABEL_18:
  v29 = off_4B90A0;
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  v29 = (__int64 (__fastcall **)())&unk_4BDC88;
  v17 = (__m128i *)&v38;
  do
  {
    v18 = v17->m128i_i64[0];
    if ( v17->m128i_i64[0] )
    {
      v17->m128i_i64[1] = 0;
      qfree(v18);
    }
    v17 = (__m128i *)((char *)v17 - 24);
  }
  while ( &v35 != v17 );
LABEL_28:
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  return v16;
}
