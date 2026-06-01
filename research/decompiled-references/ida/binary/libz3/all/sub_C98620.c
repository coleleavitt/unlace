__int64 __fastcall sub_C98620(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  int *v4; // rax
  int v5; // edx
  void *v6; // rbx
  __int64 result; // rax
  _DWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // rsi
  _DWORD *v16; // rax
  bool v17; // zf
  char v18; // [rsp+Eh] [rbp-4Ah] BYREF
  char v19; // [rsp+Fh] [rbp-49h] BYREF
  __int64 v20; // [rsp+10h] [rbp-48h] BYREF
  __int64 v21; // [rsp+18h] [rbp-40h]
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+28h] [rbp-30h]

  if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)a1, a2)
    && (!*(_BYTE *)(a1 + 24) || (v8 = *(_DWORD **)(sub_15D1F10(a2) + 24)) == nullptr || *v8 != 5 || v8[1] != 1)
    && (!*(_BYTE *)(a1 + 25) || (v3 = *(_DWORD **)(sub_15D1F10(a2) + 24)) == nullptr || *v3 != 5 || v3[1]) )
  {
    sub_161D9C();
  }
  v4 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v4 )
  {
    v20 = 0;
    v17 = *(_WORD *)(a2 + 4) == 0;
    v21 = 0;
    v22 = 1;
    v23 = 0;
    if ( v17 && !*(_DWORD *)(a2 + 24) )
      goto LABEL_14;
LABEL_64:
    sub_161D9C();
  }
  v5 = *v4;
  v20 = 0;
  v21 = 0;
  v22 = 1;
  v23 = 0;
  if ( !v5 )
    goto LABEL_14;
  if ( v5 != 5 )
  {
    if ( !*(_WORD *)(a2 + 4) && !*(_DWORD *)(a2 + 24) && *v4 == -1 )
      goto LABEL_14;
    goto LABEL_64;
  }
  switch ( v4[1] )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 18:
    case 19:
    case 21:
      break;
    case 1:
      if ( *(_BYTE *)(a1 + 27) || !*(_BYTE *)(a1 + 25) )
        sub_161D9C();
      return result;
    case 9:
      if ( *(_BYTE *)(a1 + 27) )
      {
        if ( *(_DWORD *)(a2 + 24) != 2 )
          sub_161D9C();
        v11 = *(_QWORD *)(a2 + 32);
        if ( *(_WORD *)(v11 + 4) || (v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL)) == nullptr || *v12 != 5 || v12[1] )
        {
          v13 = *(_QWORD *)(a2 + 40);
          if ( *(_WORD *)(v13 + 4)
            || (v14 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL)) == nullptr
            || *v14 != 5
            || v14[1] )
          {
            sub_161D9C();
          }
        }
      }
      return result;
    case 10:
    case 11:
    case 15:
    case 16:
      if ( !*(_BYTE *)(a1 + 27) )
        goto LABEL_20;
      v15 = *(_QWORD *)(a2 + 40);
      if ( *(_WORD *)(v15 + 4) || (v16 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL)) == nullptr || *v16 != 5 || v16[1] )
        sub_161D9C();
      if ( (unsigned __int8)sub_1666AE0(a1 + 8, v15, &v20, &v18) && !(_DWORD)v20 )
        sub_161D9C();
      if ( !*(_BYTE *)(a1 + 27)
        || !(unsigned __int8)sub_1666AE0(a1 + 8, *(_QWORD *)(a2 + 40), &v20, &v19)
        || !(_DWORD)v20 )
      {
LABEL_20:
        v9 = *(_QWORD *)(a2 + 32);
        if ( *(_WORD *)(v9 + 4)
          || (*(_BYTE *)(v9 + 30) & 1) == 0
          || (v10 = *(_QWORD *)(a2 + 40), *(_WORD *)(v10 + 4))
          || (*(_BYTE *)(v10 + 30) & 1) == 0 )
        {
          sub_161D9C();
        }
      }
      return result;
    case 20:
      if ( *(_BYTE *)(a1 + 25) )
        sub_161D9C();
      return result;
    case 22:
      if ( *(_BYTE *)(a1 + 27) )
        sub_161D9C();
      return result;
    default:
      sub_161D9C();
  }
LABEL_14:
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v20);
  return sub_182CBA0(v6, &v22);
}

