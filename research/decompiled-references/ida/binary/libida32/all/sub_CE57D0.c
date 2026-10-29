__int64 __fastcall sub_CE57D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v4; // r13d
  int v5; // r13d
  __int64 v6; // rax
  bool v7; // zf
  bool v8; // cc
  _DWORD *v9; // rdx
  char v10; // al
  _QWORD vars0[3]; // [rsp+0h] [rbp+0h] BYREF
  int vars18; // [rsp+18h] [rbp+18h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  int vars30[14]; // [rsp+30h] [rbp+30h] BYREF
  unsigned __int8 vars68; // [rsp+68h] [rbp+68h]

  sub_CE52D0((__int64)vars0, *(_QWORD *)(a1 + 560));
  if ( vars18 == 2 )
  {
    sub_E01600(vars30, vars0, **(_QWORD **)(a1 + 368));
    sub_CE4CC0(a1 + 1056, vars30);
    v8 = vars30[0] <= 1u;
    *(_DWORD *)(a1 + 1120) = 2;
    if ( !v8 )
      sub_A2BBA0(vars30);
    v2 = 1;
    goto LABEL_4;
  }
  v2 = *(unsigned __int8 *)(a1 + 1160);
  if ( (_BYTE)v2 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(a1 + 1144))(*(_QWORD *)(a1 + 1152), vars0);
    goto LABEL_4;
  }
  v4 = sub_D8A160(a1 + 1048, a1 + 384, *(_QWORD *)(a1 + 368), vars0, a2);
  if ( (_BYTE)v4 && (!*(_BYTE *)(a1 + 1137) || (unsigned __int8)sub_D88A90(a1 + 1048, a1 + 384, vars0)) )
  {
    if ( !*(_BYTE *)(a1 + 1136) )
    {
      if ( vars18 || vars20 && !*(_BYTE *)(vars20 + 26) || *(_BYTE *)(*(_QWORD *)(vars20 + 32) + 58LL) )
      {
        sub_E01600(vars30, vars0, **(_QWORD **)(a1 + 368));
        sub_CE4CC0(a1 + 1056, vars30);
        v8 = vars30[0] <= 1u;
        *(_DWORD *)(a1 + 1120) = 2;
        if ( !v8 )
          sub_A2BBA0(vars30);
        v2 = v4;
      }
      goto LABEL_4;
    }
    if ( vars18 )
    {
      if ( vars18 == 2 )
      {
        if ( vars20 )
          goto LABEL_4;
      }
      else if ( vars18 == 3 || vars0[0] | vars28 )
      {
        goto LABEL_4;
      }
    }
    else if ( vars20 && sub_CDAB30((__int64)vars0) )
    {
      goto LABEL_4;
    }
    if ( (*(_BYTE *)(sub_E0E500(a1 + 384) + 1) & 0x10) != 0 )
    {
      v5 = vars18;
      if ( vars18 )
      {
LABEL_14:
        if ( v5 != 2 )
        {
          if ( v5 != 3 )
          {
            if ( !(vars0[0] | vars28) || v5 == 1 )
            {
LABEL_18:
              v6 = sub_CDAB90(a1 + 1048);
              sub_E04EA0(vars30, vars0, *(_QWORD *)(a1 + 368), v6);
              v2 = vars68;
              if ( vars68 )
              {
                sub_CE4CC0(a1 + 1056, vars30);
                v7 = vars68 == 0;
                *(_DWORD *)(a1 + 1120) = 2;
                if ( !v7 && vars30[0] > 1u )
                  sub_A2BBA0(vars30);
              }
              goto LABEL_4;
            }
            if ( !(unsigned __int8)sub_CDA840((__int64)vars0) )
              goto LABEL_50;
LABEL_42:
            v9 = (_DWORD *)vars20;
            v10 = *(_BYTE *)(*(_QWORD *)(vars20 + 32) + 56LL);
LABEL_43:
            if ( v10 != 1 && !v5 && *v9 != *(_DWORD *)(*(_QWORD *)(a1 + 368) + 32LL) )
              goto LABEL_4;
            goto LABEL_18;
          }
          if ( !(unsigned __int8)sub_CDA840((__int64)vars0) )
          {
LABEL_50:
            v9 = (_DWORD *)vars20;
            v10 = *(_BYTE *)(vars20 + (unsigned int)vars28 + 28) & 1;
            goto LABEL_43;
          }
LABEL_53:
          BUG();
        }
LABEL_39:
        if ( !vars20 )
          goto LABEL_18;
        if ( !(unsigned __int8)sub_CDA840((__int64)vars0) )
          goto LABEL_50;
        if ( (unsigned int)(v5 - 2) > 1 )
          goto LABEL_42;
        goto LABEL_53;
      }
      if ( !(unsigned __int8)sub_DA8300(a1 + 384, *(_QWORD *)(a1 + 1232), vars0) )
        goto LABEL_4;
    }
    v5 = vars18;
    if ( !vars18 )
      goto LABEL_39;
    goto LABEL_14;
  }
LABEL_4:
  sub_DFF560(vars0);
  return v2;
}

