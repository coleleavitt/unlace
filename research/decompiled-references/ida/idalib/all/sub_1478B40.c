void __fastcall sub_1478B40(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // r13
  __int64 v7; // rdx
  __int64 v8; // r12
  char v9; // al
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 *v12; // r15
  __int64 *v13; // r12
  _QWORD *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r10
  _QWORD *v17; // rdx
  __int64 v18; // rsi
  _QWORD *v19; // rsi
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 *v25; // [rsp+10h] [rbp-58h] BYREF
  __int64 v26; // [rsp+18h] [rbp-50h]
  _BYTE v27[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(__int64 **)(a2 + 40);
  v26 = 0x100000000LL;
  v3 = *(unsigned int *)(a2 + 48);
  v25 = (__int64 *)v27;
  v4 = &v2[v3];
  if ( v2 != v4 )
  {
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *v2;
        v9 = *(_BYTE *)(*v2 + 34) & 0xF;
        if ( *(_WORD *)(*(_QWORD *)(*v2 + 72) + 8LL) == 19 && v9 == 4 )
          break;
        if ( v9 == 5 )
          break;
        if ( v4 == ++v2 )
          goto LABEL_10;
      }
      v10 = (unsigned int)v7;
      v11 = (unsigned int)v7 + 1LL;
      if ( v11 > HIDWORD(v26) )
      {
        sub_2237220(&v25, v27, v11, 8);
        v10 = (unsigned int)v26;
      }
      ++v2;
      v25[v10] = v8;
      v7 = (unsigned int)(v26 + 1);
      LODWORD(v26) = v26 + 1;
    }
    while ( v4 != v2 );
LABEL_10:
    v12 = v25;
    v13 = &v25[v7];
    if ( v25 != v13 )
    {
      v24 = a1 + 24;
      while ( 1 )
      {
        v14 = *(_QWORD **)(a2 + 40);
        v15 = *v12;
        v16 = *(unsigned int *)(a2 + 48);
        v17 = &v14[v16];
        v18 = (8 * v16) >> 3;
        if ( (8 * v16) >> 5 )
        {
          v19 = v14 + 1;
          if ( v15 == *v14 )
          {
            v20 = *(_QWORD **)(a2 + 40);
          }
          else
          {
            v20 = v14 + 1;
            v19 = v14 + 2;
            if ( v15 != v14[1] )
            {
              v20 = v14 + 2;
              v19 = v14 + 3;
              if ( v15 != v14[2] )
              {
                v20 = v14 + 3;
                v19 = v14 + 4;
                v21 = &v14[4 * ((8 * v16) >> 5)];
                if ( v15 != v14[3] )
                {
                  while ( 1 )
                  {
                    v20 = v14 + 4;
                    if ( v21 == v14 + 4 )
                    {
                      v18 = v17 - v20;
                      goto LABEL_25;
                    }
                    if ( v15 == v14[4] )
                    {
                      v19 = v14 + 5;
                      goto LABEL_29;
                    }
                    if ( v15 == v14[5] )
                    {
                      v20 = v14 + 5;
                      v19 = v14 + 6;
                      goto LABEL_29;
                    }
                    if ( v15 == v14[6] )
                    {
                      v20 = v14 + 6;
                      v19 = v14 + 7;
                      goto LABEL_29;
                    }
                    if ( v15 == v14[7] )
                      break;
                    v14 += 4;
                  }
                  v20 = v14 + 7;
                  v19 = v14 + 8;
                }
              }
            }
          }
          goto LABEL_29;
        }
        v20 = *(_QWORD **)(a2 + 40);
LABEL_25:
        if ( v18 == 2 )
          break;
        if ( v18 == 3 )
        {
          v19 = v20 + 1;
          if ( v15 == *v20 )
            goto LABEL_29;
          v20 += 2;
          if ( v15 == *v19 )
          {
LABEL_48:
            v23 = v20;
            v20 = v19;
            v19 = v23;
            goto LABEL_29;
          }
          goto LABEL_42;
        }
        if ( v18 == 1 )
          goto LABEL_42;
LABEL_28:
        v19 = v17 + 1;
        v20 = v17;
LABEL_29:
        if ( v17 != v19 )
        {
          memmove(v20, v19, (char *)v17 - (char *)v19);
          LODWORD(v16) = *(_DWORD *)(a2 + 48);
        }
        *(_DWORD *)(a2 + 48) = v16 - 1;
        v22 = *(unsigned int *)(a1 + 16);
        if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
        {
          ++v12;
          sub_2237220(a1 + 8, v24, v22 + 1, 8);
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 16))++) = v15;
          if ( v13 == v12 )
          {
LABEL_33:
            v13 = v25;
            goto LABEL_34;
          }
        }
        else
        {
          ++v12;
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v22) = v15;
          ++*(_DWORD *)(a1 + 16);
          if ( v13 == v12 )
            goto LABEL_33;
        }
      }
      v19 = v20++;
      if ( v15 == *v19 )
        goto LABEL_48;
LABEL_42:
      v19 = v20 + 1;
      if ( v15 == *v20 )
        goto LABEL_29;
      goto LABEL_28;
    }
LABEL_34:
    if ( v13 != (__int64 *)v27 )
      free(v13);
  }
}
