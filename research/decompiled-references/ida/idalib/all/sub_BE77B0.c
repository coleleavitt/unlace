__int64 __fastcall sub_BE77B0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  unsigned int v7; // ebp
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r12
  _QWORD *v13; // rbx
  _QWORD *v14; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a1;
  v14 = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v14;
    v3 = *v14;
  }
  v5 = *(__int64 (**)())(v3 + 1160);
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v14;
    v3 = *v14;
  }
  v6 = *(__int64 (**)())(v3 + 1504);
  if ( v6 != sub_BC5D10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v14;
    v3 = *v14;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v3 + 88))(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64));
  if ( (_BYTE)v7 )
  {
    if ( !sub_B8E0B0(a2) || (v9 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(&v14, v9) )
    {
      v10 = sub_9C8850(a2);
      v12 = v11;
      v13 = (_QWORD *)v10;
      if ( (_QWORD *)v10 == v11 )
        return v7;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v14 + 32LL))(v14, *v13) )
      {
        if ( v12 == ++v13 )
          return v7;
      }
    }
  }
  return 0;
}
