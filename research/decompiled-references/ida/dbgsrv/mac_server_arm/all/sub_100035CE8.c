/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100035CE8
// Address: 0x0000000100035CE8

//----- (0000000100035CE8) ----------------------------------------------------
__int64 __fastcall sub_100035CE8(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        char *a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int8 *v11; // x23
  unsigned __int8 *v12; // x24
  int v13; // w26
  unsigned __int64 v14; // x8
  const char *v15; // x0
  const char *v16; // x20
  size_t v17; // x0
  size_t v18; // x21
  unsigned __int64 v19; // x22
  _QWORD *v20; // x1
  __int64 v21; // x20
  char *v23[3]; // [xsp+8h] [xbp-128h] BYREF
  _QWORD v24[19]; // [xsp+20h] [xbp-110h] BYREF
  unsigned __int8 v25[8]; // [xsp+B8h] [xbp-78h] BYREF
  void *v26; // [xsp+C0h] [xbp-70h]
  __int64 v27; // [xsp+C8h] [xbp-68h]
  __int64 v28; // [xsp+D0h] [xbp-60h]

  v25[0] = 2;
  v27 = 0;
  v28 = 0;
  v26 = nullptr;
  if ( !a2 || a3 )
  {
    if ( (unsigned int)get_idcv_attr(v25, (__int64)a2, a3, 0) )
      goto LABEL_13;
  }
  else
  {
    copy_idcv(v25, a2);
  }
  if ( deref_idcv(v25, 2) )
  {
    if ( v25[0] == 6 )
    {
      memset(v23, 0, sizeof(v23));
      if ( a2 )
      {
        sub_100035F98((unsigned __int8 **)v23, (unsigned __int8 *)(a5 + 1));
        v11 = (unsigned __int8 *)v23[0];
        copy_idcv((unsigned __int8 *)v23[0], a2);
        if ( a5 )
        {
          v12 = v11 + 32;
          v13 = 1;
          do
          {
            copy_idcv(v12, a4);
            a4 += 32;
            v14 = v13;
            v12 += 32;
            ++v13;
          }
          while ( v14 < a5 );
          LODWORD(a5) = a5 + 1;
        }
        else
        {
          LODWORD(a5) = 1;
        }
      }
      else
      {
        v11 = a4;
      }
      sub_1000376D4((__int64)v24, 0, 0);
      v21 = sub_10003570C(v24, nullptr, (unsigned int)v26, a5, v11, a1, (char **)a6);
      sub_1000378A8((__int64)v24);
      sub_10003CCF4(v23);
      goto LABEL_24;
    }
    set_qerrno();
  }
LABEL_13:
  sub_100035078(a1);
  if ( a6 )
  {
    v15 = j__qstrerror(-1);
    v16 = v15;
    if ( v15 && (v17 = strlen(v15)) != 0 )
    {
      v18 = v17;
      v19 = v17 + 1;
      v20 = *(_QWORD **)a6;
      if ( *(_QWORD *)(a6 + 16) < v17 + 1 )
      {
        v20 = qvector_reserve((_QWORD *)a6, v20, v19, 1u);
        *(_QWORD *)a6 = v20;
      }
      *(_QWORD *)(a6 + 8) = v19;
      memmove(v20, v16, v18);
      v21 = 0;
      *(_BYTE *)(*(_QWORD *)a6 + v18) = 0;
    }
    else
    {
      v21 = 0;
      *(_QWORD *)(a6 + 8) = 0;
    }
  }
  else
  {
    v21 = 0;
  }
LABEL_24:
  if ( v25[0] == 5 )
  {
    sub_100031978((__int64)v26, v25);
  }
  else if ( v25[0] == 7 && v26 )
  {
    v27 = 0;
    qfree(v26);
  }
  return v21;
}
