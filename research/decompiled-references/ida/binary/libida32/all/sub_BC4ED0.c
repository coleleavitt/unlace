__int64 __fastcall sub_BC4ED0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rdx
  unsigned int v9; // ebp
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r12
  _QWORD *v15; // rbx
  _QWORD v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a1;
  v16[0] = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = (__int64 *)v16[0];
    v3 = *(_QWORD *)v16[0];
  }
  v5 = *(__int64 (**)())(v3 + 1160);
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    a1 = (__int64 *)v16[0];
    v3 = *(_QWORD *)v16[0];
  }
  v6 = *(__int64 (**)())(v3 + 1624);
  if ( v6 != sub_BA20C0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(a1, a2) )
      return 0;
    a1 = (__int64 *)v16[0];
    v3 = *(_QWORD *)v16[0];
  }
  v7 = *(__int64 (**)())(v3 + 1640);
  if ( v7 != sub_BA20E0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(a1, a2) )
      return 0;
    a1 = (__int64 *)v16[0];
    v3 = *(_QWORD *)v16[0];
  }
  v8 = *(__int64 (**)())(v3 + 1656);
  if ( v8 != sub_BA2100 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(a1, a2) )
      return 0;
    a1 = (__int64 *)v16[0];
    v3 = *(_QWORD *)v16[0];
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v3 + 56))(a1, *(_QWORD *)(a2 + 48)) )
  {
    v9 = sub_BA55A0(v16, *(_QWORD *)(a2 + 56));
    if ( (_BYTE)v9 )
    {
      if ( !sub_B6A370(a2) || (v11 = sub_B69600(a2)) == 0 || (unsigned __int8)sub_BABBC0(v16, v11) )
      {
        v12 = sub_9A4B10(a2);
        v14 = v13;
        v15 = (_QWORD *)v12;
        if ( (_QWORD *)v12 == v13 )
          return v9;
        while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16[0] + 32LL))(v16[0], *v15) )
        {
          if ( v14 == ++v15 )
            return v9;
        }
      }
    }
  }
  return 0;
}

