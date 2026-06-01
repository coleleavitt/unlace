__int64 __fastcall sub_118E4B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r12
  const char **v7; // rax
  size_t v8; // rdx
  const char *v9; // r12
  _BYTE *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int8 *v13; // r14
  unsigned __int8 *v14; // rbx
  unsigned int v15; // ebp
  __int64 v16; // r12
  const char **v17; // rax
  const char *v18; // r15
  size_t v19; // rax
  size_t v20; // r13
  unsigned __int8 *v21; // r13
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edx
  const char *v29; // rax
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rax
  int v33; // rdx^4
  int v34; // edx
  unsigned __int8 *v35; // [rsp+8h] [rbp-F0h]
  const char *v38; // [rsp+20h] [rbp-D8h]
  __int64 v39; // [rsp+30h] [rbp-C8h]
  __int64 *v40; // [rsp+38h] [rbp-C0h]
  char v41; // [rsp+46h] [rbp-B2h]
  char v42; // [rsp+47h] [rbp-B1h]
  void *v43[2]; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v44[16]; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int8 *v45[2]; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v46; // [rsp+80h] [rbp-78h]
  unsigned __int8 *v47; // [rsp+88h] [rbp-70h]
  __int16 v48; // [rsp+90h] [rbp-68h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = v4 + 16;
  v39 = v4;
  v40 = *(__int64 **)(v4 + 8);
  v6 = sub_10DCD30(a2, 0xB64u);
  if ( v6 )
  {
    sub_10DC5D0(a3, (__int64)"-tune-cpu");
    v7 = *(const char ***)(v6 + 48);
    v8 = 0;
    v9 = *v7;
    if ( *v7 )
      v8 = j__strlen(*v7);
    v10 = (_BYTE *)sub_22A7E20(v5, v9, v8);
    if ( v10 )
    {
      v43[0] = v44;
      sub_11892E0(v43, v10, (__int64)&v10[v11]);
    }
    else
    {
      v44[0] = 0;
      v43[0] = v44;
      v43[1] = nullptr;
    }
    v45[0] = (unsigned __int8 *)v43;
    v48 = 260;
    v12 = sub_10DA6C0(a2, (__int64)v45);
    sub_10DC5D0(a3, v12);
    if ( v43[0] != v44 )
      operator delete(v43[0]);
  }
  v38 = nullptr;
  if ( *(_DWORD *)(v39 + 68) == 3 )
  {
    v28 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( v28 != 23 )
    {
      v29 = "elfv2";
      if ( v28 != 24 )
        v29 = nullptr;
      v38 = v29;
      goto LABEL_9;
    }
    v38 = "elfv1";
    if ( *(_DWORD *)(v39 + 48) != 23 )
      goto LABEL_9;
    v31 = *(_DWORD *)(v39 + 60);
    if ( v31 == 3 )
    {
      if ( (unsigned int)sub_22B7B00(v5) > 0xC )
        goto LABEL_100;
      v32 = sub_22B7B00(v5);
      if ( !((v34 | HIDWORD(v32)) & 0x7FFFFFFF | (unsigned int)v32 | v33 & 0x7FFFFFFF) )
        goto LABEL_100;
      v31 = *(_DWORD *)(v39 + 60);
    }
    if ( v31 == 12 )
    {
      v38 = "elfv2";
      goto LABEL_9;
    }
    if ( *(_DWORD *)(v39 + 64) != 49 && (unsigned int)(*(_DWORD *)(v39 + 64) - 18) > 7 && v31 != 39 )
    {
      v38 = "elfv1";
      goto LABEL_9;
    }
LABEL_100:
    v38 = "elfv2";
  }
LABEL_9:
  v41 = sub_112C5E0();
  sub_10DC500((__int64)v45, a2, 0x8AEu);
  v13 = v45[0];
  v42 = 0;
  v14 = v45[1];
  v15 = v46;
  if ( v47 != v45[0] )
  {
    v35 = v47;
    while ( 1 )
    {
      v16 = *(_QWORD *)v13;
      v17 = *(const char ***)(*(_QWORD *)v13 + 48LL);
      v18 = *v17;
      if ( !*v17 )
      {
        if ( !j__strlen("elfv2") )
          goto LABEL_46;
        v20 = 0;
        goto LABEL_40;
      }
      v19 = strlen(*v17);
      v20 = v19;
      if ( v19 == 14 )
      {
        if ( *(_QWORD *)v18 == 0x676E6F6C65656569LL
          && *((_DWORD *)v18 + 2) == 1651863396
          && *((_WORD *)v18 + 6) == 25964 )
        {
          v26 = *(_QWORD *)(v16 + 16);
          v41 = 1;
          if ( !v26 )
            v26 = v16;
          *(_BYTE *)(v26 + 44) |= 1u;
          goto LABEL_17;
        }
        v20 = j__strlen("elfv2");
        if ( v20 != 14 )
        {
          v20 = j__strlen("altivec");
          if ( v20 == 14 )
            goto LABEL_42;
LABEL_16:
          v38 = v18;
          goto LABEL_17;
        }
        goto LABEL_82;
      }
      if ( v19 == 13 )
        break;
      switch ( v19 )
      {
        case 0xBuLL:
          if ( *(_QWORD *)v18 == 0x616665642D636576LL && *((_WORD *)v18 + 4) == 27765 && v18[10] == 116 )
          {
            v24 = *(_QWORD *)(v16 + 16);
            v42 = 0;
            if ( !v24 )
              v24 = v16;
            *(_BYTE *)(v24 + 44) |= 1u;
            goto LABEL_17;
          }
          goto LABEL_39;
        case 0xAuLL:
          if ( *(_QWORD *)v18 == 0x617478652D636576LL && *((_WORD *)v18 + 4) == 26978 )
          {
            v25 = *(_QWORD *)(v16 + 16);
            v42 = 1;
            if ( !v25 )
              v25 = v16;
            *(_BYTE *)(v25 + 44) |= 1u;
            goto LABEL_17;
          }
          goto LABEL_39;
        case 5uLL:
          if ( *(_DWORD *)v18 == 1986423909 && v18[4] == 49 )
          {
            v30 = *(_QWORD *)(v16 + 16);
            if ( !v30 )
              v30 = v16;
            *(_BYTE *)(v30 + 44) |= 1u;
            v38 = "elfv1";
            goto LABEL_17;
          }
          v20 = j__strlen("elfv2");
          if ( v20 != 5 )
          {
            v20 = j__strlen("altivec");
            if ( v20 == 5 )
              goto LABEL_42;
            goto LABEL_16;
          }
LABEL_82:
          if ( !memcmp(v18, "elfv2", v20) )
          {
LABEL_46:
            v23 = *(_QWORD *)(v16 + 16);
            if ( !v23 )
              v23 = v16;
            *(_BYTE *)(v23 + 44) |= 1u;
            v38 = "elfv2";
            goto LABEL_17;
          }
          if ( v20 == j__strlen("altivec") )
          {
LABEL_42:
            if ( !memcmp(v18, "altivec", v20) )
              v18 = v38;
            v38 = v18;
            goto LABEL_17;
          }
          goto LABEL_16;
      }
      if ( j__strlen("elfv2") == v19 )
      {
        if ( !v20 )
          goto LABEL_46;
        goto LABEL_82;
      }
LABEL_40:
      if ( j__strlen("altivec") != v20 )
        goto LABEL_16;
      if ( v20 )
        goto LABEL_42;
LABEL_17:
      v21 = v13 + 8;
      if ( v13 + 8 == v14 )
      {
LABEL_22:
        v13 = v14;
      }
      else if ( v15 )
      {
        while ( !*(_QWORD *)v21 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v21, v15) )
        {
          v21 += 8;
          if ( v21 == v14 )
            goto LABEL_22;
        }
        v13 = v21;
      }
      else
      {
        v13 = &v21[8 * ((unsigned __int64)(v14 - 16 - v13) >> 3) + 8];
      }
      if ( v35 == v13 )
      {
        if ( v41 )
          sub_10DC5D0(a3, (__int64)"-mabi=ieeelongdouble");
        if ( v42 )
        {
          if ( *(_DWORD *)(v39 + 60) != 20 )
          {
            sub_FC70B0((__int64)v45, *v40, 0, 495);
            sub_1188FA0(v45, (__int64)"-mabi=vec-extabi");
            sub_AEC220(v45, *(_BYTE **)(v39 + 16), *(_QWORD *)(v39 + 24));
            sub_AEA040((__int64)v45);
          }
          sub_10DC5D0(a3, (__int64)"-mabi=vec-extabi");
        }
        goto LABEL_30;
      }
    }
    if ( *(_QWORD *)v18 == 0x64676E6F6C6D6269LL && *((_DWORD *)v18 + 2) == 1818391919 && v18[12] == 101 )
    {
      v27 = *(_QWORD *)(v16 + 16);
      v41 = 0;
      if ( !v27 )
        v27 = v16;
      *(_BYTE *)(v27 + 44) |= 1u;
      goto LABEL_17;
    }
LABEL_39:
    if ( v19 == j__strlen("elfv2") )
      goto LABEL_82;
    goto LABEL_40;
  }
  if ( v41 )
    sub_10DC5D0(a3, (__int64)"-mabi=ieeelongdouble");
LABEL_30:
  if ( !(unsigned __int8)sub_21B7850(a2, 2830, 2694, 1) )
    sub_10DC5D0(a3, (__int64)"-disable-red-zone");
  if ( (unsigned int)sub_1157090(v40, a2) == 1 )
  {
    sub_10DC5D0(a3, (__int64)"-msoft-float");
    sub_10DC5D0(a3, (__int64)"-mfloat-abi");
    result = sub_10DC5D0(a3, (__int64)"soft");
  }
  else
  {
    sub_10DC5D0(a3, (__int64)"-mfloat-abi");
    result = sub_10DC5D0(a3, (__int64)"hard");
  }
  if ( v38 )
  {
    sub_10DC5D0(a3, (__int64)"-target-abi");
    return sub_10DC5D0(a3, (__int64)v38);
  }
  return result;
}
