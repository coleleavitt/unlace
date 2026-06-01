/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B978
// Address: 0x000000000005B978

//----- (000000000005B978) ----------------------------------------------------
void __fastcall sub_5B978(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x23
  void *v6; // x1
  unsigned __int64 v7; // x8
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x21
  __int64 v11; // x23
  void *v12; // x0
  __int64 v13; // x24
  unsigned __int64 v14; // x23
  void *v15[3]; // [xsp+8h] [xbp-A8h] BYREF
  void *ptr; // [xsp+20h] [xbp-90h]
  __int64 v17; // [xsp+28h] [xbp-88h]
  __int64 v18; // [xsp+30h] [xbp-80h]
  __int64 v19; // [xsp+68h] [xbp-48h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 <= a2 )
  {
    if ( v5 < a2 )
    {
      v6 = *(void **)a1;
      v7 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)a1 > a3 || (unsigned __int64)v6 + 96 * v7 <= a3 )
      {
        if ( v7 < a2 )
        {
          v12 = qvector_reserve((pthread_mutex_t *)a1, v6, a2, 0x60u);
          v5 = *(_QWORD *)(a1 + 8);
          v6 = v12;
          *(_QWORD *)a1 = v12;
        }
        if ( v5 < a2 )
        {
          sub_5AEEC((__int64)v6 + 96 * v5, a3);
          if ( v5 + 1 != a2 )
          {
            v13 = 96 * v5 + 96;
            v14 = a2 - 1 - v5;
            do
            {
              sub_5AEEC(*(_QWORD *)a1 + v13, a3);
              --v14;
              v13 += 96;
            }
            while ( v14 );
          }
        }
        *(_QWORD *)(a1 + 8) = a2;
      }
      else
      {
        sub_5AEEC((__int64)v15, a3);
        if ( *(_QWORD *)(a1 + 16) < a2 )
          *(_QWORD *)a1 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, a2, 0x60u);
        v9 = *(_QWORD *)(a1 + 8);
        if ( v9 < a2 )
        {
          v10 = a2 - v9;
          v11 = 96 * v9;
          do
          {
            sub_5AEEC(*(_QWORD *)a1 + v11, (__int64)v15);
            --v10;
            v11 += 96;
          }
          while ( v10 );
        }
        *(_QWORD *)(a1 + 8) = a2;
        if ( ptr )
        {
          v17 = 0;
          qfree(ptr);
          ptr = nullptr;
          v18 = 0;
        }
        if ( v15[0] )
        {
          v15[1] = nullptr;
          qfree(v15[0]);
          v15[0] = nullptr;
          v15[2] = nullptr;
        }
      }
    }
  }
  else
  {
    sub_5A14C((__int64 *)a1, a2);
  }
}
