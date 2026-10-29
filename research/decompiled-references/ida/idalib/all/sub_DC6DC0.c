__int64 __fastcall sub_DC6DC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  _QWORD vars0[3]; // [rsp+0h] [rbp+0h] BYREF
  int vars18; // [rsp+18h] [rbp+18h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  _BYTE vars30[88]; // [rsp+30h] [rbp+30h] BYREF

  sub_E231E0(vars0, a4);
  v5 = vars18;
  if ( vars18 )
  {
LABEL_14:
    if ( v5 == 1 )
    {
      v11 = vars20;
    }
    else
    {
      if ( v5 == 2 || v5 == 3 || !vars28 && vars0[0] && (unsigned int)(v5 - 2) <= 1 )
        BUG();
      v11 = *(_QWORD *)(vars20 + 32);
    }
  }
  else
  {
    v6 = vars20;
    if ( vars20 )
    {
      v7 = *(__int64 **)(vars20 + 32);
      v8 = (unsigned int)vars28;
      v9 = *((_DWORD *)v7 + 6);
      if ( (_DWORD)vars28 && v9 != (_DWORD)vars28 )
      {
        do
        {
          if ( (_DWORD)v8 && v9 != (_DWORD)v8 )
            v7 = *(__int64 **)(v6 + (unsigned int)v8 + 32);
          v10 = *v7;
          if ( (v10 & 2) != 0 || (v10 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (*(_BYTE *)(v6 + (unsigned int)v8 + 28) & 4) == 0 )
            break;
          if ( (_DWORD)v8 == -1 )
            sub_E23220(vars30, v6, 0xFFFFFFFFLL, 0);
          else
            sub_E23220(
              vars30,
              v6,
              (unsigned int)(v8 - *(_DWORD *)(v6 + (unsigned int)v8 + 24)),
              (unsigned int)(v8 - *(_DWORD *)(v6 + (unsigned int)v8 + 24)));
          sub_E23400(vars0, vars30);
          sub_E232A0(vars30);
          v5 = vars18;
          if ( vars18 )
            goto LABEL_14;
          v6 = vars20;
          if ( !vars20 )
            goto LABEL_25;
          v7 = *(__int64 **)(vars20 + 32);
          v8 = (unsigned int)vars28;
          v9 = *((_DWORD *)v7 + 6);
          if ( !(_DWORD)vars28 )
            break;
        }
        while ( (_DWORD)vars28 != v9 );
      }
      v11 = *(_QWORD *)(v6 + 32);
      if ( *(_DWORD *)(v11 + 24) != (_DWORD)v8 && (_DWORD)v8 )
        v11 = *(_QWORD *)(v6 + v8 + 32);
    }
    else
    {
LABEL_25:
      v11 = 64;
    }
  }
  v12 = sub_E31FC0(*(_QWORD *)(v11 + 32), a3);
  v13 = *(_QWORD *)(a1 + 176);
  sub_E23220(
    vars30,
    vars20,
    (unsigned int)(LODWORD(vars0[0]) + *(_DWORD *)(v12 + 8)),
    (unsigned int)(LODWORD(vars0[0]) + *(_DWORD *)(v12 + 8)));
  v14 = sub_E216C0(v13, 48);
  sub_E23260(v14);
  sub_E232A0(vars30);
  sub_E232A0(vars0);
  return 1;
}
