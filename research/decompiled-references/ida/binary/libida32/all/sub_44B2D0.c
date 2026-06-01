unsigned __int64 __fastcall sub_44B2D0(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const char *v9; // rdx
  const char *v10; // rsi
  bool v11; // zf
  __int64 (__fastcall *v12)(__int64); // rax
  unsigned __int64 v14; // r15
  char v15; // bp
  int v16; // eax
  __m128i *v17; // rcx
  void (*(__fastcall *v18)(__int64))(); // rax
  __int64 v19; // rdi
  void (*v20)(); // rdx
  __int64 v21; // rdi
  void (*v22)(); // rdx
  const char *v24; // [rsp+8h] [rbp-40h]
  __m128i *v25; // [rsp+8h] [rbp-40h]
  __m128i *v26; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 120) != qword_2CA1920 )
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
    v24 = v9;
    v10 = "Merging";
    if ( (unsigned __int8)is_diff_merge_mode(a1) )
      v10 = "Comparing";
    v11 = (_DWORD)qword_2CA192C == 0;
    LODWORD(qword_2CA192C) = qword_2CA192C + 1;
    if ( v11 )
      sub_395C70((int)"HIDECANCEL\n%s %s ...", v10, v24);
    sub_3B7400((int)"HIDECANCEL\n%s %s ...", v10, v24);
  }
  v14 = *(_QWORD *)(a1 + 104);
  if ( a4 > v14 )
    a4 = *(_QWORD *)(a1 + 104);
  if ( a3 >= a4 )
  {
    v15 = a2;
    if ( v14 )
      return 0;
    goto LABEL_9;
  }
  v25 = (__m128i *)a4;
  sub_4445F0(a1);
  v16 = *(_DWORD *)(a1 + 144);
  v17 = v25;
  v15 = a2;
  if ( (v16 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 144) = v16 | 1;
    v18 = *(void (*(__fastcall **)(__int64))())(*(_QWORD *)a1 + 40LL);
    if ( v18 == sub_3D5E60 )
    {
      v19 = *(_QWORD *)(a1 + 56);
      v20 = *(void (**)())(*(_QWORD *)v19 + 112LL);
      if ( v20 != nullsub_15 )
      {
        ((void (__fastcall *)(__int64, _QWORD, void (*)(), __m128i *))v20)(v19, a2, v20, v25);
        v17 = v25;
      }
      v21 = *(_QWORD *)(a1 + 64);
      v22 = *(void (**)())(*(_QWORD *)v21 + 112LL);
      if ( v22 != nullsub_15 )
      {
        v26 = v17;
        ((void (__fastcall *)(__int64, _QWORD))v22)(v21, a2);
        v17 = v26;
      }
    }
    else
    {
      ((void (__fastcall *)(__int64, _QWORD))v18)(a1, a2);
      v17 = v25;
    }
  }
  v14 = sub_3EE700((__m128i **)(a1 + 80), a2, a3, v17);
  if ( !*(_QWORD *)(a1 + 104) )
  {
LABEL_9:
    if ( (*(_BYTE *)(a1 + 144) & 1) != 0 )
    {
      v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL);
      if ( v12 == sub_3D5DF0 )
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
        v12(a1);
      }
      *(_DWORD *)(a1 + 144) &= ~1u;
    }
    sub_445720(*(_QWORD *)(a1 + 8), 4u, 0xFFFFFFFF, 0xFFFFFFFF, a1);
    sub_44B1F0((__int64)&xmmword_2CA1760, a5, *(_DWORD *)(a1 + 40), v15, a6);
  }
  return v14;
}

