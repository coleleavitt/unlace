/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_idcv_attr
// Address: 0x0000000100036394

//----- (0000000100036394) ----------------------------------------------------
__int64 __fastcall del_idcv_attr(__int64 a1, char *__s)
{
  __int64 v3; // x22
  size_t v4; // x20
  void *v5; // x0
  __int64 v7; // x19
  void *v8; // x0
  void *v9; // [xsp+0h] [xbp-40h] BYREF
  size_t v10; // [xsp+8h] [xbp-38h]
  __int64 v11; // [xsp+10h] [xbp-30h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( a1 && *(_BYTE *)a1 == 5 )
  {
    v9 = nullptr;
    v10 = 0;
    v11 = 0;
    if ( __s )
    {
      v3 = a1;
      v4 = strlen(__s);
      if ( v4 == -1 )
      {
        v5 = nullptr;
      }
      else
      {
        v5 = qvector_reserve(&v9, nullptr, v4 + 1, 1u);
        v9 = v5;
      }
      v10 = v4 + 1;
      memmove(v5, __s, v4);
      *((_BYTE *)v9 + v4) = 0;
      a1 = v3;
    }
    if ( sub_10003F244(*(_QWORD **)(a1 + 8), &v9) )
    {
      v7 = 0;
      v8 = v9;
      if ( !v9 )
        return v7;
    }
    else
    {
      set_error_string(0);
      v7 = set_qerrno();
      v8 = v9;
      if ( !v9 )
        return v7;
    }
    v10 = 0;
    qfree(v8);
    return v7;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return set_qerrno();
}
