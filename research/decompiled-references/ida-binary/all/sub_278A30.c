void __fastcall sub_278A30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  if ( (*(_BYTE *)(a1 + 128) & 1) == 0 )
  {
    v4 = operator new(0x18u);
    *(_DWORD *)v4 = 3;
    *(_QWORD *)(v4 + 16) = a2;
    *(_QWORD *)(v4 + 8) = a3;
    sub_2787D0(a1, v4);
  }
}
