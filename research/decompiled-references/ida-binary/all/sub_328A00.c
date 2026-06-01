__int64 __fastcall sa_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  bool v8; // zf
  __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v17; // rsi
  int *v18; // rbx
  unsigned __int8 v19; // bl
  __int64 v20; // rax
  const char *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  size_t v27; // rax
  size_t v28; // r15
  void *v29; // rdi
  size_t v30; // rdx
  __int64 v31; // rax
  size_t v32; // [rsp+8h] [rbp-4E0h]
  int v33; // [rsp+1Ch] [rbp-4CCh] BYREF
  char v34[48]; // [rsp+20h] [rbp-4C8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-498h] BYREF
  __int128 v36; // [rsp+58h] [rbp-490h]
  __int64 v37; // [rsp+80h] [rbp-468h]
  __int128 v38; // [rsp+88h] [rbp-460h]
  char s[1032]; // [rsp+A0h] [rbp-448h] BYREF
  unsigned __int64 v40; // [rsp+4A8h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 208);
  v8 = *(_BYTE *)(a1 + 200) == 0;
  v40 = __readfsqword(0x28u);
  v9 = *(__int64 **)(v7 + 8 * a6);
  v10 = *v9;
  if ( !v8 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64 *))(v10 + 128))(v9);
    v12 = *a2;
    if ( ea2str(s, 1024, v11) )
    {
      v27 = strlen(s);
      v28 = v27;
      if ( v27 )
      {
        v29 = (void *)*v12;
        v30 = v27 + 1;
        if ( v12[2] < v27 + 1 )
        {
          v32 = v27 + 1;
          v31 = qvector_reserve(v12, *v12, v30, 1);
          v30 = v32;
          *v12 = v31;
          v29 = (void *)v31;
        }
        v12[1] = v30;
        memmove(v29, s, v28);
        *(_BYTE *)(*v12 + v28) = 0;
      }
      else
      {
        v12[1] = 0;
      }
    }
    v13 = (*(__int64 (__fastcall **)(__int64 *))(*v9 + 128))(v9);
    get_func_name(*a2 + 3, v13);
    v14 = (__int64)(*a2 + 6);
    if ( *(_BYTE *)(a1 + 200) )
      goto LABEL_4;
LABEL_7:
    v17 = *(_QWORD *)(a1 + 184);
    v33 = 0;
    v18 = *(int **)(v17 + 728);
    goto LABEL_8;
  }
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD))v10)(v9, *a2, *(_QWORD *)(*(_QWORD *)(a1 + 184) + 728LL));
  v14 = (__int64)(*a2 + 3);
  if ( !*(_BYTE *)(a1 + 200) )
    goto LABEL_7;
LABEL_4:
  if ( *(_DWORD *)(a1 + 192) != 2 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64 *))(*v9 + 128))(v9);
    return generate_disasm_line(v14, v15, 4);
  }
  v17 = *(_QWORD *)(a1 + 184);
  v33 = 0;
  v18 = &v33;
  if ( qword_8CD7E8 )
    v18 = *(int **)(qword_8CD7E8 + 728LL);
LABEL_8:
  if ( v17 || (v17 = qword_8CC7C0) != 0 || (_QWORD)xmmword_8CC7D8 && (v17 = *(_QWORD *)qword_8CC7D0) != 0 )
  {
    sub_1E96E0((QT::QObject *)v34, a3, v17, 0);
    v35 = 0;
    v37 = 0;
    v36 = 0;
    v38 = 0;
    linearray_t_ctr(&v35, v18);
    v19 = getinf_flag(44, 32);
    setinf_flag(44, 32, 0);
    linearray_t_set_place(&v35, v9);
    v20 = linearray_t_down(&v35);
    v21 = &s1;
    if ( *(_QWORD *)(v20 + 8) )
      v21 = *(const char **)v20;
    tag_remove(v14, v21, 0);
    setinf_flag(44, 32, v19);
    linearray_t_dtr(&v35);
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37, (const char *)&qword_20);
    }
    v22 = v35;
    if ( v35 )
    {
      v23 = v36;
      if ( (_QWORD)v36 )
      {
        v24 = 0;
        do
        {
          v25 = (__int64 *)(v22 + 24 * v24);
          v26 = *v25;
          if ( *v25 )
          {
            v25[1] = 0;
            qfree(v26, (const char *)&qword_20);
            v22 = v35;
          }
          ++v24;
        }
        while ( v23 != v24 );
      }
      *(_QWORD *)&v36 = 0;
      qfree(v22, (const char *)&qword_20);
    }
    sub_1E98C0((QT::QObject *)v34);
  }
  return v40 - __readfsqword(0x28u);
}
