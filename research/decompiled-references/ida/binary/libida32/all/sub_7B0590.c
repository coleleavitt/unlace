__int64 __fastcall sub_7B0590(__int64 a1, __int64 a2)
{
  unsigned int idcv_attr; // r15d
  int v4; // [rsp+4h] [rbp-ACh]
  void *ptr; // [rsp+8h] [rbp-A8h] BYREF
  __int128 v6; // [rsp+10h] [rbp-A0h]
  char v7[8]; // [rsp+28h] [rbp-88h] BYREF
  __int128 v8; // [rsp+30h] [rbp-80h]
  __int64 v9; // [rsp+40h] [rbp-70h]
  char v10[8]; // [rsp+48h] [rbp-68h] BYREF
  __int128 v11; // [rsp+50h] [rbp-60h]
  __int64 v12; // [rsp+60h] [rbp-50h]
  unsigned __int64 v13; // [rsp+70h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v7[0] = 2;
  v8 = 0;
  v9 = 0;
  idcv_attr = get_idcv_attr();
  if ( !idcv_attr )
  {
    idcv_attr = idcv_long(v7, a1);
    if ( !idcv_attr )
    {
      v10[0] = 2;
      v4 = v8;
      v12 = 0;
      v11 = 0;
      idcv_object(v10, 0);
      idcv_attr = set_idcv_attr();
      if ( !idcv_attr )
      {
        idcv_attr = set_idcv_attr();
        if ( !idcv_attr && (*(int *)(a2 + 8) <= 3 || *(_BYTE *)(a1 + 96) != 7 || (idcv_attr = set_idcv_attr()) == 0) )
        {
          v6 = 0;
          ptr = nullptr;
          sub_3573A0((char **)&ptr);
          idcv_attr = set_idcv_attr();
          if ( !idcv_attr )
          {
            free_idcv(v7);
            v7[0] = 2;
            LODWORD(v8) = v4 + 1;
            idcv_attr = set_idcv_attr();
          }
          if ( ptr )
          {
            *(_QWORD *)&v6 = 0;
            qfree(ptr);
          }
        }
      }
      free_idcv(v10);
    }
  }
  free_idcv(v7);
  return idcv_attr;
}

