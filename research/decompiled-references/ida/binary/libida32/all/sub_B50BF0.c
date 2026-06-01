void __fastcall sub_B50BF0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 128) = a2;
  *(_BYTE *)(a1 + 83) &= ~8u;
  if ( a2 )
    *(_DWORD *)(a1 + 140) = sub_EC8400(a2);
}

