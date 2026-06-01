/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85788
// Address: 0x0000000000085788

//----- (0000000000085788) ----------------------------------------------------
__int64 __fastcall sub_85788(__int64 a1, char a2, char a3)
{
  int v6; // w8
  const char *align; // x8
  int v8; // w22
  char *v9; // x0
  unsigned int v10; // w22
  void *v11; // x0
  int v12; // w26
  _BYTE *v14; // x10
  pthread_mutex_t *v15; // x21
  _QWORD *v16; // x25
  __int64 v17; // x27
  _QWORD *v18; // x26
  void *v19; // x22
  const char *v20; // x23
  const char *v21; // x1
  FILE *v22; // x22
  __int64 v23; // x8
  pthread_mutex_t *v24; // x0
  unsigned __int64 v25; // x2
  char *v26; // x0
  __int64 v27; // x9
  char *v28; // x8
  void *v29; // [xsp+8h] [xbp-1098h] BYREF
  __int64 v30; // [xsp+10h] [xbp-1090h]
  __int64 v31; // [xsp+18h] [xbp-1088h]
  pthread_mutex_t v32; // [xsp+20h] [xbp-1080h] BYREF
  __int64 v33; // [xsp+48h] [xbp-1058h]
  __int16 v34; // [xsp+50h] [xbp-1050h]
  __int64 v35; // [xsp+58h] [xbp-1048h]
  char v36; // [xsp+60h] [xbp-1040h]
  __int64 v37; // [xsp+68h] [xbp-1038h]
  __int64 v38; // [xsp+70h] [xbp-1030h]
  __int64 v39; // [xsp+1038h] [xbp-68h]

  v39 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(unsigned __int8 *)(a1 + 620);
  if ( (unsigned int)(v6 - 9) >= 5 && v6 != 32 )
  {
    v14 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
    *(_QWORD *)(a1 + 8) = v14;
    *v14 = v6;
  }
  memset(&v32, 0, 24);
  align = *(const char **)(a1 + 8);
  v8 = *(unsigned __int8 *)align;
  if ( v8 == 34 || v8 == 60 )
  {
    if ( v8 == 34 )
      goto LABEL_7;
  }
  else
  {
    do
    {
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      *(_OWORD *)(&v32.__align + 3) = 0u;
      v34 = 0;
      v33 = 0;
      v10 = sub_810F0((__int64 *)a1, (__int64)&v32.__list, 0, nullptr);
      if ( !v10 && *(_QWORD *)(a1 + 64) )
        v10 = sub_81F70((__int128 *)a1, (char **)&v32.__list);
      v12 = 5;
      if ( !v10 && v34 != 1 )
      {
        if ( (sub_85B84(&v32, (__int64)&v32.__list) & 1) != 0 )
          v12 = 0;
        else
          v12 = 6;
      }
      if ( v32.__list.__prev )
      {
        v32.__list.__next = nullptr;
        qfree(v32.__list.__prev);
        v32.__list.__prev = nullptr;
        v33 = 0;
      }
    }
    while ( !v12 );
    if ( v12 != 5 )
      goto LABEL_27;
    if ( v10 )
      goto LABEL_28;
    align = (const char *)v32.__align;
    *(_QWORD *)(a1 + 8) = v32.__align;
    if ( !align )
      goto LABEL_27;
    v8 = *(unsigned __int8 *)align;
    if ( v8 == 34 )
      goto LABEL_7;
  }
  if ( v8 != 60 )
  {
LABEL_27:
    v10 = 30;
    goto LABEL_28;
  }
  v8 = 62;
LABEL_7:
  *(_QWORD *)(a1 + 8) = align + 1;
  v9 = strchr(align + 1, v8);
  if ( !v9 )
    goto LABEL_27;
  *v9 = 0;
  if ( *(_QWORD *)(a1 + 256) > 0x7Fu )
  {
    v10 = 31;
    v11 = (void *)v32.__align;
    if ( !v32.__align )
      return v10;
    goto LABEL_29;
  }
  v15 = sub_80B70(a1, (pthread_mutex_t *)(&v32.__align + 3), 0x1000u, *(unsigned __int8 **)(a1 + 8), v8, a3 & 1);
  sub_39140(&v29, (char *)v15);
  v16 = *(_QWORD **)(a1 + 224);
  v17 = 3LL * *(_QWORD *)(a1 + 232);
  v18 = &v16[v17];
  if ( !(v17 * 8) )
  {
    v19 = v29;
    if ( !v29 )
      goto LABEL_44;
LABEL_47:
    v30 = 0;
    qfree(v19);
    v29 = nullptr;
    v31 = 0;
    if ( v16 != v18 )
      goto LABEL_53;
LABEL_48:
    if ( v15 )
    {
      v22 = fopenRT((const char *)v15);
      if ( v22 )
      {
        v23 = *(_QWORD *)(a1 + 256);
        v24 = (pthread_mutex_t *)(a1 + 248);
        v25 = v23 + 1;
        if ( *(_QWORD *)(a1 + 264) >= (unsigned __int64)(v23 + 1) )
        {
          v26 = (char *)v24->__align;
        }
        else
        {
          v26 = (char *)qvector_reserve(v24, (void *)v24->__align, v25, 0x28u);
          v23 = *(_QWORD *)(a1 + 256);
          *(_QWORD *)(a1 + 248) = v26;
          v25 = v23 + 1;
        }
        v27 = *(_QWORD *)(a1 + 272);
        v28 = &v26[40 * v23];
        *(_QWORD *)(a1 + 256) = v25;
        *((_QWORD *)v28 + 1) = v27;
        *((_DWORD *)v28 + 8) = *(_DWORD *)(a1 + 288);
        *(_QWORD *)v28 = *(_QWORD *)(a1 + 280);
        v28[36] = *(_BYTE *)(a1 + 128);
        *((_QWORD *)v28 + 2) = *(_QWORD *)(a1 + 200);
        *((_QWORD *)v28 + 3) = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 272) = v22;
        v10 = 0;
        *(_QWORD *)(a1 + 280) = qstrdup((char *)v15);
        *(_DWORD *)(a1 + 288) = 0;
        *(_QWORD *)(a1 + 200) = sub_7CAE4;
        *(_QWORD *)(a1 + 208) = a1;
        *(_BYTE *)(a1 + 128) = 0;
        v11 = (void *)v32.__align;
        if ( v32.__align )
          goto LABEL_29;
        return v10;
      }
    }
    if ( (a2 & 1) == 0 )
    {
      set_error_string(nullptr, *(const char **)(a1 + 8));
      v10 = 32;
      v11 = (void *)v32.__align;
      if ( !v32.__align )
        return v10;
      goto LABEL_29;
    }
    goto LABEL_53;
  }
  v19 = v29;
  if ( v30 )
    v20 = (const char *)v29;
  else
    v20 = &byte_F154B;
  while ( 1 )
  {
    v21 = v16[1] ? (const char *)*v16 : &byte_F154B;
    if ( !strcmp(v20, v21) )
      break;
    v17 -= 3;
    v16 += 3;
    if ( !(v17 * 8) )
    {
      v16 = v18;
      break;
    }
  }
  if ( v19 )
    goto LABEL_47;
LABEL_44:
  if ( v16 == v18 )
    goto LABEL_48;
LABEL_53:
  set_qerrno(0);
  v10 = 0;
LABEL_28:
  v11 = (void *)v32.__align;
  if ( v32.__align )
  {
LABEL_29:
    *(&v32.__align + 1) = 0;
    qfree(v11);
    v32.__align = 0;
    *(&v32.__align + 2) = 0;
  }
  return v10;
}
// F154B: using guessed type char byte_F154B;
