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
  __int64 *v22; // rbx
  __int64 v24; // r12
  __int64 v25; // rdi
  __int64 i; // rbp
  __int64 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 v31; // rdi
  __int64 j; // rbp
  __int64 *v33; // rax
  __int64 v34; // rdx
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rsi
  int v40; // edi
  __int64 v41; // [rsp+18h] [rbp-90h] BYREF
  __int64 v42; // [rsp+20h] [rbp-88h] BYREF
  __int64 v43; // [rsp+28h] [rbp-80h]
  __int128 v44; // [rsp+30h] [rbp-78h]
  __int64 v45[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v46; // [rsp+50h] [rbp-58h]
  __int128 v47; // [rsp+58h] [rbp-50h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v48 = __readfsqword(0x28u);
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
    v36 = *(_QWORD *)(a1 + 16);
    v37 = *(_DWORD *)(v36 + 1416);
    if ( (v37 & 0x800) != 0 )
    {
      BYTE1(v37) &= ~8u;
      *(_DWORD *)(v36 + 1416) = v37;
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
  v38 = *((_QWORD *)a3 + 2);
  v39 = v7 + 8;
  *a3 = v39;
  v40 = *(_DWORD *)(v38 + v7);
  if ( v40 )
  {
    if ( v40 != 1 )
      return 0;
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  if ( (unsigned int)v39 > 0x2F )
  {
    v11 = *((_DWORD **)a3 + 1);
    goto LABEL_8;
  }
  v9 = (_DWORD *)(v39 + v38);
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
      if ( *v14 == 36 && (unsigned int)qsscanf() == 1 )
      {
        v15 = v45[0];
        if ( v45[0] != -1 )
        {
          if ( !v12 )
          {
            sub_2B61B0(*(_QWORD *)(a1 + 16), v45[0], 0);
            netnode_supdel();
            return 0;
          }
          func = get_func();
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
                sub_137260((__int64)"Refreshing decompiler-level breakpoints...", "$%a");
                v17 = *(_QWORD *)(a1 + 16);
              }
              v42 = func;
              v45[0] = 0;
              v45[1] = -1;
              v46 = 0;
              v43 = 0;
              v47 = 0;
              v44 = 0;
              sub_14CDC0(&v41, *(_QWORD *)(v17 + 112), &v42, v45, 1);
              if ( v43 )
              {
                *(_QWORD *)&v44 = 0;
                qfree(v43);
              }
              if ( v41 )
              {
                v20 = (__int64 *)sub_38C6C0(v41, (unsigned int)(*(_DWORD *)(v13 + 32) - 1), v19);
                v21 = -1;
                if ( (unsigned __int64)v20 > 1 )
                  v21 = *v20;
                sub_2B61B0(*(_QWORD *)(a1 + 16), v15, 1);
                v42 = v21 - v15;
                netnode_supset();
              }
              else
              {
                if ( LODWORD(v45[0]) == -18 )
                {
                  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x1000u;
LABEL_47:
                  if ( v46 )
                  {
                    *(_QWORD *)&v47 = 0;
                    qfree(v46);
                  }
                  return 0;
                }
                sub_2B4E70((__int64)"%a: failed to decompile previously decompilable function", 0.0);
              }
              v22 = (__int64 *)v41;
              if ( v41 )
              {
                if ( (*(_DWORD *)(v41 + 104))-- == 1 )
                {
                  sub_258970(v22);
                  if ( v22[23] )
                  {
                    v24 = v22[24];
                    if ( v24 )
                    {
                      v25 = v22[23];
                      for ( i = 0; i != v24; ++i )
                      {
                        v27 = (__int64 *)(v25 + 24 * i);
                        v28 = *v27;
                        if ( *v27 )
                        {
                          v27[1] = 0;
                          qfree(v28);
                          v25 = v22[23];
                        }
                      }
                    }
                    else
                    {
                      v25 = v22[23];
                    }
                    v22[24] = 0;
                    qfree(v25);
                  }
                  v29 = v22[20];
                  if ( v29 )
                  {
                    v22[21] = 0;
                    qfree(v29);
                  }
                  if ( v22[16] )
                  {
                    v30 = v22[17];
                    if ( v30 )
                    {
                      v31 = v22[16];
                      for ( j = 0; j != v30; ++j )
                      {
                        v33 = (__int64 *)(v31 + 32 * j);
                        v34 = *v33;
                        if ( *v33 )
                        {
                          v33[1] = 0;
                          qfree(v34);
                          v31 = v22[16];
                        }
                      }
                    }
                    else
                    {
                      v31 = v22[16];
                    }
                    v22[17] = 0;
                    qfree(v31);
                  }
                  sub_255050((__int64)(v22 + 2));
                  j__qfree((__int64)v22);
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
