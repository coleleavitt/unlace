void __fastcall sub_18885B0(__int64 *a1, __int64 a2)
{
  _DWORD *v3; // rbx
  unsigned __int8 v4; // al
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rdi
  _DWORD *v8[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v3 = (_DWORD *)a2;
  v4 = *(_BYTE *)(a2 + 81);
  v8[0] = (_DWORD *)a2;
  if ( v4 >> 5 == 2 )
  {
    if ( (unsigned __int8)sub_186ADD0(
                            *a1,
                            0x13A2u,
                            a2,
                            (__int64 (__fastcall *)(__int64, _QWORD))sub_18371F0,
                            (__int64)v9) )
      return;
    v3 = v8[0];
  }
  v9[0] = v8;
  v5 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 32LL))(v3);
  if ( (unsigned __int8)sub_186ADD0(
                          *a1,
                          (*(_BYTE *)(v5 + 82) & 0x40) == 0 ? 4295 : 3665,
                          (__int64)v3,
                          (__int64 (__fastcall *)(__int64, _QWORD))sub_1837E90,
                          (__int64)v9) )
    goto LABEL_7;
  v6 = 3474;
  v7 = *a1;
  v9[0] = v8;
  if ( (v8[0][21] & 3) != 2 )
    v6 = 4293;
  if ( (unsigned __int8)sub_186ADD0(v7, v6, (__int64)v8[0], sub_1837200, (__int64)v9) )
  {
LABEL_7:
    if ( (*((_BYTE *)v8[0] + 83) & 2) != 0
      && (*(_BYTE *)((*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v8[0] + 32LL))(v8[0]) + 82) & 0x40) != 0 )
    {
      sub_1888430(*a1, v8[0]);
    }
  }
}
