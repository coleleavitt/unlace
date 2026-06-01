/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B4E0
// Address: 0x0007B4E0

//----- (0007B4E0) --------------------------------------------------------
int __fastcall sub_7B4E0(int a1, void *a2, int a3)
{
  _DWORD *v5; // r4
  __int64 v6; // r0
  unsigned int v7; // r7
  unsigned int v8; // r3
  int v9; // r5
  unsigned int v10; // r7
  unsigned int v11; // r2
  int v12; // r4
  unsigned __int64 v13; // r0
  int v14; // r1
  int v15; // r5
  int v16; // r2
  int v17; // r0
  int v18; // r2
  bool v19; // cf
  _DWORD *v21; // [sp+Ch] [bp-20h]
  unsigned int v22; // [sp+14h] [bp-18h]
  int *v23; // [sp+18h] [bp-14h]
  void *v24; // [sp+1Ch] [bp-10h]
  size_t v25; // [sp+20h] [bp-Ch]
  unsigned int v26; // [sp+24h] [bp-8h]
  unsigned int v27; // [sp+24h] [bp-8h]
  unsigned int v28; // [sp+28h] [bp-4h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __debugbreak();
  }
  HIDWORD(v6) = *(_DWORD *)(a1 + 28);
  v5 = (_DWORD *)(a1 + 24);
  LODWORD(v6) = 0;
  if ( v6 >= 0 )
  {
    v24 = a2;
    v7 = *(_DWORD *)(a1 + 24);
    LODWORD(v6) = 0;
    v25 = a3;
    v8 = v7 + a3;
    v9 = __CFADD__(v7, a3) + HIDWORD(v6);
    if ( __SPAIR64__(v9, v7 + a3) >= __SPAIR64__(HIDWORD(v6), v7) )
    {
      v28 = *(_DWORD *)(a1 + 40);
      if ( v28 )
      {
        v22 = *(_DWORD *)(a1 + 24);
        v23 = (int *)(a1 + 16);
        v10 = *(_DWORD *)(a1 + 16);
        v11 = *(_DWORD *)(a1 + 20);
        v26 = v8;
        if ( __SPAIR64__(v11, v10) < __SPAIR64__(v9, v8) )
        {
          if ( __SPAIR64__(HIDWORD(v6), v22) >= __SPAIR64__(v11, v10) )
            return v6;
          v25 = v10 - v22;
          v26 = *(_DWORD *)(a1 + 16);
          v9 = *(_DWORD *)(a1 + 20);
        }
        v21 = v5;
        LODWORD(v6) = *(_DWORD *)(a1 + 24);
        v12 = v6 / (unsigned __int64)v28;
        v13 = (__int64)(__PAIR64__((unsigned int)__CFADD__(v28, v26) + v9, v28 + v26) - 1) / v28;
        if ( v12 <= (int)v13 )
        {
          HIDWORD(v13) = -1;
          v27 = (__int64)(__PAIR64__((unsigned int)__CFADD__(v28, v26) + v9, v28 + v26) - 1) / v28;
          while ( 1 )
          {
            v15 = HIDWORD(v13);
            if ( v12 == (_DWORD)v13
              || ((1 << (v12 & 7)) & *(unsigned __int8 *)(*(_DWORD *)(a1 + 32) + ((unsigned int)v12 >> 3))) != 0 )
            {
              HIDWORD(v13) = -1;
              if ( v15 != -1 )
              {
                v16 = *(_DWORD *)(a1 + 40);
                v17 = *v23;
                if ( *(_QWORD *)v23 >= (__int64)(unsigned int)(v12 * v16) )
                  v17 = v12 * v16;
                v18 = v16 * v15;
                if ( v17 - v18 < 0
                  || (***(int (__fastcall ****)(_DWORD, _DWORD, int, _DWORD, int, int))(a1 + 8))(
                       *(_DWORD *)(a1 + 8),
                       ***(_DWORD ***)(a1 + 8),
                       v18,
                       0,
                       *(_DWORD *)(a1 + 36) + v18,
                       v17 - v18) != v17 - v18 )
                {
                  LODWORD(v6) = -1;
                  return v6;
                }
                v13 = v27 | 0xFFFFFFFF00000000LL;
                if ( v15 < v12 )
                {
                  do
                  {
                    *(_BYTE *)(*(_DWORD *)(a1 + 32) + ((unsigned int)v15 >> 3)) |= 1 << (v15 & 7);
                    ++v15;
                  }
                  while ( v15 < v12 );
                  v13 = v27 | 0xFFFFFFFF00000000LL;
                }
              }
            }
            else
            {
              HIDWORD(v13) = v12;
              if ( v15 != -1 )
                HIDWORD(v13) = v15;
            }
            if ( ++v12 > (int)v13 )
            {
              v5 = v21;
              v14 = *v21;
              goto LABEL_27;
            }
          }
        }
        v5 = v21;
        v14 = *(_DWORD *)(a1 + 24);
LABEL_27:
        qmemcpy(v24, (const void *)(*(_DWORD *)(a1 + 36) + v14), v25);
        LODWORD(v6) = v25;
      }
      else
      {
        LODWORD(v6) = (***(int (__fastcall ****)(_DWORD, _DWORD, unsigned int, _DWORD, void *, int))(a1 + 8))(
                        *(_DWORD *)(a1 + 8),
                        HIDWORD(v6),
                        v7,
                        HIDWORD(v6),
                        v24,
                        a3);
        if ( (int)v6 < 0 )
          return v6;
      }
      v19 = __CFADD__(*v5, (_DWORD)v6);
      *v5 += v6;
      v5[1] += v19;
    }
  }
  return v6;
}
// E0550: using guessed type char under_debugger;
