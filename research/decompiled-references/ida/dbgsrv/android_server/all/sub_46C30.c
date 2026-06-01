/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C30
// Address: 0x0000000000046C30

//----- (0000000000046C30) ----------------------------------------------------
long double __fastcall sub_46C30(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // x8
  unsigned __int64 v6; // x21
  __int64 v8; // x0
  pthread_mutex_t *v9; // x0
  int v10; // w2
  int v11; // w3
  __int64 v12; // x4
  long double result; // q0
  __int64 v14; // x1
  __int64 v15; // x8
  pthread_mutex_t *v16; // x20
  int v17; // w22
  __int64 v18; // x19
  __int64 v19; // x0
  int v20; // w21
  unsigned __int64 v21; // x23
  unsigned __int64 i; // x8
  unsigned __int64 v23; // x10
  __int64 v24; // x0
  __int64 v25; // x1
  unsigned __int64 v26; // x22
  unsigned __int64 v27; // x8

  if ( a4 )
  {
    v4 = *(_QWORD *)(a1 + 536);
    v6 = a3;
    *(_DWORD *)(v4 + 80) = 0;
    *(_DWORD *)(v4 + 84) = a2;
    v8 = *(_QWORD *)(a1 + 536);
    if ( *(_QWORD *)(v8 + 24) > (unsigned __int64)a3 )
    {
      *(_DWORD *)(v8 + 80) |= *(unsigned __int8 *)(**(_QWORD **)(v8 + 8) + 32LL * a3 + 12);
      v8 = *(_QWORD *)(a1 + 536);
    }
    v9 = (pthread_mutex_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 536);
      if ( *(_QWORD *)(v14 + 24) <= v6 )
      {
        if ( !under_debugger )
          v9 = interr(3258);
        __break(1u);
        if ( v12 )
        {
          v15 = *(&v9[13].__align + 2);
          v16 = v9;
          v17 = v11;
          v18 = v12;
          *(_DWORD *)(v15 + 80) = 0;
          *(_DWORD *)(v15 + 84) = v14;
          v19 = *(&v9[13].__align + 2);
          v20 = v10;
          v21 = v11;
          if ( v11 )
          {
            for ( i = 0; i < v11; ++i )
            {
              v23 = v10 + (int)i;
              if ( *(_QWORD *)(v19 + 24) > v23 )
              {
                *(_DWORD *)(v19 + 80) |= *(unsigned __int8 *)(**(_QWORD **)(v19 + 8) + 32 * v23 + 12);
                v19 = *(&v16[13].__align + 2);
              }
            }
          }
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
          if ( (v24 & 1) != 0 )
          {
            v25 = *(&v16[13].__align + 2);
            if ( !v17 )
LABEL_23:
              __asm { BR              X2 }
            v26 = 0;
            while ( 1 )
            {
              v27 = v20 + (int)v26;
              if ( *(_QWORD *)(v25 + 24) <= v27 )
                break;
              v24 = sub_4A17C((int *)(*(_QWORD *)(v25 + 16) + 40 * v27), v25, v18);
              if ( (v24 & 1) == 0 )
                return result;
              v25 = *(&v16[13].__align + 2);
              ++v26;
              v18 += 32;
              if ( v26 >= v21 )
                goto LABEL_23;
            }
            if ( !under_debugger )
              v24 = (__int64)interr(3258);
            __break(1u);
            return sub_46E38((pthread_mutex_t *)v24, v25);
          }
        }
      }
      else if ( (sub_4A17C((int *)(*(_QWORD *)(v14 + 16) + 40 * v6), v14, a4) & 1) != 0 )
      {
        (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536));
      }
    }
  }
  return result;
}
// 46D14: variable 'v12' is possibly undefined
// 46D20: variable 'v11' is possibly undefined
// 46D28: variable 'v14' is possibly undefined
// 46D30: variable 'v10' is possibly undefined
// 46E35: variable 'v25' is possibly undefined
// 168DF0: using guessed type char under_debugger;
