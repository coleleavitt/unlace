__int64 __fastcall sub_7F69D0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  char *v5; // rax
  char **v6; // rsi
  char *v7; // r14
  __int64 v8; // r10
  __int64 *v9; // rbp
  __int64 *i; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r9
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 88);
  v4 = *(_QWORD *)(v3 + 23096) - *(_QWORD *)(v3 + 23088);
  v19 = v4;
  if ( !v4 )
  {
LABEL_14:
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      return 1;
    goto LABEL_15;
  }
  if ( v4 > 0x7FFFFFFFFFFFFFF8LL )
    sub_555886(a1);
  v5 = (char *)operator new(v4);
  v6 = *(char ***)(v3 + 23088);
  v7 = v5;
  v8 = *(_QWORD *)(v3 + 23096) - (_QWORD)v6;
  if ( v8 > 8 )
  {
    v9 = (__int64 *)&v5[v8];
    memmove(v5, v6, *(_QWORD *)(v3 + 23096) - (_QWORD)v6);
    LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)v7 + 28LL) & 0x7F;
    goto LABEL_5;
  }
  if ( v8 == 8 )
  {
    v5 = *v6;
    *(_QWORD *)v7 = *v6;
    LODWORD(v5) = v5[28] & 0x7F;
    if ( (_DWORD)v5 )
    {
      v9 = (__int64 *)(v7 + 8);
      goto LABEL_5;
    }
    operator delete(v7, v4);
    if ( !(unsigned __int8)sub_7E1600(a1, a2 + 40) )
      return 0;
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      return 1;
LABEL_15:
    v14 = nullptr;
    v15 = sub_79A2B0(a2);
    v16 = *v15 + 8LL * *((unsigned int *)v15 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v14 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v16 == v14 )
      return 1;
    while ( 1 )
    {
      v17 = *a1;
      v20[0] = *v14;
      if ( !(unsigned __int8)sub_7F2380((__int64)a1, v20[0], v20[0], v20, a1, v17) )
        break;
      if ( (__int64 *)v16 == ++v14 )
        return 1;
    }
    return 0;
  }
  v9 = (__int64 *)&v5[v8];
  if ( &v5[v8] == v5 )
  {
LABEL_13:
    operator delete(v7, v19);
    goto LABEL_14;
  }
  LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)v5 + 28LL) & 0x7F;
LABEL_5:
  for ( i = (__int64 *)v7; ; LOBYTE(v5) = *(_BYTE *)(*i + 28) & 0x7F )
  {
    if ( (((_BYTE)v5 + 121) & 0x7Fu) > 1 )
    {
      v11 = *i;
      if ( (unsigned int)(unsigned __int8)v5 - 57 > 2
        || (v12 = *(_QWORD *)(v11 + 128)) == 0
        || (*(_BYTE *)(v12 + 10) & 0x20) == 0 )
      {
        v13 = *a1;
        v20[0] = *i;
        if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v11, v20[0], v20, a1, v13) )
          break;
      }
    }
    if ( ++i == v9 )
      goto LABEL_13;
  }
  operator delete(v7, v19);
  return 0;
}

