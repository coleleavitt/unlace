unsigned __int64 __fastcall sub_278EA0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 128) & 1) == 0 )
  {
    if ( a1 )
      ++*(_DWORD *)(a1 + 132);
    v6 = operator new(0x18u);
    v7 = operator new(0x10u);
    *(_QWORD *)v7 = a3;
    *(_BYTE *)(v7 + 8) = a4;
    *(_DWORD *)v6 = 9;
    *(_QWORD *)(v6 + 16) = a2;
    *(_QWORD *)(v6 + 8) = v7;
    sub_2787D0(a1, v6);
    if ( a1 )
    {
      if ( (*(_DWORD *)(a1 + 132))-- == 1 && (*(_BYTE *)(a1 + 128) & 1) == 0 )
        sub_278550(a1);
    }
  }
  return v10 - __readfsqword(0x28u);
}
