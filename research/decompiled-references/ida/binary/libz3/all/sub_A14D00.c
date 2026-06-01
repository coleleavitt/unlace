__int64 __fastcall sub_A14D00(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 result; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rdx

  v2 = 24LL * a2;
  v3 = v2 + *(_QWORD *)(a1 + 632);
  v4 = *(unsigned int *)(*(_QWORD *)v3 + 40LL * (unsigned int)(*(_DWORD *)(v3 + 8) - 1) + 32);
  *(_DWORD *)(v3 + 12) = v4;
  v5 = *(_QWORD *)(a1 + 656) + 4 * v4;
  *(_DWORD *)v5 = a2 & 0xFFFFFFF | *(_DWORD *)v5 & 0xF0000000;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 40LL);
  if ( v6 <= 2 )
  {
    if ( v6 )
      sub_A13EA0(a1, a2);
    sub_A13F70((_QWORD *)a1, a2);
  }
  else
  {
    *(_BYTE *)(v5 + 3) = *(_BYTE *)(v5 + 3) & 0xCF | 0x20;
    sub_A13EA0(a1, a2);
  }
  result = *(_QWORD *)(a1 + 400);
  if ( *(_DWORD *)(a1 + 1020) < *(_DWORD *)(result + 96) )
  {
    result = *(unsigned int *)(result + 20);
    if ( (_DWORD)result )
    {
      v8 = (_DWORD *)(*(_QWORD *)(a1 + 944) + 4LL * a2);
      result = *(unsigned int *)(a1 + 936);
      if ( (unsigned int)result >= *v8 && *(_DWORD *)(*(_QWORD *)(a1 + 632) + v2 + 12) != -1 )
      {
        *v8 = result + 1;
        result = *(_QWORD *)(a1 + 928);
        if ( !result || (v9 = *(unsigned int *)(result - 4), (_DWORD)v9 == *(_DWORD *)(result - 8)) )
        {
          sub_2FD3F0((unsigned int **)(a1 + 928));
          result = *(_QWORD *)(a1 + 928);
          v9 = *(unsigned int *)(result - 4);
        }
        *(_DWORD *)(result + 4 * v9) = a2;
        ++*(_DWORD *)(result - 4);
      }
    }
  }
  return result;
}

