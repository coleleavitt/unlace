__int64 __fastcall sub_9FC180(__int64 a1, unsigned int a2, int a3)
{
  int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  __int64 result; // rax
  char v7; // bp
  _QWORD *v9; // rdi
  int v10; // eax
  unsigned int v11; // edx
  int v12; // [rsp+0h] [rbp-1Ch] BYREF
  _BYTE v13[24]; // [rsp+4h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  v4 = a2 << v3;
  v5 = a3 + v3;
  result = *(_DWORD *)(a1 + 52) | v4;
  *(_DWORD *)(a1 + 52) = result;
  if ( v5 > 0x1F )
  {
    v7 = a3;
    v9 = *(_QWORD **)(a1 + 24);
    v12 = result;
    sub_9FC110(v9, &v12, v13);
    v10 = *(_DWORD *)(a1 + 48);
    v11 = 0;
    if ( v10 )
      v11 = a2 >> (32 - v10);
    *(_DWORD *)(a1 + 52) = v11;
    result = (v7 + (_BYTE)v10) & 0x1F;
    *(_DWORD *)(a1 + 48) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v5;
  }
  return result;
}

