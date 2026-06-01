__int64 __fastcall sub_4B7E10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _DWORD *v3; // rax
  char v5; // dl
  __int16 v6; // ax
  _DWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  char v11; // di
  _DWORD *v12; // rcx
  _QWORD v13[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v13[0] = a2;
  if ( !(unsigned __int8)sub_15D37A0(v2 + 24, a2) )
  {
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    goto LABEL_3;
  }
  v5 = sub_15D37A0(v2 + 80, a2);
  v6 = *(_WORD *)(a2 + 4);
  if ( v5 )
  {
    if ( v6 )
      goto LABEL_5;
LABEL_3:
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v3 )
      goto LABEL_5;
    if ( *v3 != 5 )
      goto LABEL_5;
    v5 = 1;
    if ( v3[1] != 9 )
      goto LABEL_5;
    goto LABEL_14;
  }
  if ( v6 )
    return 0;
  v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v7 || *v7 != 5 )
    return 0;
  if ( v7[1] == 9 )
  {
LABEL_14:
    v8 = a2 + 32;
    v9 = 8LL * *(unsigned int *)(a2 + 24);
    v10 = a2 + 32 + v9;
    if ( v9 )
    {
      v11 = 0;
      do
      {
        if ( !*(_WORD *)(*(_QWORD *)v8 + 4LL) )
        {
          v12 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 24LL);
          if ( v12 )
          {
            if ( *v12 == 5 )
              v11 |= v12[1] == 0;
          }
        }
        v8 += 8;
      }
      while ( v10 != v8 );
      if ( v11 )
      {
        if ( !v5 )
          return 0;
LABEL_5:
        sub_4B2920((_QWORD *)(v2 + 168), v13);
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

