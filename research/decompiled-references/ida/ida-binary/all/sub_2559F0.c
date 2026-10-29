__int64 __fastcall sub_2559F0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char *v14; // rax
  const char *v15; // r14
  size_t v16; // rax
  size_t v17; // r12
  size_t v18; // rbx
  void *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  int v25; // r13d
  __int64 v26; // rax
  _DWORD *v27; // rsi
  int v28; // eax
  char i; // al
  const char *v30; // rsi
  char v31; // al
  void (__fastcall ***v32)(_QWORD); // rdi
  char v33; // bl
  bool v34; // zf
  void (__fastcall ***v35)(_QWORD); // rdi
  void (__fastcall ***v36)(_QWORD); // rsi
  __int64 (__fastcall *v37)(__int64, __int64); // rdx
  void *v38; // rdi
  unsigned int v39; // ebx
  void (__fastcall ***v41)(_QWORD); // rdi
  char v42; // [rsp+0h] [rbp-88h]
  char v43; // [rsp+0h] [rbp-88h]
  _DWORD *v44; // [rsp+18h] [rbp-70h] BYREF
  __int64 v45; // [rsp+20h] [rbp-68h] BYREF
  __int64 v46; // [rsp+28h] [rbp-60h] BYREF
  void *v47; // [rsp+30h] [rbp-58h] BYREF
  __int128 v48; // [rsp+38h] [rbp-50h]
  unsigned __int64 v49; // [rsp+48h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v14 = (const char *)sub_17CD60(
                        0,
                        (int)"*.c*",
                        (int)"Open a source file...",
                        a12,
                        a13,
                        a14,
                        a1,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        v42);
  if ( !v14 )
    return 0;
  v15 = v14;
  v47 = nullptr;
  v48 = 0;
  v16 = strlen(v14);
  v17 = v16 + 1;
  v18 = v16;
  v47 = (void *)qvector_reserve(&v47, 0, v16 + 1, 1);
  *(_QWORD *)&v48 = v17;
  memmove(v47, v15, v18);
  *((_BYTE *)v47 + v18) = 0;
  if ( (unsigned __int8)sub_23B790(&qword_8CC000, (__int64 *)&v47, 0) )
  {
    sub_169700(
      (int)"Mapped source file %s -> %s\n",
      (__int64)v15,
      (__int64)v47,
      v20,
      v21,
      v22,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v23,
      v24,
      a7,
      a8,
      v43);
    v15 = (const char *)v47;
  }
  v25 = 0;
  v26 = 0;
  if ( (_QWORD)xmmword_8CC458 )
  {
    while ( 1 )
    {
      v19 = qword_8CC450;
      v27 = *((_DWORD **)qword_8CC450 + v26);
      v28 = v27[4];
      if ( (v28 & 4) != 0 && (v28 & 1) == 0 )
      {
        (*(void (__fastcall **)(_DWORD **, _DWORD *, const char *))(*(_QWORD *)v27 + 64LL))(&v44, v27, v15);
        if ( v44 )
          break;
      }
LABEL_26:
      v26 = ++v25;
      if ( v25 >= (unsigned __int64)xmmword_8CC458 )
        goto LABEL_27;
    }
    for ( i = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v44 + 8LL))(v44);
          ;
          i = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v44 + 16LL))(v44) )
    {
      v36 = (void (__fastcall ***)(_QWORD))v44;
      if ( !i )
      {
        if ( v44 )
        {
          v34 = v44[2]-- == 1;
          if ( v34 )
            (**v36)(v36);
        }
        goto LABEL_26;
      }
      v37 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 32LL);
      if ( v37 == sub_226CE0 )
        (*(void (__fastcall **)(__int64 *))(*(_QWORD *)v44 + 24LL))(&v45);
      else
        v37((__int64)&v45, (__int64)v44);
      v46 = v45;
      if ( v45 )
        ++*(_DWORD *)(v45 + 8);
      v30 = nullptr;
      v31 = sub_385A80(&v46, 0, 0, 1);
      v32 = (void (__fastcall ***)(_QWORD))v46;
      v33 = v31;
      if ( v46 )
      {
        v34 = (*(_DWORD *)(v46 + 8))-- == 1;
        if ( v34 )
          (**v32)(v32);
      }
      v35 = (void (__fastcall ***)(_QWORD))v45;
      if ( v33 )
        break;
      if ( v45 )
      {
        v34 = (*(_DWORD *)(v45 + 8))-- == 1;
        if ( v34 )
          (**v35)(v35);
      }
    }
    if ( v45 )
    {
      v34 = (*(_DWORD *)(v45 + 8))-- == 1;
      if ( v34 )
        (**v35)(v35);
    }
    v41 = (void (__fastcall ***)(_QWORD))v44;
    if ( v44 )
    {
      v34 = v44[2]-- == 1;
      if ( v34 )
        (**v41)(v41);
    }
    v38 = v47;
    v39 = 1;
    if ( !v47 )
      return v39;
    goto LABEL_28;
  }
LABEL_27:
  v30 = v15;
  sub_169700(
    (int)"Could not find debug info for %s\n",
    (__int64)v15,
    (__int64)v19,
    v20,
    v21,
    v22,
    (__m128)0LL,
    a2,
    a3,
    a4,
    v23,
    v24,
    a7,
    a8,
    v43);
  v38 = v47;
  v39 = 0;
  if ( v47 )
  {
LABEL_28:
    *(_QWORD *)&v48 = 0;
    qfree(v38, v30);
  }
  return v39;
}
