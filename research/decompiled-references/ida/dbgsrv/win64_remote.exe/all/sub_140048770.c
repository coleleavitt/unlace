/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140048770
// Address: 0x0000000140048770

//----- (0000000140048770) ----------------------------------------------------
__int64 __fastcall sub_140048770(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        int *a4,
        __int64 (__fastcall *a5)(__int64 a1, __int64 a2, void *a3, int *a4))
{
  __int64 v7; // r10
  __int64 v9; // r13
  __int64 v10; // rax
  const char *v11; // r15
  struct _exception *v12; // rdi
  void *v13; // rbx
  unsigned __int64 v14; // r12
  int v15; // edi
  unsigned __int64 v16; // rbp
  unsigned int v17; // esi
  const char *v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rcx
  _BYTE *v21; // rbp
  __int64 *v22; // r12
  unsigned __int64 v23; // r8
  void *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  size_t v27; // rax
  __int64 (__fastcall *v28)(__int64, __int64, void *, int *); // rax
  void **v29; // rbx
  void **v30; // rax
  void *v31; // rcx
  void *v32; // rcx
  int v33; // eax
  const char *v34; // rdx
  int v35; // [rsp+20h] [rbp-78h]
  void *v36; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v37; // [rsp+30h] [rbp-68h]
  unsigned __int64 v38; // [rsp+38h] [rbp-60h]
  void **v39; // [rsp+40h] [rbp-58h]
  void *Block; // [rsp+48h] [rbp-50h] BYREF
  __int64 v41; // [rsp+50h] [rbp-48h]
  __int64 v42; // [rsp+58h] [rbp-40h]

  v7 = qword_1400CB068;
  if ( qword_1400CB068 && *(_BYTE *)(qword_1400CB068 + 184) )
  {
    sub_140002CE0((struct __crt_locale_pointers *)"bfd_load_section(obj=%p, section_index=%llu).\n", a1, a2);
    v7 = qword_1400CB068;
  }
  if ( !a2 )
    return 1;
  if ( a2 - 1 < (unsigned __int64)a1[14] )
  {
    v9 = a1[13] + 120 * a2;
    v10 = *a1;
    if ( !*a1 || *(_DWORD *)(v10 + 8) != 1 )
    {
      sub_140002CE0((struct __crt_locale_pointers *)"Input source is not local file.\n");
      return 1;
    }
    v11 = Str1;
    v12 = (struct _exception *)Str1;
    if ( *(_QWORD *)(v10 + 24) )
      v12 = *(struct _exception **)(v10 + 16);
    v13 = sub_1400639D0(v12, 0);
    v36 = v13;
    if ( !v13 )
    {
      sub_140002CE0((struct __crt_locale_pointers *)"Cannot open file: %s.\n", (const char *)v12);
      return 1;
    }
    v39 = &v36;
    v14 = *(unsigned int *)(v9 - 112);
    v35 = *(_DWORD *)(v9 - 112);
    v15 = 1;
    v16 = 1;
    v17 = 0;
    if ( a5 )
    {
      Block = nullptr;
      v41 = 0;
      v42 = 0;
      if ( sub_14005D470("IDA_DWARF_MAX_ZIP_RATIO", (__int64)&Block) )
      {
        v18 = Str1;
        if ( v41 )
          v18 = (const char *)Block;
        v16 = (int)unknown_libname_43(v18);
      }
      else
      {
        v16 = 1000;
      }
      if ( Block )
      {
        v41 = 0;
        j_free(Block);
      }
      v13 = v36;
    }
    v38 = v14;
    v37 = v14 / v16;
    v19 = *(_QWORD *)(v9 - 72);
    if ( v19 == -1 )
      v19 = sub_140063BF0((__int64)v13, 0, 1);
    v20 = sub_140063C70((__int64)v13) - v19;
    if ( v19 < 0
      || v20 < 0
      || (_DWORD)v37 && (!(0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v37) || v20 < (unsigned __int64)(unsigned int)v37) )
    {
      if ( qword_1400CB068 && *(_BYTE *)(qword_1400CB068 + 184) )
      {
        if ( *(_QWORD *)(v9 - 96) )
          v11 = *(const char **)(v9 - 104);
        v34 = "Seemingly wrong";
        if ( !a5 )
          v34 = "Wrong";
        sub_140002CE0((struct __crt_locale_pointers *)"%s section '%s' size %u bytes\n", v34, v11, v14);
      }
      v33 = 435;
    }
    else
    {
      if ( *(_QWORD *)(v9 - 96) )
        v11 = *(const char **)(v9 - 104);
      v21 = sub_14005AA50((unsigned int)(v14 + 1));
      if ( v21 )
      {
        v22 = a1 + 29;
        v23 = a1[30] + 1;
        v37 = a1[31];
        if ( v23 > v37 )
        {
          v24 = sub_14005ABE0((__int64)(a1 + 29), nullptr, v23, 0x48u);
          v25 = a1[31];
          a1[31] = v37;
          sub_140046B70((__int64)v24, *v22, a1[30]);
          j_free((void *)*v22);
          *v22 = (__int64)v24;
          a1[31] = v25;
        }
        v26 = a1[29] + 72 * a1[30];
        *(_QWORD *)v26 = 0;
        *(_QWORD *)(v26 + 8) = 0;
        *(_QWORD *)(v26 + 16) = 0;
        *(_QWORD *)(v26 + 24) = 0;
        *(_QWORD *)(v26 + 32) = 0;
        *(_QWORD *)(v26 + 40) = 0;
        ++a1[30];
        *(_QWORD *)(v26 + 64) = a2;
        if ( v11 && (v27 = strlen(v11)) != 0 )
          sub_140001810(v26 + 24, v11, v27);
        else
          *(_QWORD *)(v26 + 32) = 0;
        *(_DWORD *)(v26 + 48) = v35;
        *(_QWORD *)(v26 + 56) = v21;
        v21[v38] = 0;
        sub_140063BF0((__int64)v36, *(_QWORD *)(v9 - 72), 0);
        v28 = sub_1400483A0;
        if ( a5 )
          v28 = a5;
        v15 = v28((__int64)v36, v9 - 120, v21, a4);
        if ( !v15 )
        {
          *a3 = v21;
LABEL_68:
          sub_140063970(v36);
          return v17;
        }
        v29 = (void **)a1[29];
        v30 = &v29[9 * a1[30]];
        if ( v29 != v30 )
        {
          while ( v29[7] != v21 )
          {
            v29 += 9;
            if ( v29 == v30 )
              goto LABEL_67;
          }
          v31 = v29[3];
          if ( v31 )
          {
            v29[4] = nullptr;
            j_free(v31);
            v29[3] = nullptr;
            v29[5] = nullptr;
          }
          v32 = *v29;
          if ( *v29 )
          {
            v29[1] = nullptr;
            j_free(v32);
            *v29 = nullptr;
            v29[2] = nullptr;
          }
          sub_140046B70(
            (__int64)v29,
            (__int64)(v29 + 9),
            ((__int64)((unsigned __int128)((a1[29] + 72 * a1[30] - (__int64)v29) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2)
          - 1
          + ((unsigned __int64)((unsigned __int128)((a1[29] + 72 * a1[30] - (__int64)v29) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63));
          --a1[30];
          j_free(v21);
        }
LABEL_67:
        v17 = v15;
        goto LABEL_68;
      }
      if ( qword_1400CB068 && *(_BYTE *)(qword_1400CB068 + 184) )
        sub_140002CE0((struct __crt_locale_pointers *)"Couldn't allocate %u bytes of data for section.\n", v14);
      v33 = 8;
    }
    *a4 = v33;
    goto LABEL_67;
  }
  if ( v7 )
  {
    if ( *(_BYTE *)(v7 + 184) )
      sub_140002CE0((struct __crt_locale_pointers *)"No such section.\n");
  }
  return 0xFFFFFFFFLL;
}
// 140070E80: using guessed type __int64 __fastcall unknown_libname_43(_QWORD);
// 1400CB068: using guessed type __int64 qword_1400CB068;
