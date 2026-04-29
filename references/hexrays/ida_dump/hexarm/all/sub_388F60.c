__int64 __fastcall sub_388F60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, char a6, _BYTE *a7)
{
  unsigned int v8; // ebx
  char *i; // rcx
  int v10; // edx
  char v11; // al
  char *v12; // r8
  __int64 tinfo_property; // rax
  char *v15; // rbx
  __int64 v16; // rdx
  size_t v17; // r8
  __int64 v18; // r9
  const void *v19; // rsi
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // r9
  char *dest; // [rsp+0h] [rbp-C0h]
  void *desta; // [rsp+0h] [rbp-C0h]
  __int64 v26; // [rsp+8h] [rbp-B8h]
  __int64 v27; // [rsp+8h] [rbp-B8h]
  __int64 v28; // [rsp+8h] [rbp-B8h]
  char *v29; // [rsp+10h] [rbp-B0h]
  __int64 v30; // [rsp+10h] [rbp-B0h]
  unsigned __int64 v31; // [rsp+10h] [rbp-B0h]
  __int64 v32; // [rsp+10h] [rbp-B0h]
  __int64 v36; // [rsp+30h] [rbp-90h] BYREF
  __int64 v37; // [rsp+38h] [rbp-88h] BYREF
  char *s1; // [rsp+40h] [rbp-80h] BYREF
  __int128 v39; // [rsp+48h] [rbp-78h]
  __int128 v40; // [rsp+60h] [rbp-60h] BYREF
  __int64 v41; // [rsp+70h] [rbp-50h] BYREF
  int v42; // [rsp+78h] [rbp-48h]
  __int16 v43; // [rsp+7Ch] [rbp-44h]
  unsigned __int64 v44; // [rsp+88h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  s1 = nullptr;
  v39 = 0;
  print_tinfo(&s1, 0, 0, 0, 0, a5, a4, 0);
  if ( a7 && *a7 )
  {
    v15 = s1;
    if ( (_QWORD)v39 )
    {
      v16 = v39 + 9;
      v17 = v39 - 1;
      v18 = v39 + 8;
      if ( *((_QWORD *)&v39 + 1) >= (unsigned __int64)(v39 + 9) )
        goto LABEL_24;
    }
    else
    {
      if ( *((_QWORD *)&v39 + 1) > 9u )
      {
        *(_QWORD *)&v39 = 10;
        s1[9] = 0;
LABEL_28:
        v15[8] = 32;
        *(_QWORD *)v15 = 0x646573756E755F5FLL;
        goto LABEL_3;
      }
      v17 = 0;
      v16 = 10;
      v18 = 9;
    }
    desta = (void *)v17;
    v27 = v18;
    v30 = v16;
    s1 = (char *)qvector_reserve(&s1, s1, v16, 1);
    v17 = (size_t)desta;
    v15 = s1;
    v18 = v27;
    v16 = v30;
LABEL_24:
    *(_QWORD *)&v39 = v16;
    v15[v18] = 0;
    v15 = s1;
    if ( v17 )
      memmove(s1 + 9, s1, v17);
    goto LABEL_28;
  }
LABEL_3:
  v8 = sub_388A00((__int64)&s1, 6u, (__int64)"Please enter the type declaration");
  if ( !(_BYTE)v8 )
  {
LABEL_16:
    v8 = 0;
    goto LABEL_17;
  }
  if ( (unsigned __int64)v39 <= 1 )
  {
    if ( a1 )
      clear_tinfo_t(a1);
  }
  else
  {
    if ( a7 )
    {
      for ( i = s1; *i == 32; ++i )
        ;
      dest = s1;
      v26 = v39;
      v29 = i;
      v10 = strncmp(i, "__unused ", 9u);
      v11 = 0;
      v12 = dest;
      if ( !v10 )
      {
        v19 = v29 + 9;
        v20 = v29 + 9 - dest;
        if ( v20 )
        {
          v21 = v26 - 1;
          v22 = 1;
          v23 = 0;
          if ( v20 < v26 - 1 )
          {
            v32 = v21 - v20;
            memmove(dest, v19, v21 - v20);
            v23 = v32;
            v12 = s1;
            v22 = v32 + 1;
          }
          if ( *((_QWORD *)&v39 + 1) < v22 )
          {
            v28 = v23;
            v31 = v22;
            s1 = (char *)qvector_reserve(&s1, v12, v22, 1);
            v23 = v28;
            v12 = s1;
            v22 = v31;
          }
          *(_QWORD *)&v39 = v22;
          v12[v23] = 0;
        }
        v11 = v8;
      }
      *a7 = v11;
    }
    tinfo_property = get_tinfo_property(*a5, 22);
    if ( !(unsigned __int8)parse_decl(a1, a2, 0, s1, tinfo_property == 0 ? 49154 : 49538) )
      goto LABEL_16;
    if ( !a6 && (get_tinfo_property(*a1, 2) & 0xF) == 0xC )
    {
      v36 = 0;
      v40 = 0;
      v37 = 0;
      copy_tinfo_t((char *)&v40 + 8, &v37);
      v41 = 0;
      copy_tinfo_t(&v41, &v36);
      v42 = 0;
      v43 = 0;
      clear_tinfo_t(&v37);
      clear_tinfo_t(&v36);
      copy_tinfo_t(&v40, a1);
      create_tinfo(a1, 10, 10, &v40);
      clear_tinfo_t(&v41);
      clear_tinfo_t((char *)&v40 + 8);
      clear_tinfo_t(&v40);
    }
    if ( !sub_32CEA0(a1, a3, -1) )
    {
      sub_2B5230((__int64)"AUTOHIDE NONE\nSorry, the entered type is unacceptable");
      goto LABEL_16;
    }
  }
LABEL_17:
  if ( s1 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(s1);
  }
  return v8;
}
