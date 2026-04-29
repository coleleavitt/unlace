__int64 __fastcall sub_3F05E0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 func; // r14
  __int64 v9; // rax
  int v10; // r12d
  int v11; // r13d
  char v12; // al
  int v13; // edx
  __int64 v14; // rax
  bool v15; // sf
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r8
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // [rsp+0h] [rbp-78h] BYREF
  __int64 v32; // [rsp+8h] [rbp-70h]
  __int128 v33; // [rsp+10h] [rbp-68h]
  __int64 v34; // [rsp+20h] [rbp-58h]
  __int128 v35; // [rsp+28h] [rbp-50h]
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v4 = a2[5];
  v5 = *(_QWORD *)(a1 + 8);
  v36 = __readfsqword(0x28u);
  if ( sub_CFF70(0xBB9u, v5, v4) == 1 )
  {
    if ( *(_DWORD *)(a2[188] + 84LL) != 8 )
      return 0;
    v7 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)v7 & 0x10) == 0 )
      return 0;
    if ( *(_DWORD *)(v7 + 128) && *(_QWORD *)(v7 + 56) )
    {
      func = get_func(a2[5]);
      v31 = 0;
      v32 = 0;
      v34 = 0;
      v33 = 0;
      v35 = 0;
      sub_CFF70(0x7D4u, &v31, 64);
      v9 = *(_QWORD *)(a1 + 8);
      v10 = v33;
      v11 = v35;
      *(_DWORD *)(a1 + 40) = v33 - *(_DWORD *)(v9 + 132);
      *(_DWORD *)(a1 + 64) = v11 - *(_DWORD *)(v9 + 128);
      v12 = getinf(57);
      v13 = *(_DWORD *)(a1 + 40);
      if ( (v12 & 0xF) != 6 )
      {
        v14 = *(_QWORD *)(a1 + 8);
        v15 = v11 - *(_DWORD *)(v14 + 128) < 0;
        *(_DWORD *)(a1 + 64) = v11 - *(_DWORD *)(v14 + 128);
        if ( !v15 )
        {
          if ( v13 < 0 )
            goto LABEL_30;
          goto LABEL_10;
        }
        *(_DWORD *)(a1 + 64) = 8 - *(_DWORD *)(v14 + 128);
      }
      if ( v13 < 0 || *(int *)(a1 + 64) < 0 )
        goto LABEL_30;
      v14 = *(_QWORD *)(a1 + 8);
LABEL_10:
      v16 = a2[11];
      if ( (*(_BYTE *)v14 & 0x20) != 0 )
      {
        v17 = *(_QWORD *)(func + 56) + v16;
      }
      else
      {
        v30 = *(unsigned __int16 *)(func + 40) + v16;
        v17 = v30 + get_spd(func, *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL * *(_QWORD *)(v14 + 56) - 8));
      }
      v18 = sub_1CFDD0((__int64)a2, v17);
      v19 = *(_QWORD *)(a1 + 8);
      v20 = v18 + *(_QWORD *)(v19 + 120);
      if ( *(_DWORD *)(*(_QWORD *)(a2[187] + 24LL) + 24LL) != 8 )
        v20 = (int)v20;
      if ( v20 >= 0 )
      {
        v21 = *(_DWORD *)(a2[188] + 80LL);
        v22 = v21 * *(_DWORD *)(a1 + 40);
        v23 = v20 - v22;
        v24 = 2 * v21 * *(_DWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 32) = v23;
        v25 = *(_QWORD *)(v19 + 112) + v18;
        v26 = v21 * v10;
        v27 = v25 - v24;
        *(_QWORD *)(a1 + 56) = v27;
        if ( *(_DWORD *)(v19 + 132) )
        {
          if ( v27 == v26 + v23 )
          {
LABEL_17:
            v28 = v34;
            if ( !*(_DWORD *)(v19 + 128) || v25 >= 0 )
            {
              v29 = a2[17];
              if ( *(_QWORD *)(a1 + 32) + v26 <= v29 && v29 >= v27 + 2 * v11 * v21 )
              {
                if ( v34 )
                {
                  *(_QWORD *)&v35 = 0;
                  qfree(v34);
                }
                if ( v32 )
                {
                  *(_QWORD *)&v33 = 0;
                  qfree(v32);
                }
                return 0;
              }
            }
            goto LABEL_31;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v27 - v26;
          if ( !*(_DWORD *)(v19 + 132) || v22 + v27 - v26 >= 0 )
            goto LABEL_17;
        }
      }
LABEL_30:
      v28 = v34;
LABEL_31:
      if ( v28 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v28);
      }
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32);
      }
      return 4294967283LL;
    }
    *(_DWORD *)v7 &= ~0x10u;
  }
  return 4294967283LL;
}
