__int64 __fastcall sub_BE7E10(_QWORD *a1, __int64 a2)
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
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v15;
    v3 = *v15;
  }
  v5 = *(__int64 (**)())(v3 + 1160);
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v15;
    v3 = *v15;
  }
  v6 = *(__int64 (**)())(v3 + 1520);
  if ( v6 != sub_BC5D30 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v15;
    v3 = *v15;
  }
  v7 = *(__int64 (**)())(v3 + 1576);
  if ( v7 != sub_BC5DA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
      return 0;
    a1 = v15;
    v3 = *v15;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v3 + 88))(a1, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
  if ( (_BYTE)v8 )
  {
    if ( !sub_B8E0B0(a2) || (v10 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(&v15, v10) )
    {
      v11 = sub_9C8850(a2);
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
