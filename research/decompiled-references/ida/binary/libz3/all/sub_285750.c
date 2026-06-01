__int64 __fastcall sub_285750(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax

  if ( a2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 88LL);
    if ( v3 && a3 < *(_DWORD *)(v3 - 4) )
    {
      return *(_QWORD *)(v3 + 8LL * a3);
    }
    else
    {
      sub_24EA30(a1, 2u, nullptr);
      return 0;
    }
  }
  else
  {
    sub_24EA30(a1, 3u, "ast is null");
    return 0;
  }
}

