__int64 __fastcall sub_2097C0(__int64 a1, __int64 a2, __int64 a3, __int64 **a4, unsigned int a5)
{
  __int64 *v6; // rdi
  __int64 *v8; // rsi
  unsigned __int64 v9; // rax
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  _BYTE *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r15
  __int64 v23; // rbx
  _QWORD *v24; // r14
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rbx
  int v28; // edx
  char v29; // dl
  __int64 v30; // rax
  __m128i v31; // xmm0
  char tinfo_details; // [rsp+Fh] [rbp-B9h]
  int v33; // [rsp+14h] [rbp-B4h] BYREF
  __int64 tinfo_property; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+28h] [rbp-A0h]
  __int64 v37; // [rsp+38h] [rbp-90h]
  __int64 v38; // [rsp+40h] [rbp-88h] BYREF
  __int64 v39; // [rsp+48h] [rbp-80h] BYREF
  __int128 v40; // [rsp+50h] [rbp-78h]
  __int64 v41; // [rsp+60h] [rbp-68h]
  __int128 v42; // [rsp+68h] [rbp-60h]
  char v43; // [rsp+78h] [rbp-50h]
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 8) != 65 )
  {
    if ( !under_debugger )
      sub_37B760(52513);
    goto LABEL_65;
  }
  v6 = a4[1];
  v8 = *a4;
  if ( !v6 )
  {
    if ( !under_debugger )
      sub_37B760(52520);
    goto LABEL_65;
  }
  v9 = (unsigned int)((_DWORD)v6 - 1);
  v12 = (_DWORD)v6 - 1;
  if ( (int)v6 - 1 > 0 )
  {
    do
    {
      v27 = v8[v9];
      v28 = *(_DWORD *)(v27 + 8);
      if ( v28 != 48 )
      {
        v12 = v9;
        goto LABEL_8;
      }
      --v9;
    }
    while ( v9 );
    v27 = *v8;
    v12 = 0;
    v28 = *(_DWORD *)(*v8 + 8);
    goto LABEL_51;
  }
  v9 = (int)v9;
  v27 = v8[(int)v9];
  v28 = *(_DWORD *)(v27 + 8);
LABEL_8:
  v13 = a3;
  if ( v9 < (unsigned __int64)v6 - 1 )
LABEL_51:
    v13 = v8[v12 + 1];
  if ( a5 != -1 )
  {
    if ( v28 != 2 || v13 != *(_QWORD *)(v27 + 24) )
      return 0;
    goto LABEL_47;
  }
  if ( v28 == 80 )
    return sub_207380((__int64 *)a1, a2);
  if ( v28 <= 69 )
  {
    if ( v28 == 2 || (unsigned int)(v28 - 22) <= 9 )
    {
      v14 = *(_QWORD *)(v27 + 24);
      if ( v13 != v14 )
      {
        if ( !(unsigned __int8)sub_207EB0(
                                 (__int64 *)a1,
                                 *(const char **)(a2 + 8),
                                 *(_DWORD *)(a3 + 32),
                                 *(_QWORD *)(v27 + 24),
                                 0xFFFFFFFF) )
          goto LABEL_16;
        return 1;
      }
LABEL_47:
      v14 = *(_QWORD *)(v27 + 32);
      if ( !(unsigned __int8)sub_207EB0((__int64 *)a1, *(const char **)(a2 + 8), *(_DWORD *)(a3 + 32), v14, a5) )
      {
        if ( a5 != -1 )
          return 0;
        goto LABEL_16;
      }
      return 1;
    }
    v14 = 0;
    if ( v28 != 57 || *(_QWORD *)(v27 + 24) == v13 )
    {
LABEL_16:
      if ( (unsigned __int8)sub_205CA0((_QWORD *)a1, (__int64 *)(a3 + 48))
        || v14 && (unsigned __int8)sub_205CA0((_QWORD *)a1, (__int64 *)(v14 + 48)) )
      {
        return 1;
      }
      goto LABEL_42;
    }
    if ( !sub_27CFE0(v27, v13, &v33) )
    {
LABEL_41:
      if ( !(unsigned __int8)sub_205CA0((_QWORD *)a1, (__int64 *)(a3 + 48)) )
        goto LABEL_42;
      return 1;
    }
    v16 = *(_QWORD *)(v27 + 32);
    v17 = v33;
    if ( (unsigned __int64)v33 < *(_QWORD *)(v16 + 8) )
    {
      v18 = *(_QWORD *)(v16 + 24);
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(v18, 10);
      v35 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v41 = 0;
      v43 = 16;
      v36 = 0;
      v40 = 0;
      v42 = 0;
      tinfo_details = get_tinfo_details(tinfo_property, 12, &v35);
      if ( !tinfo_details )
        goto LABEL_30;
      if ( v17 >= (unsigned __int64)v36 )
      {
        tinfo_details = 0;
      }
      else
      {
        v19 = (_QWORD *)(v35 + 80 * v17);
        if ( v19[3] <= 1u )
          goto LABEL_29;
        v20 = (_BYTE *)v19[2];
        if ( *v20 == 118 && v20[1] )
        {
          do
          {
            v29 = *++v20;
            if ( !v29 )
              goto LABEL_29;
          }
          while ( (unsigned __int8)(v29 - 48) <= 9u );
        }
        if ( (unsigned __int8)sub_206600(*(_DWORD **)(*(_QWORD *)(a2 + 216) + 112LL), (__int64)(v19 + 2), 0) )
        {
LABEL_29:
          tinfo_details = sub_205F60(a1, *(_QWORD *)(a2 + 8), v19 + 8, nullptr, -1);
          goto LABEL_30;
        }
        if ( a1 )
        {
          v30 = *(_QWORD *)a1;
          v31 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          *(_QWORD *)a1 = v19[2];
          *(_QWORD *)(a1 + 8) = v19[3];
          *(_QWORD *)(a1 + 16) = v19[4];
          v19[2] = v30;
          *(__m128i *)(v19 + 3) = v31;
        }
      }
LABEL_30:
      if ( v41 )
      {
        *(_QWORD *)&v42 = 0;
        qfree(v41);
      }
      cleanup_argloc(&v39);
      clear_tinfo_t(&v38);
      v21 = v35;
      if ( v35 )
      {
        v22 = v36;
        v23 = 0;
        if ( (_QWORD)v36 )
        {
          do
          {
            v24 = (_QWORD *)(v21 + 80 * v23);
            clear_tinfo_t(v24 + 8);
            v25 = v24[5];
            if ( v25 )
            {
              v24[6] = 0;
              qfree(v25);
            }
            v26 = v24[2];
            if ( v26 )
            {
              v24[3] = 0;
              qfree(v26);
            }
            ++v23;
            cleanup_argloc(v24);
            v21 = v35;
          }
          while ( v22 != v23 );
        }
        *(_QWORD *)&v36 = 0;
        qfree(v21);
      }
      clear_tinfo_t(&tinfo_property);
      if ( tinfo_details )
        return 1;
      goto LABEL_41;
    }
    if ( !under_debugger )
      sub_37B760(52512);
LABEL_65:
    BUG();
  }
LABEL_42:
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 432LL) + 104LL * *(int *)(a3 + 32) + 24) >= 0 )
    return 0;
  return sub_207380((__int64 *)a1, a2);
}
