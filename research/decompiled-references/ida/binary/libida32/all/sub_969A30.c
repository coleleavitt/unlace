__int64 __fastcall sub_969A30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r9
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  LOBYTE(v8[0]) = 0;
  result = sub_969060(v8, a2);
  if ( result )
  {
    v3 = *(_QWORD *)(result + 16);
    result = *(_BYTE *)(v3 + 28) & 0x7F;
    if ( (_BYTE)result == 43 )
    {
      v4 = *(_QWORD **)(a1 + 80);
      v5 = *(unsigned int *)(a1 + 88);
      v8[0] = v3;
      result = (__int64)sub_966D20(v4, (__int64)&v4[v5], v8);
      if ( v7 != result )
      {
        result = *(_QWORD *)(a1 + 32) + 16LL * (unsigned int)((result - v6) >> 3);
        if ( *(int *)result > 3 && *(_DWORD *)result != 15 )
        {
          *(_DWORD *)result = 1;
          *(_QWORD *)(result + 8) = 0;
        }
      }
    }
  }
  return result;
}

