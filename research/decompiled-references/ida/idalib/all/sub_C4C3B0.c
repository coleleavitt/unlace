__int64 __fastcall sub_C4C3B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  __int64 v6; // rcx
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  bool v20; // al
  int v21; // r9d
  __int64 v22; // rax
  char v23; // al
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r12d
  unsigned int v29; // r15d
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned __int64 v33; // [rsp+0h] [rbp-F8h]
  unsigned int *v34; // [rsp+8h] [rbp-F0h]
  __m128i v35; // [rsp+10h] [rbp-E8h] BYREF
  char v36; // [rsp+20h] [rbp-D8h]
  _QWORD v37[3]; // [rsp+30h] [rbp-C8h] BYREF
  char v38; // [rsp+48h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A0h]
  void *ptr; // [rsp+60h] [rbp-98h]
  __int64 v41; // [rsp+68h] [rbp-90h]
  _BYTE v42[64]; // [rsp+70h] [rbp-88h] BYREF
  char v43; // [rsp+B0h] [rbp-48h]
  char v44; // [rsp+B1h] [rbp-47h]

  v5 = *(unsigned __int8 *)(a1 + 914);
  if ( (_BYTE)v5 )
    return 0;
  v6 = *(unsigned int *)(a1 + 900);
  if ( !(_DWORD)v6 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v9 = a1 + 56;
    v10 = a2;
    if ( v8 == a1 + 56 )
      goto LABEL_12;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v8 + 24);
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 35 <= 3 )
        {
          v13 = *(_QWORD *)(v12 + 40);
          if ( (v13 & 7) == 0 )
          {
            v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v14 )
            {
              v15 = *(_QWORD *)(v14 + 16);
              if ( *(_DWORD *)v15 == 10
                && *(_QWORD *)(v15 + 16) == 0x61636F6C6C616564LL
                && *(_WORD *)(v15 + 24) == 25972 )
              {
                v17 = *(_QWORD *)(sub_B8C1B0(v12 + 72) + 16);
                if ( (v17 & 4) != 0 )
                  v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
                else
                  v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v18 )
                  BUG();
                a2 = (*(_BYTE *)(v18 - 36) & 0x7Fu) - 60;
                if ( (unsigned int)a2 <= 1 )
                {
                  a2 = *(_QWORD *)(v18 - 24);
                  v19 = v18 - 64;
                  if ( (a2 & 7) != 0 )
                  {
                    sub_B8EC80(v19);
                  }
                  else
                  {
                    v33 = a2 & 0xFFFFFFFFFFFFFFF8LL;
                    v34 = *(unsigned int **)(v18 + 104);
                    v20 = sub_B8EC80(v19);
                    a2 = v33;
                    if ( v33 )
                    {
                      if ( v20 )
                      {
                        v22 = *(_QWORD *)(v33 + 16);
                        if ( *(_DWORD *)v22 == 9 )
                        {
                          a3 = 0x6F7461636F6C6C61LL;
                          if ( *(_QWORD *)(v22 + 16) == 0x6F7461636F6C6C61LL && *(_BYTE *)(v22 + 24) == 114 )
                          {
                            a3 = *v34;
                            if ( (_DWORD)a3 )
                            {
                              if ( (v34[2] & 0x7FFFFFFF) == 1 )
                              {
                                if ( *(_DWORD *)(v8 + 128) )
                                {
                                  v38 |= 1u;
                                  v35.m128i_i64[0] = a1;
                                  ptr = v42;
                                  v41 = 0x800000000LL;
                                  v23 = *(_BYTE *)(v10 + 2);
                                  memset(v37, 0, sizeof(v37));
                                  v35.m128i_i64[1] = (__int64)v37;
                                  v36 = 0;
                                  v24 = *(_QWORD *)(v10 + 8 * (((v23 & 8) != 0) + 1LL) + 32);
                                  v39 = 0;
                                  v44 = 0;
                                  if ( (unsigned __int8)sub_C48CF0(&v35, v24, a3, v6, a5, v21) )
                                  {
                                    v28 = *(_DWORD *)(v10 + 16);
                                    v29 = 1;
                                    if ( v28 != 1 )
                                    {
                                      do
                                      {
                                        v30 = v29++;
                                        v24 = *(_QWORD *)(v10 + 8 * (v30 + ((*(_BYTE *)(v10 + 2) & 8) != 0)) + 40);
                                        sub_C3FAF0(a1, v24, v25, v30, v27);
                                      }
                                      while ( v28 != v29 );
                                    }
                                    if ( (v38 & 1) == 0 )
                                    {
                                      if ( (v43 & 1) != 0 )
                                      {
                                        v5 = v43 & 1;
                                        v32 = sub_C00A40(v10, v24, v25, v26, v27);
                                        sub_E33B30(a1, v32, 2398, 0);
                                      }
                                      else
                                      {
                                        sub_C1ADD0(a1, v10, (__int64)v37, 2);
                                        if ( (_BYTE)v31 )
                                        {
                                          v5 = v31;
                                          v35.m128i_i32[0] = v37[0] >> 3;
                                          sub_C11E40((_QWORD *)(a1 + 848), &v35);
                                        }
                                      }
                                    }
                                  }
                                  if ( ptr != v42 )
                                    free(ptr);
                                  return v5;
                                }
LABEL_12:
                                v5 = 1;
                                v16 = sub_C00A40(v10, a2, a3, v6, a5);
                                sub_E33C80(a1, v16, 108, 0);
                                return v5;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v8 = *(_QWORD *)(v8 + 16);
      if ( v9 == v8 )
        goto LABEL_12;
    }
  }
  return v5;
}
