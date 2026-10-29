__int64 __fastcall sub_211AC70(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rbp
  unsigned __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  unsigned __int8 *v19; // rbp
  __int64 (__fastcall *v20)(); // rax
  __int64 v22; // r13
  __int64 (__fastcall *v23)(); // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  void (*v27)(); // rax
  __int64 (__fastcall *v28)(); // rbp
  unsigned __int8 *v29; // rax
  __m128i v30[2]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v31; // [rsp+20h] [rbp-38h]

  v8 = (_QWORD *)a1[1];
  v9 = sub_210EA90(a3, 0, v8, 0, a5, a6);
  v12 = sub_210EA90(a2, 0, (_QWORD *)a1[1], 0, v10, v11);
  v14 = sub_210EB10(18, v12, v9, v8, 0, v13);
  v18 = a1[1];
  v19 = (unsigned __int8 *)v14;
  if ( *(_BYTE *)(*(_QWORD *)(v18 + 152) + 256LL) )
  {
    v30[0].m128i_i64[0] = (__int64)"set";
    v31 = 259;
    v22 = sub_21085E0(v18, v30, 1, v15, v16, v17);
    v23 = *(__int64 (__fastcall **)())(*a1 + 272LL);
    if ( v23 == sub_211BD20 )
    {
      sub_211A5A0((__int64)a1, v19);
      sub_21233E0(v22);
      v26 = a1[2];
      if ( v26 )
      {
        v27 = *(void (**)())(*(_QWORD *)v26 + 24LL);
        if ( v27 != nullsub_1429 )
          ((void (__fastcall *)(__int64, __int64, unsigned __int8 *))v27)(v26, v22, v19);
      }
    }
    else
    {
      ((void (__fastcall *)(_QWORD *, __int64, unsigned __int8 *))v23)(a1, v22, v19);
    }
    v28 = *(__int64 (__fastcall **)())(*a1 + 528LL);
    v29 = (unsigned __int8 *)sub_210EA90(v22, 0, (_QWORD *)a1[1], 0, v24, v25);
    if ( v28 == sub_211BA70 )
      return sub_211A5A0((__int64)a1, v29);
    else
      return ((__int64 (__fastcall *)(_QWORD *, unsigned __int8 *, _QWORD, _QWORD))v28)(a1, v29, a4, 0);
  }
  else
  {
    v20 = *(__int64 (__fastcall **)())(*a1 + 528LL);
    if ( v20 == sub_211BA70 )
      return sub_211A5A0((__int64)a1, v19);
    else
      return ((__int64 (__fastcall *)(_QWORD *, unsigned __int8 *, _QWORD, _QWORD))v20)(a1, v19, a4, 0);
  }
}
