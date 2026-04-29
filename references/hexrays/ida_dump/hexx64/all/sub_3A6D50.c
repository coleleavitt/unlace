__int64 __fastcall sub_3A6D50(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  int *v8; // rsi
  _DWORD *v9; // rcx
  int v10; // esi
  _DWORD *v11; // rax
  char v12; // r12
  __int64 v13; // rbp
  _BYTE *v14; // rax
  __int64 v15; // r13
  __int64 func; // r12
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 *v24; // rbx
  __int64 v26; // r12
  __int64 v27; // rdi
  __int64 i; // rbp
  __int64 *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rdi
  __int64 j; // rbp
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rsi
  int v42; // edi
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // [rsp+18h] [rbp-90h] BYREF
  __int64 v46; // [rsp+20h] [rbp-88h] BYREF
  __int64 v47; // [rsp+28h] [rbp-80h]
  __int128 v48; // [rsp+30h] [rbp-78h]
  __int64 v49[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v50; // [rsp+50h] [rbp-58h]
  __int128 v51; // [rsp+58h] [rbp-50h]
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( a2 == 20 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x400u;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x1000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x800u;
    return 0;
  }
  if ( a2 == 21 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x400u;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x1000u;
    v38 = *(_QWORD *)(a1 + 16);
    v39 = *(_DWORD *)(v38 + 1416);
    if ( (v39 & 0x800) != 0 )
    {
      BYTE1(v39) &= ~8u;
      *(_DWORD *)(v38 + 1416) = v39;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui, a5, a6);
    }
    return 0;
  }
  if ( a2 != 19 )
    return 0;
  v7 = *a3;
  if ( *a3 > 0x2F )
  {
    v8 = *((int **)a3 + 1);
    v9 = v8 + 2;
    *((_QWORD *)a3 + 1) = v8 + 2;
    v10 = *v8;
    v11 = v9;
    if ( !v10 )
    {
      v12 = 1;
      goto LABEL_9;
    }
    if ( v10 != 1 )
      return 0;
    v12 = 0;
LABEL_8:
    v9 = v11;
LABEL_9:
    *((_QWORD *)a3 + 1) = v9 + 2;
    goto LABEL_10;
  }
  v40 = *((_QWORD *)a3 + 2);
  v41 = v7 + 8;
  *a3 = v41;
  v42 = *(_DWORD *)(v40 + v7);
  if ( v42 )
  {
    if ( v42 != 1 )
      return 0;
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  if ( (unsigned int)v41 > 0x2F )
  {
    v11 = *((_DWORD **)a3 + 1);
    goto LABEL_8;
  }
  v9 = (_DWORD *)(v41 + v40);
  *a3 = v7 + 16;
LABEL_10:
  v13 = *(_QWORD *)v9;
  if ( *(_DWORD *)(*(_QWORD *)v9 + 44LL) == 3 && (*(_BYTE *)(v13 + 76) & 2) != 0 )
  {
    v14 = (_BYTE *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                     1105,
                     *(unsigned int *)(v13 + 40),
                     &callui,
                     v9,
                     a5,
                     a6);
    if ( v14 )
    {
      if ( *v14 == 36 && (unsigned int)qsscanf(v14, "$%a", v49) == 1 )
      {
        v15 = v49[0];
        if ( v49[0] != -1 )
        {
          if ( !v12 )
          {
            v43 = *(_QWORD *)(v13 + 32);
            v44 = sub_2B61B0(*(_QWORD *)(a1 + 16), v49[0], 0);
            netnode_supdel(v44, (int)v43, 110);
            return 0;
          }
          func = get_func(v49[0]);
          if ( func )
          {
            v17 = *(_QWORD *)(a1 + 16);
            v18 = *(_DWORD *)(v17 + 1416);
            if ( (v18 & 0x1000) == 0 )
            {
              if ( (v18 & 0x400) != 0 && (v18 & 0x800) == 0 )
              {
                BYTE1(v18) |= 8u;
                *(_DWORD *)(v17 + 1416) = v18;
                sub_137260((__int64)"Refreshing decompiler-level breakpoints...");
                v17 = *(_QWORD *)(a1 + 16);
              }
              v46 = func;
              v49[0] = 0;
              v49[1] = -1;
              v50 = 0;
              v47 = 0;
              v51 = 0;
              v48 = 0;
              sub_14CDC0(&v45, *(_QWORD *)(v17 + 112), &v46, v49, 1);
              if ( v47 )
              {
                *(_QWORD *)&v48 = 0;
                qfree(v47);
              }
              if ( v45 )
              {
                v20 = (__int64 *)sub_38C6C0(v45, (unsigned int)(*(_DWORD *)(v13 + 32) - 1), v19, 0.0);
                v21 = -1;
                if ( (unsigned __int64)v20 > 1 )
                  v21 = *v20;
                v22 = *(_QWORD *)(v13 + 32);
                v23 = sub_2B61B0(*(_QWORD *)(a1 + 16), v15, 1);
                v46 = v21 - v15;
                netnode_supset(v23, (int)v22, &v46, 8, 110);
              }
              else
              {
                if ( LODWORD(v49[0]) == -18 )
                {
                  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x1000u;
LABEL_47:
                  if ( v50 )
                  {
                    *(_QWORD *)&v51 = 0;
                    qfree(v50);
                  }
                  return 0;
                }
                sub_2B4E70((__int64)"%a: failed to decompile previously decompilable function", 0.0);
              }
              v24 = (__int64 *)v45;
              if ( v45 )
              {
                if ( (*(_DWORD *)(v45 + 104))-- == 1 )
                {
                  sub_258970(v24);
                  if ( v24[23] )
                  {
                    v26 = v24[24];
                    if ( v26 )
                    {
                      v27 = v24[23];
                      for ( i = 0; i != v26; ++i )
                      {
                        v29 = (__int64 *)(v27 + 24 * i);
                        v30 = *v29;
                        if ( *v29 )
                        {
                          v29[1] = 0;
                          qfree(v30);
                          v27 = v24[23];
                        }
                      }
                    }
                    else
                    {
                      v27 = v24[23];
                    }
                    v24[24] = 0;
                    qfree(v27);
                  }
                  v31 = v24[20];
                  if ( v31 )
                  {
                    v24[21] = 0;
                    qfree(v31);
                  }
                  if ( v24[16] )
                  {
                    v32 = v24[17];
                    if ( v32 )
                    {
                      v33 = v24[16];
                      for ( j = 0; j != v32; ++j )
                      {
                        v35 = (__int64 *)(v33 + 32 * j);
                        v36 = *v35;
                        if ( *v35 )
                        {
                          v35[1] = 0;
                          qfree(v36);
                          v33 = v24[16];
                        }
                      }
                    }
                    else
                    {
                      v33 = v24[16];
                    }
                    v24[17] = 0;
                    qfree(v33);
                  }
                  sub_255050((__int64)(v24 + 2));
                  j__qfree(v24);
                }
              }
              goto LABEL_47;
            }
          }
        }
      }
    }
  }
  return 0;
}
