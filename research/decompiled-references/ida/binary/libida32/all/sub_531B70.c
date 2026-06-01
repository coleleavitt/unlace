__int64 __fastcall sub_531B70(__int64 a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r13
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  const char *v9; // rsi
  __int64 v10; // r15
  __int64 v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rbx
  __int64 v22; // r8
  void *v23; // rax
  void *v24; // rax
  _QWORD *v25; // [rsp+8h] [rbp-60h]
  size_t na; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+10h] [rbp-58h]
  const void **v28; // [rsp+18h] [rbp-50h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  _QWORD v30[9]; // [rsp+20h] [rbp-48h] BYREF

  v30[1] = __readfsqword(0x28u);
  v4 = *a2;
  if ( !(_BYTE)v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 1632);
  if ( v4 <= 0xFF
    || (a3 & 1) == 0
    || (v8 = sub_5312B0(*(__int64 **)(a1 + 1632), v4, nullptr), v17 = *(_WORD *)(v8 + 68), (~(_BYTE)v17 & 0x70) != 0)
    && (*(_QWORD *)(v8 + 32) || (v17 & 0x1000) != 0)
    || !v8 )
  {
    v30[0] = 0;
    copy_tinfo_t(v30);
    v7 = *a2;
    if ( *a2 <= 0xFF )
      goto LABEL_5;
    v15 = sub_51B750(v5, *a2);
    if ( (~(unsigned __int8)*(_WORD *)(v15 + 68) & 0x70) == 0 )
    {
      v7 = *(_QWORD *)v15;
      --*(_DWORD *)(v15 + 64);
      if ( v7 <= 0xFF )
      {
LABEL_5:
        if ( !v7 )
        {
          if ( !under_debugger )
            interr(2054);
          BUG();
        }
        goto LABEL_6;
      }
      v16 = sub_51B750(v5, v7);
      ++*(_DWORD *)(v16 + 64);
    }
LABEL_6:
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 144) + 8 * sub_51B540(a1, a2, v7));
    *(_QWORD *)v8 = v7;
    v9 = (const char *)v30[0];
    *(_WORD *)(v8 + 68) |= 0x70u;
    *a2 |= v7 & 0x100;
    if ( (unsigned __int64)v9 > 0xFF )
    {
      v10 = sub_51B750(v5, (unsigned __int64)v9);
      if ( (~(unsigned __int8)*(_WORD *)(v10 + 68) & 0x70) == 0 || (a3 & 1) == 0 )
      {
        if ( (a3 & 2) != 0 && *(_QWORD *)(v10 + 40) )
        {
          v12 = qalloc_or_throw(24, v9);
          v13 = *(_QWORD **)(v10 + 40);
          *(_QWORD *)v12 = 0;
          *(_OWORD *)(v12 + 8) = 0;
          v14 = v13[1];
          v25 = v13;
          if ( v14 )
          {
            v18 = qalloc_or_throw(48 * v14, v9);
            *(_QWORD *)v12 = v18;
            v19 = v18;
            v20 = 0;
            *(_QWORD *)(v12 + 16) = v14;
            while ( 1 )
            {
              v21 = 48 * v20 + v19;
              v22 = *v25 + 48 * v20;
              *(_QWORD *)v21 = 0;
              *(_OWORD *)(v21 + 8) = 0;
              if ( *(_QWORD *)(v22 + 8) )
              {
                v28 = (const void **)v22;
                na = *(_QWORD *)(v22 + 8);
                v23 = (void *)qalloc_or_throw(na, v9);
                *(_QWORD *)v21 = v23;
                *(_QWORD *)(v21 + 16) = na;
                v9 = (const char *)*v28;
                memcpy(v23, *v28, na);
                v22 = (__int64)v28;
                *(_QWORD *)(v21 + 8) = na;
              }
              *(_QWORD *)(v21 + 24) = 0;
              *(_OWORD *)(v21 + 32) = 0;
              if ( *(_QWORD *)(v22 + 32) )
              {
                v29 = v22;
                n = *(_QWORD *)(v22 + 32);
                v24 = (void *)qalloc_or_throw(n, v9);
                *(_QWORD *)(v21 + 24) = v24;
                *(_QWORD *)(v21 + 40) = n;
                v9 = *(const char **)(v29 + 24);
                memcpy(v24, v9, n);
                *(_QWORD *)(v21 + 32) = n;
              }
              if ( v14 == ++v20 )
                break;
              v19 = *(_QWORD *)v12;
            }
            *(_QWORD *)(v12 + 8) = v14;
          }
          *(_QWORD *)(v8 + 40) = v12;
        }
        *(_BYTE *)(v8 + 71) = *(_BYTE *)(v10 + 71);
      }
    }
    clear_tinfo_t(v30);
  }
  return v8;
}

