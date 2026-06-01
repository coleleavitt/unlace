__int64 __fastcall sub_138B40(int a1)
{
  __int64 result; // rax
  int v2; // r12d
  int flags; // eax
  int v5; // ebp
  char *v6; // rdx
  __int64 v7; // r14
  unsigned int data_elsize; // r15d
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
  size_t v21; // [rsp+8h] [rbp-580h]
  int v22; // [rsp+1Ch] [rbp-56Ch] BYREF
  char *s; // [rsp+20h] [rbp-568h] BYREF
  __int128 v24; // [rsp+28h] [rbp-560h]
  void *dest; // [rsp+40h] [rbp-548h] BYREF
  __int128 v26; // [rsp+48h] [rbp-540h]
  __int64 v27; // [rsp+60h] [rbp-528h]
  __int64 v28; // [rsp+68h] [rbp-520h]
  __int64 v29; // [rsp+70h] [rbp-518h]
  char v30; // [rsp+78h] [rbp-510h] BYREF
  char v31; // [rsp+138h] [rbp-450h] BYREF
  char src[1032]; // [rsp+140h] [rbp-448h] BYREF
  unsigned __int64 v33; // [rsp+548h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  result = 0;
  if ( (qword_251710 & 0x400) == 0 )
    return result;
  v2 = qword_251700;
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
  v5 = flags;
  v6 = &v30;
  v27 = -1;
  v28 = 0;
  v29 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 24;
    *((_WORD *)v6 - 11) = 0;
    *((_WORD *)v6 - 10) = 0;
    *((_DWORD *)v6 - 1) = 0;
    *((_WORD *)v6 - 9) = 0;
    *((_QWORD *)v6 - 2) = 0;
    *((_DWORD *)v6 - 2) = 0;
  }
  while ( &v31 != v6 );
  LODWORD(v28) = -1;
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
  if ( data_elsize && ((unsigned int)get_item_end() - v2) / data_elsize == 1 )
  {
    btoa32();
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
  if ( (unsigned int)sub_8F730(
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
                       &s) )
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

