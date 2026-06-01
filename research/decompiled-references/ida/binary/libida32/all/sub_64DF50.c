__int64 __fastcall sub_64DF50(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        char *a5,
        const char *a6,
        int a7)
{
  unsigned __int8 v8; // r8
  unsigned __int64 v12; // rsi
  int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // ebx
  int tinfo_pdata; // eax
  __int64 v18; // rax
  __int64 v19; // r13
  __int16 v20; // ax
  char v21; // r12
  __int64 tinfo_property; // rax
  char v23; // al
  char v24; // r14
  char v25; // al
  unsigned __int8 v26; // r8
  __int64 v27; // rdi
  const char *numbered_type_name; // rax
  const char *v29; // r13
  size_t v30; // rax
  size_t v31; // r9
  size_t v32; // rdx
  size_t v33; // [rsp+0h] [rbp-E0h]
  unsigned __int8 v34; // [rsp+Fh] [rbp-D1h]
  unsigned __int8 v35; // [rsp+Fh] [rbp-D1h]
  unsigned __int8 v36; // [rsp+10h] [rbp-D0h]
  unsigned __int8 v37; // [rsp+10h] [rbp-D0h]
  unsigned __int8 v38; // [rsp+10h] [rbp-D0h]
  unsigned __int8 v39; // [rsp+10h] [rbp-D0h]
  size_t v40; // [rsp+10h] [rbp-D0h]
  size_t v41; // [rsp+10h] [rbp-D0h]
  const char *v42; // [rsp+18h] [rbp-C8h]
  unsigned int v43; // [rsp+2Ch] [rbp-B4h] BYREF
  void *ptr; // [rsp+30h] [rbp-B0h] BYREF
  __int128 v45; // [rsp+38h] [rbp-A8h]
  void *dest; // [rsp+50h] [rbp-90h] BYREF
  __int128 v47; // [rsp+58h] [rbp-88h]
  int v48[2]; // [rsp+70h] [rbp-70h] BYREF
  __int64 v49; // [rsp+78h] [rbp-68h]
  __int64 v50; // [rsp+80h] [rbp-60h]
  __int64 v51; // [rsp+88h] [rbp-58h]
  int v52; // [rsp+90h] [rbp-50h]
  __int64 v53; // [rsp+94h] [rbp-4Ch]
  unsigned __int64 v54; // [rsp+A8h] [rbp-38h]
  char v55; // [rsp+F1h] [rbp+11h]

  v8 = 0;
  v42 = a6;
  v12 = *a4;
  v54 = __readfsqword(0x28u);
  v13 = a7;
  v45 = 0;
  ptr = nullptr;
  if ( !a6 && (a7 & 0x20) != 0 && v12 > 0xFF )
  {
    tinfo_pdata = get_tinfo_pdata(&ptr, v12, 5);
    v12 = *a4;
    v13 = a7;
    if ( tinfo_pdata )
    {
      v8 = tinfo_pdata == 1;
      v42 = (const char *)ptr;
    }
    else
    {
      v8 = 0;
    }
  }
  v14 = *a1;
  v49 = a2;
  v50 = a3;
  *(_QWORD *)v48 = v14;
  v51 = 0;
  v52 = v13;
  v53 = 0;
  if ( (v12 & 0x3F) == 1 )
  {
    v15 = sub_644C20(v48, a4, 0, "void", a5, v42, v8);
    goto LABEL_5;
  }
  if ( (v13 & 0x20) == 0 )
  {
LABEL_4:
    v15 = sub_64C150(v48, (__int64 *)a4, a5, v42, v8 & 1, 0, 0, nullptr, nullptr);
    goto LABEL_5;
  }
  v55 = BYTE1(v13);
  v36 = v8;
  v18 = sub_51B8E0(*(_QWORD *)(v14 + 1632), v12);
  v8 = v36;
  v19 = v18;
  if ( !v18 )
  {
    v52 &= ~0x20u;
    goto LABEL_4;
  }
  if ( (v55 & 1) != 0 )
  {
    v20 = *(_WORD *)(v18 + 68);
    if ( (v20 & 1) == 0 )
    {
LABEL_23:
      v15 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    sub_524160(v18, *a1, *(_BYTE *)a4, 1);
    v20 = *(_WORD *)(v19 + 68);
    v8 = v36;
  }
  v21 = 0;
  if ( (v20 & 0x200) == 0 )
  {
LABEL_16:
    if ( *(_BYTE *)(v19 + 70) )
      goto LABEL_4;
    v37 = v8;
    tinfo_property = get_tinfo_property(*a4, 5);
    v8 = v37;
    if ( tinfo_property || v21 )
    {
      v52 &= ~0x20u;
      a5 = nullptr;
      goto LABEL_4;
    }
    goto LABEL_23;
  }
  v38 = v8;
  v47 = 0;
  dest = nullptr;
  v23 = sub_51C800(v19, (__int64)&dest);
  v8 = v38;
  v24 = v23;
  if ( !v23 )
  {
    if ( dest )
    {
      *(_QWORD *)&v47 = 0;
      qfree(dest);
      v8 = v38;
    }
    v21 = 1;
    goto LABEL_16;
  }
  v25 = is_ordinal_name(dest, &v43);
  v26 = v38;
  if ( v25 )
  {
    *(_QWORD *)&v47 = 0;
    v27 = **(_QWORD **)(v19 + 32);
    if ( v27 )
    {
      numbered_type_name = (const char *)get_numbered_type_name(v27, v43);
      v26 = v38;
      v29 = numbered_type_name;
      if ( numbered_type_name && (v30 = strlen(numbered_type_name), v26 = v38, (v31 = v30) != 0) )
      {
        v32 = v30 + 1;
        if ( *((_QWORD *)&v47 + 1) < v30 + 1 )
        {
          v33 = v30;
          v35 = v38;
          v41 = v30 + 1;
          dest = (void *)qvector_reserve(&dest, dest, v32, 1);
          v31 = v33;
          v26 = v35;
          v32 = v41;
        }
        *(_QWORD *)&v47 = v32;
        v34 = v26;
        v40 = v31;
        memmove(dest, v29, v31);
        v26 = v34;
        *((_BYTE *)dest + v40) = 0;
        if ( (unsigned __int64)v47 > 1 )
          goto LABEL_34;
      }
      else
      {
        *(_QWORD *)&v47 = 0;
      }
    }
    v39 = v26;
    sub_3573A0((char **)&dest);
    v26 = v39;
  }
LABEL_34:
  v15 = sub_644C20(v48, a4, v24, (const char *)dest, a5, v42, v26);
  if ( dest )
  {
    *(_QWORD *)&v47 = 0;
    qfree(dest);
  }
LABEL_5:
  if ( ptr )
  {
    *(_QWORD *)&v45 = 0;
    qfree(ptr);
  }
  return v15;
}

