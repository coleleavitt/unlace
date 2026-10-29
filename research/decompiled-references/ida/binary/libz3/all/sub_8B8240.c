__int64 __fastcall sub_8B8240(__int64 a1, __int64 a2, unsigned int **a3)
{
  unsigned int v3; // r14d
  __int64 v7; // rax
  __int64 v8; // rbx
  _DWORD *v9; // rsi
  int v10; // edi
  __int64 v11; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  bool v15; // cc
  unsigned int v16; // r15d
  __int64 v17; // rax
  unsigned int *v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rsi
  __int64 v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+18h] [rbp-60h]
  __int64 v23; // [rsp+18h] [rbp-60h]
  unsigned __int8 v24; // [rsp+2Fh] [rbp-49h] BYREF
  _OWORD v25[4]; // [rsp+30h] [rbp-48h] BYREF

  v3 = 0;
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 )
  {
    while ( 1 )
    {
      if ( v3 >= *(_DWORD *)(v7 - 4) )
        return 1;
      v8 = *(_QWORD *)(v7 + 8LL * v3);
      if ( *(_WORD *)(v8 + 4) )
        goto LABEL_3;
      v9 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
      if ( !v9 || *v9 != 5 )
        goto LABEL_3;
      v10 = v9[1];
      if ( v10 == 6 )
      {
        v13 = *(_QWORD *)(v8 + 32);
        if ( *(_WORD *)(v13 + 4) )
          return 0;
        v14 = *(_QWORD *)(a1 + 24);
        ++*(_DWORD *)(v8 + 8);
        v22 = v14;
        v25[0] = _mm_loadh_ps((const double *)a2);
        sub_892C40((__int64 **)v25, v13);
        v15 = *(_DWORD *)(v8 + 24) <= 1u;
        v16 = 1;
        v24 = *((_BYTE *)*a3 + v3);
        if ( !v15 )
        {
          while ( 1 )
          {
            v17 = *(_QWORD *)(v8 + 8LL * v16 + 32);
            if ( *(_WORD *)(v17 + 4) )
              break;
            *(_QWORD *)&v25[0] = *(_QWORD *)(v8 + 8LL * v16 + 32);
            ++*(_DWORD *)(v17 + 8);
            sub_892DF0((_QWORD *)(a2 + 8), v25);
            v18 = *a3;
            if ( !*a3 || (v19 = *(v18 - 1), v19 == *(v18 - 2)) )
            {
              sub_3F2670(a3);
              v18 = *a3;
              v19 = *(*a3 - 1);
            }
            ++v16;
            *((_BYTE *)v18 + v19) = v24;
            *(v18 - 1) = v19 + 1;
            if ( v16 >= *(_DWORD *)(v8 + 24) )
              goto LABEL_22;
          }
          sub_892CB0(v8, v22);
          return 0;
        }
LABEL_22:
        sub_892CB0(v8, v22);
        goto LABEL_14;
      }
      if ( v10 == 9 && *(_DWORD *)(v8 + 24) == 2 )
      {
        v21 = *(_QWORD *)(v8 + 40);
        v23 = *(_QWORD *)(v8 + 32);
        if ( (unsigned __int8)sub_897610(a1, v23, &v24) && !*(_WORD *)(v21 + 4) )
        {
          v20 = v21;
          v25[0] = _mm_loadh_ps((const double *)a2);
LABEL_31:
          sub_892C40((__int64 **)v25, v20);
          *((_BYTE *)*a3 + v3) = *((_BYTE *)*a3 + v3) == v24;
          goto LABEL_14;
        }
        if ( (unsigned __int8)sub_897610(a1, v21, &v24) && !*(_WORD *)(v23 + 4) )
        {
          v20 = v23;
          v25[0] = _mm_loadh_ps((const double *)a2);
          goto LABEL_31;
        }
        ++v3;
LABEL_14:
        v7 = *(_QWORD *)(a2 + 8);
        if ( !v7 )
          return 1;
      }
      else
      {
        if ( v9[1] == 8 && *(_DWORD *)(v8 + 24) == 1 )
        {
          v11 = *(_QWORD *)(v8 + 32);
          if ( !*(_WORD *)(v11 + 4) )
          {
            v25[0] = _mm_loadh_ps((const double *)a2);
            sub_892C40((__int64 **)v25, v11);
            *((_BYTE *)*a3 + v3) ^= 1u;
            goto LABEL_14;
          }
        }
LABEL_3:
        ++v3;
      }
    }
  }
  return 1;
}

