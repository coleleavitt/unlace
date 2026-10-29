__int64 __fastcall sub_BC2F20(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  unsigned int v8; // ebp
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r12
  _QWORD *v14; // rbx
  __int64 *v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v15[0] = a1;
  if ( !(unsigned __int8)sub_BA5AC0(v15, a2) )
    return 0;
  v3 = v15[0];
  v4 = *v15[0];
  v5 = *(__int64 (**)())(*v15[0] + 1248);
  if ( v5 != sub_BA1DD0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v15[0], a2) )
      return 0;
    v3 = v15[0];
    v4 = *v15[0];
  }
  v6 = *(__int64 (**)())(v4 + 1320);
  if ( v6 != sub_BA1E60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v3, a2) )
      return 0;
    v3 = v15[0];
    v4 = *v15[0];
  }
  v7 = *(__int64 (**)())(v4 + 1440);
  if ( v7 == sub_BA1F50 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(v3, a2) )
  {
    v8 = sub_BA56E0(v15, a2);
    if ( (_BYTE)v8 )
    {
      if ( !sub_B6A370(a2) || (v10 = sub_B69600(a2)) == 0 || (unsigned __int8)sub_BABBC0(v15, v10) )
      {
        v11 = sub_9A4B10(a2);
        v13 = v12;
        v14 = (_QWORD *)v11;
        if ( (_QWORD *)v11 == v12 )
          return v8;
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v15[0] + 32))(v15[0], *v14) )
        {
          if ( v13 == ++v14 )
            return v8;
        }
      }
    }
  }
  return 0;
}

