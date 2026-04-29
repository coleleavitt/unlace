__int64 __fastcall sub_A1A30(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v6; // r13
  __int64 v7; // [rsp+8h] [rbp-60h]
  _BYTE v8[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  if ( a2
    && (unsigned __int8)sub_11C480(a2)
    && (unsigned __int8)sub_11C480(a3)
    && (*(_DWORD *)(a2 + 4) & 0x40010) == 0
    && (*(_BYTE *)(a2 + 65) & 2) == 0
    && !sub_A18D0(*(_QWORD *)(a1 + 64), a2)
    && *(_DWORD *)(a3 + 36) == *(_DWORD *)(a3 + 68) + *(_DWORD *)(a2 + 68)
    && (unsigned __int8)sub_12E6A0(a1, *(_QWORD *)(a2 + 8), a2 + 64, *(_QWORD *)(a3 + 8), a3 + 64, 1)
    && (unsigned __int8)sub_12FE50(a1, a2, a2, a3, a3, 0) )
  {
    sub_121540(v8, a2 + 64);
    v4 = sub_130900(a1, *(_QWORD *)(a2 + 8), (unsigned int)v8, *(_QWORD *)(a3 + 8), (int)a3 + 64, 8);
    if ( (_BYTE)v4 )
    {
      if ( v8[0] == 4 )
      {
        v4 = 0;
      }
      else
      {
        v7 = *(_QWORD *)(a2 + 24);
        sub_122EA0(a2, *(_QWORD *)(a3 + 40));
        *(_QWORD *)(a2 + 24) = v7;
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        if ( (*(_BYTE *)(v6 + 48) & 0x10) != 0 && *(int *)(a2 + 36) > 4 && (unsigned int)(*(_DWORD *)a2 - 22) <= 2 )
          sub_95A40(a2 + 48, v6, v7, 31);
        sub_122C80(a2 + 64);
        if ( *(char *)(a3 + 4) >= 0 )
          *(_DWORD *)(a2 + 4) &= ~0x80u;
        sub_11B190(a2, v6);
        sub_11B160(a3);
      }
    }
    sub_11A960(v8);
  }
  else
  {
    return 0;
  }
  return v4;
}
