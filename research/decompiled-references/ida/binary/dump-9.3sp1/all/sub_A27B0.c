__int64 __fastcall sub_A27B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v7; // ebp
  __int64 v9; // r12
  __int64 v10; // [rsp+8h] [rbp-60h]
  _BYTE v11[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( a6 == 1
    && a2
    && (unsigned __int8)sub_11E8C0(a2)
    && (unsigned __int8)sub_11E8C0(a3)
    && (*(_DWORD *)(a2 + 4) & 0x40010) == 0
    && (*(_BYTE *)(a2 + 65) & 2) == 0
    && !sub_A2650(*(_QWORD *)(a1 + 64), a2)
    && *(_DWORD *)(a3 + 36) == *(_DWORD *)(a3 + 68) + *(_DWORD *)(a2 + 68)
    && (unsigned __int8)sub_130BC0(a1, *(_QWORD *)(a2 + 8), a2 + 64, *(_QWORD *)(a3 + 8), a3 + 64, 1)
    && (unsigned __int8)sub_132370(a1, a2, a2, a3, a3, 0) )
  {
    sub_123A40(v11);
    v7 = sub_132E20(a1, *(_QWORD *)(a2 + 8), (unsigned int)v11, *(_QWORD *)(a3 + 8), (int)a3 + 64, 8);
    if ( (_BYTE)v7 )
    {
      if ( v11[0] == 4 )
      {
        v7 = 0;
      }
      else
      {
        v10 = *(_QWORD *)(a2 + 24);
        sub_1253A0(a2, *(_QWORD *)(a3 + 40));
        *(_QWORD *)(a2 + 24) = v10;
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        if ( (*(_BYTE *)(v9 + 48) & 0x10) != 0 && *(int *)(a2 + 36) > 4 && (unsigned int)(*(_DWORD *)a2 - 22) <= 2 )
          sub_967E0(a2 + 48, v9, v10, 31);
        sub_125180(a2 + 64);
        sub_A1280(v9, a2, *(_DWORD *)(a3 + 4));
        sub_11D5A0(a3);
      }
    }
    sub_11CDA0(v11);
  }
  else
  {
    return 0;
  }
  return v7;
}
