/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9447C
// Address: 0x0009447C

//----- (0009447C) --------------------------------------------------------
_DWORD *__fastcall sub_9447C(unsigned __int8 **a1, _BYTE *a2)
{
  __int64 v4; // r0
  int v5; // r0
  _DWORD *v6; // r5
  __int64 v7; // r0
  unsigned __int8 *v8; // r2
  int v9; // r3
  _DWORD *v10; // r0
  int v11; // r8
  __int64 v12; // r0
  __int64 v13; // r0
  unsigned __int8 *v14; // r2
  int v15; // r3
  char v17; // r10
  int v18; // r2
  _DWORD *v19; // r3
  unsigned __int8 *v20; // r8
  int v21; // r6
  __int64 v22; // r0
  int v23; // r8
  __int64 v24; // r0
  __int64 v25; // r0
  unsigned __int8 *v26; // r0
  int v27; // r1
  unsigned __int8 *v28; // [sp+0h] [bp-28h] BYREF
  int v29; // [sp+4h] [bp-24h]

  v4 = *(_QWORD *)a1;
  if ( HIDWORD(v4) == (_DWORD)v4 )
    goto LABEL_9;
  v5 = *(unsigned __int8 *)v4;
  if ( v5 != 85 )
  {
    if ( (unsigned __int8)(v5 - 49) <= 8u )
    {
      v10 = sub_9708C(a1);
LABEL_16:
      v6 = v10;
      goto LABEL_17;
    }
LABEL_9:
    if ( sub_924C8((__int64 *)a1, "DC", (unsigned __int8 *)"") )
    {
      v11 = (a1[3] - a1[2]) >> 2;
      while ( 1 )
      {
        v28 = (unsigned __int8 *)sub_9708C(a1);
        if ( !v28 )
          break;
        LODWORD(v12) = a1 + 2;
        HIDWORD(v12) = &v28;
        sub_938C4(v12);
        v13 = *(_QWORD *)a1;
        if ( (_DWORD)v13 != HIDWORD(v13) && *(_BYTE *)v13 == 69 )
        {
          *a1 = (unsigned __int8 *)(v13 + 1);
          sub_9392E(&v28, (int)a1, v11);
          v6 = sub_93AC6((int)(a1 + 92), 16);
          v14 = v28;
          v15 = v29;
          *v6 = &off_DC484;
          v6[1] = 16843049;
          v6[2] = v14;
          v6[3] = v15;
          return sub_943E8(a1, v6);
        }
      }
      return nullptr;
    }
    v10 = sub_9718C((__int64 *)a1, a2);
    goto LABEL_16;
  }
  if ( !sub_924C8((__int64 *)a1, "Ut", (unsigned __int8 *)"") )
  {
    if ( !sub_924C8((__int64 *)a1, "Ul", (unsigned __int8 *)"") )
      return nullptr;
    v17 = *((_BYTE *)a1 + 362);
    *((_BYTE *)a1 + 362) = 1;
    if ( sub_924C8((__int64 *)a1, "vE", (unsigned __int8 *)"") )
    {
      v20 = nullptr;
      v21 = 0;
LABEL_29:
      v6 = nullptr;
      sub_92AAC(&v28, a1, 0);
      v25 = *(_QWORD *)a1;
      if ( (_DWORD)v25 == HIDWORD(v25) )
        goto LABEL_33;
      if ( *(_BYTE *)v25 == 95 )
      {
        *a1 = (unsigned __int8 *)(v25 + 1);
        v6 = sub_93AC6((int)(a1 + 92), 24);
        v26 = v28;
        v27 = v29;
        *v6 = &off_DC450;
        v6[1] = 16843048;
        v6[2] = v20;
        v6[3] = v21;
        v6[4] = v26;
        v6[5] = v27;
LABEL_33:
        *((_BYTE *)a1 + 362) = v17;
        goto LABEL_17;
      }
    }
    else
    {
      HIDWORD(v22) = a1[3];
      v23 = (HIDWORD(v22) - (int)a1[2]) >> 2;
      while ( 1 )
      {
        v28 = sub_92B28((__int64 *)a1, SHIDWORD(v22), v18, v19);
        if ( !v28 )
          break;
        LODWORD(v24) = a1 + 2;
        HIDWORD(v24) = &v28;
        sub_938C4(v24);
        v22 = *(_QWORD *)a1;
        if ( (_DWORD)v22 != HIDWORD(v22) )
        {
          HIDWORD(v22) = *(unsigned __int8 *)v22;
          if ( HIDWORD(v22) == 69 )
          {
            *a1 = (unsigned __int8 *)(v22 + 1);
            sub_9392E(&v28, (int)a1, v23);
            v20 = v28;
            v21 = v29;
            goto LABEL_29;
          }
        }
      }
    }
    v6 = nullptr;
    goto LABEL_33;
  }
  v6 = nullptr;
  sub_92AAC(&v28, a1, 0);
  v7 = *(_QWORD *)a1;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    if ( *(_BYTE *)v7 == 95 )
    {
      *a1 = (unsigned __int8 *)(v7 + 1);
      v6 = sub_93AC6((int)(a1 + 92), 16);
      v8 = v28;
      v9 = v29;
      *v6 = &off_DC41C;
      v6[1] = 16843047;
      v6[2] = v8;
      v6[3] = v9;
    }
    else
    {
      v6 = nullptr;
    }
  }
LABEL_17:
  if ( v6 )
    return sub_943E8(a1, v6);
  return nullptr;
}
// 945F8: variable 'v18' is possibly undefined
// 945F8: variable 'v19' is possibly undefined
// DC41C: using guessed type _UNKNOWN *off_DC41C;
// DC450: using guessed type _UNKNOWN *off_DC450;
// DC484: using guessed type _UNKNOWN *off_DC484;
