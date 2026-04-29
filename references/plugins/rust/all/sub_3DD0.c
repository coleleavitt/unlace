unsigned __int64 __fastcall sub_3DD0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v6; // al
  unsigned __int64 v7; // r13
  __int64 v8; // rbp
  __int16 flags; // ax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v15; // ebx
  __int64 v16; // r15
  __int64 item_end; // rbp
  _QWORD *v18; // r14
  _QWORD *v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // r15
  char i; // al
  __int64 v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 not_tail; // rbp
  int v28; // eax
  int v29; // [rsp+0h] [rbp-88h]
  unsigned __int64 v30; // [rsp+8h] [rbp-80h]
  __int64 v31; // [rsp+10h] [rbp-78h] BYREF
  __int128 v32; // [rsp+18h] [rbp-70h]
  _QWORD v33[2]; // [rsp+30h] [rbp-58h] BYREF
  char v34; // [rsp+41h] [rbp-47h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v31 = 0;
  v32 = 0;
  v6 = xrefblk_t_first_to(v33, a2, 2);
  v29 = 0;
  v7 = 0;
  while ( v6 )
  {
    if ( v34 == 1 )
    {
      v8 = v33[0];
      flags = get_flags_ex(v33[0], 4);
      if ( (flags & 0x600) == 0x400 && ((*(_BYTE *)(a1 + 204) & 1) != 0 || (flags & 0x1000) != 0) )
      {
        v10 = *(_DWORD *)(a1 + 208) == 32 ? (unsigned int)get_dword(v8 + 4) : get_qword(v8 + 8);
        if ( a3 >= v10 )
        {
          if ( v7 && v7 != v10 )
            goto LABEL_18;
          v11 = v32;
          ++v29;
          v12 = v31;
          if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(v32 + 1) )
          {
            v30 = v10;
            v31 = qvector_reserve(&v31, v31, v32 + 1, 8);
            v12 = v31;
            v10 = v30;
            v11 = v32;
          }
          *(_QWORD *)(v12 + 8 * v11) = v8;
          v7 = v10;
          *(_QWORD *)&v32 = v32 + 1;
        }
      }
    }
    v6 = xrefblk_t_next_to(v33);
  }
  if ( !v7 )
  {
    for ( i = xrefblk_t_first_to(v33, a2, 2); i; i = xrefblk_t_next_to(v33) )
    {
      if ( v34 == 1 )
      {
        v23 = v33[0];
        if ( (~(unsigned __int16)get_flags_ex(v33[0], 4) & 0x600) == 0 )
        {
          v24 = *(_QWORD *)(a1 + 192);
          if ( v24 )
          {
            v25 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 8LL))(v24, v23, a2);
            if ( v25 != -1 )
            {
              if ( v7 )
              {
                if ( v7 != v25 )
                  goto LABEL_18;
                ++v29;
                v7 = v25;
              }
              else
              {
                ++v29;
                v7 = v25;
              }
            }
          }
        }
      }
    }
  }
  if ( v7 - 1 >= a3 || v29 <= 1 && a3 - v7 > 2 )
  {
LABEL_18:
    v13 = v31;
    v7 = a3;
    goto LABEL_19;
  }
  v15 = get_flags_ex(a2, 4);
  v16 = v15 & 0x600;
  if ( v16 == 512 )
  {
    not_tail = a2;
    if ( (get_flags_ex(a2, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(a2);
    v28 = get_flags_ex(not_tail, 4);
    if ( (v28 & 0x600) == 0x400 && (v28 & 0xF0000000) == 0x50000000 )
    {
      del_items(not_tail, 0, a2 - not_tail, 0);
      create_strlit(not_tail, a2 - not_tail, 0);
    }
  }
  item_end = get_item_end(a2);
  del_items(a2, 0, v7, 0);
  create_strlit(a2, v7, 0);
  if ( v16 == 1024 && (v15 & 0xF0000000) == 0x50000000 )
  {
    v26 = item_end - a2;
    if ( v7 < v26 - 1 )
    {
      create_strlit(v7 + a2, v26 - v7, 0);
    }
    else if ( v26 - 1 == v7 )
    {
      create_data(v7 + a2, 2048, 1, -1);
    }
  }
  v13 = v31;
  v18 = (_QWORD *)(v31 + 8 * v32);
  if ( v18 != (_QWORD *)v31 )
  {
    v19 = (_QWORD *)v31;
    while ( 1 )
    {
      v20 = *(_DWORD *)(a1 + 208) >> 3;
      v21 = v20 + *v19;
      if ( (get_flags_ex(v21, 4) & 0x400) == 0 || v20 == get_item_end(v21) - v21 )
        goto LABEL_28;
      if ( *(_DWORD *)(a1 + 208) == 32 )
      {
        create_data(v21, 536872960, v20, -1);
LABEL_28:
        if ( v18 == ++v19 )
          goto LABEL_33;
      }
      else
      {
        create_data(v21, 805308416, v20, -1);
        if ( v18 == ++v19 )
        {
LABEL_33:
          v13 = v31;
          break;
        }
      }
    }
  }
LABEL_19:
  if ( v13 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v13);
  }
  return v7;
}
