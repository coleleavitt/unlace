__int64 __fastcall sub_7A5D20(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v1 = *(_QWORD *)(sub_79A2E0(a1 + 72) + 16);
  v2 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v1 & 4) != 0 )
    v2 = (_QWORD *)*v2;
  if ( !v2 )
    BUG();
  v3 = v2[8];
  v4 = 0;
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 10) & 0x20) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 40);
      if ( (v5 & 7) == 0 )
      {
        v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 16);
          if ( *(_DWORD *)v7 == 8 )
          {
            v4 = 1852399455;
            LOBYTE(v4) = *(_QWORD *)(v7 + 16) == 0x656B6F766E695F5FLL;
          }
        }
      }
    }
  }
  return v4;
}

