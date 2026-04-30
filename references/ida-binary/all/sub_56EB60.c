__int64 __fastcall sub_56EB60(__int64 a1, unsigned int a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // r12
  _BYTE v20[41]; // [rsp+Fh] [rbp-29h] BYREF

  if ( a2 >= *(_DWORD *)(a1 + 8) )
    __assert_fail("(uint32_t)(version) < (&self->heads)->size", "lib/src/./stack.c", 0x240u, "ts_stack_pop_error");
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 48LL * a2);
  v7 = *(unsigned __int16 *)(v6 + 208);
  if ( !(_WORD)v7 )
    return 0;
  v8 = *(_QWORD *)(v6 + 24);
  if ( !v8 || (v8 & 1) != 0 || *(_WORD *)(v8 + 40) != 0xFFFF )
  {
    if ( v7 == 1 )
      return 0;
    if ( !*(_QWORD *)(v6 + 48)
      || (v9 = *(_QWORD *)(v6 + 48), (v9 & 1) != 0)
      || (BYTE1(v9) = *(_BYTE *)(v6 + 49), *(_WORD *)(v9 + 40) != 0xFFFF) )
    {
      if ( v7 == 2 )
        return 0;
      if ( !*(_QWORD *)(v6 + 72)
        || (v10 = *(_QWORD *)(v6 + 72), (v10 & 1) != 0)
        || (BYTE1(v10) = *(_BYTE *)(v6 + 73), *(_WORD *)(v10 + 40) != 0xFFFF) )
      {
        if ( v7 == 3 )
          return 0;
        if ( !*(_QWORD *)(v6 + 96)
          || (v11 = *(_QWORD *)(v6 + 96), (v11 & 1) != 0)
          || (BYTE1(v11) = *(_BYTE *)(v6 + 97), *(_WORD *)(v11 + 40) != 0xFFFF) )
        {
          if ( v7 == 4 )
            return 0;
          if ( !*(_QWORD *)(v6 + 120)
            || (v12 = *(_QWORD *)(v6 + 120), (v12 & 1) != 0)
            || (BYTE1(v12) = *(_BYTE *)(v6 + 121), *(_WORD *)(v12 + 40) != 0xFFFF) )
          {
            if ( v7 == 5 )
              return 0;
            if ( !*(_QWORD *)(v6 + 144)
              || (v13 = *(_QWORD *)(v6 + 144), (v13 & 1) != 0)
              || (BYTE1(v13) = *(_BYTE *)(v6 + 145), *(_WORD *)(v13 + 40) != 0xFFFF) )
            {
              if ( v7 == 6 )
                return 0;
              if ( !*(_QWORD *)(v6 + 168)
                || (v14 = *(_QWORD *)(v6 + 168), (v14 & 1) != 0)
                || (BYTE1(v14) = *(_BYTE *)(v6 + 169), *(_WORD *)(v14 + 40) != 0xFFFF) )
              {
                if ( v7 == 7 )
                  return 0;
                if ( !*(_QWORD *)(v6 + 192) )
                  return 0;
                v15 = *(_QWORD *)(v6 + 192);
                if ( (v15 & 1) != 0 )
                  return 0;
                BYTE1(v15) = *(_BYTE *)(v6 + 193);
                if ( *(_WORD *)(v15 + 40) != 0xFFFF )
                  return 0;
              }
            }
          }
        }
      }
    }
  }
  v20[0] = 0;
  v17 = sub_56D830(a1, a2, (__int64 (__fastcall *)(__int64, __int64))sub_55C960, (__int64)v20, 1, a3, a4, a5, a6);
  v19 = v17;
  if ( !v18 )
    return 0;
  if ( v18 != 1 )
    __assert_fail("pop.size == 1", "lib/src/./stack.c", 0x246u, "ts_stack_pop_error");
  sub_56E900(a1, *(_DWORD *)(v17 + 16), a2);
  return *(_QWORD *)v19;
}
