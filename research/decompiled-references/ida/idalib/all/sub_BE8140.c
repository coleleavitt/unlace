__int64 __fastcall sub_BE8140(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rdx
  _QWORD *v9; // rdx
  unsigned int v10; // ebp
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // r12
  _QWORD *v16; // rbx
  _QWORD *v17; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a1;
  v17 = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v17;
    v3 = *v17;
  }
  v5 = *(__int64 (**)())(v3 + 1160);
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v17;
    v3 = *v17;
  }
  v6 = *(__int64 (**)())(v3 + 1520);
  if ( v6 != sub_BC5D30 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v17;
    v3 = *v17;
  }
  v7 = *(__int64 (**)())(v3 + 1584);
  if ( v7 != sub_BC5DB0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
      return 0;
    a1 = v17;
    v3 = *v17;
  }
  v8 = *(__int64 (**)())(v3 + 1600);
  if ( v8 != sub_BC5DD0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v8)(a1, a2) )
      return 0;
    a1 = v17;
    v3 = *v17;
  }
  v9 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v9 = (_QWORD *)*v9;
  v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD *))(v3 + 136))(a1, *v9, v9 + 1);
  if ( (_BYTE)v10 )
  {
    if ( !sub_B8E0B0(a2) || (v12 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(&v17, v12) )
    {
      v13 = sub_9C8850(a2);
      v15 = v14;
      v16 = (_QWORD *)v13;
      if ( (_QWORD *)v13 == v14 )
        return v10;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v17 + 32LL))(v17, *v16) )
      {
        if ( v15 == ++v16 )
          return v10;
      }
    }
  }
  return 0;
}
