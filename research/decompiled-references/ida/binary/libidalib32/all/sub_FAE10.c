__int64 __fastcall sub_FAE10(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  __int64 result; // rax
  __int64 v4; // r9
  int v5; // ecx
  unsigned __int64 v6; // rsi
  int v7; // edi

  v2 = *(_DWORD *)(a1 + 320);
  result = a2;
  v4 = *(_QWORD *)(a1 + 312);
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
  v6 = 0x8F5C28F5C28F5C29LL
     * (((__int64)(*(_QWORD *)(a1 + 272) - *(_QWORD *)(a1 + 256)) >> 3)
      + ((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 296)) >> 3))
     + 2 * ((v4 == 0) + ((v4 - *(_QWORD *)(a1 + 280)) >> 3) - 1);
  v7 = -1030792151
     * (((__int64)(*(_QWORD *)(a1 + 272) - *(_QWORD *)(a1 + 256)) >> 3)
      + ((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 296)) >> 3))
     + 2 * ((v4 == 0) + (unsigned int)((v4 - *(_QWORD *)(a1 + 280)) >> 3) - 1)
     - v2;
  if ( v6 < v5 + v2 )
    v5 = v7;
  if ( (int)result >= v5 )
    result = (unsigned int)(v5 - 1);
  if ( (int)result < 0 )
    return 0;
  return result;
}

