__int64 __fastcall sub_169D540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 v8; // dl

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a2 + 24) )
  {
    v6 = **(_QWORD **)(a2 + 16);
    if ( v6 )
    {
      v8 = *(_BYTE *)(v6 + 28) & 0x7F;
      a4 = (v8 + 52) & 0x7F;
      if ( (unsigned __int8)a4 <= 1u || (unsigned int)v8 - 53 <= 1 )
        v6 = sub_B72ED0(**(_QWORD **)(a2 + 16));
    }
  }
  return sub_169D3F0(v7, v6, nullptr, a4, a5, a6);
}
