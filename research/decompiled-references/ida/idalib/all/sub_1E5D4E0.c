unsigned __int64 __fastcall sub_1E5D4E0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rax

  v2 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  result = a2;
  if ( *(_BYTE *)(v2 + 16) == 8 )
  {
    if ( (unsigned __int16)sub_F5E940(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL)) >> 8 )
    {
      return *(_QWORD *)(v2 + 40);
    }
    else
    {
      v4 = sub_1E5D4E0(a1, *(_QWORD *)(v2 + 40));
      return sub_A71850(a1, *(_WORD *)(v2 + 18) >> 3, v4, *(_QWORD *)(v2 + 48), *(_QWORD *)(v2 + 32));
    }
  }
  return result;
}
