/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4574E0
// Address: 0x00000000004574E0

//----- (00000000004574E0) ----------------------------------------------------
__int64 __fastcall sub_4574E0(__int64 **a1, unsigned __int8 **a2)
{
  int v4; // w27
  unsigned __int8 *v5; // x0
  int v6; // w1
  int v7; // w2
  int v9; // w2
  __int64 *v10; // x24
  unsigned int v11; // w25
  int v12; // w25
  unsigned int v13; // w0
  __int64 *v15; // x0
  size_t v16; // x21
  unsigned __int8 *v17; // x26
  unsigned __int8 *v18; // x26
  unsigned __int64 v19; // x28
  _BYTE *v20; // x0
  unsigned __int8 *v21; // x27
  unsigned __int8 *v23; // x26
  unsigned __int8 *v24; // x21
  __int64 *v25; // x22
  unsigned __int8 *v26; // x1
  int v27; // w0
  __int64 *v28; // x22
  __int64 *v29; // x23
  __int64 *v30; // x21
  __int64 *v31; // x0
  int v32; // w0
  void *src; // [xsp+68h] [xbp-48h] BYREF
  unsigned __int64 v34; // [xsp+70h] [xbp-40h]
  __int64 v35; // [xsp+78h] [xbp-38h]
  __int16 v36; // [xsp+80h] [xbp-30h]
  __int64 v37; // [xsp+88h] [xbp-28h]
  char v38; // [xsp+90h] [xbp-20h]
  __int64 v39; // [xsp+98h] [xbp-18h]
  __int64 v40; // [xsp+A0h] [xbp-10h]

  v4 = 0;
  src = nullptr;
  v34 = 0;
  v5 = (unsigned __int8 *)a1[1];
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
LABEL_2:
  while ( 1 )
  {
    v6 = *v5;
    if ( v6 != 32 )
      break;
LABEL_32:
    a1[1] = (__int64 *)++v5;
  }
  while ( 1 )
  {
    if ( (unsigned __int8)(v6 - 9) <= 1u )
      goto LABEL_32;
    if ( !v6 )
    {
      if ( (unsigned __int64)a1[8] <= 1 )
        goto LABEL_39;
      sub_450E98((__int64)a1);
      v5 = (unsigned __int8 *)a1[1];
      goto LABEL_2;
    }
    if ( v6 != 35 || v5[1] != 35 )
      goto LABEL_39;
    v7 = *((unsigned __int16 *)a2 + 12);
    if ( (unsigned __int16)(v7 - 7) <= 1u || v7 == 3 )
    {
      v25 = a1[4];
      v24 = (unsigned __int8 *)a1[5];
      a1[4] = nullptr;
      a1[5] = nullptr;
      v23 = (unsigned __int8 *)a1[6];
      a1[6] = nullptr;
    }
    else
    {
      v23 = nullptr;
      v24 = nullptr;
      v25 = nullptr;
    }
    v9 = *((_DWORD *)a1 + 16);
    a1[1] = (__int64 *)(v5 + 2);
    v10 = a1[2];
    v11 = sub_4567F8((__int64)a1, (__int64)&src, v9, nullptr);
    if ( v11 )
      goto LABEL_36;
    if ( v36 == 1 )
      goto LABEL_58;
    if ( v36 == 47 )
    {
      if ( *((_WORD *)a2 + 12) == 47 && (*((_DWORD *)a1 + 191) & 4) != 0 )
      {
LABEL_34:
        while ( a1[8] )
          sub_450E98((__int64)a1);
        *((_WORD *)a2 + 12) = 1;
LABEL_36:
        if ( !v25 )
          goto LABEL_41;
LABEL_37:
        j__free(v25);
        goto LABEL_41;
      }
    }
    else if ( v36 == 59 && (*((_DWORD *)a1 + 191) & 8) != 0 )
    {
      goto LABEL_34;
    }
    v12 = (unsigned __int8)sub_451390((__int64)a1, (__int64)&src, a1[3]);
    if ( !v12 )
      break;
    v13 = *((unsigned __int16 *)a2 + 12);
    if ( v13 <= 0x7F && v13 != 2 )
    {
      if ( (unsigned __int64)v24 <= 1 )
      {
        v11 = sub_4869C8(29);
        if ( v25 )
          goto LABEL_37;
        goto LABEL_41;
      }
      v15 = (__int64 *)*a2;
      *a2 = (unsigned __int8 *)v25;
      a2[1] = v24;
      v25 = v15;
      a2[2] = v23;
    }
    if ( v34 )
    {
      v16 = v34 - 1;
      if ( v34 != 1 )
      {
        v17 = a2[1];
        if ( v17 )
        {
          v18 = v17 - 1;
          v19 = (unsigned __int64)&v18[v16];
          v20 = *a2;
          v21 = &v18[v34];
          if ( &v18[v34] <= a2[2] )
          {
LABEL_29:
            a2[1] = v21;
            v20[v19] = 0;
            memcpy(&v18[(_QWORD)*a2], src, v16);
            goto LABEL_30;
          }
        }
        else
        {
          v19 = v34 - 1;
          v21 = (unsigned __int8 *)v34;
          v18 = nullptr;
          v20 = *a2;
          if ( v34 <= (unsigned __int64)a2[2] )
            goto LABEL_29;
        }
        v20 = sub_491288((__int64)a2, v20, (unsigned __int64)v21, 1u);
        *a2 = v20;
        goto LABEL_29;
      }
    }
LABEL_30:
    a1[2] = v10;
    if ( !v25 )
    {
      v4 = v12;
      v5 = (unsigned __int8 *)a1[1];
      goto LABEL_2;
    }
    j__free(v25);
    v5 = (unsigned __int8 *)a1[1];
    v4 = v12;
    v6 = *v5;
    if ( v6 == 32 )
      goto LABEL_32;
  }
  a1[1] = a1[3];
  a1[2] = v10;
LABEL_58:
  if ( !v25 )
  {
LABEL_39:
    if ( v4 )
      goto LABEL_51;
    goto LABEL_40;
  }
  j__free(v25);
  if ( !v4 )
    goto LABEL_40;
LABEL_51:
  v26 = a2[1];
  if ( v26 )
  {
    v27 = **a2;
    if ( (v27 & 0x80) != 0 )
      goto LABEL_62;
LABEL_53:
    if ( (unsigned int)(v27 - 48) > 9 )
      goto LABEL_62;
    goto LABEL_54;
  }
  v27 = (unsigned __int8)byte_522118;
  if ( (byte_522118 & 0x80) == 0 )
    goto LABEL_53;
LABEL_62:
  if ( v27 == 46 )
  {
LABEL_54:
    v29 = *a1;
    v28 = a1[1];
    v30 = a1[2];
    if ( v26 )
      v31 = (__int64 *)*a2;
    else
      v31 = &qword_4B2D48;
    *a1 = v31;
    a1[1] = v31;
    v11 = sub_4567F8((__int64)a1, (__int64)a2, 0, nullptr);
    *a1 = v29;
    a1[1] = v28;
    a1[2] = v30;
    goto LABEL_41;
  }
  v32 = sub_456668((__int64)a1, 1, (__int64)a2);
  if ( v32 != -1 )
  {
    if ( v32 == 1 )
    {
      v11 = sub_4578C8((__int64)a1, a2, nullptr);
      goto LABEL_41;
    }
LABEL_40:
    v11 = 0;
    goto LABEL_41;
  }
  v11 = sub_4869A0();
LABEL_41:
  if ( src )
  {
    v34 = 0;
    j__free(src);
  }
  return v11;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522118: using guessed type char byte_522118;
