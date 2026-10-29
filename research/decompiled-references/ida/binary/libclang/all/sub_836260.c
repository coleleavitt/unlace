__int64 __fastcall sub_836260(__int64 a1, _DWORD *a2, _QWORD *a3, __int64 a4, unsigned int a5, __int64 *a6)
{
  bool v7; // r14
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int8 **v21; // rdi
  unsigned int v22; // eax
  unsigned __int8 **v23; // rax
  _BYTE *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rbp
  unsigned __int64 v27; // r13
  __int64 v28; // rax
  unsigned __int8 **v29; // rax
  unsigned __int8 **v30; // rbp
  unsigned __int8 **v31; // rdi
  _QWORD *v33; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+20h] [rbp-48h] BYREF
  __int64 v35; // [rsp+28h] [rbp-40h]

  v7 = 0;
  v33 = a3;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 2) & 1) != 0 )
    v7 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33[6] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 42 <= 1;
  if ( !a4 )
  {
    sub_69F1C0((__int64)&v34, (__int64)a3, 0, a5);
    goto LABEL_17;
  }
  sub_69F1C0((__int64)&v34, (__int64)a3, *(_DWORD *)(a4 + 176), a5);
  v12 = *(_QWORD *)(a4 + 88);
  v13 = v33;
  v14 = a4 + 80;
  if ( !v12 )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      v15 = *(_QWORD **)(v12 + 32);
      if ( v15 < v33 || v33 == v15 && *(_DWORD *)(v12 + 40) < a5 )
        break;
      v14 = v12;
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v12 )
        goto LABEL_11;
    }
    v12 = *(_QWORD *)(v12 + 24);
  }
  while ( v12 );
LABEL_11:
  if ( v14 == a4 + 80 || v33 != *(_QWORD **)(v14 + 32) || a5 != *(_DWORD *)(v14 + 40) )
  {
LABEL_13:
    *a6 = 0;
    if ( (*((_BYTE *)v13 + 28) & 0x7F) != 0x29 )
    {
      if ( !*(_BYTE *)(a1 + 962) )
      {
        v22 = sub_AC6DA0(a2);
        v23 = (unsigned __int8 **)sub_A2E1A0(a1, v22, 2347, 0);
        if ( v23 )
          sub_8356A0(v23, (__int64)"captures not currently allowed", 1u);
      }
      return 0;
    }
LABEL_17:
    if ( (unsigned __int8)sub_69F550((_QWORD *)(a1 + 840), &v34) )
    {
      *a6 = *(_QWORD *)(a1 + 864);
      return 1;
    }
    if ( (*((_BYTE *)v33 + 28) & 0x7F) == 0x29 && !v7 )
    {
      if ( *(_BYTE *)(a1 + 962) )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
        if ( v25 )
        {
          v26 = (_QWORD *)(v33[2] & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v33[2] & 4) != 0 )
            v26 = (_QWORD *)*v26;
          if ( v26 )
          {
            v27 = sub_79CC40(v25 + 72);
            if ( v27 == sub_79CC40((__int64)v26) )
              return 0;
          }
        }
      }
      if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
      {
        sub_A2E130(a1, a2, 110, 0);
        return 0;
      }
      v19 = 0;
      v20 = 2211;
      goto LABEL_24;
    }
    if ( (*a2 & 0x20000) != 0 )
      return 0;
    v17 = sub_77BD20(v33, (unsigned __int64 *)&v33);
    v18 = v17;
    if ( v17 )
    {
      if ( (*(_BYTE *)(v17 + 2) & 2) != 0 )
      {
        if ( *(_BYTE *)(a1 + 962) )
          return 0;
        v28 = sub_A2CB40(a1);
        v29 = (unsigned __int8 **)sub_A2E130(a1, a2, (unsigned int)((*(_BYTE *)(v28 + 1) & 0x10) == 0) + 2228, 1);
        v30 = v29;
        if ( v29 )
        {
          sub_8356A0(v29, (__int64)v33, 0xAu);
          sub_8356A0(v30, v33[6], 8u);
        }
        goto LABEL_26;
      }
      if ( !sub_77C2D0((__int64)v33, (unsigned __int64)&v33) )
      {
        if ( v7 )
          goto LABEL_64;
        v19 = 1;
        v20 = 2299;
        goto LABEL_24;
      }
    }
    else if ( !v7 )
    {
      v19 = 1;
      v20 = 2300;
      if ( !*(_BYTE *)(a1 + 962) )
        goto LABEL_24;
      return 0;
    }
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
      && !sub_77C620((__int64)v33, (unsigned __int64)&v33)
      && (unsigned __int8)sub_7837E0((__int64)v33, *(_QWORD *)(a1 + 16))
      || ((*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0 || (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0)
      && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0
      && !(unsigned __int8)sub_77C510((__int64)v33, *(_QWORD *)(a1 + 16)) )
    {
      if ( v18 )
      {
        v31 = (unsigned __int8 **)sub_A2E240(a1, a2, 2299, 1);
        if ( v31 )
          sub_8356A0(v31, (__int64)v33, 0xAu);
        sub_8219E0(a1, v34, v35);
      }
      else
      {
        sub_A2E240(a1, a2, 110, 0);
      }
    }
    if ( !(unsigned __int8)sub_783680((__int64)v33) )
    {
      v24 = sub_77C4E0((__int64)v33);
      *a6 = (__int64)v24;
      if ( !v7 )
        return 1;
      if ( v24 )
      {
        v24[4] |= 1u;
        return 1;
      }
LABEL_64:
      *a6 = sub_8218A0(*(_QWORD *)(a1 + 32), (unsigned __int64)v33, v34, v35);
      return 1;
    }
    v19 = 0;
    v20 = 2301;
LABEL_24:
    v21 = (unsigned __int8 **)sub_A2E130(a1, a2, v20, v19);
    if ( v21 )
      sub_8356A0(v21, (__int64)v33, 0xAu);
LABEL_26:
    sub_8219E0(a1, v34, v35);
    return 0;
  }
  *a6 = v14 + 48;
  return 1;
}

