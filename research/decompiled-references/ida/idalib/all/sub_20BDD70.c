void __fastcall sub_20BDD70(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rsi
  int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // r12
  _QWORD *v13; // r13
  _QWORD *v14; // r11
  _QWORD *v15; // rsi
  __int64 v17; // r15
  __int64 v18; // r9
  __int64 *v19; // rbp
  __int64 v20; // rdx
  _QWORD *v21; // rdi
  int v22; // eax
  int v23; // esi
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf
  int v27; // ecx
  __int64 v28; // [rsp+8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+10h] [rbp-48h] BYREF
  _QWORD *v30; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 )
  {
    v17 = *(_QWORD *)sub_20CB0D0(a1);
    v28 = a1;
    if ( (unsigned __int8)sub_20A15A0((__int64 *)(v17 + 2712), &v28, &v29) )
    {
      v19 = (__int64 *)(v29 + 8);
      if ( *(_DWORD *)(v29 + 16) )
      {
LABEL_17:
        sub_20B3750(v19, a2);
        sub_20B3DB0((__int64)v19, a2, a3);
        return;
      }
LABEL_23:
      *(_BYTE *)(a1 + 7) |= 0x20u;
      goto LABEL_17;
    }
    v20 = *(unsigned int *)(v17 + 2728);
    v21 = (_QWORD *)v29;
    v22 = *(_DWORD *)(v17 + 2720) + 1;
    v23 = 2 * v20;
    v24 = (unsigned int)(4 * v22);
    v25 = (unsigned int)(3 * v20);
    v30 = (_QWORD *)v29;
    if ( (unsigned int)v24 < (unsigned int)v25 )
    {
      v25 = (unsigned int)(v20 - *(_DWORD *)(v17 + 2724) - v22);
      if ( (unsigned int)v25 > (unsigned int)v20 >> 3 )
      {
LABEL_20:
        v26 = *v21 == -4096;
        *(_DWORD *)(v17 + 2720) = v22;
        if ( !v26 )
          --*(_DWORD *)(v17 + 2724);
        v19 = v21 + 1;
        *v21 = v28;
        v21[1] = v21 + 3;
        v21[2] = 0x100000000LL;
        goto LABEL_23;
      }
      v23 = v20;
    }
    sub_20BDB50(v17 + 2712, v23, v20, v25, v24, v18);
    sub_20A15A0((__int64 *)(v17 + 2712), &v28, &v30);
    v21 = v30;
    v22 = *(_DWORD *)(v17 + 2720) + 1;
    goto LABEL_20;
  }
  if ( (*(_BYTE *)(a1 + 7) & 0x20) != 0 )
  {
    v5 = (_QWORD *)sub_20CB0D0(a1);
    v6 = sub_20AC3A0(*v5 + 2712LL, a1);
    sub_20B3750((__int64 *)(v6 + 8), a2);
    if ( !*(_DWORD *)(v6 + 16) )
    {
      v7 = *(_QWORD *)sub_20CB0D0(a1);
      v8 = *(_DWORD *)(v7 + 2728);
      v9 = *(_QWORD *)(v7 + 2712);
      if ( v8 )
      {
        v10 = v8 - 1;
        v11 = (v8 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
        v12 = v9 + 40LL * v11;
        if ( a1 == *(_QWORD *)v12 )
        {
LABEL_7:
          v13 = *(_QWORD **)(v12 + 8);
          v14 = &v13[2 * *(unsigned int *)(v12 + 16)];
          if ( v13 != v14 )
          {
            do
            {
              while ( 1 )
              {
                v14 -= 2;
                v15 = (_QWORD *)v14[1];
                if ( !v15 )
                  break;
                sub_20A0850((__int64)(v14 + 1), v15);
                if ( v13 == v14 )
                  goto LABEL_10;
              }
            }
            while ( v13 != v14 );
LABEL_10:
            v14 = *(_QWORD **)(v12 + 8);
          }
          if ( v14 != (_QWORD *)(v12 + 24) )
            free(v14);
          *(_QWORD *)v12 = -8192;
          --*(_DWORD *)(v7 + 2720);
          ++*(_DWORD *)(v7 + 2724);
          goto LABEL_14;
        }
        if ( *(_QWORD *)v12 != -4096 )
        {
          v27 = 1;
          do
          {
            v11 = v10 & (v27 + v11);
            v12 = v9 + 40LL * v11;
            if ( a1 == *(_QWORD *)v12 )
              goto LABEL_7;
            ++v27;
          }
          while ( *(_QWORD *)v12 != -4096 );
        }
      }
LABEL_14:
      *(_BYTE *)(a1 + 7) &= ~0x20u;
    }
  }
}
