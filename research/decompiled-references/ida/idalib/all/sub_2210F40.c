__int64 __fastcall sub_2210F40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a2 + 24);
  if ( v2 == 1 )
    v3 = qword_2C8F5C8 + 6;
  else
    v3 = v2 + qword_2C8F5B8 + 5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( v4 )
  {
    if ( *(_QWORD *)(a2 + 56) )
      v4 = *(_QWORD *)(a2 + 56);
    v3 += v4 + (-(__int64)(((*(_BYTE *)(a2 + 11) >> 1) & 2) == 0) & 0xFFFFFFFFFFFFFFFDLL) + 6;
  }
  return v3;
}
