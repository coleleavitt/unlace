__int64 __fastcall sub_F56890(__int64 a1)
{
  unsigned __int8 v1; // al

  v1 = (*(_BYTE *)(a1 + 19) >> 1) & 0xF;
  if ( v1 == 2 )
    return *(_WORD *)((a1
                     + (((char)BYTE3(*(_QWORD *)(a1 + 16)) >> 5) & 4)
                     + 8LL * *(unsigned __int16 *)(a1 + 22)
                     + 48
                     + 7)
                    & 0xFFFFFFFFFFFFFFF8LL)
         & 0x3FF;
  else
    return ((__int64 (*)(void))((char *)dword_23FDD4C + dword_23FDD4C[v1]))();
}
