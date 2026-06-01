__int64 __fastcall sub_999800(__int64 a1, unsigned int a2)
{
  if ( a2 != -1 && ((*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * a2 + 3) >> 4) & 3) == 2 )
    return sub_999840();
  else
    return *(_QWORD *)(a1 + 600) + 32LL * a2;
}

