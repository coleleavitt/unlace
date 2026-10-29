/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_attr
// Address: 0x0005A500

//----- (0005A500) --------------------------------------------------------
int __cdecl get_idcv_attr(int a1, int a2, char *s2, char a4)
{
  int v4; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // esi
  char *v8; // ecx
  int v9; // edi
  char *v10; // eax
  char *v11; // esi
  const char *v12; // eax
  int v13; // eax
  char *v14; // edi
  const char *v15; // eax
  _DWORD *v16; // esi
  char *v17; // edi
  char *idc_gvar; // eax
  __int64 v19; // xmm0_8
  __int64 v20; // xmm0_8
  int v21; // eax
  void *v22; // eax
  int v23; // edi
  int v24; // esi
  bool v25; // sf
  __int64 v26; // xmm0_8
  __int64 v27; // xmm0_8
  _DWORD *v28; // esi
  char *v29; // edi
  int v30; // eax
  char *v31; // eax
  char *v33; // eax
  int v34; // [esp+14h] [ebp-98h]
  const char *v35; // [esp+18h] [ebp-94h]
  char v36; // [esp+18h] [ebp-94h]
  _DWORD *v37; // [esp+1Ch] [ebp-90h]
  char *v38; // [esp+20h] [ebp-8Ch]
  void *v39; // [esp+28h] [ebp-84h]
  __int64 v40; // [esp+30h] [ebp-7Ch] BYREF
  __int64 v41; // [esp+38h] [ebp-74h]
  int v42; // [esp+40h] [ebp-6Ch]
  __int64 v43; // [esp+80h] [ebp-2Ch] BYREF
  __int64 v44; // [esp+88h] [ebp-24h]
  int v45; // [esp+90h] [ebp-1Ch]
  unsigned int v46; // [esp+98h] [ebp-14h]

  v4 = a2;
  v34 = a1;
  v46 = __readgsdword(0x14u);
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v5 = sub_50F20();
  if ( !v4 )
  {
    v16 = (_DWORD *)v5;
    v17 = s2;
    idc_gvar = (char *)find_idc_gvar(s2);
    if ( idc_gvar )
    {
      if ( v34 )
      {
        LOBYTE(v43) = 2;
        v44 = 0;
        HIDWORD(v43) = 0;
        v45 = 0;
        copy_idcv((char *)&v43, idc_gvar);
        v42 = *(_DWORD *)(v34 + 16);
        v19 = *(_QWORD *)v34;
        v41 = *(_QWORD *)(v34 + 8);
        v40 = v19;
        *(_DWORD *)(v34 + 16) = v45;
        v20 = v43;
        *(_QWORD *)(v34 + 8) = v44;
        *(_QWORD *)v34 = v20;
        v45 = v42;
        v44 = v41;
        v43 = v40;
        if ( (char)v40 == 5 )
        {
          sub_59680((void *)HIDWORD(v43), (char *)&v43);
          goto LABEL_53;
        }
        if ( (char)v40 != 7 || !HIDWORD(v43) )
          goto LABEL_53;
        LODWORD(v44) = 0;
        qfree((void *)HIDWORD(v43));
        goto LABEL_39;
      }
LABEL_53:
      qmutex_unlock((pthread_mutex_t *)dword_13BD5C);
      return 0;
    }
    v21 = sub_54240(v16, v17);
    if ( v21 != 0x7FFFFFFF )
    {
      v23 = v34;
      if ( !v34 )
        goto LABEL_53;
      v24 = v21;
LABEL_44:
      free_idcv((char *)v23);
      *(_BYTE *)v23 = 6;
      *(_DWORD *)(v23 + 4) = v24;
      goto LABEL_53;
    }
    set_error_string(0, v17);
    v6 = 1538;
    goto LABEL_23;
  }
  v6 = 1532;
  if ( *(_BYTE *)v4 != 5 )
  {
LABEL_23:
    qmutex_unlock((pthread_mutex_t *)dword_13BD5C);
    set_qerrno(v6);
    return v6;
  }
  v7 = *(_DWORD **)(v4 + 4);
  sub_1B530((int)&v40, s2);
  v8 = (char *)(v7 + 1);
  v37 = v7;
  v9 = v7[1];
  v38 = (char *)(v7 + 1);
  if ( v9 )
  {
    v10 = (char *)v40;
    v39 = (void *)v40;
    if ( !HIDWORD(v40) )
      v10 = byte_EF875;
    v35 = v10;
    v11 = (char *)(v7 + 1);
    do
    {
      v12 = byte_EF875;
      if ( *(_DWORD *)(v9 + 20) )
        v12 = *(const char **)(v9 + 16);
      v13 = strcmp(v12, v35);
      if ( v13 >= 0 )
        v11 = (char *)v9;
      v9 = *(_DWORD *)(v9 + 4 * ((unsigned int)v13 >> 31));
    }
    while ( v9 );
    v8 = v38;
    if ( v11 == v38 )
    {
      v14 = s2;
      v22 = v39;
    }
    else
    {
      v14 = s2;
      if ( *((_DWORD *)v11 + 5) )
        v15 = *((const char **)v11 + 4);
      else
        v15 = byte_EF875;
      v25 = strcmp(v35, v15) < 0;
      v8 = v38;
      v22 = v39;
      if ( !v25 )
        goto LABEL_31;
    }
  }
  else
  {
    v22 = (void *)v40;
    v14 = s2;
  }
  v11 = v8;
LABEL_31:
  if ( v22 )
  {
    HIDWORD(v40) = 0;
    qfree(v22);
    LODWORD(v40) = 0;
    LODWORD(v41) = 0;
    v8 = v38;
  }
  if ( v11 != v8 )
  {
    if ( v34 )
    {
      LOBYTE(v43) = 2;
      v44 = 0;
      HIDWORD(v43) = 0;
      v45 = 0;
      copy_idcv((char *)&v43, v11 + 28);
      v42 = *(_DWORD *)(v34 + 16);
      v26 = *(_QWORD *)v34;
      v41 = *(_QWORD *)(v34 + 8);
      v40 = v26;
      *(_DWORD *)(v34 + 16) = v45;
      v27 = v43;
      *(_QWORD *)(v34 + 8) = v44;
      *(_QWORD *)v34 = v27;
      v45 = v42;
      v44 = v41;
      v43 = v40;
      if ( (char)v40 == 5 )
      {
        sub_59680((void *)HIDWORD(v43), (char *)&v43);
        goto LABEL_53;
      }
      if ( (char)v40 != 7 || !HIDWORD(v43) )
        goto LABEL_53;
      LODWORD(v44) = 0;
      qfree((void *)HIDWORD(v43));
LABEL_39:
      HIDWORD(v43) = 0;
      HIDWORD(v44) = 0;
      goto LABEL_53;
    }
    goto LABEL_53;
  }
  v28 = (_DWORD *)sub_537A0(v37[4]);
  sub_1B530((int)&v40, v14);
  v24 = sub_5C350(v28, (int)&v40);
  v29 = s2;
  if ( (_DWORD)v40 )
  {
    HIDWORD(v40) = 0;
    qfree((void *)v40);
    LODWORD(v40) = 0;
    LODWORD(v41) = 0;
  }
  if ( v24 != -1 )
  {
    v23 = v34;
    if ( !v34 )
      goto LABEL_53;
    goto LABEL_44;
  }
  qmutex_unlock((pthread_mutex_t *)dword_13BD5C);
  if ( !a4 )
    goto LABEL_50;
  sub_1B530((int)&v43, v29);
  sub_5FB80((int)&v40, 0, 1);
  v36 = sub_5C450((int)&v40, v37, (char **)&v43, (char **)&a1);
  sub_5FE80((int)&v40);
  if ( (_DWORD)v43 )
  {
    HIDWORD(v43) = 0;
    qfree((void *)v43);
    LODWORD(v43) = 0;
    LODWORD(v44) = 0;
  }
  v6 = 0;
  if ( !v36 )
  {
LABEL_50:
    v40 = 0;
    LODWORD(v41) = 0;
    v30 = sub_537A0(v37[4]);
    if ( *(_DWORD *)(v30 + 24) )
      v31 = *(char **)(v30 + 20);
    else
      v31 = byte_EF875;
    sub_1F400((int)&v40, "%s.%s", v31, v29);
    if ( HIDWORD(v40) )
      v33 = (char *)v40;
    else
      v33 = byte_EF875;
    set_error_string(0, v33);
    v6 = set_qerrno(1538);
    if ( (_DWORD)v40 )
    {
      HIDWORD(v40) = 0;
      qfree((void *)v40);
      LODWORD(v40) = 0;
      LODWORD(v41) = 0;
    }
  }
  return v6;
}
// 13BD5C: using guessed type int dword_13BD5C;
