__int64 __fastcall sub_13D1500(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  __int64 v5; // rax

  v4 = *(_DWORD *)(a1 + 128);
  v5 = a2 - *(_QWORD *)(a1 + 112);
  if ( v4 < 0 )
    return sub_13D0510(*(_QWORD *)(a1 + 8), v4, v5, a3);
  else
    return (unsigned int)(v4 + v5);
}
