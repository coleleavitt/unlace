__int64 __fastcall sub_CDA290(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  _QWORD *v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  _DWORD vars0[6]; // [rsp+0h] [rbp+0h] BYREF
  int vars18; // [rsp+18h] [rbp+18h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  unsigned int vars28; // [rsp+28h] [rbp+28h]
  _BYTE vars30[104]; // [rsp+30h] [rbp+30h] BYREF

  sub_DFF4A0(vars0, a3);
  if ( vars18 )
  {
LABEL_17:
    v4 = (_QWORD *)sub_CDA220((__int64)vars0);
  }
  else
  {
    v3 = vars20;
    v4 = (_QWORD *)sub_CDA220((__int64)vars0);
    if ( v3 )
    {
      v5 = vars28;
      if ( *(_DWORD *)(*(_QWORD *)(v3 + 32) + 24LL) != vars28 )
      {
        if ( vars28 )
        {
          while ( (*v4 & 2) == 0 && (*v4 & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_BYTE *)(v3 + v5 + 28) & 4) != 0 )
          {
            if ( v5 == -1 )
              sub_DFF4E0(vars30, v3, 0xFFFFFFFFLL, 0);
            else
              sub_DFF4E0(vars30, v3, v5 - *(_DWORD *)(v3 + v5 + 24), v5 - *(_DWORD *)(v3 + v5 + 24));
            sub_DFF6C0(vars0, vars30);
            sub_DFF560(vars30);
            if ( vars18 )
              goto LABEL_17;
            v3 = vars20;
            v4 = (_QWORD *)sub_CDA220((__int64)vars0);
            if ( v3 )
            {
              v5 = vars28;
              if ( *(_DWORD *)(*(_QWORD *)(v3 + 32) + 24LL) != vars28 )
              {
                if ( vars28 )
                  continue;
              }
            }
            break;
          }
        }
      }
    }
  }
  v6 = sub_E0E280(v4[4], a2);
  v7 = *(_QWORD *)(a1 + 176);
  sub_DFF4E0(
    vars30,
    vars20,
    (unsigned int)(vars0[0] + *(_DWORD *)(v6 + 8)),
    (unsigned int)(vars0[0] + *(_DWORD *)(v6 + 8)));
  v8 = sub_DFD980(v7, 48);
  sub_DFF520(v8);
  sub_DFF560(vars30);
  sub_DFF560(vars0);
  return 1;
}

