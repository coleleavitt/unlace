__int64 __fastcall sub_1E5F010(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( (a1 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v3 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
    v4 = 0;
    if ( *(_BYTE *)(v3 + 16) == 59 )
    {
      a1 = *(_QWORD *)(v3 + 8);
      v4 = *(_QWORD *)(v3 + 24);
    }
    if ( a2 )
      *a2 = v4;
    return a1;
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    return 0;
  }
}
