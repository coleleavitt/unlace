__int64 __fastcall sub_329FC0(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  int v4; // eax
  int tinfo_size; // esi
  __int64 v9; // r14
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rsi
  signed __int64 v14; // rax
  __int64 v15[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v16; // [rsp+10h] [rbp-48h] BYREF
  __int128 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 284);
  v18 = __readfsqword(0x28u);
  if ( (unsigned int)(v4 - 3) <= 1 )
    return 1;
  tinfo_size = 1;
  if ( (unsigned int)(v4 - 34) <= 4 )
  {
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a3 + 480) + 376LL), 0);
    v4 = *(_DWORD *)(a1 + 284);
  }
  switch ( v4 )
  {
    case 2:
    case 3:
    case 4:
    case 35:
      return 1;
    case 5:
    case 34:
      if ( *(_QWORD *)(a1 + 32) == 3 )
      {
        if ( tinfo_size == -1 )
          goto LABEL_8;
        v12 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v12 + 80) != 10
          || !(unsigned __int8)sub_323C80(
                                 a2,
                                 *(_QWORD *)(v12 + 88),
                                 (char *)(v12 + 160),
                                 tinfo_size,
                                 a4,
                                 *(_QWORD *)(a3 + 64) + 208LL) )
        {
          goto LABEL_8;
        }
        return 1;
      }
      if ( !under_debugger )
        sub_37CFE0(50663);
      goto LABEL_32;
    case 6:
    case 8:
    case 36:
    case 38:
      if ( *(_QWORD *)(a1 + 32) != 2 )
      {
        if ( !under_debugger )
          sub_37CFE0(50662);
LABEL_32:
        BUG();
      }
      if ( tinfo_size != -1 )
      {
        v9 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v9 + 80) == 10 )
        {
          v14 = sub_329690((char *)(v9 + 80), tinfo_size);
          if ( (unsigned __int8)sub_323AF0(a2, *(_QWORD *)(v9 + 88), v14, a4, *(_QWORD *)(a3 + 64) + 208LL) )
            return 1;
        }
      }
LABEL_8:
      if ( (a4 & 1) != 0 )
        sub_3113F0(a2 + 2, (__int64 **)(a1 + 216));
      return 0;
    case 16:
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 480) + 606LL) & 0x20) != 0 )
      {
        v15[0] = 0;
        v15[1] = 0;
        sub_5F400(v15, 0, 5);
        v16 = nullptr;
        v17 = 0;
        sub_5F800(a2, v15);
        sub_3113F0(a2 + 2, &v16);
        if ( v16 )
        {
          *(_QWORD *)&v17 = 0;
          qfree(v16);
        }
        qfree(v15[0]);
      }
      return 1;
    case 19:
    case 20:
    case 21:
    case 22:
      v11 = sub_329E70(a1);
      if ( v11 <= 0 )
        return 0;
      return sub_323AF0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), v11, a4, 0);
    case 23:
    case 24:
      v13 = 80;
      if ( v4 == 23 )
        v13 = 0;
      return sub_3241D0(a2, *(_QWORD *)(a1 + 24) + v13, a4);
    default:
      return 0;
  }
}
