__int64 __fastcall sub_D25530(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64 *, _QWORD, __int64); // r13
  unsigned __int8 v13; // al
  unsigned __int8 v14; // [rsp+Fh] [rbp-59h]
  _QWORD v15[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1[70] + 8);
  v3 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64))(*a1 + 48))(a1, v3) )
  {
    v11 = sub_CE6180(a1[46], *(_QWORD *)(v3 + 8), v4, v5, v6);
    if ( BYTE4(v11) && (_DWORD)v11 != 13 )
    {
      v15[0] = a2 | 4;
      result = sub_D25200((__int64)a1, v11, v15);
      if ( (_BYTE)result )
        return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 56))(a1, 1, a2);
    }
    else
    {
      sub_D09010((__int64)v15, a1[70]);
      v12 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56);
      v13 = sub_DC7D50(a1 + 48, v15);
      v14 = v12(a1, v13, a2);
      sub_E232A0(v15);
      return v14;
    }
  }
  else
  {
    sub_E21600(a1[70], v2);
    if ( (unsigned __int8)sub_E21C70(a1 + 48) )
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(a1, 0, a2);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[51] + 104LL))(a1[51]);
    if ( (unsigned __int8)sub_C01160(v3, v8, 1, v9, v10) )
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(a1, 0, a2);
    else
      return sub_CFEE20((__int64)(a1 + 48), a1[154]);
  }
  return result;
}
