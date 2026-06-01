__int64 __fastcall sub_FAA10(__int64 a1, char a2)
{
  int v3; // ecx
  __int64 result; // rax
  __int64 v5; // r8
  int v6; // edi
  unsigned __int64 v7; // rdx

  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
  result = (unsigned int)(v3 - 1);
  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 312);
    v6 = *(_DWORD *)(a1 + 320);
    v7 = 0x8F5C28F5C28F5C29LL
       * (((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 296)) >> 3)
        + ((__int64)(*(_QWORD *)(a1 + 272) - *(_QWORD *)(a1 + 256)) >> 3))
       + 2 * ((v5 == 0) + ((__int64)(*(_QWORD *)(a1 + 312) - *(_QWORD *)(a1 + 280)) >> 3) - 1);
    if ( v7 < v3 + v6 )
      v3 = v7 - v6;
    result = (unsigned int)(v3 - 1);
    if ( (int)result < 0 )
      return 0;
  }
  else if ( (int)result < 0 )
  {
    return 0;
  }
  return result;
}

