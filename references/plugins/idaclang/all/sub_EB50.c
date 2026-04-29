__int64 __fastcall sub_EB50(_QWORD *a1, const char *a2, _QWORD *a3, unsigned int a4, _BYTE *a5)
{
  void (__fastcall *v9)(_QWORD, const char *, _QWORD *); // rax
  unsigned int v10; // r14d
  const char *v12; // rax
  __int64 v13; // rsi
  const char *v14; // rax
  __int64 tinfo_size; // rbx
  const char *v16; // r12
  int tinfo_property; // eax
  void (__fastcall *v18)(_QWORD, const char *, _QWORD *); // rax
  __int64 v19; // rdx
  const char *v20; // rax
  size_t v21; // rax
  size_t v22; // rbx
  void *v23; // rdi
  size_t v24; // r12
  void *dest; // [rsp+0h] [rbp-70h] BYREF
  __int128 v26; // [rsp+8h] [rbp-68h]
  const char *v27; // [rsp+20h] [rbp-50h] BYREF
  __int128 v28; // [rsp+28h] [rbp-48h]
  unsigned __int64 v29; // [rsp+38h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  if ( (a4 & 1) != 0 )
  {
    LOBYTE(a4) = a4 | 0x85;
    v10 = save_tinfo(a1, *a3, 0, a2, a4);
    if ( v10 )
    {
      v20 = (const char *)dstr_tinfo(a1);
      sub_67C0(a3 + 10, (__int64)"failed to save named type (name=\"%s\" tif=\"%s\" code=%d)\n", a2, v20, v10);
      ++a3[17];
      return v10;
    }
    v18 = (void (__fastcall *)(_QWORD, const char *, _QWORD *))a3[18];
    if ( v18 )
      v18(*a3, a2, a1);
    ++a3[14];
  }
  else
  {
    if ( (a3[13] & 0x40) != 0 )
    {
      LOBYTE(a4) = a4 | 0x84;
      v10 = save_tinfo(a1, *a3, 0, a2, a4);
      if ( v10 )
      {
        v12 = (const char *)dstr_tinfo(a1);
        sub_67C0(a3 + 10, (__int64)"failed to save symbol (name=\"%s\" tif=\"%s\" code=%d)\n", a2, v12, v10);
        ++a3[17];
        return v10;
      }
    }
    v9 = (void (__fastcall *)(_QWORD, const char *, _QWORD *))a3[19];
    if ( v9 )
      v9(*a3, a2, a1);
    ++a3[15];
  }
  if ( a5 && *a5 )
  {
    set_tinfo_property4(a1, 5, a5, 0, 0, 0);
    if ( (*((_BYTE *)a3 + 109) & 1) == 0 )
      return 0;
LABEL_14:
    v13 = *a1;
    dest = nullptr;
    v26 = 0;
    if ( (v13 & 0x100) != 0 )
    {
      get_tinfo_pdata(&dest, v13, 0);
      v19 = v26;
      if ( !a2 || (unsigned __int64)v26 > 1 )
        goto LABEL_30;
    }
    else if ( !a2 )
    {
      v27 = nullptr;
      v28 = 0;
LABEL_17:
      v14 = s1;
LABEL_18:
      print_tinfo(&v27, 0, 0, 0, 34, a1, v14);
      tinfo_size = get_tinfo_size(0, *a1, 0);
      v16 = s1;
      if ( (_QWORD)v28 )
        v16 = v27;
      tinfo_property = get_tinfo_property(*a1, 7);
      sub_7470((__int64)"%u: %s; sizeof %zd\n", tinfo_property, v16, tinfo_size);
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v27);
      }
      if ( dest )
      {
        *(_QWORD *)&v26 = 0;
        qfree(dest);
      }
      return 0;
    }
    v21 = strlen(a2);
    v22 = v21;
    if ( !v21 )
    {
      *(_QWORD *)&v26 = 0;
      v27 = nullptr;
      v28 = 0;
      goto LABEL_17;
    }
    v23 = dest;
    v24 = v21 + 1;
    if ( *((_QWORD *)&v26 + 1) < v21 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v24, 1);
      v23 = dest;
    }
    *(_QWORD *)&v26 = v24;
    memmove(v23, a2, v22);
    *((_BYTE *)dest + v22) = 0;
    v19 = v26;
LABEL_30:
    v27 = nullptr;
    v14 = (const char *)dest;
    v28 = 0;
    if ( v19 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( (*((_BYTE *)a3 + 109) & 1) != 0 )
    goto LABEL_14;
  return 0;
}
