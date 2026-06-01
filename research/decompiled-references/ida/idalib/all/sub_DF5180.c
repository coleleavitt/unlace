__int64 __fastcall sub_DF5180(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  unsigned int v5; // r12d
  int v6; // ebp
  int v8; // edx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int16 v11; // [rsp+6h] [rbp-32h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v12 = v3;
  LOWORD(v3) = *(_WORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v11 = v3;
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
    v12 &= 0xFu;
  v5 = sub_D62A30(a1, a2, &v11, (void **)&v12, 0x10u);
  if ( (_BYTE)v5 )
  {
    if ( v12 > 0xF )
    {
      LOWORD(v6) = 0;
      if ( v11 >= 0 )
      {
        if ( v11 )
        {
          v8 = HIBYTE(v11);
          if ( !HIBYTE(v11) )
            v8 = (unsigned __int8)v11;
          v9 = HIBYTE(v11) == 0 ? 8 : 0;
          if ( v8 >> 4 )
            v8 >>= 4;
          else
            v9 |= 4u;
          if ( v8 >> 2 )
            v8 >>= 2;
          else
            v9 |= 2u;
          if ( !((unsigned int)v8 >> 1) )
            v9 |= 1u;
          v10 = v9;
        }
        else
        {
          v10 = 16;
          LOBYTE(v9) = 16;
        }
        v12 = v10;
        v6 = v11 << v9;
      }
    }
    else
    {
      v6 = v11 << v12;
      if ( v11 < 0 )
      {
        LOWORD(v6) = 0;
        if ( v11 != (__int16)0x8000 )
          v6 = -(-v11 << v12);
      }
    }
    *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v6;
  }
  return v5;
}
