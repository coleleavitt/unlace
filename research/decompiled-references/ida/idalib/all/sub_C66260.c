__int64 __fastcall sub_C66260(__m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // edx
  __int64 *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rsi
  int v23; // edi
  __int64 v24; // r14
  _QWORD *v25; // r15
  __m128i *v26; // rbp
  unsigned __int8 v27; // r12
  __int64 v28[9]; // [rsp+0h] [rbp-48h] BYREF

  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a1->m128i_i64[0] + 32);
  if ( v10 )
  {
    v6 = *(_QWORD *)(v10 + 24);
    if ( v6 )
    {
      if ( (*(_BYTE *)(v6 + 80) & 0x7Fu) - 35 <= 3 )
      {
        v11 = *(_QWORD *)(sub_B8C1B0(v6 + 72) + 16);
        v12 = (v11 & 4) != 0 ? *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL) : v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v12 )
        {
          if ( v12 != 64 )
          {
            v13 = *(_QWORD *)(v12 + 64);
            if ( v13 )
            {
              if ( (*(_BYTE *)(v13 + 10) & 0x20) != 0 && (unsigned int)sub_B77890(v6) == 42 && *(char *)(a2 + 2) < 0 )
              {
                v6 = a1->m128i_i64[0];
                if ( *(_BYTE *)(a1->m128i_i64[0] + 914) )
                {
LABEL_13:
                  LODWORD(v6) = 0;
                  return (unsigned int)v6;
                }
                v20 = *(_QWORD *)(v6 + 32);
                v21 = *(_DWORD *)(v20 + 184);
                v22 = *(_QWORD *)(v20 + 168);
                if ( v21 )
                {
                  v23 = v21 - 1;
                  v15 = (v21 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
                  v16 = (__int64 *)(v22 + 16LL * v15);
                  a5 = *v16;
                  if ( v9 != *v16 )
                  {
                    v14 = 1;
                    if ( a5 == -4096 )
                      goto LABEL_17;
                    while ( 1 )
                    {
                      a6 = (unsigned int)(v14 + 1);
                      v15 = v23 & (v14 + v15);
                      v16 = (__int64 *)(v22 + 16LL * v15);
                      a5 = *v16;
                      if ( v9 == *v16 )
                        break;
                      v14 = a6;
                      if ( a5 == -4096 )
                        goto LABEL_17;
                    }
                  }
                  v24 = v16[1];
                  if ( v24 )
                  {
                    v25 = *(_QWORD **)(v20 + 24);
                    v26 = (__m128i *)a1->m128i_i64[1];
                    v27 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                           + 8LL)
                                               & 0xFFFFFFFFFFFFFFF0LL)
                                   + 16LL);
                    if ( !sub_B979F0(v25) )
                    {
                      LODWORD(v6) = sub_C36A70(v6, (_DWORD *)a2, v26, v25, v24, (unsigned int)v27 - 43 <= 1);
                      return (unsigned int)v6;
                    }
                    goto LABEL_13;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_17:
  v17 = *(_BYTE *)(v9 + 28) & 0x7F;
  LOBYTE(v6) = (((_BYTE)v17 + 99) & 0x7Fu) <= 2 || (unsigned int)(unsigned __int8)v17 - 34 <= 5;
  if ( (_BYTE)v6 )
  {
    sub_A4F2A0((__int64)v28, v9, 0, 0);
    sub_C24210(a1->m128i_i64[1], v28[0], (__int64 *)v28[1], 0);
  }
  else
  {
    v19 = (unsigned int)(unsigned __int8)v17 - 40;
    if ( (unsigned int)v19 > 6 )
    {
      if ( (_BYTE)v17 == 52 )
        LODWORD(v6) = sub_C5C820(a1, *(__m128i **)(v9 + 64), v17, v19, a5, a6);
      else
        LODWORD(v6) = sub_C14310(a1->m128i_i64[0], a2);
    }
    else
    {
      LODWORD(v6) = sub_C24D70(a1->m128i_i64, a2, v9, v19, a5, a6);
    }
  }
  return (unsigned int)v6;
}
