unsigned __int64 __fastcall sub_BADBA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  unsigned __int8 v7; // bp
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  unsigned __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax

  while ( 1 )
  {
    v6 = (__int64 *)a2;
    v7 = a3;
    v8 = *(_QWORD *)(a1 + 120);
    if ( !v8 )
      break;
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v9 )
      return 0;
LABEL_3:
    if ( (*(_BYTE *)(v9 + 72) & 1) != 0 )
      sub_BA8900(a1);
    v10 = sub_BAC6C0(a1, a2, a3, a4, a5, a6);
    v15 = *v6;
    if ( v10 )
    {
      if ( v7 )
      {
        result = sub_BAAB00(v10, v15, 1, v12, v13, v14);
        if ( result )
          return result;
        v15 = *v6;
LABEL_11:
        result = sub_BAD1F0(a1, v15, v11, v12, v13, v14);
        goto LABEL_12;
      }
      result = sub_BAAB00(v10, v15, 0, v12, v13, v14);
      if ( result )
        return result;
      v15 = *v6;
    }
    else if ( v7 )
    {
      goto LABEL_11;
    }
    result = sub_BAD270(a1, v15, v11, v12, v13, v14);
    if ( !result )
    {
      if ( sub_BAB630(a1, v15, v17, v18, v19, v20) )
        goto LABEL_13;
      result = sub_BAD910(a1, *v6, 1, 0, 1, 0);
      if ( result )
        return result;
      v15 = (__int64)v6;
      result = sub_BADBA0(a1, v6, 1);
    }
LABEL_12:
    if ( result )
      return result;
LABEL_13:
    if ( !sub_BAB630(a1, v15, v17, v18, v19, v20) )
      return 0;
    v25 = sub_BAB630(a1, v15, v21, v22, v23, v24);
    a3 = v7;
    a2 = (__int64)v6;
    a1 = v25;
  }
  a2 = *(_QWORD *)(a1 + 96);
  sub_A794E0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
  v9 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v9 )
    goto LABEL_3;
  return 0;
}
