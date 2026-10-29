__int64 __fastcall sub_BC40D0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  unsigned int v8; // ebp
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r12
  _QWORD *v14; // rbx
  _QWORD *v15; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a1;
  v15 = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = v15;
    v3 = *v15;
  }
  v5 = *(__int64 (**)())(v3 + 1160);
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v15;
    v3 = *v15;
  }
  v6 = *(__int64 (**)())(v3 + 1520);
  if ( v6 != sub_BA1FF0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v15;
    v3 = *v15;
  }
  v7 = *(__int64 (**)())(v3 + 1576);
  if ( v7 != sub_BA2060 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
      return 0;
    a1 = v15;
    v3 = *v15;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v3 + 88))(a1, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
  if ( (_BYTE)v8 )
  {
    if ( !sub_B6A370(a2) || (v10 = sub_B69600(a2)) == 0 || (unsigned __int8)sub_BABBC0(&v15, v10) )
    {
      v11 = sub_9A4B10(a2);
      v13 = v12;
      v14 = (_QWORD *)v11;
      if ( (_QWORD *)v11 == v12 )
        return v8;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v15 + 32LL))(v15, *v14) )
      {
        if ( v13 == ++v14 )
          return v8;
      }
    }
  }
  return 0;
}

