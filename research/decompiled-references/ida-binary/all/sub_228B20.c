__int64 __fastcall sub_228B20(_QWORD *a1, __int64 a2, unsigned __int64 a3, const char *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v10; // rdi
  const char *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r14
  int v14; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // rbx
  const char *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  _QWORD *v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 hidden_range; // rax
  __int64 tinfo_size; // [rsp+0h] [rbp-DC8h]
  const char *v27; // [rsp+18h] [rbp-DB0h]
  const char *v28; // [rsp+28h] [rbp-DA0h] BYREF
  __int64 v29; // [rsp+30h] [rbp-D98h] BYREF
  __int128 v30; // [rsp+38h] [rbp-D90h]
  __int128 v31; // [rsp+48h] [rbp-D80h]
  __int64 v32; // [rsp+58h] [rbp-D70h]
  int v33; // [rsp+60h] [rbp-D68h]
  _QWORD v34[34]; // [rsp+70h] [rbp-D58h] BYREF
  _BYTE v35[1024]; // [rsp+180h] [rbp-C48h] BYREF
  _BYTE v36[1024]; // [rsp+580h] [rbp-848h] BYREF
  _BYTE v37[1032]; // [rsp+980h] [rbp-448h] BYREF
  unsigned __int64 v38; // [rsp+D88h] [rbp-40h]

  v6 = 0;
  v38 = __readfsqword(0x28u);
  v7 = a2 + a3;
  tinfo_size = get_tinfo_size(0, *a1, 0);
  v8 = v7 + tinfo_size;
  if ( next_that(v7, v7 + tinfo_size, sub_20A790, 0) != -1 )
    return v6;
  sub_32CD90(v7, v8);
  del_debug_names(v7, v8);
  del_items(v7, 0, tinfo_size, 0);
  v10 = *a1;
  v11 = byte_9 + 4;
  v33 = 1;
  v29 = 0;
  v32 = 0;
  v30 = 0;
  v31 = 0;
  if ( (unsigned __int8)get_tinfo_details(v10, 13, &v29) )
  {
    v12 = v29;
    v13 = v29 + 144 * v30;
    if ( v13 == v29 )
    {
LABEL_14:
      qsnprintf(v35, 1024, "[COLLAPSED STACK FRAME %s. PRESS KEYPAD CTRL-\"+\" TO EXPAND]", a4);
      qsnprintf(v36, 1024, "[BEGIN OF STACK FRAME %s. PRESS KEYPAD CTRL-\"-\" TO COLLAPSE]", a4);
      qsnprintf(v37, 1024, "[END OF STACK FRAME %s. PRESS KEYPAD CTRL-\"-\" TO COLLAPSE]", a4);
      v11 = (const char *)(a2 + tinfo_size);
      v6 = add_hidden_range(v7, a2 + tinfo_size, v35, v36, v37, 0xFFFFFFFFLL);
      if ( (_BYTE)v6 )
      {
        hidden_range = get_hidden_range(v7);
        if ( hidden_range )
        {
          *(_BYTE *)(hidden_range + 40) = 1;
          update_hidden_range(hidden_range);
        }
      }
      goto LABEL_15;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *(_DWORD *)(v12 + 132);
        if ( (v14 & 0x400) == 0 )
        {
          v15 = *(_QWORD *)v12 >> 3;
          if ( v15 >= a3 && (v14 & 0x3000) == 0 )
            break;
        }
        v12 += 144;
        if ( v13 == v12 )
          goto LABEL_14;
      }
      v16 = a2 + v15;
      if ( (unsigned __int8)get_idainfo_by_udm(&v28, v34, v12, -1) )
      {
        v11 = v28;
        if ( !(unsigned __int8)create_data(v16, v28, *(_QWORD *)(v12 + 8) >> 3, v34[0]) )
          break;
        v27 = v28;
        if ( (unsigned __int8)is_off(v28, 0)
          || (unsigned __int8)is_enum(v27, 0)
          || (unsigned __int8)is_stroff(v27, 0)
          || (unsigned __int8)is_custfmt(v27, 0) )
        {
          v11 = nullptr;
          if ( !(unsigned __int8)set_opinfo(v16, 0, v28, v34, 0) )
            break;
        }
      }
      v17 = &s1;
      if ( *(_QWORD *)(v12 + 24) )
        v17 = *(const char **)(v12 + 16);
      set_debug_name(v16, v17);
      v12 += 144;
      if ( v13 == v12 )
        goto LABEL_14;
    }
  }
  v6 = 0;
LABEL_15:
  v18 = v29;
  if ( v29 )
  {
    v19 = v30;
    if ( (_QWORD)v30 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v18 + 144 * v20);
        clear_tinfo_t(v21 + 8);
        v22 = v21[5];
        if ( v22 )
        {
          v21[6] = 0;
          qfree(v22, v11);
        }
        v23 = v21[2];
        if ( v23 )
        {
          v21[3] = 0;
          qfree(v23, v11);
        }
        ++v20;
        v18 = v29;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v30 = 0;
    qfree(v18, v11);
  }
  return v6;
}
