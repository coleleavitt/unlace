unsigned __int64 __fastcall exp_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 entry_ordinal; // rax
  const char *v8; // rbx
  const char *entry; // r12
  double v10; // xmm0_8
  const char *v11; // r15
  __int64 *v12; // r10
  size_t v13; // rax
  size_t v14; // r9
  __int64 *v15; // rbx
  size_t v16; // r13
  char *v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbp
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  int v22; // eax
  unsigned int v24; // eax
  __int64 v25; // rax
  void *v26; // rdi
  size_t v27; // rdx
  __int64 v28; // rax
  __int64 *v29; // [rsp+8h] [rbp-90h]
  unsigned __int64 v30; // [rsp+8h] [rbp-90h]
  size_t v31; // [rsp+8h] [rbp-90h]
  char *v32; // [rsp+10h] [rbp-88h]
  __int64 *v33; // [rsp+10h] [rbp-88h]
  size_t v34; // [rsp+10h] [rbp-88h]
  __int64 v35; // [rsp+18h] [rbp-80h]
  size_t v36; // [rsp+18h] [rbp-80h]
  const char *v37; // [rsp+20h] [rbp-78h] BYREF
  __int128 v38; // [rsp+28h] [rbp-70h]
  const char *v39; // [rsp+40h] [rbp-58h] BYREF
  __int128 v40; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  entry_ordinal = get_entry_ordinal(a5);
  if ( entry_ordinal == -1 )
    return v41 - __readfsqword(0x28u);
  v8 = (const char *)entry_ordinal;
  v37 = nullptr;
  entry = (const char *)get_entry(entry_ordinal);
  v38 = 0;
  get_entry_name(&v37, v8);
  v10 = 0.0;
  v39 = nullptr;
  v11 = &s1;
  v40 = 0;
  if ( (_QWORD)v38 )
    v11 = v37;
  if ( *((_BYTE *)QT::QCoreApplication::self + 745) )
  {
    v24 = getinf(36);
    if ( (int)demangle_name(&v39, v11, v24, 2) > 0 )
    {
      if ( !(_QWORD)v40 )
      {
        v12 = *a2;
LABEL_7:
        v12[1] = 0;
        goto LABEL_8;
      }
      v11 = v39;
    }
  }
  v12 = *a2;
  if ( !v11 )
    goto LABEL_7;
  v29 = *a2;
  v13 = strlen(v11);
  v12 = v29;
  v14 = v13;
  if ( !v13 )
    goto LABEL_7;
  v26 = (void *)*v29;
  v27 = v13 + 1;
  if ( v29[2] < v13 + 1 )
  {
    v36 = v13;
    v34 = v13 + 1;
    v28 = qvector_reserve(v29, *v29, v27, 1);
    v12 = v29;
    v14 = v36;
    v26 = (void *)v28;
    v27 = v34;
    *v29 = v28;
  }
  v12[1] = v27;
  v33 = v12;
  v31 = v14;
  memmove(v26, v11, v14);
  *(_BYTE *)(*v33 + v31) = 0;
LABEL_8:
  sub_169A50(*a2 + 3, (__int64)"%0*a", 2 * *(_DWORD *)(a1 + 180), 0.0);
  if ( v8 == entry )
  {
    if ( entry != (const char *)getinf(16) )
      goto LABEL_13;
    v15 = *a2;
    v16 = 12;
    v17 = "[main entry]";
    v18 = 12;
    v19 = (*a2)[7];
    if ( !v19 )
    {
LABEL_11:
      v20 = v15[6];
      v21 = v18 + 1;
      if ( v15[8] >= (unsigned __int64)(v18 + 1) )
      {
LABEL_12:
        v15[7] = v21;
        *(_BYTE *)(v20 + v18) = 0;
        memmove((void *)(v19 + v15[6]), v17, v16);
        goto LABEL_13;
      }
LABEL_26:
      v35 = v18;
      v32 = v17;
      v30 = v21;
      v25 = qvector_reserve(v15 + 6, v20, v21, 1);
      v15[6] = v25;
      v18 = v35;
      v20 = v25;
      v17 = v32;
      v21 = v30;
      goto LABEL_12;
    }
LABEL_25:
    --v19;
    v20 = v15[6];
    v18 = v19 + v16;
    v21 = v19 + v16 + 1;
    if ( v15[8] >= v21 )
      goto LABEL_12;
    goto LABEL_26;
  }
  sub_169A50(*a2 + 6, (__int64)"%lld", v8);
  if ( entry == (const char *)getinf(16) )
  {
    v15 = *a2;
    v16 = 13;
    v17 = " [main entry]";
    v18 = 13;
    v19 = (*a2)[7];
    if ( !v19 )
      goto LABEL_11;
    goto LABEL_25;
  }
LABEL_13:
  v22 = sub_304FC0(QT::QCoreApplication::self, entry);
  if ( v22 != -1 )
    *a3 = v22;
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    v10 = qfree(v39, entry);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37, entry, v10);
  }
  return v41 - __readfsqword(0x28u);
}
