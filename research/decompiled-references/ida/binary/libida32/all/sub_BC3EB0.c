__int64 __fastcall sub_BC3EB0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  unsigned int v16; // r12d
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rbp
  _QWORD *v20; // rbx
  __int64 *v22; // rax
  _QWORD v23[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v23[0] = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = (_QWORD *)v23[0];
    v3 = *(_QWORD **)v23[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v23[0];
    v3 = *(_QWORD **)v23[0];
  }
  v6 = (__int64 (*)())v3[190];
  if ( v6 != sub_BA1FF0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v23[0];
    v3 = *(_QWORD **)v23[0];
  }
  v7 = (__int64 (*)())v3[191];
  if ( v7 != sub_BA2000 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v23[0];
    v3 = *(_QWORD **)v23[0];
  }
  v8 = (__int64 (*)())v3[196];
  if ( v8 != sub_BA2050 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v8)(a1, a2) )
    return 0;
  v9 = *(_QWORD *)(a2 + 120);
  if ( (v9 & 4) == 0 )
    goto LABEL_10;
  if ( *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 16) )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = v10++;
      sub_BA55A0(v23, *(_QWORD *)(*(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 24) + 8 * v11));
      v9 = *(_QWORD *)(a2 + 120);
      if ( (v9 & 4) == 0 )
        break;
      if ( *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 16) <= v10 )
        goto LABEL_24;
    }
LABEL_10:
    v12 = 0;
    v13 = 0;
    goto LABEL_11;
  }
LABEL_24:
  v22 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  v13 = *v22;
  v12 = v22[1];
LABEL_11:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v23[0] + 88LL))(v23[0], v13, v12) )
  {
    v14 = *(_QWORD *)(a2 + 128);
    if ( !v14
      || (v14 & 4) == 0
      || (v15 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr
      || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)v23[0] + 136LL))(
           v23[0],
           *v15,
           v15 + 1) )
    {
      v16 = sub_BABBC0(v23, a2 + 64);
      if ( (_BYTE)v16 )
      {
        v17 = sub_9A4B10(a2);
        v19 = v18;
        v20 = (_QWORD *)v17;
        if ( (_QWORD *)v17 == v18 )
          return v16;
        while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v23[0] + 32LL))(v23[0], *v20) )
        {
          if ( v19 == ++v20 )
            return v16;
        }
      }
    }
  }
  return 0;
}

