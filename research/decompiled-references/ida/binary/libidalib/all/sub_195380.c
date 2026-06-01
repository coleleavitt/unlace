__int64 __fastcall sub_195380(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx

  *(_DWORD *)(a1 + 2104) |= 0x40u;
  for ( result = *(_QWORD *)(a1 + 2648); a1 + 2648 != result; result = v3 )
  {
    v3 = *(_QWORD *)result;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(result + 16) + 24LL))(*(_QWORD *)(result + 16), a2);
  }
  if ( (*(_BYTE *)(a1 + 1920) & 1) != 0 )
    result = sub_19C290(6, a1, 0);
  *(_DWORD *)(a1 + 2104) &= ~0x40u;
  return result;
}

