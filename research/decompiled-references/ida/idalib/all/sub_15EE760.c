unsigned __int64 __fastcall sub_15EE760(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int16 v2; // ax
  unsigned __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx

  v1 = sub_BFD550(a1);
  v2 = *(_WORD *)v1 & 0x1FF;
  if ( v2 == 34 )
  {
    v8 = *(_QWORD *)(v1 + 16);
    return (4LL * sub_BFEF10(*(_QWORD *)(v1 + 24))) | v8 & 0xFFFFFFFFFFFFFFFBLL;
  }
  else
  {
    if ( v2 <= 0x22u )
    {
      v3 = 0;
      if ( v2 == 17 )
      {
        v5 = *(_QWORD *)(v1 + 16);
        v3 = 0;
        if ( (*(_WORD *)v5 & 0x1FF) == 0x20 )
        {
          v6 = *(_QWORD *)(v5 + 40);
          v3 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v6 & 6) == 0 )
          {
            v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_WORD *)v7 & 0x1FF) == 0x1A )
              v7 = *(_QWORD *)(v7 + 16);
            v3 |= 4LL * sub_BFEF10(v7);
          }
        }
      }
      return v3;
    }
    if ( v2 != 46 )
    {
      v3 = 0;
      if ( v2 == 71 )
        return *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFFBLL
             | (4LL * ((*(_BYTE *)(*(_QWORD *)(v1 + 16) + 28LL) & 0x7Fu) - 40 <= 6));
      return v3;
    }
    return *(_QWORD *)(v1 + 24) & 0xFFFFFFFFFFFFFFFBLL
         | (4LL * ((*(_WORD *)sub_BFBAE0(*(_QWORD *)(v1 + 16)) & 0x1FF) == 98));
  }
}
