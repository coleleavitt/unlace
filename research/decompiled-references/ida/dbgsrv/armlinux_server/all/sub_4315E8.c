/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4315E8
// Address: 0x00000000004315E8

//----- (00000000004315E8) ----------------------------------------------------
__int64 __fastcall sub_4315E8(__int64 a1, __int64 *a2)
{
  __int64 v3; // x2
  const char *v4; // x2
  void *v6; // x0
  __int64 v7; // x3
  size_t v8; // x21
  size_t v9; // x25
  __int64 v10; // x22
  const char *v11; // x21
  size_t v12; // x23
  void *v13; // x0
  void *ptr; // [xsp+48h] [xbp-38h] BYREF
  __int64 v15; // [xsp+50h] [xbp-30h]
  __int64 v16; // [xsp+58h] [xbp-28h]
  void *v17; // [xsp+60h] [xbp-20h] BYREF
  __int64 v18; // [xsp+68h] [xbp-18h]
  unsigned __int64 v19; // [xsp+70h] [xbp-10h]

  v3 = *(_QWORD *)(a1 + 16);
  ptr = nullptr;
  v15 = 0;
  v16 = 0;
  if ( v3 )
    v4 = *(const char **)(a1 + 8);
  else
    v4 = (const char *)&qword_4B2D48;
  if ( !(unsigned __int8)sub_43C350(a2, -1, v4, (__int64)&ptr) )
  {
    v17 = nullptr;
    v18 = 0;
    v19 = 0;
    v17 = sub_491288((__int64)&v17, nullptr, 0xEu, 1u);
    v18 = 14;
    strcpy((char *)v17, "IDC_FAILURE: ");
    v6 = v17;
    v7 = v18;
    if ( v15 )
    {
      v8 = v15 - 1;
      if ( v15 != 1 )
      {
        if ( v18 )
        {
          v10 = v18 - 1;
          v9 = v8 + v18 - 1;
        }
        else
        {
          v9 = v15 - 1;
          v10 = 0;
        }
        if ( v9 + 1 > v19 )
        {
          v6 = sub_491288((__int64)&v17, v17, v9 + 1, 1u);
          v17 = v6;
        }
        v18 = v9 + 1;
        *((_BYTE *)v6 + v9) = 0;
        memcpy((char *)v17 + v10, ptr, v8);
        v7 = v18;
      }
    }
    v11 = (const char *)&qword_4B2D48;
    if ( v7 )
      v11 = (const char *)v17;
    if ( v11 )
    {
      v12 = strlen(v11);
      *(_BYTE *)a2 = 7;
      a2[1] = 0;
      a2[2] = 0;
      a2[3] = 0;
      if ( v12 )
      {
        v13 = sub_491288((__int64)(a2 + 1), nullptr, v12 + 1, 1u);
        a2[1] = (__int64)v13;
        a2[2] = v12 + 1;
        memmove(v13, v11, v12);
        *(_BYTE *)(a2[1] + v12) = 0;
      }
    }
    else
    {
      *(_BYTE *)a2 = 7;
      a2[1] = 0;
      a2[2] = 0;
      a2[3] = 0;
    }
    if ( v17 )
    {
      v18 = 0;
      j__free(v17);
    }
  }
  if ( ptr )
  {
    v15 = 0;
    j__free(ptr);
  }
  return 0;
}
// 4315E8: could not find valid save-restore pair for x21
// 4315E8: could not find valid save-restore pair for x22
// 4315E8: could not find valid save-restore pair for x23
// 4315E8: could not find valid save-restore pair for x24
// 4315E8: could not find valid save-restore pair for x25
// 4B2D48: using guessed type __int64 qword_4B2D48;
