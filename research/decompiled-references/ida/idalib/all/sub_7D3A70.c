__int64 __fastcall sub_7D3A70(__int64 a1, __int64 a2)
{
  unsigned int idcv_attr; // r15d
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  const char *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+0h] [rbp-B0h]
  void *ptr; // [rsp+8h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+10h] [rbp-A0h]
  char v18[8]; // [rsp+28h] [rbp-88h] BYREF
  __int128 v19; // [rsp+30h] [rbp-80h]
  __int64 v20; // [rsp+40h] [rbp-70h]
  char v21[8]; // [rsp+48h] [rbp-68h] BYREF
  __int128 v22; // [rsp+50h] [rbp-60h]
  __int64 v23; // [rsp+60h] [rbp-50h]
  unsigned __int64 v24; // [rsp+70h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v18[0] = 2;
  v19 = 0;
  v20 = 0;
  idcv_attr = get_idcv_attr(v18, a1, "member_cnt", 1);
  if ( !idcv_attr )
  {
    idcv_attr = idcv_long(v18);
    if ( !idcv_attr )
    {
      v21[0] = 2;
      v15 = v19;
      v23 = 0;
      v22 = 0;
      idcv_object(v21, 0);
      idcv_attr = set_idcv_attr(v21, "name", a1 + 32, 0, v4, v5);
      if ( !idcv_attr )
      {
        idcv_attr = set_idcv_attr(v21, "value", a1 + 64, 0, v6, v7);
        if ( !idcv_attr
          && (*(int *)(a2 + 8) <= 3
           || *(_BYTE *)(a1 + 96) != 7
           || (idcv_attr = set_idcv_attr(v21, "cmt", a1 + 96, 0, v8, v9)) == 0) )
        {
          v17 = 0;
          ptr = nullptr;
          sub_35A790((char **)&ptr);
          v12 = haystack;
          if ( (_QWORD)v17 )
            v12 = (const char *)ptr;
          idcv_attr = set_idcv_attr(a1, v12, v21, 0, v10, v11);
          if ( !idcv_attr )
          {
            free_idcv(v18);
            v18[0] = 2;
            *(_QWORD *)&v19 = v15 + 1;
            idcv_attr = set_idcv_attr(a1, "member_cnt", v18, 0, v13, v14);
          }
          if ( ptr )
          {
            *(_QWORD *)&v17 = 0;
            qfree(ptr);
          }
        }
      }
      free_idcv(v21);
    }
  }
  free_idcv(v18);
  return idcv_attr;
}
