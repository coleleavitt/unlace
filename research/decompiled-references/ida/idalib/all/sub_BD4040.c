__int64 __fastcall sub_BD4040(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rcx
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  __int64 (*v9)(); // rdx
  __int64 (*v10)(); // rdx
  __int64 (*v11)(); // rax
  unsigned __int64 v12; // rcx

  v3 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BC5910 )
  {
    if ( !v5() )
      return 0;
    v3 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v3 + 7928);
  if ( v6 != sub_BC77D0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
      return 0;
    v3 = *(_QWORD *)a1;
  }
  v7 = *(__int64 (**)())(v3 + 7936);
  if ( v7 != sub_BC77E0 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v7)(a1, a2, a3) )
    return 0;
  if ( !a1[9] )
  {
LABEL_8:
    v12 = (unsigned int)sub_F6C520(*(_QWORD *)(a2 + 32));
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 136LL))(
             a1,
             *(_QWORD *)(a2 + 32),
             v12 * ((a3 + 4 - (unsigned __int64)(a3 != -4)) / v12 + (a3 != -4)));
  }
  v8 = *(_QWORD *)a1;
  v9 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
  if ( v9 != sub_BC5900 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, a2) )
      return 0;
    v8 = *(_QWORD *)a1;
  }
  v10 = *(__int64 (**)())(v8 + 6912);
  if ( v10 != sub_BC73A0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v10)(a1, a2) )
      return 0;
    v8 = *(_QWORD *)a1;
  }
  v11 = *(__int64 (**)())(v8 + 6920);
  if ( v11 == sub_BC73B0 || ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v11)(a1, a2) )
    goto LABEL_8;
  return 0;
}
