__int64 __fastcall sub_F0430(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned __int64 v8; // rdx
  __int64 *v9; // r12
  __int64 *v10; // rdi

  if ( a3 )
  {
    v5 = *(_QWORD *)a1;
    v6 = *(_QWORD *)(a1 + 8) << 6;
    v7 = *(_QWORD *)a1 + v6;
    if ( *(_QWORD *)a1 != v7 )
    {
      if ( v6 >> 6 )
      {
        _BitScanReverse64(&v8, v6 >> 6);
        sub_EF7D0(*(_QWORD *)a1, *(_QWORD *)a1 + v6, 2LL * (int)v8);
        if ( v6 > 1024 )
        {
          v9 = (__int64 *)(v5 + 1024);
          sub_BB400(v5, v5 + 1024);
          do
          {
            v10 = v9;
            v9 += 8;
            sub_BB200(v10);
          }
          while ( (__int64 *)v7 != v9 );
          goto LABEL_2;
        }
      }
      else
      {
        sub_EF7D0(*(_QWORD *)a1, *(_QWORD *)a1 + v6, -2);
      }
      sub_BB400(v5, v7);
    }
  }
LABEL_2:
  invalidate_dbgmem_config();
  *(_BYTE *)(a1 + 48) = 1;
  return sub_C21B0(a1, a2);
}

