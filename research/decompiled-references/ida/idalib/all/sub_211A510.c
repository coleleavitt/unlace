__int64 __fastcall sub_211A510(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64); // rax

  v1 = *(unsigned int *)(a1 + 128);
  if ( v1 <= 1 )
    return 0;
  v2 = *(unsigned int *)(a1 + 128);
  v3 = 32 * v1 + *(_QWORD *)(a1 + 120);
  v4 = *(_QWORD *)(v3 - 64);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v3 - 56);
    if ( *(_DWORD *)(v3 - 24) != (_DWORD)v5 || *(_QWORD *)(v3 - 32) != v4 )
    {
      v6 = **(__int64 (__fastcall ***)(__int64, __int64))a1;
      if ( v6 == sub_2119D60 )
      {
        *(_QWORD *)(a1 + 288) = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8LL);
      }
      else
      {
        ((void (__fastcall *)(__int64, __int64, __int64, __int64))v6)(a1, v4, v5, v2);
        LODWORD(v2) = *(_DWORD *)(a1 + 128);
      }
    }
  }
  *(_DWORD *)(a1 + 128) = v2 - 1;
  return 1;
}
