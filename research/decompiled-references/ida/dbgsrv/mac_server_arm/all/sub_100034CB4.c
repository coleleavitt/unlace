/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100034CB4
// Address: 0x0000000100034CB4

//----- (0000000100034CB4) ----------------------------------------------------
void __fastcall sub_100034CB4(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x0
  char *v5; // x23
  __int64 v6; // x8
  const char *v7; // x22
  size_t v8; // x0
  size_t v9; // x24
  unsigned __int64 v10; // x25
  void *v11; // x0
  size_t v12; // x0
  size_t v13; // x23
  unsigned __int64 v14; // x24
  void *v15; // x0
  void *v16; // x22
  void *v17; // x21
  int v18; // [xsp+4h] [xbp-6Ch] BYREF
  unsigned __int8 v19[8]; // [xsp+8h] [xbp-68h] BYREF
  void *v20; // [xsp+10h] [xbp-60h] BYREF
  unsigned __int64 v21; // [xsp+18h] [xbp-58h]
  __int64 v22; // [xsp+20h] [xbp-50h]

  v19[0] = 2;
  v21 = 0;
  v22 = 0;
  v20 = nullptr;
  v18 = -1;
  get_qerrno();
  v4 = *(_QWORD **)(a1 + 104);
  if ( v4 )
  {
    v5 = sub_10002D738(v4, *(_DWORD *)(a1 + 112), &v18);
    v6 = *(_QWORD *)(a1 + 104);
    if ( *(_QWORD *)(v6 + 8) )
      v7 = *(const char **)v6;
    else
      v7 = &byte_100075A30;
  }
  else
  {
    v7 = nullptr;
    v5 = nullptr;
  }
  if ( v19[0] == 5 )
  {
    sub_100031978((__int64)v20, v19);
  }
  else if ( v19[0] == 7 && v20 )
  {
    v21 = 0;
    qfree(v20);
    v22 = 0;
  }
  v19[0] = 2;
  v20 = nullptr;
  if ( v5 )
  {
    v8 = strlen(v5);
    v19[0] = 7;
    v21 = 0;
    v22 = 0;
    v20 = nullptr;
    if ( v8 )
    {
      v9 = v8;
      v10 = v8 + 1;
      if ( v8 == -1 )
      {
        v11 = nullptr;
      }
      else
      {
        v11 = qvector_reserve(&v20, nullptr, v10, 1u);
        v20 = v11;
      }
      v21 = v10;
      memmove(v11, v5, v9);
      *((_BYTE *)v20 + v9) = 0;
    }
  }
  else
  {
    v19[0] = 7;
    v21 = 0;
    v22 = 0;
    v20 = nullptr;
  }
  set_idcv_attr(a2, "file", v19, 0);
  if ( v19[0] == 5 )
  {
    sub_100031978((__int64)v20, v19);
  }
  else if ( v19[0] == 7 && v20 )
  {
    v21 = 0;
    qfree(v20);
    v22 = 0;
  }
  v19[0] = 2;
  v20 = nullptr;
  if ( v7 )
  {
    v12 = strlen(v7);
    v19[0] = 7;
    v21 = 0;
    v22 = 0;
    v20 = nullptr;
    if ( v12 )
    {
      v13 = v12;
      v14 = v12 + 1;
      if ( v12 == -1 )
      {
        v15 = nullptr;
      }
      else
      {
        v15 = qvector_reserve(&v20, nullptr, v14, 1u);
        v20 = v15;
      }
      v21 = v14;
      memmove(v15, v7, v13);
      *((_BYTE *)v20 + v13) = 0;
    }
  }
  else
  {
    v19[0] = 7;
    v21 = 0;
    v22 = 0;
    v20 = nullptr;
  }
  set_idcv_attr(a2, "func", v19, 0);
  v16 = (void *)v18;
  if ( v19[0] == 5 )
  {
    sub_100031978((__int64)v20, v19);
  }
  else if ( v19[0] == 7 && v20 )
  {
    v21 = 0;
    qfree(v20);
    v22 = 0;
  }
  v19[0] = 2;
  v20 = v16;
  set_idcv_attr(a2, "line", v19, 0);
  v17 = *(void **)(a1 + 112);
  if ( v19[0] == 5 )
  {
    sub_100031978((__int64)v20, v19);
  }
  else if ( v19[0] == 7 && v20 )
  {
    v21 = 0;
    qfree(v20);
    v22 = 0;
  }
  v19[0] = 2;
  v20 = v17;
  set_idcv_attr(a2, "pc", v19, 0);
  set_qerrno();
  if ( v19[0] == 5 )
  {
    sub_100031978((__int64)v20, v19);
  }
  else if ( v19[0] == 7 )
  {
    if ( v20 )
    {
      v21 = 0;
      qfree(v20);
    }
  }
}
// 100075A30: using guessed type char byte_100075A30;
