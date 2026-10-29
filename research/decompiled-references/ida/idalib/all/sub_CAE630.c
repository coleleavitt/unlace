__int64 __fastcall sub_CAE630(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 result; // rax
  __int64 v5[2]; // [rsp+8h] [rbp-10h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 584) )
  {
    v5[0] = *(_QWORD *)(a1 + 16) | 4LL;
    return sub_CA2810(v2, v3, v5);
  }
  else
  {
    result = *(unsigned __int8 *)(a1 + 12);
    if ( !(_BYTE)result || v3 != 10 )
    {
      v5[0] = *(_QWORD *)(a1 + 16) | 4LL;
      return sub_CA0510(v2, 10, v3, v5);
    }
  }
  return result;
}
