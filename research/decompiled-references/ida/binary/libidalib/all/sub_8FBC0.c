__int64 __fastcall sub_8FBC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  bool v6; // cc
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  v4 = a1 + 32;
  *(_QWORD *)(v4 + 120) = a2;
  *(_QWORD *)(v4 + 128) = a3;
  *(_QWORD *)(v4 - 32) = &off_22F338;
  *(_QWORD *)(v4 - 24) = 0;
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 136) = -1;
  *(_BYTE *)(v4 + 140) = 0;
  *(_DWORD *)(v4 + 144) = -1;
  *(_BYTE *)(v4 + 148) = 0;
  *(_QWORD *)(v4 + 152) = 0;
  *(_DWORD *)(v4 + 160) = 0;
  *(_OWORD *)(v4 - 16) = 0;
  *(_OWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 56) = 0;
  *(_OWORD *)(v4 + 80) = 0;
  *(_OWORD *)(v4 + 104) = 0;
  result = qvector_reserve();
  v6 = *(_QWORD *)(a1 + 72) <= 7u;
  *(_QWORD *)(a1 + 32) = result;
  if ( v6 )
  {
    result = qvector_reserve();
    *(_QWORD *)(a1 + 56) = result;
  }
  if ( *(_QWORD *)(a1 + 96) <= 7u )
  {
    result = qvector_reserve();
    *(_QWORD *)(a1 + 80) = result;
  }
  if ( *(_BYTE *)(a1 + 164) )
  {
    v7 = *(_DWORD *)(a1 + 160);
    v8 = *(_QWORD *)(a1 + 80);
    *(_BYTE *)(a1 + 164) = 1;
    if ( v7 < 0x1000000 )
      v7 |= 0xFF000000;
    v9 = *(_QWORD *)(a1 + 88);
    *(_DWORD *)(a1 + 160) = v7;
    if ( *(_QWORD *)(a1 + 96) < (unsigned __int64)(v9 + 1) )
    {
      v11 = qvector_reserve();
      *(_QWORD *)(a1 + 80) = v11;
      v9 = *(_QWORD *)(a1 + 88);
      v8 = v11;
    }
    v10 = v8 + 16 * v9;
    *(_QWORD *)v10 = -1;
    *(_DWORD *)(v10 + 8) = -1;
    *(_BYTE *)(v10 + 12) = 0;
    result = *(unsigned int *)(a1 + 160);
    ++*(_QWORD *)(a1 + 88);
    *(_QWORD *)v10 = 0x7FFFFFFFFFFFFFFFLL;
    *(_DWORD *)(v10 + 8) = result;
    *(_BYTE *)(v10 + 12) = 1;
  }
  return result;
}

