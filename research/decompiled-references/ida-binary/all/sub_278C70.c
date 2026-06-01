unsigned __int64 __fastcall sub_278C70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 128) & 1) == 0 )
  {
    if ( a1 )
      ++*(_DWORD *)(a1 + 132);
    v4 = operator new(0x18u);
    *(_DWORD *)v4 = 6;
    *(_QWORD *)(v4 + 16) = a2;
    *(_QWORD *)(v4 + 8) = a3;
    sub_2787D0(a1, v4);
    if ( a1 )
    {
      if ( (*(_DWORD *)(a1 + 132))-- == 1 && (*(_BYTE *)(a1 + 128) & 1) == 0 )
        sub_278550(a1);
    }
  }
  return v7 - __readfsqword(0x28u);
}
