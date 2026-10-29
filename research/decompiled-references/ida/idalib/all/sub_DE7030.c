__int64 __fastcall sub_DE7030(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // r12d
  __int64 v6; // rax
  _BYTE _0[24]; // [rsp+0h] [rbp+0h] BYREF
  int vars18; // [rsp+18h] [rbp+18h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  unsigned int vars28; // [rsp+28h] [rbp+28h]

  sub_E291A0(_0, *(_QWORD *)(a1 + 168), a3);
  v3 = vars20;
  if ( vars18 != 1 )
  {
    if ( vars18 )
    {
      v3 = 0;
      if ( vars18 != 2 && vars18 != 3 )
        v3 = *(_QWORD *)(vars20 + 32);
    }
    else if ( vars20 )
    {
      v3 = *(_QWORD *)(vars20 + 32);
      if ( *(_DWORD *)(v3 + 24) != vars28 && vars28 )
        v3 = *(_QWORD *)(vars20 + vars28 + 32);
    }
    else
    {
      v3 = 64;
    }
  }
  if ( (unsigned __int8)sub_DC8690(a1, a2, (__int64 *)v3)
    && (vars18 || !vars20 || !*(_BYTE *)(vars20 + 25))
    && (v4 = sub_DC9F80(a1, (__int64)a2, (__int64)_0), (_BYTE)v4) )
  {
    v6 = sub_D0F1C0((__int64)_0);
    sub_D0BA90(*(_QWORD *)(a1 + 176), v6);
  }
  else
  {
    v4 = 0;
  }
  sub_E232A0(_0);
  return v4;
}
