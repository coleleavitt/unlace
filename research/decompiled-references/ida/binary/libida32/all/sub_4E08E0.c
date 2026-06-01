__int64 __fastcall sub_4E08E0(unsigned int a1)
{
  __int64 v1; // r12
  unsigned int v2; // eax
  unsigned int v3; // ebx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  char *v9; // r13
  char *v10; // r12
  __int64 v11; // r15
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rax
  char *v29; // r12
  char *v30; // [rsp+0h] [rbp-88h]
  char *s1; // [rsp+10h] [rbp-78h] BYREF
  __int128 v32; // [rsp+18h] [rbp-70h]
  char *v33; // [rsp+30h] [rbp-58h] BYREF
  __int128 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v1 = qword_2CA1698;
  v2 = sub_3BB2F0(*(_QWORD *)(qword_2CA1698 + 1480), a1);
  if ( !(_BYTE)v2 )
    return 0;
  v3 = v2;
  v5 = getinf(5);
  if ( a1 <= 0x20 && v5 != 2 && v5 != 21 )
    return 0;
  v6 = sub_4EE820(*(_QWORD *)(v1 + 1480) + 1552LL, a1);
  v7 = v6;
  if ( !v6 )
    return 0;
  if ( *(_BYTE *)(v6 + 96) == 2 )
    return v3;
  v8 = *(_QWORD *)(v1 + 1480);
  v32 = 0;
  s1 = nullptr;
  if ( sub_4F9200(v8, &s1, v6, 1) <= 0 )
  {
LABEL_10:
    v9 = s1;
    goto LABEL_11;
  }
  if ( (unsigned int)getinf(5) != 25 )
  {
    if ( (unsigned int)getinf(5) != 18 )
    {
      v26 = getinf(5);
      v9 = s1;
      if ( v26 == 2 )
      {
        v27 = *(_QWORD *)(v1 + 1480);
        v33 = nullptr;
        v34 = 0;
        v28 = sub_4F8CF0(v27, &v33, v7);
        v29 = v33;
        if ( v28 > 0 && (_QWORD)v34 && !strcmp(v33, "CONST") )
        {
          if ( v29 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(v29);
          }
          v10 = s1;
          goto LABEL_13;
        }
        if ( v29 )
        {
          *(_QWORD *)&v34 = 0;
          qfree(v29);
        }
        goto LABEL_10;
      }
      goto LABEL_11;
    }
    v9 = s1;
    if ( !(_QWORD)v32 )
      goto LABEL_11;
    v10 = s1;
    if ( strcmp(s1, ".got") )
    {
      if ( strcmp(v9, ".text") )
      {
        if ( strcmp(v9, ".rodata") )
        {
          if ( strcmp(v9, ".got.plt") )
          {
            if ( strcmp(v9, ".plt") )
            {
              if ( strcmp(v9, ".init") )
              {
                if ( strcmp(v9, ".fini") )
                {
                  v3 = 0;
                  if ( strcmp(v9, ".dynbss") )
                    goto LABEL_11;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_13;
  }
  v9 = s1;
  v11 = v32;
  v10 = s1;
  if ( !(_QWORD)v32 )
    goto LABEL_17;
  v30 = (char *)(v32 - 1);
  if ( (unsigned __int64)(v32 - 1) <= 6 )
  {
    if ( (_QWORD)v32 != 7 )
    {
      if ( (_QWORD)v32 != 6 || strncmp(s1, "__got", 5u) )
        goto LABEL_17;
      goto LABEL_13;
    }
  }
  else if ( !strncmp(&s1[v32 - 8], "__const", 7u)
         || (unsigned __int64)v30 > 0xB && !strncmp(&v9[v11 - 13], "__const_coal", 0xCu) )
  {
    goto LABEL_13;
  }
  if ( strncmp(&v9[v11 - 7], "__text", 6u) && strncmp(&v9[v11 - 7], "__dyld", 6u) && strncmp(&v9[v11 - 6], "__got", 5u) )
  {
    if ( (unsigned __int64)v30 <= 0xC )
    {
      if ( v30 == &byte_6 )
        goto LABEL_17;
      goto LABEL_56;
    }
    if ( !strncmp(&v9[v11 - 14], "__unwind_info", 0xDu) )
      goto LABEL_13;
    if ( (unsigned __int64)v30 <= 0xF )
    {
      if ( v30 != &byte_9[6] )
        goto LABEL_56;
    }
    else if ( !strncmp(&v9[v11 - 17], "__all_image_info", 0x10u) )
    {
      goto LABEL_13;
    }
    if ( strncmp(&v9[v11 - 16], "__la_symbol_ptr", 0xFu) && strncmp(&v9[v11 - 16], "__nl_symbol_ptr", 0xFu) )
    {
LABEL_56:
      if ( !strncmp(&v9[v11 - 8], "__class", 7u) )
        goto LABEL_13;
LABEL_17:
      LOBYTE(v12) = sub_4E0870(&s1, "__cls_refs", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v12;
      if ( (_BYTE)v12 )
        goto LABEL_13;
      LOBYTE(v13) = sub_4E0870(&s1, "__message_refs", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v13;
      if ( (_BYTE)v13 )
        goto LABEL_13;
      LOBYTE(v14) = sub_4E0870(&s1, "__inst_meth", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v14;
      if ( (_BYTE)v14 )
        goto LABEL_13;
      LOBYTE(v15) = sub_4E0870(&s1, "__cat_inst_meth", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v15;
      if ( (_BYTE)v15 )
        goto LABEL_13;
      LOBYTE(v16) = sub_4E0870(&s1, "__cat_cls_meth", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v16;
      if ( (_BYTE)v16 )
        goto LABEL_13;
      LOBYTE(v17) = sub_4E0870(&s1, "__constructor", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v17;
      if ( (_BYTE)v17 )
        goto LABEL_13;
      LOBYTE(v18) = sub_4E0870(&s1, "__destructor", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v18;
      if ( (_BYTE)v18 )
        goto LABEL_13;
      LOBYTE(v19) = sub_4E0870(&s1, "__pointers", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v19;
      if ( (_BYTE)v19 )
        goto LABEL_13;
      LOBYTE(v20) = sub_4E0870(&s1, "__objc_protorefs", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v20;
      if ( (_BYTE)v20 )
        goto LABEL_13;
      LOBYTE(v21) = sub_4E0870(&s1, "__objc_selrefs", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v21;
      if ( (_BYTE)v21 )
        goto LABEL_13;
      LOBYTE(v22) = sub_4E0870(&s1, "__objc_classrefs", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v22;
      if ( (_BYTE)v22 )
        goto LABEL_13;
      LOBYTE(v23) = sub_4E0870(&s1, "__objc_superrefs", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v23;
      if ( (_BYTE)v23 )
        goto LABEL_13;
      LOBYTE(v24) = sub_4E0870(&s1, "__objc_const", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v24;
      if ( (_BYTE)v24 )
        goto LABEL_13;
      LOBYTE(v25) = sub_4E0870(&s1, "__StaticInit", 0xFFFFFFFFFFFFFFFFLL);
      v3 = v25;
      if ( (_BYTE)v25 )
        goto LABEL_13;
LABEL_11:
      v3 = 0;
      v10 = v9;
      if ( *(_BYTE *)(v7 + 96) == 3 )
        LOBYTE(v3) = (*(_BYTE *)(v7 + 22) & 6) == 4;
    }
  }
LABEL_13:
  if ( v10 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v10);
  }
  return v3;
}

