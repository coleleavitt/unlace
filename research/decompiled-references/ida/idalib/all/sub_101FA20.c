__int64 __fastcall sub_101FA20(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)a2 >> 6));
  if ( _bittest64(&v3, a2) )
    return sub_101F8A0(a1 + 264, (unsigned int)a2);
  else
    return sub_101F930(a1, a2, a3);
}
