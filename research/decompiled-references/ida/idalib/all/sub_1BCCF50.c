__int64 __fastcall sub_1BCCF50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // bx
  unsigned __int16 v22; // bp
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // r13d
  int v31; // r15d
  int v32; // eax

  if ( !a2 || (*(_BYTE *)(a2 + 28) & 0x7F) != 0x25 || !a3 || (*(_BYTE *)(a3 + 28) & 0x7F) != 0x25 )
    return 0;
  v4 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v4 & 4) != 0 )
    v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v5 )
    BUG();
  v6 = *(_QWORD *)(v5 + 64);
  if ( v6 && (*(_BYTE *)(v6 + 10) & 0x20) != 0 )
  {
    v7 = a3 + 72;
    v8 = sub_B72690(a3 + 72);
    if ( !v8 )
      BUG();
    v11 = *(_QWORD *)(v8 + 64);
    if ( v11 )
    {
      if ( (*(_BYTE *)(v11 + 10) & 0x20) != 0 )
      {
        v12 = *(_QWORD *)(a1 + 232);
        if ( (*(_BYTE *)(v12 + 2) & 4) != 0 && (*(_BYTE *)(v12 + 1) & 0x10) != 0 )
        {
          v13 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_AED600(a2, a2, v9, v10) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                     & 0xFFFFFFFFFFFFFFF0LL)
                         + 16LL);
          LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_AED600(a3, a2, v14, v15) & 0xFFFFFFFFFFFFFFF0LL)
                                                        + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 16LL) == 11;
          if ( (_BYTE)v9 != (v13 == 11) )
            return 2 * (unsigned int)(v13 == 11) - 1;
        }
        v17 = sub_1BC9D20(a2, a2, v9, v10);
        v20 = sub_1BC9D20(a3, a2, v18, v19);
        if ( v17 )
        {
          if ( v20 )
          {
            v21 = (*(_WORD *)(v17 + 20) >> 2) & 0x3F;
            v22 = (*(_WORD *)(v20 + 20) >> 2) & 0x3F;
            if ( v22 != v21 )
            {
              v23 = sub_B72690(v7);
              if ( v23 )
                v23 -= 64LL;
              v25 = sub_B96F60(v23);
              v26 = *(_QWORD *)(v25 + 48);
              v27 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v27 + 16) != 26 )
              {
                v27 = sub_F63050(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL), a2, v26 & 0xFFFFFFFFFFFFFFF0LL, v24);
                v26 = *(_QWORD *)(v25 + 48);
              }
              v28 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
              v29 = (unsigned int)*(unsigned __int8 *)(v28 + 16) - 25;
              if ( (unsigned int)v29 > 1 )
                v28 = sub_F63050(v28, a2, v29, v24);
              v30 = (*(_WORD *)(v28 + 20) >> 2) & 0x3F;
              v31 = sub_A64670(*(_QWORD *)(a1 + 248), (unsigned __int8)BYTE3(*(_QWORD *)(v27 + 16)) >> 7, 0, 0);
              v32 = sub_A64670(*(_QWORD *)(a1 + 248), (unsigned __int8)BYTE3(*(_QWORD *)(v27 + 16)) >> 7, 1, 0);
              if ( v31 != v21 )
              {
                if ( v31 == v22 )
                  return 1;
                if ( v32 != v21 )
                {
                  if ( v32 != v22 )
                  {
                    if ( v21 != v30 )
                      return v22 == v30;
                    return 0xFFFFFFFFLL;
                  }
                  return 1;
                }
              }
              return 0xFFFFFFFFLL;
            }
          }
        }
      }
    }
  }
  return 0;
}
