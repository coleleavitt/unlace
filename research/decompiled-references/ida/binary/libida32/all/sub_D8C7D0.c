__int64 __fastcall sub_D8C7D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax

  v3 = 1;
  if ( !*(_DWORD *)(a3 + 24) )
  {
    v4 = *(_QWORD *)(a3 + 32);
    v5 = *(_QWORD *)(v4 + 16);
    v3 = HIDWORD(v5);
    if ( BYTE4(v5) )
    {
      if ( *(_BYTE *)(v4 + 24) )
      {
        LOBYTE(v3) = *(_DWORD *)(*(_QWORD *)(a1 + 168) + 324LL) != -1
                  && *(_DWORD *)(*(_QWORD *)(a1 + 168) + 324LL) == (_DWORD)v5;
        if ( !(_BYTE)v3 )
        {
          v6 = sub_DFC980(*(_QWORD *)(a1 + 400));
          sub_E0FF40(a1, v6, 2443, 0);
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return v3;
}

