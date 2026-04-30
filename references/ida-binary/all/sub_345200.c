__int64 __fastcall sub_345200(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 func; // rax
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 not_tail; // r13
  __int16 flags; // ax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 item_end; // rax
  unsigned int v17; // [rsp+Ch] [rbp-2Ch]

  if ( a1 == -1 )
  {
    v6 = 4;
    if ( a2 <= 0xB )
      v6 = (unsigned int)a2;
  }
  else
  {
    if ( qword_8BCA28 != -1 && qword_8CEE60 != -1 && qword_8BCA28 < a1 && a1 < qword_8CEE60 )
    {
      v6 = (unsigned int)dword_8CEE58;
      goto LABEL_24;
    }
    v7 = getseg(a1);
    if ( v7 && *(_BYTE *)(v7 + 184) == 1 )
    {
      v6 = 5;
      goto LABEL_24;
    }
    func = get_func(a1);
    if ( !func )
    {
      if ( (get_flags_ex(a1, 4) & 0x600) == 0x200 )
      {
        not_tail = prev_not_tail(a1);
        flags = get_flags_ex(not_tail, 4);
        v6 = 3;
        v14 = flags & 0x600;
        v15 = a1 - not_tail;
        if ( v14 != 1024 )
          v6 = 2 * (unsigned int)(v14 != 1536) + 2;
        if ( v15 > 0x1000 && (unsigned int)a2 < v15 >> 5 )
        {
          v17 = v6;
          qword_8BCA28 = not_tail;
          item_end = get_item_end(a1);
          v6 = v17;
          qword_8CEE60 = item_end;
          dword_8CEE58 = v17;
          goto LABEL_24;
        }
      }
      else
      {
        v10 = get_flags_ex(a1, 4);
        v6 = 3;
        v11 = v10 & 0x600;
        if ( v11 != 1024 )
          v6 = 2 * (unsigned int)(v11 != 1536) + 2;
      }
      qword_8BCA28 = -1;
      goto LABEL_24;
    }
    v9 = *(_QWORD *)(func + 16);
    v6 = 0;
    if ( (v9 & 4) == 0 )
      v6 = (v9 & 0x10000) == 0 ? 1 : 10;
  }
LABEL_24:
  v3 = 0;
  if ( a1 >= *(_QWORD *)(a3 + 136) )
    v3 = a1 < *(_QWORD *)(a3 + 144);
  return sub_340F90(a3, v3, v6);
}
