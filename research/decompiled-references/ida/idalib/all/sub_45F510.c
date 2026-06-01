unsigned __int64 __fastcall sub_45F510(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const char *v9; // rdx
  bool v10; // al
  const char *v11; // rsi
  bool v12; // zf
  __int64 (__fastcall *v13)(__int64); // rax
  unsigned __int64 v15; // r15
  char v16; // bp
  int v17; // eax
  __m128i *v18; // rcx
  void (*(__fastcall *v19)(__int64))(); // rax
  __int64 v20; // rdi
  void (*v21)(); // rdx
  __int64 v22; // rdi
  void (*v23)(); // rdx
  const char *v25; // [rsp+8h] [rbp-40h]
  __m128i *v26; // [rsp+8h] [rbp-40h]
  __m128i *v27; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 120) != (_QWORD)xmmword_2CCB820 )
  {
    if ( !under_debugger )
      interr(1981);
    BUG();
  }
  if ( a4 == -1 && a3 == 0 )
  {
    v9 = haystack;
    if ( *(_QWORD *)(a1 + 24) )
      v9 = *(const char **)(a1 + 16);
    v25 = v9;
    v10 = is_diff_merge_mode(a1, a2);
    v11 = "Merging";
    if ( v10 )
      v11 = "Comparing";
    v12 = (_DWORD)qword_2CCB830 == 0;
    LODWORD(qword_2CCB830) = qword_2CCB830 + 1;
    if ( v12 )
      sub_387AC0();
    sub_3BBF30((int)"HIDECANCEL\n%s %s ...", v11, v25);
  }
  v15 = *(_QWORD *)(a1 + 104);
  if ( a4 > v15 )
    a4 = *(_QWORD *)(a1 + 104);
  if ( a3 >= a4 )
  {
    v16 = a2;
    if ( v15 )
      return 0;
    goto LABEL_9;
  }
  v26 = (__m128i *)a4;
  sub_458430(a1, a2, a3, a4);
  v17 = *(_DWORD *)(a1 + 148);
  v18 = v26;
  v16 = a2;
  if ( (v17 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 148) = v17 | 1;
    v19 = *(void (*(__fastcall **)(__int64))())(*(_QWORD *)a1 + 40LL);
    if ( v19 == sub_3DBD20 )
    {
      v20 = *(_QWORD *)(a1 + 56);
      v21 = *(void (**)())(*(_QWORD *)v20 + 112LL);
      if ( v21 != nullsub_15 )
      {
        ((void (__fastcall *)(__int64, _QWORD, void (*)(), __m128i *))v21)(v20, (unsigned __int8)a2, v21, v26);
        v18 = v26;
      }
      v22 = *(_QWORD *)(a1 + 64);
      v23 = *(void (**)())(*(_QWORD *)v22 + 112LL);
      if ( v23 != nullsub_15 )
      {
        v27 = v18;
        ((void (__fastcall *)(__int64))v23)(v22);
        v18 = v27;
      }
    }
    else
    {
      v19(a1);
      v18 = v26;
    }
  }
  v15 = sub_401740((__m128i **)(a1 + 80), a2, a3, v18);
  if ( !*(_QWORD *)(a1 + 104) )
  {
LABEL_9:
    if ( (*(_BYTE *)(a1 + 148) & 1) != 0 )
    {
      v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL);
      if ( v13 == sub_3DBCB0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 120LL))(
          *(_QWORD *)(a1 + 56),
          *(_QWORD *)(a1 + 64));
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 120LL))(
          *(_QWORD *)(a1 + 64),
          *(_QWORD *)(a1 + 56));
      }
      else
      {
        v13(a1);
      }
      *(_DWORD *)(a1 + 148) &= ~1u;
    }
    sub_459560(*(_QWORD *)(a1 + 8), 4u, 0xFFFFFFFF, 0xFFFFFFFF, a1);
    sub_45F430((__int64)&xmmword_2CCB660, a5, *(_DWORD *)(a1 + 40), v16, a6);
  }
  return v15;
}
