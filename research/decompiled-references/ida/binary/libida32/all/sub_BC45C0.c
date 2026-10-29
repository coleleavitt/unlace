__int64 __fastcall sub_BC45C0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rax
  _QWORD *v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rbp
  _QWORD *v14; // rbx
  __int64 result; // rax
  _QWORD *v16; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v16 = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = v16;
    v3 = (_QWORD *)*v16;
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v16;
    v3 = (_QWORD *)*v16;
  }
  v6 = (__int64 (*)())v3[190];
  if ( v6 != sub_BA1FF0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v16;
    v3 = (_QWORD *)*v16;
  }
  v7 = (__int64 (*)())v3[198];
  if ( v7 != sub_BA2070 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
      return 0;
    a1 = v16;
    v3 = (_QWORD *)*v16;
  }
  v8 = (__int64 (*)())v3[201];
  if ( v8 != sub_BA20A0 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v8)(a1, a2) )
    return 0;
  if ( *(_DWORD *)(a2 + 96) )
  {
    v9 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      v9 = (_QWORD *)*v9;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD *))(*v16 + 136LL))(v16, *v9, v9 + 1) )
      return 0;
  }
  if ( sub_B6A370(a2) )
  {
    v10 = sub_B69600(a2);
    if ( v10 )
    {
      if ( !(unsigned __int8)sub_BABBC0(&v16, v10) )
        return 0;
    }
  }
  v11 = sub_9A4B10(a2);
  v13 = v12;
  v14 = (_QWORD *)v11;
  if ( (_QWORD *)v11 == v12 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v16 + 32LL))(v16, *v14);
    if ( !(_BYTE)result )
      break;
    if ( v13 == ++v14 )
      return 1;
  }
  return result;
}

