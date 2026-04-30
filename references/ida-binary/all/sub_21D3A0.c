unsigned __int64 __fastcall sub_21D3A0(__int64 a1, __int64 **a2, unsigned int a3, double a4)
{
  __int64 v5; // rax
  int v6; // r11d
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // r12
  char v11; // al
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  char v14; // dl
  int v15; // eax
  __int64 *v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i *v23; // rax
  const char *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 *v27; // rdi
  __int64 v28; // rdx
  const char *v29; // rsi
  const char *v30; // [rsp+0h] [rbp-458h] BYREF
  __m128i v31; // [rsp+8h] [rbp-450h] BYREF
  char v32[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v33; // [rsp+428h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v5 = sub_20F460(a1, a3);
  if ( !*(_DWORD *)(v5 + 8) )
    return v33 - __readfsqword(0x28u);
  v7 = v5;
  v8 = sub_20F460(a1, v6 + 1);
  v9 = *(_DWORD *)(v7 + 12);
  v10 = v8;
  if ( (dword_8CB6A4 & 1) == 0
    || !*(_DWORD *)(v8 + 8)
    || *(_DWORD *)(v8 + 12) != v9
    || (v19 = *(_QWORD *)(v8 + 16), v19 == -1)
    || v19 != *(_QWORD *)(v7 + 16) )
  {
    sub_169A50(*a2, (__int64)"%08X", v9);
    v11 = is_mapped(*(_QWORD *)(v7 + 16));
    v13 = *(_QWORD *)(v7 + 16);
    v14 = v11;
    v15 = *(_DWORD *)(v7 + 8);
    if ( v14 )
    {
      if ( (unsigned int)(v15 - 5) > 1 )
      {
        v27 = *a2 + 3;
        if ( *((_BYTE *)QT::QCoreApplication::self + 744) )
          get_nice_colored_name(v27, v13, 18);
        else
          sub_169A50(v27, (__int64)"%a", a4);
        v30 = nullptr;
        v31 = 0;
        generate_disasm_line(&v30, *(_QWORD *)(v7 + 16), 5);
        v28 = 0;
        v29 = &s1;
        if ( v31.m128i_i64[0] )
        {
          v29 = v30;
          v28 = (unsigned int)(v31.m128i_i32[0] - 1);
        }
        qstr2user(*a2 + 6, v29, v28);
        if ( v30 )
        {
          v31.m128i_i64[0] = 0;
          qfree(v30, v29);
        }
        goto LABEL_11;
      }
    }
    else if ( v15 != 5 && v15 != 6 )
    {
      goto LABEL_17;
    }
    if ( *(_QWORD *)(v7 + 24) )
    {
      v16 = *a2 + 3;
      if ( *((_BYTE *)QT::QCoreApplication::self + 744) )
        get_nice_colored_name(v16, v13, 18);
      else
        sub_169A50(v16, (__int64)"%a", a4);
      sub_21CDA0(v7, v32, (const char *)&elf_gnu_hash_bucket[42], v17);
      sub_20B400(*a2 + 6, v32);
      goto LABEL_11;
    }
LABEL_17:
    if ( v13 != -1 )
      sub_169A50(*a2 + 3, (__int64)"%a", a4);
    goto LABEL_11;
  }
  sub_20B400(*a2, "=");
  sub_20B400(*a2 + 3, "=");
  sub_20B400(*a2 + 6, "=");
LABEL_11:
  if ( *(_DWORD *)(v10 + 8) == 1
    && *(_DWORD *)(v7 + 8) == 1
    && (v20 = *(_QWORD **)(v7 + 24)) != nullptr
    && *(_DWORD *)(v10 + 12) != *(_DWORD *)(v7 + 12)
    && v20[4] == *(_DWORD *)(dbg + 64) )
  {
    v30 = nullptr;
    v31 = 0;
    sub_21C000(v20, (const char *)&v30, 1u, v12);
    v23 = (__m128i *)*a2;
    v24 = v30;
    v25 = (*a2)[9];
    v26 = (*a2)[11];
    v23[4].m128i_i64[1] = (__int64)v30;
    v23[5] = _mm_loadu_si128(&v31);
    v30 = (const char *)v25;
    v31.m128i_i64[1] = v26;
    if ( v25 )
      qfree(v25, (const char *)&v30, v26, v24, v21, v22, v30, 0, v31.m128i_i64[1]);
  }
  else
  {
    sub_21CDA0(v7, v32, (const char *)&elf_gnu_hash_bucket[42], v12);
    sub_20B400(*a2 + 9, v32);
  }
  return v33 - __readfsqword(0x28u);
}
