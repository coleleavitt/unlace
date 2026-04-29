__int64 __fastcall sub_F5240(__int64 *a1)
{
  unsigned int tinfo_details; // ebx
  char tinfo_property; // al
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // r12
  _QWORD *v7; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r9
  int v13; // eax
  int tinfo_size; // r12d
  int v15; // eax
  __int64 v16; // [rsp+18h] [rbp-110h] BYREF
  __int64 v17[2]; // [rsp+20h] [rbp-108h] BYREF
  int v18; // [rsp+30h] [rbp-F8h]
  __int64 v19; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v20; // [rsp+48h] [rbp-E0h]
  int v21; // [rsp+58h] [rbp-D0h]
  __int64 v22; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+68h] [rbp-C0h]
  int v24; // [rsp+78h] [rbp-B0h]
  __int64 v25; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+88h] [rbp-A0h]
  __int64 v27; // [rsp+98h] [rbp-90h]
  __int64 v28; // [rsp+A0h] [rbp-88h]
  __int64 v29; // [rsp+A8h] [rbp-80h]
  __int128 v30; // [rsp+B0h] [rbp-78h]
  __int64 v31; // [rsp+C0h] [rbp-68h]
  __int128 v32; // [rsp+C8h] [rbp-60h]
  char v33; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+E8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v25 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 16;
  v26 = 0;
  v30 = 0;
  v32 = 0;
  tinfo_details = get_tinfo_details();
  if ( (_BYTE)tinfo_details
    && (int)v26 >= 0
    && (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) != 0)
    && (tinfo_property & 0xFu) <= 8 )
  {
    v9 = a1[1];
    v10 = *a1;
    v19 = 0;
    v11 = *(_QWORD *)(v9 + 784);
    v12 = *(unsigned int *)(v10 + 72);
    v21 = 0;
    v22 = 0;
    v24 = 0;
    v17[0] = 0;
    v17[1] = 0;
    v18 = -1;
    v20 = 0;
    v23 = 0;
    sub_10F7A0(v11, &v19, &v22, 64, v17, v12);
    v13 = *(_DWORD *)(*(_QWORD *)(a1[1] + 1504) + 80LL);
    a1[42] = (v13 - 1 + a1[41] + *((_QWORD *)&v30 + 1)) & -v13;
    sub_E0FF0((__int64)a1, v17);
    sub_F4340(&v16, (__int64)a1, (__int64)&v25, 0);
    if ( (_BYTE)v16
      && ((tinfo_size = get_tinfo_size(), v15 = get_tinfo_size(), tinfo_size < v15)
       || tinfo_size == v15 && (get_tinfo_property() & 0xF) == 9) )
    {
      copy_tinfo_t();
      create_tinfo();
    }
    else
    {
      tinfo_details = 0;
    }
    clear_tinfo_t();
    sub_E9B00(v17);
    sub_66380(&v22);
    sub_66380(&v19);
  }
  else
  {
    tinfo_details = 0;
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v4 = v25;
  if ( v25 )
  {
    v5 = v26;
    if ( (_QWORD)v26 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v4 + 80 * v6);
        clear_tinfo_t();
        if ( v7[5] )
        {
          v7[6] = 0;
          qfree();
        }
        if ( v7[2] )
        {
          v7[3] = 0;
          qfree();
        }
        ++v6;
        cleanup_argloc();
        v4 = v25;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return tinfo_details;
}
