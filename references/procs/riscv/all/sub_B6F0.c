__int64 __fastcall sub_B6F0(__int64 a1, __int64 *a2, __int64 a3, char a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rdi
  __int64 v10; // r12
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+8h] [rbp-50h]
  int v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 152);
  if ( v8 != a3 )
    return 0;
  switch ( a4 )
  {
    case 'S':
      if ( a5 != 0xFFFFFFFFLL )
      {
        sub_B630(a2, (__int64)"An unknown index in the Risc-V 'supstr' record for %X", a5);
        return 0;
      }
      netnode_supset(v8, -1, a6, a7, 83);
      break;
    case 's':
      v11 = 0;
      v10 = node2ea(a5);
      v13 = 0;
      v12 = 0;
      if ( !(unsigned __int8)sub_22D30(&v11, a1, v10) )
      {
        sub_B630(a2, (__int64)"could not read PUSHINFO for %a", 0.0);
        if ( v11 )
        {
          *(_QWORD *)&v12 = 0;
          qfree(v11);
        }
        return 0;
      }
      sub_22CA0(&v11, a1, v10);
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree(v11);
      }
      break;
    case 'A':
      if ( a5 != 0xFFFFFFFFLL )
      {
        sub_B630(a2, (__int64)"An unknown index in the Risc-V 'altval' record for %X", a5);
        return 0;
      }
      break;
    default:
      return 0;
  }
  return 1;
}
