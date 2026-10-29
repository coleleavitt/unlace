__int64 __fastcall sub_789F0(__int64 a1)
{
  unsigned int v1; // ebp
  bool v3; // cc
  unsigned __int64 v5; // r12
  __int64 v6; // rdi
  char v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  int v13; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v1 = *(unsigned __int8 *)(a1 + 848);
  v14 = __readfsqword(0x28u);
  if ( (_BYTE)v1 )
    return 1;
  v3 = *(_DWORD *)(a1 + 616) <= 6u;
  *(_WORD *)(a1 + 848) = 1;
  if ( v3 || !*(_QWORD *)(a1 + 656) )
  {
    if ( !byte_1671A1 )
      sub_96F80(3322);
    goto LABEL_23;
  }
  v5 = sub_92640();
  if ( sub_92670(*(_QWORD *)(a1 + 656), 0, 1) >= v5
    || (unsigned __int8)sub_91D10(a1, *(_QWORD *)(a1 + 656)) && sub_91B10(a1, *(_QWORD *)(a1 + 656), &v13, 1, 1) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 656);
    v7 = byte_1671A0;
    byte_1671A0 = *(_BYTE *)(a1 + 634);
    if ( v5 == sub_92670(v6, 0, 1) )
    {
      v8 = *(_QWORD *)(a1 + 648);
      v13 = 0;
      v9 = sub_91B10(a1, v8, &v13, 4, 1);
      v10 = v13;
      if ( v9 == 4 && !v13 || *(_DWORD *)(a1 + 628) == v13 )
      {
        v11 = *(_DWORD *)(a1 + 716) == 1;
        *(_BYTE *)(a1 + 849) = 1;
        *(_DWORD *)(a1 + 624) = v10;
        if ( !v11 )
          goto LABEL_13;
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 716) == 1;
        *(_DWORD *)(a1 + 624) = v13;
        if ( !v11 )
        {
LABEL_13:
          byte_1671A0 = v7;
          return 1;
        }
      }
      v12 = *(unsigned __int8 *)(a1 + 840);
      if ( !(_BYTE)v12 )
      {
        sub_93510(a1 + 728, a1 + 744);
        *(_QWORD *)(a1 + 720) = *(_QWORD *)(a1 + 832);
        v12 = *(unsigned __int8 *)(a1 + 840);
      }
      *(_DWORD *)(a1 + 716) = v12 + 2;
      goto LABEL_13;
    }
    if ( !byte_1671A1 )
      sub_96F80(3323);
LABEL_23:
    BUG();
  }
  return v1;
}

