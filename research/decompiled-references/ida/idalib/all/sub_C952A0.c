unsigned __int64 __fastcall sub_C952A0(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  v1 = *(_QWORD *)(sub_F63270(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) + 128);
  if ( v1 )
  {
    if ( (*(_BYTE *)(v1 + 10) & 0x20) != 0 )
    {
      v2 = *(_QWORD *)(v1 + 128);
      v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      v1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v2 & 4) != 0 )
      {
        v1 = 0;
        if ( *(_DWORD *)(v3 + 8) )
          v1 = **(_QWORD **)v3;
      }
    }
    else
    {
      v1 = 0;
    }
  }
  return v1
       + (*(_WORD *)(*(_QWORD *)(sub_F63270(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) + 128) + 106LL)
        & 0xFFF0);
}
