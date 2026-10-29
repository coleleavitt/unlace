__int64 __fastcall sub_BEA270(_QWORD *a1, __int64 a2)
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
  _QWORD *v13; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a1;
  v13 = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v13;
    v3 = *v13;
  }
  v5 = *(__int64 (**)())(v3 + 1800);
  if ( v5 != sub_BC5F60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v13;
    v3 = *v13;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v3 + 96))(a1, *(_QWORD *)(a2 + 40));
  if ( (_BYTE)v6 )
  {
    if ( !sub_B8E0B0(a2) || (v8 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(&v13, v8) )
    {
      v9 = sub_9C8850(a2);
      v11 = v10;
      v12 = (_QWORD *)v9;
      if ( (_QWORD *)v9 == v10 )
        return v6;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v13 + 32LL))(v13, *v12) )
      {
        if ( v11 == ++v12 )
          return v6;
      }
    }
  }
  return 0;
}
