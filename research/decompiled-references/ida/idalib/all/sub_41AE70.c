__int64 __fastcall sub_41AE70(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int16 *a6)
{
  int flags; // eax
  __int64 v10; // r9
  __int16 v11; // dx
  __int64 word; // rdi
  __int64 v14; // rax
  _QWORD v15[3]; // [rsp+0h] [rbp-58h] BYREF
  int v16; // [rsp+18h] [rbp-40h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  flags = get_flags_ex(a2, 4);
  v16 = 2;
  v15[0] = -1;
  v15[2] = *((_QWORD *)a6 + 4);
  v11 = *a6;
  if ( *a6 != 3 )
  {
    if ( v11 == 5 )
    {
      a3 = a2 + 4;
      op_seg(a2 + 4, a4);
    }
    else
    {
      if ( v11 != 2 )
        return 0;
      if ( (flags & 0x600) != 0 )
      {
        if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x20000000 || a3 != a2 + 2 )
          goto LABEL_6;
        goto LABEL_9;
      }
      if ( a2 + 2 != a3 )
      {
LABEL_6:
        op_seg(a2, a4);
        return 1;
      }
    }
    create_data(a2);
LABEL_9:
    word = (unsigned __int16)get_word(a3);
LABEL_10:
    v14 = 16 * sel2para(word);
    goto LABEL_11;
  }
  if ( (flags & 0x600) == 0 )
    create_32bit_data(a2);
  if ( (a6[2] & 1) != 0 )
  {
    v14 = *((_QWORD *)a6 + 1);
  }
  else
  {
    word = *((_QWORD *)a6 + 2);
    v14 = 0;
    if ( word != -1 )
      goto LABEL_10;
  }
LABEL_11:
  v15[1] = v14;
  if ( sub_3792E0(0x31u, v15, a2, a4, a6, v10) >= 0 )
  {
    op_offset_ex(a2, a4, (int)v15);
    return 1;
  }
  return 0;
}
