__int64 __fastcall sub_BCA4B0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rcx
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rdx

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BC5910 )
  {
    if ( !v5() )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v4 + 7728);
  if ( v6 != sub_BC7640 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  if ( !a1[9] )
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD))(v4 + 88))(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8));
  v8 = *(__int64 (**)())(v4 + 232);
  if ( v8 != sub_BC5900 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v8)(a1, a2) )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v9 = *(__int64 (**)())(v4 + 6712);
  if ( v9 == sub_BC7210 )
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD))(v4 + 88))(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8));
  if ( ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, a2) )
  {
    v4 = *(_QWORD *)a1;
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD))(v4 + 88))(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8));
  }
  return 0;
}
