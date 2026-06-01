__int64 __fastcall sub_1390C0(int a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  int flags; // eax
  int v5; // ebp
  char *v6; // rdx
  __int64 v7; // r14
  unsigned __int64 data_elsize; // r15
  _BYTE *v9; // rsi
  _BYTE *v10; // rax
  char *v11; // r14
  size_t v12; // rax
  size_t v13; // rbp
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  unsigned int v16; // ebp
  size_t v17; // rax
  size_t v18; // r15
  void *v19; // rdi
  size_t v20; // rdx
  size_t v21; // [rsp+8h] [rbp-610h]
  __int64 v22; // [rsp+18h] [rbp-600h] BYREF
  char *s; // [rsp+20h] [rbp-5F8h] BYREF
  __int128 v24; // [rsp+28h] [rbp-5F0h]
  void *dest; // [rsp+40h] [rbp-5D8h] BYREF
  __int128 v26; // [rsp+48h] [rbp-5D0h]
  __int128 v27; // [rsp+60h] [rbp-5B8h]
  __int64 v28; // [rsp+70h] [rbp-5A8h]
  __int64 v29; // [rsp+78h] [rbp-5A0h]
  __int64 v30; // [rsp+80h] [rbp-598h]
  char v31; // [rsp+88h] [rbp-590h] BYREF
  char v32; // [rsp+1C8h] [rbp-450h] BYREF
  char src[1032]; // [rsp+1D0h] [rbp-448h] BYREF
  unsigned __int64 v34; // [rsp+5D8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  result = 0;
  if ( (BYTE9(xmmword_2528B0) & 4) == 0 )
    return result;
  v2 = xmmword_2528A0;
  v24 = 0;
  v26 = 0;
  s = nullptr;
  dest = nullptr;
  if ( get_forced_operand() < 0 && (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
  {
    print_operand();
    if ( (unsigned __int64)v24 > 1 )
      tag_remove();
  }
  flags = get_flags_ex();
  v29 = 0;
  v5 = flags;
  v6 = &v31;
  v27 = -1;
  v30 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 40;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *((_QWORD *)v6 - 2) = 0;
  }
  while ( &v32 != v6 );
  v28 = -1;
  v7 = flags & 0x600;
  if ( v7 == 1536 )
  {
    print_operand();
    if ( (unsigned __int64)v26 > 1 )
      tag_remove();
    if ( (unsigned __int64)v24 <= 1 )
      goto LABEL_15;
    goto LABEL_10;
  }
  data_elsize = get_data_elsize();
  if ( v7 != 1024 )
    goto LABEL_7;
  v16 = v5 & 0xF0000000;
  if ( v16 )
  {
    switch ( v16 )
    {
      case 0x10000000u:
        get_wide_word();
        break;
      case 0x20000000u:
      case 0x80000000:
        get_wide_dword();
        break;
      case 0x30000000u:
      case 0x90000000:
        get_qword();
        break;
      default:
        goto LABEL_7;
    }
  }
  else
  {
    get_wide_byte();
  }
  if ( data_elsize && (get_item_end() - v2) / data_elsize == 1 )
  {
    btoa64();
    v17 = strlen(src);
    v18 = v17;
    if ( v17 )
    {
      v19 = dest;
      v20 = v17 + 1;
      if ( *((_QWORD *)&v26 + 1) < v17 + 1 )
      {
        v21 = v17 + 1;
        dest = (void *)qvector_reserve();
        v20 = v21;
        v19 = dest;
      }
      *(_QWORD *)&v26 = v20;
      memmove(v19, src, v18);
      *((_BYTE *)dest + v18) = 0;
    }
    else
    {
      *(_QWORD *)&v26 = 0;
    }
    goto LABEL_10;
  }
LABEL_7:
  v9 = dest;
  if ( *((_QWORD *)&v26 + 1) <= 9u )
  {
    dest = (void *)qvector_reserve();
    v9 = dest;
  }
  *(_QWORD *)&v26 = 10;
  *(_QWORD *)v9 = 0x6E776F6E6B6E753CLL;
  v10 = dest;
  v9[8] = 62;
  v10[9] = 0;
LABEL_10:
  v22 = a1 + 1;
  if ( (unsigned int)sub_8F810(
                       (__int64)"@0:477[]\n"
                                "Manual operand\n"
                                "\n"
                                "Enter alternate string for the %D operand\n"
                                "\n"
                                "  Original operand: %q\n"
                                "  <~O~perand:q:100:40::>\n"
                                "\n"
                                "\n"
                                "\n",
                       &v22,
                       &dest,
                       &s,
                       0.0) )
  {
    trim();
    v11 = s;
    v12 = strlen(s);
    v13 = v12;
    if ( v12 )
    {
      v14 = v12 + 1;
      v15 = v24;
      if ( (unsigned __int64)v24 < v14 )
      {
        if ( *((_QWORD *)&v24 + 1) < v14 )
        {
          s = (char *)qvector_reserve();
          v11 = s;
          v15 = v24;
        }
        memset(&v11[v15], 0, v14 - v15);
        *(_QWORD *)&v24 = v14;
        v11 = s;
      }
      else if ( v14 != (_QWORD)v24 )
      {
        *(_QWORD *)&v24 = v14;
      }
      v11[v13] = 0;
    }
    else if ( v11 )
    {
      *(_QWORD *)&v24 = 0;
      qfree();
      s = nullptr;
      *((_QWORD *)&v24 + 1) = 0;
    }
    set_forced_operand();
  }
LABEL_15:
  if ( dest )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  if ( s )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  return 1;
}

