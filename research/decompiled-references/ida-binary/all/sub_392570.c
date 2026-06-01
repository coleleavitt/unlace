unsigned __int64 __fastcall struc_stroff_data_t__::vfunc_0(
        __int64 a1,
        QT::QTreeWidgetItem *(__fastcall ***a2)(__int64 a1, __int64 a2, const char **a3, QT::QTreeWidgetItem *a4),
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // rdi
  unsigned int i; // ebx
  double v7; // xmm0_8
  __int64 v8; // r13
  __int64 tinfo_tid; // rax
  QT::QTreeWidgetItem *(__fastcall *v10)(__int64, __int64, const char **, QT::QTreeWidgetItem *); // r14
  size_t v11; // r13
  QT::QTreeWidgetItem *(__fastcall **v12)(__int64, __int64, const char **, QT::QTreeWidgetItem *); // rax
  const char *v13; // r14
  size_t v14; // rax
  char *v15; // r13
  unsigned __int64 v16; // rdx
  char **p_s; // rsi
  QT::QTreeWidgetItem *v18; // r13
  const char *v19; // r14
  __int64 v21; // [rsp+8h] [rbp-D0h]
  unsigned int ordinal_limit; // [rsp+18h] [rbp-C0h]
  unsigned __int8 v24; // [rsp+1Fh] [rbp-B9h]
  __int64 v25; // [rsp+28h] [rbp-B0h] BYREF
  const char *v26; // [rsp+30h] [rbp-A8h] BYREF
  const char *v27; // [rsp+38h] [rbp-A0h] BYREF
  void *src; // [rsp+40h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-90h]
  char *s; // [rsp+60h] [rbp-78h] BYREF
  __int128 v31; // [rsp+68h] [rbp-70h]
  void *ptr[2]; // [rsp+80h] [rbp-58h] BYREF
  __int16 v33; // [rsp+90h] [rbp-48h]
  unsigned __int64 v34; // [rsp+98h] [rbp-40h]

  v24 = a3;
  v34 = __readfsqword(0x28u);
  v5 = nullptr;
  ordinal_limit = get_ordinal_limit(0, a2, a3, a4);
  if ( ordinal_limit > 1 )
  {
    for ( i = 1; ordinal_limit != i; ++i )
    {
      while ( 1 )
      {
        v25 = 0;
        v33 = 257;
        ptr[1] = (void *)i;
        ptr[0] = (void *)get_idati(v5);
        create_tinfo(&v25, 61, 189, ptr);
        if ( (get_tinfo_property(v25, 2) & 0x2F) == 0xD )
        {
          if ( (unsigned __int8)is_type_choosable(0, i) )
            break;
        }
        v5 = &v25;
        ++i;
        clear_tinfo_t(&v25);
        if ( ordinal_limit == i )
          return v34 - __readfsqword(0x28u);
      }
      v7 = 0.0;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( (v25 & 0x100) != 0 )
        get_tinfo_pdata(&src, v25, 0);
      v8 = operator new(0x40u);
      tinfo_tid = get_tinfo_tid(&v25, 0);
      sub_38A930(v8, 0, -1, tinfo_tid, -1);
      v10 = **a2;
      v26 = (const char *)v8;
      v11 = n[0];
      v31 = 0;
      s = nullptr;
      if ( n[0] )
      {
        s = (char *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v31 + 1) = v11;
        memcpy(s, src, v11);
        *(_QWORD *)&v31 = v11;
        if ( v10 == TStructureOffsetsForm::load_register_paths )
        {
LABEL_8:
          v12 = a2[1];
          v13 = v26;
          v26 = nullptr;
          v21 = (__int64)v12;
          if ( (_QWORD)v31 )
          {
            v14 = v31 - 1;
            v15 = s;
            v16 = (unsigned __int64)(v31 - 1) >> 63;
            if ( s )
              goto LABEL_10;
            goto LABEL_27;
          }
          v15 = (char *)&s1;
          LOBYTE(v16) = 0;
          v14 = 0;
          if ( !&s1 )
            goto LABEL_27;
LABEL_10:
          if ( (_BYTE)v16 )
          {
LABEL_27:
            v14 = 0;
            if ( v15 )
              v14 = strlen(v15);
          }
          v7 = QT::QString::fromUtf8(ptr, v14, v15);
          p_s = nullptr;
          v27 = v13;
          v18 = sub_391B50(v21, nullptr, (const QT::QString *)ptr, &v27);
          v19 = v27;
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          if ( v19 )
            (*(void (__fastcall **)(const char *, double))(*(_QWORD *)v19 + 8LL))(v19, v7);
          goto LABEL_16;
        }
      }
      else if ( v10 == TStructureOffsetsForm::load_register_paths )
      {
        goto LABEL_8;
      }
      p_s = &s;
      v18 = v10((__int64)a2, (__int64)&s, &v26, nullptr);
LABEL_16:
      if ( s )
      {
        *(_QWORD *)&v31 = 0;
        v7 = qfree(s, (const char *)p_s, v7);
      }
      if ( v26 )
        (*(void (__fastcall **)(const char *, double))(*(_QWORD *)v26 + 8LL))(v26, v7);
      sub_391E30(a1, a2, v24, &v25, 0, v18);
      if ( src )
      {
        n[0] = 0;
        qfree(src, (const char *)a2, v7);
      }
      v5 = &v25;
      clear_tinfo_t(&v25);
    }
  }
  return v34 - __readfsqword(0x28u);
}
