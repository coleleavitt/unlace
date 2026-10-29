__int64 __fastcall sub_36AAC0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v6[192]; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v7[4]; // [rsp+D8h] [rbp-20h] BYREF

  v7[0] = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 8) = -1;
  if ( (~((unsigned __int16)get_flags_ex(*(unsigned int *)(a1 + 8), 4) >> 8) & 6) == 0 )
  {
    v5[0] = -1;
    v5[2] = 0;
    v5[1] = 0xFFFFFFFFLL;
    v3 = v6;
    do
    {
      *(_WORD *)v3 = 0;
      v3 += 3;
      *((_WORD *)v3 - 11) = 0;
      *((_WORD *)v3 - 10) = 0;
      *((_DWORD *)v3 - 1) = 0;
      *((_WORD *)v3 - 9) = 0;
      *(v3 - 2) = 0;
      *((_DWORD *)v3 - 2) = 0;
    }
    while ( v7 != v3 );
    ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD *))decode_insn)(v5, *(unsigned int *)(a1 + 8), v7);
    v4 = *(int *)(a1 + 40);
    if ( (unsigned int)v4 <= 7 && v6[24 * v4 + 1] <= 5u )
    {
      switch ( v6[24 * v4 + 1] )
      {
        case 0:
          return 0;
        case 1:
        case 3:
          *(_DWORD *)(a2 + 8) = *(unsigned __int16 *)&v6[24 * v4 + 6];
          break;
        case 2:
        case 4:
          *(_DWORD *)(a2 + 8) = *(_DWORD *)&v6[24 * v4 + 12];
          break;
        case 5:
          *(_DWORD *)(a2 + 8) = *(_DWORD *)&v6[24 * v4 + 8];
          break;
      }
    }
  }
  return 0;
}

