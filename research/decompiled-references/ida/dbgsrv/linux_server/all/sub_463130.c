/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463130
// Address: 0x0000000000463130

//----- (0000000000463130) ----------------------------------------------------
__int64 __fastcall sub_463130(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // r14
  __int64 (__fastcall *v18)(__int64, __int64, void *, _DWORD *, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rbp
  __int64 v19; // rax
  unsigned int v20; // ebp
  const char *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __int64 v28; // r15
  char v29; // al
  unsigned __int64 v30; // rcx
  const char *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  const char *v37; // rdx
  const char *v38; // rsi
  const char *v39; // rdx
  _BYTE *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  char v47; // [rsp+0h] [rbp-78h]
  void *v48; // [rsp+0h] [rbp-78h]
  __int64 v49; // [rsp+8h] [rbp-70h]
  unsigned int v50; // [rsp+8h] [rbp-70h]
  void *v51; // [rsp+8h] [rbp-70h]
  __int64 v52; // [rsp+10h] [rbp-68h]
  unsigned __int64 v53; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v55; // [rsp+28h] [rbp-50h]
  unsigned __int64 v56; // [rsp+38h] [rbp-40h]

  v14 = a2;
  v56 = __readfsqword(0x28u);
  v18 = (__int64 (__fastcall *)(__int64, __int64, void *, _DWORD *, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))a5;
  if ( qword_4C8250 && *(_BYTE *)(qword_4C8250 + 184) )
  {
    v32 = a2;
    a2 = (__int64)a1;
    *(double *)a7.m128_u64 = sub_410EA0(
                               (int)"bfd_load_section(obj=%p, section_index=%llu).\n",
                               (__int64)a1,
                               v32,
                               (__int64)a4,
                               a5,
                               a6,
                               a7,
                               a8,
                               a9,
                               a10,
                               a11,
                               a12,
                               a13,
                               a14,
                               v47);
  }
  if ( !v14 )
    return 1;
  if ( v14 - 1 < (unsigned __int64)a1[14] )
  {
    v19 = *a1;
    if ( !*a1 || *(_DWORD *)(v19 + 8) != 1 )
    {
      sub_410EA0(
        (int)"Input source is not local file.\n",
        a2,
        (__int64)a3,
        (__int64)a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        v47);
      return 1;
    }
    v22 = s1;
    if ( *(_QWORD *)(v19 + 24) )
      v22 = *(const char **)(v19 + 16);
    v49 = (__int64)v22;
    v52 = a1[13];
    v48 = (void *)sub_47F560(v22, 0);
    if ( !v48 )
    {
      sub_410EA0((int)"Cannot open file: %s.\n", v49, v23, v49, v24, v25, a7, a8, a9, a10, v26, v27, a13, a14, 0);
      return 1;
    }
    v28 = v52 + 120 * (v14 - 1);
    v50 = *(_DWORD *)(v28 + 8);
    if ( v18 )
    {
      a7 = 0;
      ptr = nullptr;
      v55 = 0;
      v29 = sub_4837D0("IDA_DWARF_MAX_ZIP_RATIO", (__int64)&ptr);
      v30 = 1000;
      if ( v29 )
      {
        v31 = s1;
        if ( (_QWORD)v55 )
          v31 = (const char *)ptr;
        v30 = (int)strtol(v31, nullptr, 10);
      }
      if ( ptr )
      {
        v53 = v30;
        *(_QWORD *)&v55 = 0;
        j__free(ptr);
        v30 = v53;
      }
    }
    else
    {
      v30 = 1;
    }
    LODWORD(ptr) = v50 / v30;
    if ( (unsigned __int8)sub_462B80((__int64)v48, &ptr, 1u, *(_QWORD *)(v28 + 48), -1) )
    {
      v39 = s1;
      if ( *(_QWORD *)(v28 + 24) )
        v39 = *(const char **)(v28 + 16);
      v40 = sub_45E0A0(a1, v14, v39, v50);
      if ( v40 )
      {
        v51 = v40;
        sub_47F740((__int64)v48, *(_QWORD *)(v28 + 48), 0);
        if ( !v18 )
          v18 = sub_45C290;
        v20 = ((__int64 (__fastcall *)(void *, __int64, void *, _DWORD *))v18)(v48, v28, v51, a4);
        if ( v20 )
          sub_45E300((__int64)a1, v51);
        else
          *a3 = v51;
        goto LABEL_32;
      }
      if ( qword_4C8250 && *(_BYTE *)(qword_4C8250 + 184) )
        sub_410EA0(
          (int)"Couldn't allocate %u bytes of data for section.\n",
          v50,
          v41,
          v42,
          v43,
          v44,
          a7,
          a8,
          a9,
          a10,
          v45,
          v46,
          a13,
          a14,
          (char)v48);
      *a4 = 8;
    }
    else
    {
      if ( qword_4C8250 && *(_BYTE *)(qword_4C8250 + 184) )
      {
        v37 = s1;
        if ( *(_QWORD *)(v28 + 24) )
          v37 = *(const char **)(v28 + 16);
        v38 = "Seemingly wrong";
        if ( !v18 )
          v38 = "Wrong";
        sub_410EA0(
          (int)"%s section '%s' size %u bytes\n",
          (__int64)v38,
          (__int64)v37,
          v50,
          v33,
          v34,
          a7,
          a8,
          a9,
          a10,
          v35,
          v36,
          a13,
          a14,
          (char)v48);
      }
      *a4 = 435;
    }
    v20 = 1;
LABEL_32:
    sub_47F680(v48);
    return v20;
  }
  if ( qword_4C8250 && *(_BYTE *)(qword_4C8250 + 184) )
    sub_410EA0(
      (int)"No such section.\n",
      a2,
      (__int64)a3,
      (__int64)a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v47);
  return (unsigned int)-1;
}
// 4632BF: variable 'v47' is possibly undefined
// 4631A1: variable 'a3' is possibly undefined
// 4631A1: variable 'a4' is possibly undefined
// 4631A1: variable 'a5' is possibly undefined
// 4631A1: variable 'a6' is possibly undefined
// 4631A1: variable 'a11' is possibly undefined
// 4631A1: variable 'a12' is possibly undefined
// 46336A: variable 'v33' is possibly undefined
// 46336A: variable 'v34' is possibly undefined
// 46336A: variable 'v35' is possibly undefined
// 46336A: variable 'v36' is possibly undefined
// 463380: variable 'v48' is possibly undefined
// 46345D: variable 'v41' is possibly undefined
// 46345D: variable 'v42' is possibly undefined
// 46345D: variable 'v43' is possibly undefined
// 46345D: variable 'v44' is possibly undefined
// 46345D: variable 'v45' is possibly undefined
// 46345D: variable 'v46' is possibly undefined
// 463472: variable 'v23' is possibly undefined
// 463472: variable 'v24' is possibly undefined
// 463472: variable 'v25' is possibly undefined
// 463472: variable 'v26' is possibly undefined
// 463472: variable 'v27' is possibly undefined
// 4C8250: using guessed type __int64 qword_4C8250;
