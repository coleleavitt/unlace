unsigned __int64 __fastcall sub_278DE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 128) & 1) == 0 )
  {
    if ( a1 )
      ++*(_DWORD *)(a1 + 132);
    v2 = operator new(0x18u);
    v3 = operator new(1u);
    *(_DWORD *)v2 = 8;
    *(_QWORD *)(v2 + 16) = a2;
    *(_QWORD *)(v2 + 8) = v3;
    sub_2787D0(a1, v2);
    if ( a1 )
    {
      if ( (*(_DWORD *)(a1 + 132))-- == 1 && (*(_BYTE *)(a1 + 128) & 1) == 0 )
        sub_278550(a1);
    }
  }
  return v6 - __readfsqword(0x28u);
}
