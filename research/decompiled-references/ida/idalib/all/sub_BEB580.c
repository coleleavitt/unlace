__int64 __fastcall sub_BEB580(_BYTE *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rcx
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  __int64 (*v9)(); // rdx
  __int64 (*v10)(); // rdx
  __int64 (*v11)(); // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+8h] [rbp-20h]

  v4 = *(_QWORD **)a1;
  v14 = a2;
  v5 = (unsigned __int8 (*)(void))v4[30];
  v15 = a3;
  if ( (char *)v5 != (char *)sub_BC5910 )
  {
    if ( !v5() )
      return 0;
    v4 = *(_QWORD **)a1;
  }
  v6 = (__int64 (*)())v4[945];
  if ( v6 != sub_BC74F0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
      return 0;
    v4 = *(_QWORD **)a1;
  }
  v7 = (__int64 (*)())v4[946];
  if ( v7 != sub_BC7500 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v7)(a1, a2, a3) )
    return 0;
  if ( a1[9] )
  {
    v8 = *(_QWORD *)a1;
    v9 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
    if ( v9 != sub_BC5900 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, v14) )
        return 0;
      v8 = *(_QWORD *)a1;
    }
    v10 = *(__int64 (**)())(v8 + 6544);
    if ( v10 != sub_BC70C0 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v10)(a1, v14) )
        return 0;
      v8 = *(_QWORD *)a1;
    }
    v11 = *(__int64 (**)())(v8 + 6552);
    if ( v11 != sub_BC70D0 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v11)(a1, v14) )
      return 0;
  }
  v12 = sub_BEB530((__int64)&v14);
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v12) )
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, *(_QWORD *)(v15 + 8));
  return 0;
}
