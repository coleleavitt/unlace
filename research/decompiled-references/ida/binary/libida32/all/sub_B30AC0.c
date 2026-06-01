unsigned __int64 __fastcall sub_B30AC0(__int64 **a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  __int64 v11; // rdx
  int v12; // esi

  v8 = *a1;
  v9 = *v8;
  v8[10] += 32;
  result = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v8[1] >= result + 32 && v9 )
    *v8 = result + 32;
  else
    result = sub_962430((__int64)v8, 32, 32, 4, a5, a6);
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 12) = 7;
  *(_QWORD *)(result + 16) = a2;
  *(_QWORD *)(result + 24) = a3;
  if ( a3 )
  {
    *(_BYTE *)(result + 13) &= ~1u;
    v11 = *a2;
    v12 = *(_DWORD *)(*a2 + 4);
    *(_DWORD *)(result + 8) = *(_DWORD *)(a2[a3 - 1] + 8);
    *(_DWORD *)(result + 4) = v12;
    *(_DWORD *)result = *(_DWORD *)(v11 + 4);
  }
  else
  {
    *(_BYTE *)(result + 13) |= 3u;
  }
  return result;
}

