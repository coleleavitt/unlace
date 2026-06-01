__int64 __fastcall sub_BC09E0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  unsigned int v6; // ebp
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // r12
  _QWORD *v12; // rbx
  _QWORD v13[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a1;
  v13[0] = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = (__int64 *)v13[0];
    v3 = *(_QWORD *)v13[0];
  }
  v5 = *(__int64 (**)())(v3 + 1112);
  if ( v5 != sub_BA1CC0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v5)(a1, a2) )
      return 0;
    a1 = (__int64 *)v13[0];
    v3 = *(_QWORD *)v13[0];
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v3 + 96))(a1, a2[8]) )
  {
    v6 = sub_BAC8F0(v13, a2[6], a2[7]);
    if ( (_BYTE)v6 )
    {
      if ( !sub_B6A370((__int64)a2) || (v8 = sub_B69600((__int64)a2)) == 0 || (unsigned __int8)sub_BABBC0(v13, v8) )
      {
        v9 = sub_9A4B10((__int64)a2);
        v11 = v10;
        v12 = (_QWORD *)v9;
        if ( (_QWORD *)v9 == v10 )
          return v6;
        while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v13[0] + 32LL))(v13[0], *v12) )
        {
          if ( v11 == ++v12 )
            return v6;
        }
      }
    }
  }
  return 0;
}

