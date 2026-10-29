void __fastcall sub_AD0440(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 *v3; // r13
  unsigned __int64 v6; // rbp
  unsigned int v7; // r12d
  __int64 (__fastcall *v8)(_QWORD *, unsigned __int64, int); // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  __int64 *v12; // rsi
  unsigned int v13; // edx
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 *v16; // r9
  __int64 *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 *v19; // rax
  __int64 v20; // r9
  __int64 v21; // r10
  char *v22; // rdx
  int v23; // edi
  unsigned int v24; // r11d
  char *v25; // rsi
  __int64 v26; // r11
  char *v27; // r8
  char *v28; // rax
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-50h]
  __m128i v33; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(unsigned __int64 **)(a1 + 8);
  v3 = &v2[2 * *(unsigned int *)(a1 + 16)];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1 )
    {
      v2 += 2;
      if ( v3 == v2 )
        return;
    }
    if ( v3 != v2 )
    {
      v6 = *v2;
      v32 = a1 + 32;
      while ( 1 )
      {
        v7 = *((_DWORD *)v2 + 2);
        v8 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, int))(*(_QWORD *)a2 + 16LL);
        if ( v8 == sub_AD0270 )
          v9 = sub_AC8870(a2, v6);
        else
          v9 = v8((_QWORD *)a2, v6, 1);
        if ( !v9 )
          return;
        v10 = *(unsigned int *)(a1 + 40);
        v11 = *(_DWORD *)(v9 + 12);
        v12 = *(__int64 **)(a1 + 32);
        v13 = v10 - 1;
        v10 *= 16;
        v14 = (__int64 *)((char *)v12 + v10);
        v15 = 16LL * (v11 & v13);
        v16 = &v12[(unsigned __int64)v15 / 8];
        if ( v15 == v10 )
        {
LABEL_41:
          if ( v12 != v16 )
          {
            while ( 1 )
            {
              v31 = *v12;
              if ( (unsigned __int64)*v12 > 1 )
              {
                if ( *(_DWORD *)(v31 + 12) == v11 && v9 == v31 )
                {
                  v17 = v12;
                  goto LABEL_25;
                }
              }
              else if ( !v31 )
              {
                goto LABEL_17;
              }
              v12 += 2;
              if ( v16 == v12 )
                goto LABEL_17;
            }
          }
          goto LABEL_17;
        }
        v17 = &v12[(unsigned __int64)v15 / 8];
        while ( 1 )
        {
          v18 = *v17;
          if ( (unsigned __int64)*v17 > 1 )
            break;
          if ( !v18 )
            goto LABEL_17;
LABEL_14:
          v17 += 2;
          if ( v14 == v17 )
            goto LABEL_41;
        }
        if ( *(_DWORD *)(v18 + 12) != v11 || v9 != v18 )
          goto LABEL_14;
LABEL_25:
        v20 = v17[1];
        v21 = *(unsigned int *)(a1 + 16);
        v22 = *(char **)(a1 + 8);
        v23 = *(_DWORD *)(v20 + 12);
        v24 = v21 - 1;
        v21 *= 16;
        v25 = &v22[v21];
        v26 = 16LL * (v23 & v24);
        v27 = &v22[v26];
        v28 = &v22[v26];
        if ( v26 == v21 )
        {
LABEL_33:
          if ( v22 != v27 )
          {
            while ( 1 )
            {
              v30 = *(_QWORD *)v22;
              if ( *(_QWORD *)v22 > 1u )
              {
                if ( *(_DWORD *)(v30 + 12) == v23 && v20 == v30 )
                {
                  v28 = v22;
                  goto LABEL_50;
                }
              }
              else if ( !v30 )
              {
                goto LABEL_18;
              }
              v22 += 16;
              if ( v27 == v22 )
                goto LABEL_18;
            }
          }
          goto LABEL_18;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v29 = *(_QWORD *)v28;
            if ( *(_QWORD *)v28 > 1u )
              break;
            if ( !v29 )
              goto LABEL_18;
            v28 += 16;
            if ( v25 == v28 )
              goto LABEL_33;
          }
          if ( *(_DWORD *)(v29 + 12) == v23 && v20 == v29 )
            break;
          v28 += 16;
          if ( v25 == v28 )
            goto LABEL_33;
        }
LABEL_50:
        if ( v7 < *((_DWORD *)v28 + 2) )
        {
LABEL_17:
          v33.m128i_i64[0] = v9;
          v33.m128i_i64[1] = v6;
          sub_686B20(v32, &v33);
        }
LABEL_18:
        v19 = v2 + 2;
        if ( v3 != v2 + 2 )
        {
          while ( 1 )
          {
            v6 = *v19;
            v2 = v19;
            if ( *v19 > 1 )
              break;
            v19 += 2;
            if ( v3 == v19 )
              return;
          }
          if ( v19 != v3 )
            continue;
        }
        return;
      }
    }
  }
}

