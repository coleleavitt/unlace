__int64 __fastcall sub_A20270(__int64 a1, unsigned int a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  unsigned int v4; // ecx
  __int64 result; // rax
  _QWORD *v7; // rdi
  int v8; // eax
  unsigned int v9; // edx
  int v10; // [rsp+0h] [rbp-1Ch] BYREF
  _BYTE v11[24]; // [rsp+4h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v3 = a2 << v2;
  v4 = v2 + 6;
  result = *(_DWORD *)(a1 + 52) | v3;
  *(_DWORD *)(a1 + 52) = result;
  if ( v4 > 0x1F )
  {
    v7 = *(_QWORD **)(a1 + 24);
    v10 = result;
    sub_A1FE50(v7, &v10, v11);
    v8 = *(_DWORD *)(a1 + 48);
    v9 = 0;
    if ( v8 )
      v9 = a2 >> (32 - v8);
    *(_DWORD *)(a1 + 52) = v9;
    result = ((_BYTE)v8 + 6) & 0x1F;
    *(_DWORD *)(a1 + 48) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v4;
  }
  return result;
}
