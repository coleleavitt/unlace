__int64 __fastcall sub_33CC20(
        __int64 a1,
        const char *a2,
        __int64 a3,
        int a4,
        unsigned __int16 *a5,
        char a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  const char *v15; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __int64 v26; // rax
  __int64 v27; // rax
  const char *v28; // r13
  __int16 v29; // ax
  const char *v30; // rdi
  char v31; // al
  int v32; // edx
  __int16 v33; // ax
  int v34; // ecx
  int v35; // esi
  int v36; // esi
  int v37; // ecx
  int v38; // esi
  int v39; // esi
  int v40; // ecx
  unsigned int v41; // ebx
  __int64 result; // rax
  int v43; // edx
  __int16 v44; // ax
  int v45; // edx
  char v46; // [rsp+0h] [rbp-38h]

  v15 = a2;
  if ( !(unsigned __int8)is_mapped(a1) )
  {
    sub_169630(
      (int)"ICON ERROR\n"
           "AUTOHIDE NONE\n"
           "The address %08a does not belong the program - IDA cannot rename it.Try to create a segment or use symbolic n"
           "ames (View|Enumerations)",
      a1,
      v20,
      v21,
      v22,
      v23,
      a7,
      a8,
      a9,
      a10,
      v24,
      v25,
      a13,
      a14,
      v46);
    return 0xFFFFFFFFLL;
  }
  if ( !a6 )
    goto LABEL_6;
  v26 = *((_QWORD *)a2 + 1);
  if ( !*(_QWORD *)(a3 + 8) )
  {
    a2 = &s1;
    if ( !v26 )
      goto LABEL_33;
    goto LABEL_5;
  }
  a2 = *(const char **)a3;
  if ( !v26 )
  {
    if ( !strcmp(&s1, a2) )
      goto LABEL_33;
LABEL_6:
    if ( (unsigned __int8)segtype(a1) != 1 )
      goto LABEL_7;
    goto LABEL_35;
  }
LABEL_5:
  if ( strcmp(*(const char **)v15, a2) )
    goto LABEL_6;
LABEL_33:
  if ( *a5 == a4 )
    return 1;
  if ( (unsigned __int8)segtype(a1) != 1 )
  {
LABEL_7:
    v27 = *((_QWORD *)v15 + 1);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v28 = *(const char **)a3;
      v30 = &s1;
      if ( !v27 )
        goto LABEL_12;
    }
    else
    {
      v28 = &s1;
      if ( !v27 )
      {
LABEL_9:
        v29 = *a5;
        if ( (((unsigned __int8)*a5 ^ (unsigned __int8)a4) & 1) == 0 )
          goto LABEL_14;
        a2 = (const char *)&unk_5C2F25;
        set_name(a1, &unk_5C2F25, ((_WORD)a4 << 9) & 0x200);
LABEL_13:
        v29 = *a5;
LABEL_14:
        if ( (v29 & 1) != 0 && *(_QWORD *)(a3 + 8) <= 1u && (get_aflags(a1) & 0x4000) == 0 )
          *a5 &= ~1u;
        v31 = is_ident(v28);
        v32 = 256;
        if ( v31 )
          v32 = (unsigned __int8)is_uname(v28, a2, 256) << 8;
        v33 = *a5;
        v34 = (*a5 & 1) << 9;
        v35 = v34;
        LOBYTE(v35) = 0x80;
        if ( (*a5 & 2) == 0 )
          v34 = v35;
        v36 = v34;
        v37 = v34 | 4;
        v38 = v36 | 2;
        if ( (v33 & 4) != 0 )
          v37 = v38;
        v39 = v37;
        v40 = v37 | 0x50;
        v41 = v39 | 0x48;
        if ( (v33 & 0x10) == 0 )
          v41 = v40;
        if ( (unsigned __int8)set_name(a1, v28, v41 | v32) )
        {
          if ( (*(_BYTE *)a5 & 2) != 0 )
            show_name(a1);
          return 1;
        }
        if ( get_name_ea(-1, v28) == -1 )
        {
          v44 = *a5 & 0x20;
          goto LABEL_39;
        }
        v45 = sub_1698A0(
                1,
                (int)"AUTOHIDE REGISTRY\n"
                     "The name '%s' is already present in the database.\n"
                     "Do you want add a numerical suffix to it like 'name_07'?\n",
                v28);
        if ( v45 != -1 )
        {
          if ( v45 == 1 )
          {
            *a5 |= 0x20u;
            goto LABEL_47;
          }
          v44 = *a5 & 0x20;
LABEL_39:
          if ( !v44 )
            return (unsigned __int8)set_name(a1, v28, v41);
LABEL_47:
          BYTE1(v41) |= 8u;
          return (unsigned __int8)set_name(a1, v28, v41);
        }
        return 0xFFFFFFFFLL;
      }
    }
    v30 = *(const char **)v15;
LABEL_12:
    a2 = v28;
    if ( strcmp(v30, v28) )
      goto LABEL_13;
    goto LABEL_9;
  }
LABEL_35:
  a2 = "AUTOHIDE DATABASE\nHIDECANCEL\nYou are going to rename an imported name. Proceed?";
  v43 = sub_1698A0(0, (int)"AUTOHIDE DATABASE\nHIDECANCEL\nYou are going to rename an imported name. Proceed?");
  result = 0;
  if ( v43 == 1 )
    goto LABEL_7;
  return result;
}
