__int64 __fastcall sub_3961F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rcx
  int *v9; // rax
  __int64 v10; // rdx
  int *v11; // rax
  __int64 v12; // r14
  const char *v13; // rdx
  const char *v14; // rsi
  unsigned int v15; // ebp
  __m128i *v16; // rbx
  const char *v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  const char *v23; // [rsp+10h] [rbp-568h] BYREF
  __int128 v24; // [rsp+18h] [rbp-560h]
  __int64 v25; // [rsp+30h] [rbp-548h] BYREF
  __int128 v26; // [rsp+38h] [rbp-540h]
  __int64 (__fastcall **v27)(); // [rsp+50h] [rbp-528h] BYREF
  __int64 v28; // [rsp+58h] [rbp-520h]
  __int128 v29; // [rsp+60h] [rbp-518h]
  __int64 v30; // [rsp+70h] [rbp-508h]
  char *v31; // [rsp+78h] [rbp-500h]
  int v32; // [rsp+80h] [rbp-4F8h]
  __m128i v33; // [rsp+88h] [rbp-4F0h] BYREF
  int v34; // [rsp+98h] [rbp-4E0h]
  char v35; // [rsp+A0h] [rbp-4D8h] BYREF
  char v36; // [rsp+E8h] [rbp-490h] BYREF
  int v37; // [rsp+100h] [rbp-478h] BYREF
  __int64 v38; // [rsp+108h] [rbp-470h]
  __int64 v39; // [rsp+110h] [rbp-468h]
  __int128 v40; // [rsp+118h] [rbp-460h]
  __int64 *v41; // [rsp+128h] [rbp-450h]
  char v42; // [rsp+130h] [rbp-448h] BYREF
  unsigned __int64 v43; // [rsp+538h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  sub_33C190((__int64)"AUTOHIDE REGISTRY\n"
                      "The 'map variable' command allows you to replace all occurrences of\n"
                      "a variable by another variable of the same type.\n"
                      "The decompiler does not perform any checks.\n"
                      "A wrong mapping may render the decompiler output incorrect.\n"
                      "Use this command cautiously!");
  v4 = *(_QWORD *)(a1 + 24);
  v23 = nullptr;
  v25 = 0;
  v24 = 0;
  v26 = 0;
  sub_216F20(v4, a2, &v25, (__int64 *)&v23);
  if ( !(_QWORD)v26 )
  {
    v17 = s1;
    if ( (_QWORD)v24 )
      v17 = v23;
    sub_2B4E70((__int64)&unk_4190BD, v17);
    v15 = 0;
    goto LABEL_26;
  }
  qsnprintf();
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v19 = sub_256D70(*(_QWORD *)(a1 + 32) + 16LL, *(_QWORD *)(a1 + 88));
    if ( *(_DWORD *)(v19 + 8) == 2 )
    {
      v20 = *(_QWORD *)(v19 + 24);
      if ( *(_DWORD *)(v20 + 8) == 65 )
      {
        v21 = *(_QWORD *)(v19 + 32);
        if ( *(_DWORD *)(v21 + 8) == 65 )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(v20 + 24) + 432LL) + 104LL * *(int *)(v20 + 32);
          v7 = *(_QWORD *)(*(_QWORD *)(v21 + 24) + 432LL) + 104LL * *(int *)(v21 + 32);
          if ( a2 == v22 )
            goto LABEL_5;
          if ( a2 == v7 )
          {
            v7 = v22;
            goto LABEL_5;
          }
        }
      }
    }
  }
  v7 = 0;
LABEL_5:
  v30 = 0;
  v28 = 0x3FF000004LL;
  v8 = *(_QWORD *)(a1 + 24);
  v29 = -1;
  v9 = (int *)&v35;
  v27 = (__int64 (__fastcall **)())&unk_4EBE48;
  v32 = 1;
  v34 = -1;
  v31 = &v42;
  v33 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E6CB8), (__m128i)(unsigned __int64)off_4E6CB0);
  do
  {
    *(_QWORD *)v9 = 0;
    v9 += 6;
    *((_OWORD *)v9 - 1) = 0;
  }
  while ( &v37 != v9 );
  v37 = 0;
  v10 = HIDWORD(v28);
  if ( ((HIDWORD(v28) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v28) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v10 = HIDWORD(v28) & 0xFE07FFFF;
    BYTE3(v28) = ((HIDWORD(v28) >> 19) & 0x3F) - 1;
    HIDWORD(v28) &= 0xFE07FFFF;
  }
  v38 = v8;
  v39 = 0;
  v27 = off_4E6820;
  v41 = &v25;
  v40 = 0;
  v11 = (int *)sub_38B610(&v27, v7, v10, v8, v5, v6);
  v12 = (__int64)v11;
  if ( !v11 )
  {
    v15 = 0;
    goto LABEL_16;
  }
  if ( (unsigned int)sub_1C2AD0((int *)a2, v11) )
  {
    v13 = s1;
    if ( *(_QWORD *)(v12 + 40) )
    {
      v13 = *(const char **)(v12 + 32);
      v14 = s1;
      if ( !*(_QWORD *)(a2 + 40) )
        goto LABEL_14;
    }
    else
    {
      v14 = s1;
      if ( !*(_QWORD *)(a2 + 40) )
      {
LABEL_14:
        sub_2B4E70(
          (__int64)"AUTOHIDE REGISTRY\n"
                   "Variables %s and %s have different locations.\n"
                   "Please verify that this mapping does not render the output incorrect.",
          v14,
          v13);
        goto LABEL_15;
      }
    }
    v14 = *(const char **)(a2 + 32);
    goto LABEL_14;
  }
LABEL_15:
  v15 = sub_395F30(a1, a2, v12, 0.0);
LABEL_16:
  v27 = off_4E6680;
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree();
  }
  v27 = (__int64 (__fastcall **)())&unk_4EBE48;
  v16 = (__m128i *)&v36;
  do
  {
    if ( v16->m128i_i64[0] )
    {
      v16->m128i_i64[1] = 0;
      qfree();
    }
    v16 = (__m128i *)((char *)v16 - 24);
  }
  while ( &v33 != v16 );
LABEL_26:
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  return v15;
}
