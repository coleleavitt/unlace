__int64 __fastcall sub_B8C710(_BYTE *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  unsigned __int8 v7; // dl
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned int v10; // esi
  __int64 (__fastcall *v12)(__int64); // rax
  char v13; // al
  __int64 v14; // [rsp+8h] [rbp-10h] BYREF

  v6 = (__int64)a1;
  *a2 = 0;
  v7 = a1[28] & 0x7F;
  v8 = (unsigned int)v7 - 40;
  if ( (unsigned int)v8 > 6 )
  {
    if ( (unsigned int)v7 - 34 > 5 )
    {
      v10 = 0;
      if ( v7 == 20 )
        return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(sub_B8C2C0((__int64)a1) + 88) + 2320LL) + 368LL) != 1;
      return v10;
    }
    v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL);
    if ( v12 == sub_9A8F10 )
      v13 = sub_B7F5F0(a1, &v14, (__int64)sub_9A8F10, v8, (__int64)a1, a6);
    else
      v13 = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64 (__fastcall *)(__int64), __int64, _BYTE *))v12)(
              a1,
              a2,
              sub_9A8F10,
              v8,
              a1);
    if ( !v13 )
      return 1;
  }
  else
  {
    v9 = (unsigned __int64)a1;
    if ( v7 )
      v9 = sub_B8C2C0((__int64)a1);
    if ( !(unsigned int)sub_B74100(v6, *(_QWORD *)(v9 + 88)) )
      return 1;
  }
  *a2 = 1;
  return 0;
}
