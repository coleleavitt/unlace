__int64 __fastcall sub_BCAA70(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rax
  __int64 v7; // rax
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rax
  _BYTE v11[56]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BC5910 )
  {
    if ( !v5() )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v4 + 7952);
  if ( v6 != sub_BC7800 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
    return 0;
  if ( !a1[9] )
  {
LABEL_6:
    sub_F5E520(v11, a2);
    return (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)a1 + 104LL))(a1, v11);
  }
  v7 = *(_QWORD *)a1;
  v8 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
  if ( v8 != sub_BC5900 )
  {
    if ( ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v8)(a1, a2) )
    {
      v7 = *(_QWORD *)a1;
      goto LABEL_5;
    }
    return 0;
  }
LABEL_5:
  v9 = *(__int64 (**)())(v7 + 6936);
  if ( v9 == sub_BC73D0 || ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, a2) )
    goto LABEL_6;
  return 0;
}
