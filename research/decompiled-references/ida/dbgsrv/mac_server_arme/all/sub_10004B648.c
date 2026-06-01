/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B648
// Address: 0x000000010004B648

//----- (000000010004B648) ----------------------------------------------------
__int64 __fastcall sub_10004B648(
        _QWORD **a1,
        __int64 a2,
        unsigned __int8 **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char *v10; // x3
  unsigned __int64 v11; // x8
  __int64 v12; // x9
  unsigned int v13; // w10
  unsigned int v14; // w12
  unsigned int v15; // w13
  __int64 v16; // x23
  __int64 v17; // x20
  char *v18; // x6
  unsigned __int8 **v19; // x24
  char *v20; // x25
  char *v21; // x27
  unsigned __int8 *v22; // x1
  int v23; // w21
  size_t v24; // x0
  size_t v25; // x21
  unsigned __int64 v26; // x20
  _QWORD *v27; // x0
  void *v29; // [xsp+10h] [xbp-4F0h] BYREF
  __int64 v30; // [xsp+18h] [xbp-4E8h]
  __int64 v31; // [xsp+20h] [xbp-4E0h]
  __int64 (__fastcall **v32)(); // [xsp+28h] [xbp-4D8h] BYREF
  char v33[1128]; // [xsp+30h] [xbp-4D0h] BYREF
  __int64 v34; // [xsp+498h] [xbp-68h]
  int v35; // [xsp+4A0h] [xbp-60h]

  v10 = *(char **)a2;
  v11 = *(unsigned __int16 *)(a2 + 36);
  v29 = nullptr;
  v30 = 0;
  v31 = 0;
  if ( (_DWORD)v11 )
  {
    if ( (unsigned int)v11 < 0xC )
      return 0xFFFFFFFFLL;
    LODWORD(v12) = *(_DWORD *)(a2 + 38);
    v13 = *(_DWORD *)(a2 + 42);
    v14 = bswap32(v12);
    v15 = bswap32(v13);
    v12 = *(_BYTE *)(a2 + 28) ? v14 : (unsigned int)v12;
    v16 = *(_BYTE *)(a2 + 28) ? v15 : v13;
    if ( v12 + v16 + 12 > v11 )
      return 0xFFFFFFFFLL;
    v18 = &byte_10007AE40;
    if ( (_DWORD)v16 )
    {
      v19 = a3;
      v20 = v10;
      v21 = (char *)(a2 + v12 + 50);
      do
      {
        sub_10002B248((char **)&v29, "%02x", (__int64)a3, (__int64)v10, a5, a6, (__int64)v18, a8, *v21++);
        LODWORD(v16) = v16 - 1;
      }
      while ( (_DWORD)v16 );
      if ( v30 )
        v18 = (char *)v29;
      else
        v18 = &byte_10007AE40;
      v10 = v20;
      a3 = v19;
    }
  }
  else
  {
    v18 = &byte_10007AE40;
  }
  if ( a3[1] )
    v22 = *a3;
  else
    v22 = (unsigned __int8 *)&byte_10007AE40;
  v23 = *(_DWORD *)(a2 + 24);
  sub_100055190((__int64)&v32, v22, 0, v10, (char *)(a2 + 1062), 0, v18);
  v32 = &off_10009EE80;
  v34 = a2 + 28;
  v35 = v23;
  if ( (unsigned int)sub_10004B8AC((__int64)&v32) )
  {
    if ( a1 )
    {
      v24 = strlen(v33);
      if ( v24 )
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = *a1;
        if ( (unsigned __int64)a1[2] < v26 )
        {
          v27 = qvector_reserve(a1, *a1, v26, 1u);
          *a1 = v27;
        }
        a1[1] = (_QWORD *)v26;
        memmove(v27, v33, v25);
        v17 = 0;
        *((_BYTE *)*a1 + v25) = 0;
      }
      else
      {
        v17 = 0;
        a1[1] = nullptr;
      }
    }
    else
    {
      v17 = 0;
    }
  }
  else
  {
    v17 = 0xFFFFFFFFLL;
  }
  sub_10005570C(&v32);
  if ( v29 )
  {
    v30 = 0;
    qfree(v29);
  }
  return v17;
}
// 10004B720: variable 'a3' is possibly undefined
// 10004B720: variable 'v10' is possibly undefined
// 10004B720: variable 'a5' is possibly undefined
// 10004B720: variable 'a6' is possibly undefined
// 10004B720: variable 'v18' is possibly undefined
// 10004B720: variable 'a8' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 10009EE80: using guessed type __int64 (__fastcall *off_10009EE80)();
