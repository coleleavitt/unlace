__int64 __fastcall sub_20DC20(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx

  v2 = (unsigned int)(*(_DWORD *)(a2 + 8) - 52);
  if ( (unsigned int)v2 <= 0xD && (v3 = 12705, _bittest64(&v3, v2)) )
    return sub_20C600(a1, a2, 1u);
  else
    return 0;
}
