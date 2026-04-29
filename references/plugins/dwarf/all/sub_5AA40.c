__int64 __fastcall sub_5AA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *exception; // r14
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v10; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  const __m128i *v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rbx
  const char *v23; // rax
  const char *v24; // r12
  __int64 v25; // r13
  size_t v26; // rax
  size_t v27; // r10
  size_t v28; // r11
  const __m128i *v29; // rsi
  size_t v30; // rdx
  __int64 v31; // r12
  const __m128i *v32; // rsi
  __int64 v33; // r13
  __int64 v34; // rdx
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  const __m128i *v43; // rbx
  int v44; // r12d
  const char *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r13
  __int64 v48; // rcx
  size_t v49; // [rsp+8h] [rbp-108h]
  size_t v50; // [rsp+10h] [rbp-100h]
  size_t v51; // [rsp+18h] [rbp-F8h]
  __int64 v52; // [rsp+28h] [rbp-E8h]
  const char *v53; // [rsp+30h] [rbp-E0h]
  char v54; // [rsp+30h] [rbp-E0h]
  unsigned int v55; // [rsp+38h] [rbp-D8h]
  __int64 v56; // [rsp+38h] [rbp-D8h]
  char v57; // [rsp+38h] [rbp-D8h]
  __int64 v58; // [rsp+40h] [rbp-D0h]
  unsigned __int8 v60; // [rsp+48h] [rbp-C8h]
  __int64 v61; // [rsp+48h] [rbp-C8h]
  __int64 v62; // [rsp+58h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-B0h] BYREF
  __int128 v64; // [rsp+68h] [rbp-A8h]
  __int64 v65; // [rsp+80h] [rbp-90h] BYREF
  __int128 v66; // [rsp+88h] [rbp-88h]
  _DWORD *v67; // [rsp+A0h] [rbp-70h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-68h]
  const __m128i *v69; // [rsp+C0h] [rbp-50h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v71; // [rsp+D8h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  v64 = 0;
  v63 = 0;
  v65 = 0;
  v66 = 0;
  v10 = serialize_tinfo(&v63, &v65, 0, a4, 262);
  if ( !(_BYTE)v10 )
  {
    if ( *(_DWORD *)(a3 + 272) != 2 )
      goto LABEL_3;
    if ( (debug & 0x400000) != 0 )
    {
      v12 = sub_81C40(a3 + 8);
      sub_88B80(
        (unsigned int)"Couldn't serialize complex type @ %s. Removing bitfields (if any) and trying again.\n",
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    clear_tinfo_t(a4);
    if ( v63 )
    {
      *(_QWORD *)&v64 = 0;
      qfree(v63);
      v63 = 0;
      *((_QWORD *)&v64 + 1) = 0;
    }
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree(v65);
      v65 = 0;
      *((_QWORD *)&v66 + 1) = 0;
    }
    v69 = nullptr;
    v70 = 0;
    if ( (unsigned __int8)sub_30760(a3, a4, a1, a2, &v69, 1u)
      && (unsigned __int8)serialize_tinfo(&v63, &v65, 0, a4, 262) )
    {
      v17 = v69;
      *(_BYTE *)(a3 + 412) |= 4u;
      if ( !v17 )
        goto LABEL_18;
      goto LABEL_17;
    }
    sub_16F70();
    if ( (*(_BYTE *)(a3 + 412) & 1) != 0 )
      v56 = *(_QWORD *)(a3 + 416) >> 3;
    else
      v56 = *(_QWORD *)(a3 + 368);
    if ( (debug & 0x400000) != 0 )
    {
      v35 = (unsigned int)sub_575D0((_DWORD *)a3);
      sub_88B80((unsigned int)"Saving %s as a blob of %llu bytes.\n", v35, v56, v36, v37, v38);
    }
    clear_tinfo_t(a4);
    if ( v63 )
    {
      *(_QWORD *)&v64 = 0;
      qfree(v63);
      v63 = 0;
      *((_QWORD *)&v64 + 1) = 0;
    }
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree(v65);
      v65 = 0;
      *((_QWORD *)&v66 + 1) = 0;
    }
    v62 = 0;
    create_tinfo(&v62, 2, 7, 0);
    LODWORD(v68) = 0;
    v67 = nullptr;
    DWORD1(v68) = v56;
    copy_tinfo_t(&v67, &v62);
    v54 = create_tinfo(a4, 11, 11, &v67);
    clear_tinfo_t(&v67);
    if ( !v54 || !(unsigned __int8)serialize_tinfo(&v63, &v65, 0, a4, 262) )
    {
      if ( (debug & 0x400000) != 0 )
        sub_88B80(
          (unsigned int)"Couldn't create an array of %llu elements. Trying to save as 1-byte blob.\n",
          v56,
          v39,
          v40,
          v41,
          v42);
      v67 = nullptr;
      *(_QWORD *)&v68 = 0x100000000LL;
      copy_tinfo_t(&v67, &v62);
      v57 = create_tinfo(a4, 11, 11, &v67);
      clear_tinfo_t(&v67);
      if ( !v57 || !(unsigned __int8)serialize_tinfo(&v63, &v65, 0, a4, 262) )
      {
        clear_tinfo_t(&v62);
        if ( v69 )
        {
          *(_QWORD *)&v70 = 0;
          qfree(v69);
        }
        goto LABEL_3;
      }
    }
    *(_BYTE *)(a3 + 412) |= 8u;
    clear_tinfo_t(&v62);
    v17 = v69;
    if ( v69 )
    {
LABEL_17:
      *(_QWORD *)&v70 = 0;
      qfree(v17);
    }
  }
LABEL_18:
  v60 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) + 144LL) + 8LL);
  LODWORD(v62) = 0;
  v52 = v18;
  v55 = *(_DWORD *)(a3 + 284);
  v53 = *(const char **)(a3 + 312);
  while ( 1 )
  {
    v10 = v60;
    v19 = sub_5A7B0(v52, *(_DWORD *)(a3 + 276), v55, v53, &v63, &v65, a3, v60);
    LOBYTE(v10) = v19 | v60;
    if ( (unsigned __int8)v19 | v60 )
      break;
    if ( !(unsigned int)get_named_type(v52, v53, 3, 0, 0, 0, 0, 0, &v62) )
      goto LABEL_3;
    v20 = v62;
    if ( !(_DWORD)v62 )
      goto LABEL_3;
    v21 = *(_QWORD *)(a3 + 232);
    v67 = nullptr;
    v68 = 0;
    v60 = (v21 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v21 != -1;
    if ( !v60 )
    {
      if ( under_debugger )
        BUG();
      interr(30478);
    }
    sub_58940(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) + 144LL), (__int64)&v67, v20, a3 + 232);
    v22 = 0;
    v69 = nullptr;
    v70 = 0;
    if ( !(_QWORD)v68 )
      goto LABEL_51;
    while ( 1 )
    {
      v23 = (const char *)sub_81860(&v67[4 * v22], 0, 0);
      v24 = v23;
      if ( v23 )
      {
        v25 = v70;
        v26 = strlen(v23);
        v27 = v26;
        v28 = v26;
        if ( v25 )
        {
          --v25;
          v28 = v26 + v25;
        }
        v29 = v69;
        v30 = v28 + 1;
        if ( *((_QWORD *)&v70 + 1) < v28 + 1 )
        {
          v49 = v26;
          v50 = v28;
          v51 = v28 + 1;
          v69 = (const __m128i *)qvector_reserve(&v69, v69, v30, 1);
          v27 = v49;
          v29 = v69;
          v28 = v50;
          v30 = v51;
        }
        *(_QWORD *)&v70 = v30;
        v29->m128i_i8[v28] = 0;
        memmove(&v69->m128i_i8[v25], v24, v27);
      }
      v31 = v70;
      if ( ++v22 >= (unsigned __int64)v68 )
        break;
      if ( (unsigned __int64)v70 > 1 )
      {
        v32 = v69;
        v33 = v70 - 1;
        v34 = v70 + 2;
        if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v70 + 2) )
        {
          v69 = (const __m128i *)qvector_reserve(&v69, v69, v34, 1);
          v34 = v31 + 2;
          v32 = v69;
        }
        *(_QWORD *)&v70 = v34;
        v32->m128i_i8[v31 + 1] = 0;
        *(__int16 *)((char *)v69->m128i_i16 + v33) = 8236;
      }
    }
    if ( (_QWORD)v70 )
      v43 = v69;
    else
LABEL_51:
      v43 = (const __m128i *)src;
    v44 = v62;
    v45 = (const char *)sub_81C40(a3 + 8);
    sub_5A690(
      (__int64)"Overriding existing type '%s' with type @ %s.\n"
               "It is very likely the DWARF plugin failed to determine\n"
               "that those two types are, in fact, the same.\n"
               "(existing type's ordinal is %u, DIE saved there: %s)\n",
      v53,
      v45,
      v44,
      v43->m128i_i8);
    v55 |= 4u;
    if ( v69 )
    {
      *(_QWORD *)&v70 = 0;
      qfree(v69);
    }
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67);
    }
  }
  v10 = v60;
  LOBYTE(v10) = v19 & v60;
  if ( ((unsigned __int8)v19 & v60) != 0 )
  {
    v46 = (unsigned int)v62;
    if ( (_DWORD)v62 && (_DWORD)v62 != *(_DWORD *)(a3 + 276) )
    {
      v47 = *(_QWORD *)(a3 + 384);
      v48 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) + 144LL) + 192LL);
      v58 = v47 + 104LL * *(_QWORD *)(a3 + 392);
      v61 = v48;
      if ( v58 != v47 )
      {
        do
        {
          LODWORD(v69) = 0;
          *(_QWORD *)&v70 = -1;
          *((_QWORD *)&v70 + 1) = v61;
          v67 = nullptr;
          if ( (unsigned __int8)sub_554E0(&v67, (__int64)&v69, (_DWORD *)(v47 + 48), 0) )
          {
            if ( *v67 == 2 )
            {
              v48 = (unsigned int)v62;
              if ( v67[4] == (_DWORD)v62 )
              {
                exception = __cxa_allocate_exception(0x18u);
                sub_94DC0(
                  (_DWORD)exception,
                  (unsigned int)"The DWARF plugin has run into an inconsistent state.",
                  v5,
                  v6,
                  v7,
                  v8);
                __cxa_throw(exception, (struct type_info *)&`typeinfo for'die_t::failure_t, (void (*)(void *))sub_52F30);
              }
            }
          }
          v47 += 104;
        }
        while ( v47 != v58 );
        v46 = (unsigned int)v62;
      }
      set_type_alias(v52, v46, *(unsigned int *)(a3 + 276), v48);
    }
  }
  else
  {
    v10 = v19;
  }
LABEL_3:
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  return v10;
}
