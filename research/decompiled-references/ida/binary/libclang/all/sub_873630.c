__int64 __fastcall sub_873630(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  bool v17; // al
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 *v22; // rdx
  char v23; // al
  __int64 v24; // rsi
  int v25; // r12d
  unsigned int v26; // r13d
  __int64 v27; // rcx
  void *v28; // rax
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  unsigned __int64 v31; // [rsp+0h] [rbp-F8h]
  _DWORD *v32; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v33; // [rsp+8h] [rbp-F0h]
  __int64 v34; // [rsp+10h] [rbp-E8h] BYREF
  _QWORD *v35; // [rsp+18h] [rbp-E0h]
  char v36; // [rsp+20h] [rbp-D8h]
  _QWORD v37[3]; // [rsp+30h] [rbp-C8h] BYREF
  char v38; // [rsp+48h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A0h]
  void *ptr; // [rsp+60h] [rbp-98h]
  __int64 v41; // [rsp+68h] [rbp-90h]
  _BYTE v42[136]; // [rsp+70h] [rbp-88h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 962);
  if ( (_BYTE)v2 )
    return 0;
  if ( !*(_DWORD *)(a1 + 948) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = a1 + 56;
    if ( v5 == a1 + 56 )
      goto LABEL_12;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v5 + 24);
      if ( v8 )
      {
        if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 33 <= 3 )
        {
          v9 = *(_QWORD *)(v8 + 40);
          if ( (v9 & 7) == 0 )
          {
            v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v10 )
            {
              v11 = *(_QWORD *)(v10 + 16);
              if ( *(_DWORD *)v11 == 10
                && *(_QWORD *)(v11 + 16) == 0x61636F6C6C616564LL
                && *(_WORD *)(v11 + 24) == 25972 )
              {
                v13 = *(_QWORD *)(sub_79A2E0(v8 + 72) + 16);
                v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
                if ( (v13 & 4) != 0 )
                  v14 = (_QWORD *)*v14;
                if ( !v14 )
                  BUG();
                if ( (*((_BYTE *)v14 - 36) & 0x7Fu) - 58 <= 1 )
                {
                  v15 = *(v14 - 3);
                  if ( (v15 & 7) != 0 )
                  {
                    sub_79C450((__int64)(v14 - 8));
                  }
                  else
                  {
                    v16 = (__int64)(v14 - 8);
                    v31 = v15 & 0xFFFFFFFFFFFFFFF8LL;
                    v32 = *(_DWORD **)(v16 + 168);
                    v17 = sub_79C450(v16);
                    if ( v31 )
                    {
                      if ( v17 )
                      {
                        v21 = *(_QWORD *)(v31 + 16);
                        if ( *(_DWORD *)v21 == 9
                          && *(_QWORD *)(v21 + 16) == 0x6F7461636F6C6C61LL
                          && *(_BYTE *)(v21 + 24) == 114
                          && *v32
                          && (v32[2] & 0x7FFFFFFF) == 1 )
                        {
                          if ( *(_DWORD *)(v5 + 176) )
                          {
                            v22 = (__int64 *)*(unsigned __int8 *)(a2 + 3);
                            v38 |= 1u;
                            ptr = v42;
                            memset(v37, 0, sizeof(v37));
                            v41 = 0x800000000LL;
                            v23 = *(_BYTE *)(a2 + 2);
                            v42[65] = 0;
                            v34 = a1;
                            v35 = v37;
                            v24 = *(__int64 *)((char *)&v22[((v23 & 8) != 0) + 1] + a2);
                            v36 = 0;
                            v39 = 0;
                            v33 = sub_871080((__int64)&v34, v24, v22, v18, v19, v20);
                            if ( v33 )
                            {
                              v25 = *(_DWORD *)(a2 + 16);
                              v26 = 1;
                              if ( v25 != 1 )
                              {
                                do
                                {
                                  v27 = 8LL * v26++;
                                  sub_857160(
                                    a1,
                                    *(_QWORD *)(a2
                                              + v27
                                              + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0)
                                              + 8
                                              + *(unsigned __int8 *)(a2 + 3)));
                                }
                                while ( v25 != v26 );
                              }
                              if ( (v38 & 1) == 0 )
                              {
                                if ( (v42[64] & 1) != 0 )
                                {
                                  v30 = sub_8124E0(a2);
                                  sub_A2E050(a1, v30, 2196, 0);
LABEL_36:
                                  v2 = v33;
                                }
                                else
                                {
                                  v28 = sub_8395A0(a1, a2, (__int64)v37, 2u);
                                  v35 = v29;
                                  v34 = (__int64)v28;
                                  if ( (_BYTE)v29 )
                                  {
                                    sub_8224E0((_QWORD *)(a1 + 896), v37[0] >> 3);
                                    goto LABEL_36;
                                  }
                                }
                              }
                            }
                            if ( ptr != v42 )
                              free(ptr);
                            return v2;
                          }
LABEL_12:
                          v2 = 1;
                          v12 = sub_8124E0(a2);
                          sub_A2E1A0(a1, v12, 110, 0);
                          return v2;
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
      v5 = *(_QWORD *)(v5 + 16);
      if ( v5 == v6 )
        goto LABEL_12;
    }
  }
  return v2;
}

