__int64 __fastcall sub_BD13A0(_BYTE *a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  unsigned int v15; // r12d
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rbp
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 *v24; // rax
  _QWORD v25[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_QWORD **)a1;
  v25[0] = a1;
  v3 = (unsigned __int8 (*)(void))v2[27];
  if ( (char *)v3 != (char *)sub_BA1BA0 )
  {
    if ( !v3() )
      return 0;
    a1 = (_BYTE *)v25[0];
    v2 = *(_QWORD **)v25[0];
  }
  v4 = (__int64 (*)())v2[145];
  if ( v4 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v4)(a1, a2) )
      return 0;
    a1 = (_BYTE *)v25[0];
    v2 = *(_QWORD **)v25[0];
  }
  v5 = (__int64 (*)())v2[190];
  if ( v5 != sub_BA1FF0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v5)(a1, a2) )
      return 0;
    a1 = (_BYTE *)v25[0];
    v2 = *(_QWORD **)v25[0];
  }
  v6 = (__int64 (*)())v2[191];
  if ( v6 != sub_BA2000 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v6)(a1, a2) )
      return 0;
    a1 = (_BYTE *)v25[0];
    v2 = *(_QWORD **)v25[0];
  }
  v7 = (__int64 (*)())v2[192];
  if ( v7 != sub_BA2010 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v7)(a1, a2) )
      return 0;
    a1 = (_BYTE *)v25[0];
    v2 = *(_QWORD **)v25[0];
  }
  v8 = (__int64 (*)())v2[193];
  if ( v8 != sub_BA2020 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v8)(a1, a2) )
      return 0;
    a1 = (_BYTE *)v25[0];
    v2 = *(_QWORD **)v25[0];
  }
  v9 = (__int64 (*)())v2[194];
  if ( v9 != sub_BA2030 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, a2) )
      return 0;
    a1 = (_BYTE *)v25[0];
  }
  v10 = *(_QWORD *)(a2 + 160);
  v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10 && (v10 & 4) != 0 )
  {
    if ( !v11 )
      goto LABEL_19;
    v11 = *(_QWORD *)v11;
  }
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 8);
    if ( v12 )
    {
      v13 = v11 + 16;
      v14 = v11 + 32LL * (unsigned int)(v12 - 1) + 48;
      while ( (*(unsigned __int8 (__fastcall **)(_BYTE *, unsigned __int64))(*(_QWORD *)a1 + 112LL))(a1, v13) )
      {
        v13 += 32LL;
        a1 = (_BYTE *)v25[0];
        if ( v14 == v13 )
          goto LABEL_19;
      }
      return 0;
    }
  }
LABEL_19:
  if ( a1[8] || (unsigned int)sub_B73520(a2) == 2 )
  {
    if ( (unsigned __int8)sub_BD10E0(v25, a2) )
    {
      v15 = sub_BABBC0(v25, a2 + 64);
      if ( (_BYTE)v15 )
      {
        v17 = sub_9A4B10(a2);
        v19 = v18;
        v20 = (_QWORD *)v17;
        if ( (_QWORD *)v17 == v18 )
          return v15;
        while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v25[0] + 32LL))(v25[0], *v20) )
        {
          if ( v19 == ++v20 )
            return v15;
        }
      }
    }
    return 0;
  }
  v21 = *(_QWORD *)(a2 + 120);
  v22 = 0;
  v23 = 0;
  if ( (v21 & 4) != 0 )
  {
    v24 = (__int64 *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
    v23 = *v24;
    v22 = v24[1];
  }
  return (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v25[0] + 88LL))(v25[0], v23, v22);
}

