bool __fastcall sub_27ED00(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // eax
  __int64 v8; // rbp
  __int64 tinfo_size; // r15
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rsi
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ebx
  unsigned int v21; // eax
  int v22; // [rsp+Ch] [rbp-4Ch]
  int v23; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a4 <= a5 )
    return 0;
  v6 = *(_DWORD *)(a2 + 8);
  v8 = a2;
  if ( (unsigned int)(v6 - 22) <= 1 )
  {
    if ( *(_DWORD *)(a3 + 8) != 48 )
      return 1;
    v22 = a6;
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a3 + 48), 0);
    v12 = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a3 + 24) + 48LL), 0);
    a6 = v22;
    if ( tinfo_size != v12 )
      goto LABEL_23;
    v13 = *(_QWORD *)(a2 + 24);
    if ( a3 == v13 )
      v13 = *(_QWORD *)(a2 + 32);
    v14 = sub_27E5F0(v13, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
    v15 = *(_QWORD *)(a1 + 72);
    v23 = v14;
    sub_27E2D0((__int16 *)&v23, v15, (_QWORD *)(v13 + 48), 0);
    a6 = v22;
    if ( (__int16)v23 >= 8 * a5 )
    {
LABEL_23:
      v6 = *(_DWORD *)(v8 + 8);
      goto LABEL_3;
    }
    return 0;
  }
LABEL_3:
  switch ( v6 )
  {
    case 19:
    case 20:
    case 21:
    case 50:
      v16 = 1;
      goto LABEL_12;
    case 35:
    case 36:
    case 47:
      v16 = 2;
      goto LABEL_12;
    case 37:
      v16 = 3;
LABEL_12:
      v17 = 8LL * (a6 - 1);
      break;
    default:
      return 1;
  }
  while ( 2 )
  {
    if ( a6 <= 0 )
    {
      if ( !under_debugger )
        sub_37B760(50602);
      BUG();
    }
    --a6;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + v17);
    switch ( *(_DWORD *)(v18 + 8) )
    {
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x32:
        v17 -= 8;
        if ( v16 != 1 )
          goto LABEL_19;
        goto LABEL_17;
      case 0x23:
      case 0x24:
      case 0x2F:
        v19 = 2;
        goto LABEL_16;
      case 0x25:
        v19 = 3;
        goto LABEL_16;
      default:
        v19 = 0;
LABEL_16:
        v17 -= 8;
        if ( v16 == v19 )
        {
LABEL_17:
          v8 = v18;
          continue;
        }
LABEL_19:
        v20 = *(_DWORD *)(a1 + 24) + ~a6;
        v21 = get_tinfo_size(0, *(_QWORD *)(v8 + 48), 0);
        return a5 < (int)sub_27D0B0(a1, v8, v21, v20);
    }
  }
}
