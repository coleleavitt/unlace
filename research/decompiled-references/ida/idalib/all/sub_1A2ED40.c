__int64 __fastcall sub_1A2ED40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // r10
  _QWORD *v14; // rbp
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rax
  __int64 v17; // r14
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r15
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // r12d
  unsigned __int64 v31; // rdx
  unsigned int v32; // r12d
  unsigned __int64 v33; // rsi
  bool v34; // zf
  __int64 v38; // [rsp+30h] [rbp-88h]
  unsigned int v39; // [rsp+3Ch] [rbp-7Ch]
  _BYTE v40[88]; // [rsp+60h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v6 & 4) != 0 )
    v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v7 )
    v7 -= 64LL;
  v8 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
  if ( (v8 & 4) != 0 )
    v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
    BUG();
  v10 = *(_QWORD *)(v9 + 64);
  if ( (*(_DWORD *)(v10 + 104) & 0xFFFE0) == 0
    || (*(_DWORD *)(*(_QWORD *)(v7 + 128) + 104LL) & 0xFFFE0) != 0
    || (v22 = *(_QWORD *)(a1 + 32), v23 = v22 + 8LL * *(unsigned int *)(a1 + 40), v22 == v23) )
  {
    v11 = 0;
LABEL_10:
    if ( (*(_BYTE *)(v10 + 10) & 0x20) != 0 )
    {
      v12 = sub_1A2CB30(v9 - 64);
      v13 = *(_QWORD *)(v10 + 128);
      v14 = (_QWORD *)(v12 + 16LL * ((*(_DWORD *)(v10 + 104) >> 5) & 0x7FFF));
      if ( (v13 & 4) != 0 )
      {
        v15 = 0;
        v16 = *(_QWORD *)(v10 + 128) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_DWORD *)(v16 + 8) )
          v15 = **(_QWORD **)v16;
      }
      else
      {
        v15 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      }
      if ( (_QWORD *)v15 != v14 )
      {
        v38 = v7;
        v17 = 0;
        v18 = (_QWORD *)v15;
        do
        {
          while ( 1 )
          {
            v20 = *v18 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v20 )
            {
              if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 26 <= 0x1A
                && (unsigned __int8)sub_B79970(*v18 & 0xFFFFFFFFFFFFFFF8LL) )
              {
                break;
              }
            }
            v18 += 2;
            v17 = (unsigned int)(v17 + 1);
            if ( v14 == v18 )
              return 0;
          }
          if ( sub_B799A0(v20) )
          {
            sub_1DC29F0(a4, v20);
            v25 = 0;
            if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 40 <= 6 )
              v25 = v20;
            v26 = sub_B73640(v25);
            sub_1E4CA90(v26);
            v27 = sub_1E4CAF0(a1, v40, 0, a5);
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                v39 = v17 + v28;
                v29 = (unsigned int)v17;
                if ( v11 )
                {
                  do
                  {
                    v30 = v29 + 1;
                    sub_1DC20B0(a4, v20, *(_QWORD *)(*(_QWORD *)(v11 + 1320) + 32 * v29));
                    v29 = v30;
                  }
                  while ( v30 != v39 );
                }
                else
                {
                  do
                  {
                    v31 = *(_QWORD *)(v38 + 128);
                    v32 = v29 + 1;
                    if ( v31 )
                    {
                      if ( (*(_BYTE *)(v31 + 10) & 0x20) != 0 )
                      {
                        v33 = *(_QWORD *)(v31 + 128) & 0xFFFFFFFFFFFFFFF8LL;
                        v34 = (*(_QWORD *)(v31 + 128) & 4) == 0;
                        v31 = v33;
                        if ( !v34 )
                        {
                          v31 = 0;
                          if ( *(_DWORD *)(v33 + 8) )
                            v31 = **(_QWORD **)v33;
                        }
                      }
                      else
                      {
                        v31 = 0;
                      }
                    }
                    sub_1DC20B0(a4, v20, *(_QWORD *)(v31 + 16 * v29) & 0xFFFFFFFFFFFFFFF8LL);
                    v29 = v32;
                  }
                  while ( v39 != v32 );
                }
                v17 = v39;
              }
            }
          }
          else
          {
            if ( v11 )
              v19 = *(_QWORD *)(*(_QWORD *)(v11 + 1320) + 32 * v17);
            else
              v19 = *(_QWORD *)(sub_1A2CB30(v38) + 16 * v17) & 0xFFFFFFFFFFFFFFF8LL;
            v17 = (unsigned int)(v17 + 1);
            sub_1DC20B0(a4, v20, v19);
          }
          v18 += 2;
        }
        while ( v14 != v18 );
      }
    }
    return 0;
  }
  v24 = *(_QWORD *)(a1 + 32);
  while ( 1 )
  {
    v11 = *(_QWORD *)(v23 - 8);
    if ( (*(_BYTE *)(v11 + 8) & 7) == 2 && sub_1A2C910(*(_QWORD *)(v11 + 1592)) == a3 )
      break;
    v23 -= 8;
    if ( v24 == v23 )
    {
      v11 = 0;
      break;
    }
  }
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
    goto LABEL_10;
  return 0;
}
