__int64 __fastcall sub_9D7A30(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rdx
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx

  v3 = a2;
  v4 = (_DWORD *)(*(_QWORD *)(a1 + 920) + 4LL * a2);
  result = *(unsigned int *)(a1 + 912);
  if ( (unsigned int)result >= *v4 )
  {
    v6 = *(_QWORD *)(a1 + 664);
    *v4 = result + 1;
    sub_98B520(*(_QWORD *)(a1 + 672) + (v3 << 6), (int *)((v3 << 6) + v6));
    result = *(_QWORD *)(a1 + 904);
    if ( !result || (v7 = *(unsigned int *)(result - 4), (_DWORD)v7 == *(_DWORD *)(result - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 904));
      result = *(_QWORD *)(a1 + 904);
      *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = v3;
    }
    else
    {
      *(_DWORD *)(result + 4 * v7) = v3;
      ++*(_DWORD *)(result - 4);
    }
    *(_BYTE *)(a1 + 1281) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 1281) = 1;
  }
  return result;
}

