void __fastcall sub_77C040(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    if ( (v3 & 4) != 0 )
    {
      v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 + 16) > 1u )
          sub_69F740(v4 + 16);
      }
    }
  }
  *(_QWORD *)(a1 + 88) = a2 & 0xFFFFFFFFFFFFFFFBLL;
}

