bool __fastcall sub_799C40(_BYTE *a1, _BYTE *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 (__fastcall *v7)(_QWORD *); // rax
  char v8; // al
  unsigned __int64 v9; // [rsp+8h] [rbp-10h] BYREF

  *a2 = 0;
  v2 = a1[28] & 0x7F;
  v3 = a1[28] & 0x7F;
  if ( (unsigned int)(v2 - 38) <= 6 )
  {
    v4 = sub_793320((__int64)a1);
    if ( !(unsigned int)sub_77B6A0((__int64)a1, *(_QWORD *)(v4 + 88), v5) )
      return 1;
    goto LABEL_8;
  }
  if ( (unsigned int)(v2 - 32) <= 5 )
  {
    v7 = *(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)a1 + 72LL);
    if ( v7 == sub_78BB30 )
      v8 = sub_78B990(a1, &v9);
    else
      v8 = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64 (__fastcall *)(_QWORD *), __int64))v7)(
             a1,
             a2,
             sub_78BB30,
             v3);
    if ( !v8 )
      return 1;
LABEL_8:
    *a2 = 1;
    return 0;
  }
  if ( (_BYTE)v3 != 18 )
    return 0;
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(sub_793320((__int64)a1) + 88) + 2160LL) + 360LL) != 1;
}

