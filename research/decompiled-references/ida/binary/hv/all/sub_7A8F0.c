__int64 __fastcall sub_7A8F0(__int64 a1, int a2, double a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = a1 + 744;
  *(_DWORD *)(a1 + 716) = a2;
  if ( a2 != 1 )
    v3 = 0;
  *(_QWORD *)(a1 + 640) = sub_78E40(*(_QWORD *)(a1 + 640), a1, v3, a3);
  result = sub_7A160(a1);
  if ( !(_BYTE)result )
    return 0;
  if ( *(_DWORD *)(a1 + 616) > 0x38Eu )
  {
    sub_17D80((char **)a1);
    return 0;
  }
  v5 = *(_QWORD *)(a1 + 704) + 8LL * *(unsigned int *)(a1 + 712);
  if ( v5 < *(_QWORD *)(a1 + 696) + 128LL )
    v5 = *(_QWORD *)(a1 + 696) + 128LL;
  if ( *(_QWORD *)(a1 + 56) < v5 )
  {
    sub_17D80((char **)a1);
    return 0;
  }
  return result;
}

