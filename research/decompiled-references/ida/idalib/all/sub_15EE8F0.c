unsigned __int64 __fastcall sub_15EE8F0(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  unsigned __int16 v4; // ax
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx

  v3 = sub_BFD550(*(_QWORD *)(a2 + 24));
  v4 = *(_WORD *)v3 & 0x1FF;
  if ( v4 == 34 )
  {
    v10 = *(_QWORD *)(v3 + 16);
    v5 = (4LL * sub_BFEF10(*(_QWORD *)(v3 + 24))) | v10 & 0xFFFFFFFFFFFFFFFBLL;
  }
  else if ( v4 <= 0x22u )
  {
    v5 = 0;
    if ( v4 == 17 )
    {
      v7 = *(_QWORD *)(v3 + 16);
      v5 = 0;
      if ( (*(_WORD *)v7 & 0x1FF) == 0x20 )
      {
        v8 = *(_QWORD *)(v7 + 40);
        v5 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v8 & 6) == 0 )
        {
          v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_WORD *)v9 & 0x1FF) == 0x1A )
            v9 = *(_QWORD *)(v9 + 16);
          v5 |= 4LL * sub_BFEF10(v9);
        }
      }
    }
  }
  else if ( v4 == 46 )
  {
    v5 = *(_QWORD *)(v3 + 24) & 0xFFFFFFFFFFFFFFFBLL
       | (4LL * ((*(_WORD *)sub_BFBAE0(*(_QWORD *)(v3 + 16)) & 0x1FF) == 98));
  }
  else
  {
    v5 = 0;
    if ( v4 == 71 )
      v5 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFBLL
         | (4LL * ((*(_BYTE *)(*(_QWORD *)(v3 + 16) + 28LL) & 0x7Fu) - 40 <= 6));
  }
  *a1 = v5;
  result = *(_QWORD *)(a2 + 16);
  a1[1] = result;
  return result;
}
