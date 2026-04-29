__int64 __fastcall sub_E1BB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi

  result = *(unsigned int *)(a2 + 24);
  if ( (result & 2) != 0 )
  {
    *(_DWORD *)(a1 + 280) |= 8u;
    result = *(unsigned int *)(a2 + 24);
  }
  if ( (result & 4) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 216);
    *(_DWORD *)(a1 + 280) |= 0x10u;
    if ( v4 )
    {
      *(_QWORD *)(a1 + 224) = 0;
      qfree(v4);
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 232) = 0;
    }
    result = *(unsigned int *)(a2 + 24);
  }
  if ( (result & 0x200) != 0 )
    *(_DWORD *)(a1 + 280) |= 0x400u;
  return result;
}
