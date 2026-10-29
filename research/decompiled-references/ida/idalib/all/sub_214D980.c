__int64 __fastcall sub_214D980(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // esi
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // [rsp+4h] [rbp-24h] BYREF
  int v14; // [rsp+8h] [rbp-20h] BYREF
  _DWORD v15[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
  result = sub_214D6B0(a1, &v13, &v14, "SDK", v3, v4);
  if ( !(_BYTE)result )
  {
    v6 = v13;
    v7 = v14;
    *(_QWORD *)(a2 + 8) = 0;
    *(_DWORD *)a2 = v6;
    v8 = v7 & 0x7FFFFFFF | *(_DWORD *)(a2 + 4) & 0x80000000;
    *(_DWORD *)(a2 + 4) = v8;
    *(_BYTE *)(a2 + 7) = HIBYTE(v8) | 0x80;
    if ( **(_DWORD **)(*(_QWORD *)(a1 + 8) + 48LL) == 26 )
    {
      result = sub_214CB10(a1, v15, "SDK subminor");
      if ( !(_BYTE)result )
      {
        v9 = v14;
        v10 = v15[0];
        *(_DWORD *)a2 = v13;
        v11 = v9 & 0x7FFFFFFF | *(_DWORD *)(a2 + 4) & 0x80000000;
        v12 = *(_DWORD *)(a2 + 8);
        *(_DWORD *)(a2 + 4) = v11;
        *(_BYTE *)(a2 + 7) = HIBYTE(v11) | 0x80;
        *(_DWORD *)(a2 + 8) = v10 & 0x7FFFFFFF | v12 & 0x80000000;
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) & 0x7FFFFFFFLL | 0x80000000LL;
      }
    }
  }
  return result;
}
