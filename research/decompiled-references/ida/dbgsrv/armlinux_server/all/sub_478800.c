/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478800
// Address: 0x0000000000478800

//----- (0000000000478800) ----------------------------------------------------
__int64 __fastcall sub_478800(_BYTE *a1, int a2, char *a3, __int64 *a4)
{
  unsigned int v7; // w23
  int v8; // w25
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  const char *v13; // x20
  size_t v14; // x27
  unsigned __int64 v15; // x21
  unsigned __int64 v16; // x26
  void *v17; // x0
  __int64 v18; // x20
  unsigned __int64 v20; // x3
  char *v21; // x0
  __int64 v22[5]; // [xsp+50h] [xbp-60h] BYREF
  void *ptr; // [xsp+78h] [xbp-38h] BYREF
  unsigned __int64 v24; // [xsp+80h] [xbp-30h]
  unsigned __int64 v25; // [xsp+88h] [xbp-28h]
  char *v26; // [xsp+90h] [xbp-20h] BYREF
  __int64 v27; // [xsp+98h] [xbp-18h]
  __int64 v28; // [xsp+A0h] [xbp-10h]

  if ( a1[68] )
  {
    if ( !under_debugger )
      sub_492270(1621);
    __break(0x3E8u);
  }
  if ( a2 )
  {
    if ( a2 <= 0 )
    {
      v7 = 52;
      v8 = 52;
    }
    else
    {
      v7 = 54;
      v8 = 54;
    }
  }
  else
  {
    v7 = 53;
    v8 = 53;
  }
  sub_479010(v7, (__int64 *)&ptr);
  v9 = *a4;
  v10 = a4[1];
  v26 = nullptr;
  v27 = 0;
  v11 = a4[2];
  v12 = a4[3];
  v22[0] = v9;
  v22[1] = v10;
  v22[2] = v11;
  v22[3] = v12;
  v28 = 0;
  sub_40CC60((__int64)&v26, a3, v22);
  v13 = (const char *)&qword_4B2D48;
  if ( v27 )
    v13 = v26;
  if ( v13 )
  {
    v14 = strlen(v13) + 1;
  }
  else
  {
    v14 = 1;
    v13 = &byte_4B31F0;
  }
  v15 = v24;
  v16 = v24 + v14;
  if ( v24 <= v24 + v14 )
  {
    if ( v24 >= v24 + v14 )
      goto LABEL_14;
  }
  else
  {
    if ( v24 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v24 & 0x8000000000000000LL) != 0 )
        v24 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v16 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v20 = v24;
  v21 = (char *)ptr;
  if ( v25 < v16 )
  {
    v21 = (char *)sub_491288((__int64)&ptr, ptr, v16, 1u);
    v20 = v24;
    ptr = v21;
  }
  memset(&v21[v20], 0, v16 - v20);
  v24 = v16;
LABEL_14:
  memcpy((char *)ptr + v15, v13, v14);
  v17 = (void *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD, void **))(*(_QWORD *)a1 + 16LL))(a1, v7, &ptr);
  j__free(v17);
  if ( v8 == 52 )
    exit(1);
  v18 = v27 - 1;
  if ( !v27 )
    v18 = 0;
  if ( v26 )
  {
    v27 = 0;
    j__free(v26);
  }
  if ( ptr )
  {
    v24 = 0;
    j__free(ptr);
  }
  return v18;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
// 52451C: using guessed type char under_debugger;
