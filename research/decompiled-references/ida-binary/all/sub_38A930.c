unsigned __int64 __fastcall sub_38A930(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  char tinfo_property; // al
  __int64 v6; // rsi
  char v7; // al
  __int64 v8; // rdx
  const char *v9; // rsi
  __int64 tinfo_size; // rax
  bool v12; // zf
  __int64 v13; // [rsp+8h] [rbp-E0h] BYREF
  const char *v14; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-B8h]
  __int128 v18; // [rsp+38h] [rbp-B0h]
  __int64 v19; // [rsp+48h] [rbp-A0h]
  __int128 v20; // [rsp+50h] [rbp-98h]
  _OWORD v21[3]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v22; // [rsp+90h] [rbp-58h]
  int v23; // [rsp+98h] [rbp-50h]
  __int64 v24; // [rsp+A0h] [rbp-48h]
  char v25; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+B8h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 16) = -1;
  *(_QWORD *)(a1 + 24) = -1;
  *(_QWORD *)a1 = struc_tree_node_info_t___vtable;
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 56) = a5;
  v13 = 0;
  get_type_by_tid(&v13, a3);
  tinfo_property = get_tinfo_property(v13, 2);
  v6 = *(_QWORD *)(a1 + 48);
  v14 = nullptr;
  *(_BYTE *)(a1 + 33) = (tinfo_property & 0x3F) == 29;
  get_type_by_tid(&v14, v6);
  v7 = get_tinfo_property(v14, 2);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = (const char *)&v16;
  v16 = 0;
  *(_BYTE *)(a1 + 32) = (v7 & 0x3F) == 29;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v22 = 1;
  v23 = -1;
  v24 = 0;
  v25 = 0;
  v18 = 0;
  v20 = 0;
  v21[0] = 0;
  if ( get_udm_by_tid(&v15, &v16, v8) == -1 )
  {
    v12 = *(_QWORD *)(a1 + 56) == -1;
    *(_QWORD *)(a1 + 16) = -1;
    if ( v12 && (v9 = (_BYTE *)(&dword_0 + 2), (get_tinfo_property(v14, 2) & 0x2F) == 0xD) )
    {
      v9 = v14;
      tinfo_size = get_tinfo_size(0, v14, 0);
    }
    else
    {
      tinfo_size = -1;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 16) = (unsigned __int64)v16 >> 3;
    tinfo_size = *((_QWORD *)&v16 + 1) >> 3;
  }
  *(_QWORD *)(a1 + 24) = tinfo_size;
  clear_tinfo_t(v21);
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19, v9);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17, v9);
  }
  clear_tinfo_t(&v15);
  clear_tinfo_t(&v14);
  clear_tinfo_t(&v13);
  return v26 - __readfsqword(0x28u);
}
