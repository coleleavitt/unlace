__int64 __fastcall sub_20D6DB0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // r12
  __int64 result; // rax
  _BYTE *v6; // rbp
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)(a1 + 24);
  if ( v3 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2, a1 + 24);
    if ( (_BYTE)result )
      return result;
    v6 = *(_BYTE **)(a1 + 16);
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v7 == sub_20CEB40 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v6 + 64LL))(v6, a2);
    else
      v7((__int64)a2, (__int64)v6);
    if ( (v6[9] & 0xC0) != 0x40 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
      if ( v8 == sub_20CEB60 )
        (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v6 + 72LL))(v6, a2);
      else
        v8((__int64)a2, (__int64)v6);
    }
  }
  sub_20CFD70((__int64)a2);
  v9 = a2[2];
  v10 = a2[1];
  a2[2] = v9 + 1;
  *(_BYTE *)(v10 + v9) = 123;
  sub_20D6480(v4, (__int64)a2);
  sub_20CFD70((__int64)a2);
  result = a2[2];
  v11 = a2[1];
  a2[2] = result + 1;
  *(_BYTE *)(v11 + result) = 125;
  return result;
}
