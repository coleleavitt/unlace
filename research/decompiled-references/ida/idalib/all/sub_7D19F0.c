__int64 __fastcall sub_7D19F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_7D1970(a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    *(_DWORD *)(v2 + 44) = 0;
    *(_QWORD *)(v2 + 32) = v3;
    *(_QWORD *)(v2 + 56) = v3;
  }
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v2 != 0;
  return 0;
}
