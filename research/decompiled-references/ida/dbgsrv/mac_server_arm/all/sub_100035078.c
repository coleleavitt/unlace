/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100035078
// Address: 0x0000000100035078

//----- (0000000100035078) ----------------------------------------------------
void __fastcall sub_100035078(unsigned __int8 *a1)
{
  int qerrno; // w19
  __int64 idc_class; // x0
  __int64 v4; // x21
  int v5; // w8
  void *v6; // x0
  void *v7; // x0
  void *v8; // x22
  __int64 v9; // x1
  const char *v10; // x21
  size_t v11; // x0
  size_t v12; // x22
  unsigned __int64 v13; // x23
  void *v14; // x0
  char v15[8]; // [xsp+8h] [xbp-58h] BYREF
  void *v16; // [xsp+10h] [xbp-50h] BYREF
  unsigned __int64 v17; // [xsp+18h] [xbp-48h]
  __int64 v18; // [xsp+20h] [xbp-40h]

  qerrno = get_qerrno();
  idc_class = find_idc_class("exception");
  if ( a1 )
  {
    v4 = idc_class;
    v5 = *a1;
    if ( v5 == 5 )
    {
      sub_100031978(*((_QWORD *)a1 + 1), a1);
    }
    else if ( v5 == 7 )
    {
      v6 = *((void **)a1 + 1);
      if ( v6 )
      {
        *((_QWORD *)a1 + 2) = 0;
        qfree(v6);
        *((_QWORD *)a1 + 1) = 0;
        *((_QWORD *)a1 + 3) = 0;
      }
    }
    *((_QWORD *)a1 + 1) = 0;
    *a1 = 5;
    v7 = operator new(0x20u);
    v8 = v7;
    if ( v4 )
      v9 = *(unsigned int *)(v4 + 28);
    else
      v9 = 0;
    sub_10002C044(v7, v9);
    *((_QWORD *)a1 + 1) = v8;
  }
  else
  {
    set_qerrno();
  }
  v15[0] = 2;
  v17 = 0;
  v18 = 0;
  v16 = (void *)qerrno;
  set_idcv_attr((__int64)a1, "qerrno", (unsigned __int8 *)v15, 0);
  v10 = j__qstrerror(-1);
  if ( v15[0] == 5 )
  {
    sub_100031978((__int64)v16, (unsigned __int8 *)v15);
  }
  else if ( v15[0] == 7 && v16 )
  {
    v17 = 0;
    qfree(v16);
    v18 = 0;
  }
  v15[0] = 2;
  v16 = nullptr;
  if ( v10 )
  {
    v11 = strlen(v10);
    v15[0] = 7;
    v17 = 0;
    v18 = 0;
    v16 = nullptr;
    if ( v11 )
    {
      v12 = v11;
      v13 = v11 + 1;
      if ( v11 == -1 )
      {
        v14 = nullptr;
      }
      else
      {
        v14 = qvector_reserve(&v16, nullptr, v13, 1u);
        v16 = v14;
      }
      v17 = v13;
      memmove(v14, v10, v12);
      *((_BYTE *)v16 + v12) = 0;
    }
  }
  else
  {
    v15[0] = 7;
    v17 = 0;
    v18 = 0;
    v16 = nullptr;
  }
  set_idcv_attr((__int64)a1, "description", (unsigned __int8 *)v15, 0);
  set_qerrno();
  if ( v15[0] == 5 )
  {
    sub_100031978((__int64)v16, (unsigned __int8 *)v15);
  }
  else if ( v15[0] == 7 )
  {
    if ( v16 )
    {
      v17 = 0;
      qfree(v16);
    }
  }
}
// 10002C044: using guessed type __int64 __fastcall sub_10002C044(_QWORD, _QWORD);
