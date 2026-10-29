/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100045F38
// Address: 0x0000000100045F38

//----- (0000000100045F38) ----------------------------------------------------
__int64 __fastcall sub_100045F38(__int64 a1, int a2, int a3)
{
  int v6; // w8
  char *v7; // x8
  int v8; // w9
  int v9; // w22
  char *v10; // x0
  __int64 v11; // x22
  __int64 v12; // x0
  int v13; // w25
  _BYTE *v15; // x10
  char *v16; // x0
  char *v17; // x21
  size_t v18; // x22
  char *v19; // x0
  char *v20; // x22
  _QWORD *v21; // x24
  __int64 v22; // x26
  _QWORD *v23; // x25
  const char *v24; // x23
  const char *v25; // x1
  FILE *v26; // x22
  _QWORD *v27; // x1
  __int64 v28; // x8
  unsigned __int64 v29; // x2
  _QWORD *v30; // x8
  char *v31; // [xsp+8h] [xbp-488h] BYREF
  size_t v32; // [xsp+10h] [xbp-480h]
  __int64 v33; // [xsp+18h] [xbp-478h]
  void *v34; // [xsp+20h] [xbp-470h] BYREF
  __int64 v35; // [xsp+28h] [xbp-468h]
  __int64 v36; // [xsp+30h] [xbp-460h]
  void *v37; // [xsp+38h] [xbp-458h] BYREF
  __int64 v38; // [xsp+40h] [xbp-450h]
  __int64 v39; // [xsp+48h] [xbp-448h]
  __int16 v40; // [xsp+50h] [xbp-440h]
  __int64 v41; // [xsp+58h] [xbp-438h]
  char v42; // [xsp+60h] [xbp-430h]
  __int64 v43; // [xsp+68h] [xbp-428h]
  __int64 v44; // [xsp+70h] [xbp-420h]

  v6 = *(unsigned __int8 *)(a1 + 556);
  if ( (unsigned int)(v6 - 9) >= 5 && v6 != 32 )
  {
    v15 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
    *(_QWORD *)(a1 + 8) = v15;
    *v15 = v6;
  }
  v34 = nullptr;
  v35 = 0;
  v36 = 0;
  v7 = *(char **)(a1 + 8);
  v8 = (unsigned __int8)*v7;
  if ( v8 == 34 || v8 == 60 )
  {
    if ( v8 == 60 )
      goto LABEL_6;
  }
  else
  {
    do
    {
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v38 = 0;
      v39 = 0;
      v37 = nullptr;
      v40 = 0;
      v12 = sub_100042C40(a1, (int16x4_t *)&v37, 0, nullptr);
      v11 = v12;
      if ( *(_QWORD *)(a1 + 64) && !(_DWORD)v12 )
        v11 = sub_100043A58(a1, (int16x4_t *)&v37);
      v13 = 5;
      if ( !(_DWORD)v11 && v40 != 1 )
      {
        if ( (unsigned int)sub_100046358((_QWORD **)&v34, (__int64)&v37) )
          v13 = 0;
        else
          v13 = 6;
      }
      if ( v37 )
      {
        v38 = 0;
        qfree(v37);
      }
    }
    while ( !v13 );
    if ( v13 != 5 )
      goto LABEL_28;
    if ( (_DWORD)v11 )
      goto LABEL_29;
    v7 = (char *)v34;
    *(_QWORD *)(a1 + 8) = v34;
    if ( !v7 )
      return 30;
    v8 = (unsigned __int8)*v7;
    if ( v8 == 60 )
      goto LABEL_6;
  }
  if ( v8 != 34 )
  {
LABEL_28:
    v11 = 30;
    goto LABEL_29;
  }
LABEL_6:
  if ( v8 == 60 )
    LOBYTE(v8) = 62;
  v9 = (char)v8;
  *(_QWORD *)(a1 + 8) = v7 + 1;
  v10 = strchr(v7 + 1, (char)v8);
  if ( !v10 )
    goto LABEL_28;
  *v10 = 0;
  if ( *(_QWORD *)(a1 + 256) <= 0x7Fu )
  {
    v16 = sub_10004261C(a1, (char *)&v37, 1024, *(unsigned __int8 **)(a1 + 8), v9, a3);
    v17 = v16;
    v31 = nullptr;
    v32 = 0;
    v33 = 0;
    if ( v16 )
    {
      v18 = strlen(v16);
      if ( v18 == -1 )
      {
        v19 = nullptr;
      }
      else
      {
        v19 = (char *)qvector_reserve(&v31, nullptr, v18 + 1, 1u);
        v31 = v19;
      }
      v32 = v18 + 1;
      memmove(v19, v17, v18);
      v31[v18] = 0;
      v20 = v31;
    }
    else
    {
      v20 = nullptr;
    }
    v21 = *(_QWORD **)(a1 + 224);
    v22 = 3LL * *(_QWORD *)(a1 + 232);
    v23 = &v21[v22];
    if ( v22 * 8 )
    {
      if ( v32 )
        v24 = v20;
      else
        v24 = &byte_10007AE40;
      while ( 1 )
      {
        v25 = v21[1] ? (const char *)*v21 : &byte_10007AE40;
        if ( !strcmp(v24, v25) )
          break;
        v21 += 3;
        v22 -= 3;
        if ( !(v22 * 8) )
        {
          v21 = v23;
          break;
        }
      }
    }
    if ( v20 )
    {
      v32 = 0;
      qfree(v20);
    }
    if ( v21 != v23 )
      goto LABEL_53;
    if ( v17 )
    {
      v26 = fopenRT(v17);
      if ( v26 )
      {
        v27 = *(_QWORD **)(a1 + 248);
        v28 = *(_QWORD *)(a1 + 256);
        v29 = v28 + 1;
        if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v28 + 1) )
        {
          v27 = qvector_reserve((_QWORD *)(a1 + 248), v27, v29, 0x28u);
          *(_QWORD *)(a1 + 248) = v27;
          v28 = *(_QWORD *)(a1 + 256);
          v29 = v28 + 1;
        }
        v30 = &v27[5 * v28];
        *(_QWORD *)(a1 + 256) = v29;
        v30[1] = *(_QWORD *)(a1 + 272);
        *((_DWORD *)v30 + 8) = *(_DWORD *)(a1 + 288);
        *v30 = *(_QWORD *)(a1 + 280);
        *((_BYTE *)v30 + 36) = *(_BYTE *)(a1 + 128);
        v30[2] = *(_QWORD *)(a1 + 200);
        v30[3] = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 272) = v26;
        v11 = 0;
        *(_QWORD *)(a1 + 280) = qstrdup(v17);
        *(_DWORD *)(a1 + 288) = 0;
        *(_QWORD *)(a1 + 200) = sub_10003F710;
        *(_QWORD *)(a1 + 208) = a1;
        *(_BYTE *)(a1 + 128) = 0;
        goto LABEL_29;
      }
    }
    if ( !a2 )
    {
      set_error_string(0);
      v11 = 32;
    }
    else
    {
LABEL_53:
      set_qerrno();
      v11 = 0;
    }
  }
  else
  {
    v11 = 31;
  }
LABEL_29:
  if ( v34 )
  {
    v35 = 0;
    qfree(v34);
  }
  return v11;
}
// 10007AE40: using guessed type char byte_10007AE40;
