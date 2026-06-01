__int64 __fastcall sub_2015440(__int64 a1, __int64 a2, char a3)
{
  int v3; // ecx
  __int64 result; // rax
  unsigned int v5; // r9d
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-18h] BYREF
  int v7; // [rsp+8h] [rbp-10h]
  char v8; // [rsp+Ch] [rbp-Ch]

  v3 = *(_DWORD *)(a1 + 136);
  result = *(unsigned __int8 *)(a1 + 140);
  v5 = **(_DWORD **)(a1 + 120);
  if ( a3 || !(_BYTE)result || v3 != v5 )
  {
    v8 = *(_BYTE *)(a1 + 140);
    v7 = v3;
    v6 = off_2C712D0;
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64 (__fastcall ***)(), __int64))sub_2212590)(
             a1 + 144,
             a1,
             v5,
             &v6,
             a2);
  }
  return result;
}
