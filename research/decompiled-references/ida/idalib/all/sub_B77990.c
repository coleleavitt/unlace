__int64 __fastcall sub_B77990(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax

  if ( (*(_WORD *)(a1 + 30) & 0x180) == 0 )
    return 0;
  v2 = (_QWORD *)sub_B77930(a1);
  if ( v2 && (v5 = *v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (*(_WORD *)(v5 + 30) & 0x180) != 0 )
      return sub_B726C0(v5, a1, v3, v4);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 152);
    if ( v7 )
    {
      if ( (v7 & 6) == 0 )
      {
        v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v8 )
        {
          if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x47 )
          {
            v9 = *(_QWORD *)sub_BC3640() & 0xFFFFFFFFFFFFFFF8LL;
            if ( v9 )
            {
              if ( (*(_WORD *)(v9 + 30) & 0x180) != 0 )
              {
                v5 = *(_QWORD *)(v9 + 48);
                return sub_B726C0(v5, a1, v3, v4);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
