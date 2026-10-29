unsigned __int64 __fastcall sub_4B3E70(
        const char *a1,
        const char *a2,
        __int64 a3,
        unsigned __int8 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  const char *v13; // rbx
  int v14; // eax
  double v15; // xmm4_8
  double v16; // xmm5_8
  const char *v17; // rsi
  size_t v19; // rax
  size_t v20; // r12
  size_t v21; // rbp
  int *v22; // r15
  int *v23; // rbx
  __int64 v24; // rbp
  char *v25; // r14
  char *v26; // rax
  int *v27; // r12
  const char *v28; // rsi
  const char *v29; // rdi
  int v30; // eax
  int *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  const char *v34; // rsi
  char *v35; // [rsp+0h] [rbp-98h]
  char **p_s2; // [rsp+18h] [rbp-80h] BYREF
  __int64 v38; // [rsp+20h] [rbp-78h] BYREF
  __int128 v39; // [rsp+28h] [rbp-70h]
  char *s2; // [rsp+40h] [rbp-58h] BYREF
  __int128 v41; // [rsp+48h] [rbp-50h]
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v13 = a2;
  v42 = __readfsqword(0x28u);
  v39 = 0;
  v38 = 0;
  v14 = strcmp(a2, "UnhideAll");
  v17 = a1;
  if ( !v14 )
    v13 = "UnHideAll";
  if ( !(unsigned __int8)sub_4B3AE0(
                           (__int64)&v38,
                           a1,
                           a3,
                           "Bad keyboard assignment\n"
                           "\n"
                           "Keyboard definition syntax is:\n"
                           "\n"
                           "     \"ActionName\" = Value\n"
                           "\n"
                           "  where value may be:\n"
                           "\n"
                           "     a string:       \"Ctrl-F5\"\n"
                           "     a char:         'F'\n"
                           "     a scancode:     0x4900\n"
                           "     zero:           0\n"
                           "\n"
                           "  Zero scancode disables the hot key.\n",
                           0.0,
                           a6,
                           a7,
                           a8,
                           v15,
                           v16,
                           a11,
                           a12) )
    goto LABEL_4;
  s2 = nullptr;
  v41 = 0;
  if ( v13 )
  {
    v19 = strlen(v13);
    v20 = v19 + 1;
    v21 = v19;
    s2 = (char *)qvector_reserve(&s2, 0, v19 + 1, 1);
    *(_QWORD *)&v41 = v20;
    memmove(s2, v13, v21);
    s2[v21] = 0;
  }
  v22 = (int *)qword_8D1CB0;
  v23 = &dword_8D1CA8;
  if ( !qword_8D1CB0 )
    goto LABEL_29;
  v24 = v41;
  v25 = s2;
  v26 = (char *)&s1;
  v23 = &dword_8D1CA8;
  if ( (_QWORD)v41 )
    v26 = s2;
  v35 = v26;
  while ( 1 )
  {
    v32 = *((_QWORD *)v22 + 5);
    if ( !v24 )
      break;
    if ( v32 )
      goto LABEL_22;
    v27 = v22;
    v28 = v25;
    v29 = &s1;
LABEL_15:
    v30 = strcmp(v29, v28);
    v31 = *((int **)v22 + 2);
    v22 = *((int **)v22 + 3);
    if ( v30 >= 0 )
    {
      v23 = v27;
      v22 = v31;
    }
    if ( !v22 )
      goto LABEL_24;
  }
  if ( v32 )
  {
LABEL_22:
    v29 = *((const char **)v22 + 4);
    v28 = v35;
    v27 = v22;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v33 = *((_QWORD *)v22 + 2);
    if ( !v33 )
      break;
    v23 = v22;
    v22 = *((int **)v22 + 2);
    if ( *(_QWORD *)(v33 + 40) )
      goto LABEL_22;
  }
  v23 = v22;
LABEL_24:
  if ( v23 == &dword_8D1CA8 )
    goto LABEL_29;
  if ( *((_QWORD *)v23 + 5) )
  {
    v34 = *((const char **)v23 + 4);
    if ( !v24 )
      v25 = (char *)&s1;
LABEL_28:
    if ( strcmp(v25, v34) < 0 )
    {
LABEL_29:
      p_s2 = &s2;
      v23 = (int *)sub_4B1E90(&qword_8D1CA0, v23, (__int64 **)&p_s2);
    }
  }
  else
  {
    v34 = &s1;
    if ( v24 )
      goto LABEL_28;
  }
  v17 = (const char *)a4;
  sub_4B0490((__int64)(v23 + 14), a4, (__int64)&v38);
  if ( s2 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(s2, (const char *)a4);
  }
LABEL_4:
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38, v17);
  }
  return v42 - __readfsqword(0x28u);
}
