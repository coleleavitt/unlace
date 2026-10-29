/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D010
// Address: 0x000000000044D010

//----- (000000000044D010) ----------------------------------------------------
__int64 __fastcall sub_44D010(
        __int64 a1,
        char *s,
        __int64 *a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  unsigned int v12; // w20
  int v14; // w23
  size_t v15; // x24
  void *v16; // x0
  __int64 v17; // x21
  _QWORD *v18; // x0
  _QWORD *v19; // x20
  __int64 v20; // x2
  const char *v21; // x0
  const char *v22; // x1
  __int64 *v23; // x0
  void **p_ptr; // [xsp+40h] [xbp-C0h] BYREF
  void *ptr; // [xsp+48h] [xbp-B8h] BYREF
  size_t v26; // [xsp+50h] [xbp-B0h]
  __int64 v27; // [xsp+58h] [xbp-A8h]
  _BYTE v28[152]; // [xsp+60h] [xbp-A0h] BYREF

  if ( a1 )
  {
    if ( *(_BYTE *)a1 != 5 )
      return (unsigned int)sub_4869C8(1532);
    v14 = a4;
    ptr = nullptr;
    v26 = 0;
    v27 = 0;
    if ( s )
    {
      v15 = strlen(s);
      ptr = sub_491288((__int64)&ptr, nullptr, v15 + 1, 1u);
      v26 = v15 + 1;
      memmove(ptr, s, v15);
      *((_BYTE *)ptr + v15) = 0;
    }
    if ( v14 )
    {
      sub_448768((__int64)v28, 0, 1u);
      if ( (unsigned __int8)sub_44CED8((__int64)v28, *(_QWORD *)(a1 + 8), (const char **)&ptr, a3) )
        v12 = 0;
      else
        v12 = sub_4869A0();
      sub_44A7D8((__int64)v28);
      v16 = ptr;
      if ( ptr )
      {
LABEL_11:
        v26 = 0;
        j__free(v16);
      }
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = sub_443EB8(*(_QWORD **)(v17 + 16), (_QWORD *)(v17 + 8), (__int64)&ptr);
      v19 = v18;
      if ( (_QWORD *)(v17 + 8) == v18 )
        goto LABEL_22;
      v20 = v18[5];
      v21 = (const char *)ptr;
      v22 = (const char *)&qword_4B2D48;
      if ( !v26 )
        v21 = (const char *)&qword_4B2D48;
      if ( v20 )
        v22 = (const char *)v19[4];
      if ( strcmp(v21, v22) < 0 )
      {
LABEL_22:
        p_ptr = &ptr;
        v19 = sub_4485B8((_QWORD *)v17, v19, (__int64 *)&p_ptr);
      }
      sub_4488B8(v19 + 7, a3);
      v16 = ptr;
      v12 = 0;
      if ( ptr )
        goto LABEL_11;
    }
  }
  else
  {
    v23 = (__int64 *)sub_43E198(s);
    if ( v23 )
    {
      v12 = 0;
      sub_4488B8(v23, a3);
    }
    else
    {
      sub_486A58(0, s);
      return (unsigned int)sub_4869C8(1538);
    }
  }
  return v12;
}
// 44D010: could not find valid save-restore pair for x23
// 44D010: could not find valid save-restore pair for x24
// 44D010: could not find valid save-restore pair for x25
// 4B2D48: using guessed type __int64 qword_4B2D48;
