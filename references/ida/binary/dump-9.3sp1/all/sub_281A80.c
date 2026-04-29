__int64 __fastcall sub_281A80(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  int tinfo_size; // eax
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  char v13; // [rsp+Fh] [rbp-A9h]
  _QWORD v14[3]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v15; // [rsp+40h] [rbp-78h]
  __int64 v16; // [rsp+48h] [rbp-70h]
  __int128 v17; // [rsp+50h] [rbp-68h] BYREF
  __int64 v18; // [rsp+60h] [rbp-58h]
  int v19; // [rsp+68h] [rbp-50h]
  __int16 v20; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v21; // [rsp+78h] [rbp-40h]

  v13 = a4;
  v21 = __readfsqword(0x28u);
  v14[0] = 0;
  copy_tinfo_t();
  set_tinfo_property();
  v15 = 0;
  v16 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v14[2] = 0;
    v14[1] = 0;
    v17 = 0;
    copy_tinfo_t();
    v18 = 0;
    copy_tinfo_t();
    v19 = 0;
    v20 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v17 = v15;
    v15 = 0;
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  tinfo_size = get_tinfo_size();
  v6 = tinfo_size;
  if ( !a4 || (v7 = *(unsigned __int8 *)(a2 + 130), (int)v7 <= tinfo_size) )
  {
    if ( a3 == (unsigned int)get_tinfo_property() )
      goto LABEL_13;
    if ( set_tinfo_property() )
    {
      v10 = sub_246B40(a1, a2, v14);
      goto LABEL_12;
    }
    v13 = 0;
    v7 = v6;
  }
  sub_32C430(&v17, *(_QWORD *)(a2 + 112), v7, a3);
  copy_tinfo_t();
  clear_tinfo_t();
  if ( !(unsigned __int8)sub_246B40(a1, a2, v14) )
  {
    if ( v13 )
    {
      sub_244E70(a1, (__int64)v14, v8, v9);
      goto LABEL_8;
    }
LABEL_13:
    v10 = 0;
    goto LABEL_12;
  }
LABEL_8:
  v10 = 1;
LABEL_12:
  clear_tinfo_t();
  return v10;
}
