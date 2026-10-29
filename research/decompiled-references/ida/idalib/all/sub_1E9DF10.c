__int64 __fastcall sub_1E9DF10(__int64 *a1, double a2, __int64 a3, int a4, unsigned __int64 a5)
{
  unsigned int v7; // r12d
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rax
  _QWORD v16[4]; // [rsp+8h] [rbp-20h] BYREF

  switch ( a4 )
  {
    case 1621:
      v7 = sub_16EC930(*a1, a5, 0, a2);
      if ( (_BYTE)v7 )
        return 1;
      v15 = sub_168B6C0((__int64)a1);
      *(_QWORD *)(a5 + 8) = sub_A631F0(v15);
      return v7;
    case 1622:
      return (unsigned int)sub_1E9C960(a1, a5, a2);
    case 1623:
      return (unsigned int)sub_1E92400(a1, a5, a2);
    case 1624:
      LOBYTE(v9) = sub_1E93CB0(a1, a5, a2);
      return v9;
    case 1625:
      if ( (unsigned __int8)sub_16EC930(*a1, a5, 2u, a2) )
        return 1;
      v10 = *a1;
      v16[0] = 0;
      if ( (unsigned __int8)sub_1E92530(v10, a5, 0, v16, a2) )
        return 1;
      v7 = sub_1E930E0(*a1, a5, 1u, v11, v12, v13, a2);
      if ( (_BYTE)v7 )
        return 1;
      *(_QWORD *)(a5 + 8) = v16[0];
      return v7;
    case 1626:
      if ( (unsigned __int8)sub_16EC930(*a1, a5, 1u, a2) )
        return 1;
      v14 = *a1;
      v16[0] = 0;
      return (unsigned int)sub_1E92530(v14, a5, 0, v16, a2);
    case 1627:
      return (unsigned int)sub_1E93D90(a1, a5, a2);
    case 1628:
      return (unsigned int)sub_1E9D600(a1, a5, a2);
    case 1629:
      return (unsigned int)sub_1E9C040(a1, a5, a2);
    default:
      return 0;
  }
}
