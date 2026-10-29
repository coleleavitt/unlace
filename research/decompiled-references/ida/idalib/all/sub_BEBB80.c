__int64 __fastcall sub_BEBB80(_BYTE *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rcx
  __int64 (*v7)(); // rcx
  __int64 (*v8)(); // rax
  _QWORD *v9; // rax
  __int64 (*v10)(); // rdx
  __int64 (*v11)(); // rdx
  __int64 (*v12)(); // rdx
  __int64 (*v13)(); // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+8h] [rbp-20h]

  v4 = *(_QWORD **)a1;
  v16 = a2;
  v5 = (unsigned __int8 (*)(void))v4[30];
  v17 = a3;
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
  if ( v7 != sub_BC7500 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v7)(a1, a2, a3) )
      return 0;
    v4 = *(_QWORD **)a1;
  }
  v8 = (__int64 (*)())v4[947];
  if ( v8 != sub_BC7510 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v8)(a1, a2, a3) )
    return 0;
  if ( a1[9] )
  {
    v9 = *(_QWORD **)a1;
    v10 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
    if ( v10 != sub_BC5900 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v10)(a1, v16) )
        return 0;
      v9 = *(_QWORD **)a1;
    }
    v11 = (__int64 (*)())v9[818];
    if ( v11 != sub_BC70C0 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v11)(a1, v16) )
        return 0;
      v9 = *(_QWORD **)a1;
    }
    v12 = (__int64 (*)())v9[819];
    if ( v12 != sub_BC70D0 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v12)(a1, v16) )
        return 0;
      v9 = *(_QWORD **)a1;
    }
    v13 = (__int64 (*)())v9[820];
    if ( v13 != sub_BC70E0 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v13)(a1, v16) )
      return 0;
  }
  v14 = sub_BEB530((__int64)&v16);
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v14) )
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, *(_QWORD *)(v17 + 8));
  return 0;
}
