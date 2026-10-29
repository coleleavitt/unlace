__int64 __fastcall sub_13D0890(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rax

  v1 = *(_DWORD *)(a1 + 128);
  v2 = *(_QWORD *)(a1 + 152) - *(_QWORD *)(a1 + 112);
  if ( v1 < 0 )
    return sub_13D0510(*(_QWORD *)(a1 + 8), v1, v2, 1);
  else
    return (unsigned int)(v1 + v2);
}
