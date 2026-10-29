__int64 __fastcall sub_1E03DC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6, __m128 a7)
{
  int v9; // eax
  __int64 v10; // r14
  unsigned int v11; // ebx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 v15; // r12
  __int64 v16; // r8
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // r11
  int v28; // r14d
  unsigned __int64 v29; // rax
  unsigned int v32; // [rsp+24h] [rbp-64h]
  int v33; // [rsp+24h] [rbp-64h]
  __int64 v34; // [rsp+28h] [rbp-60h]
  __int64 v35; // [rsp+30h] [rbp-58h]
  __int64 v36; // [rsp+38h] [rbp-50h]
  __int64 v37; // [rsp+40h] [rbp-48h]
  unsigned int v38; // [rsp+48h] [rbp-40h]

  v9 = sub_B76070(a3, a2, a3, a4);
  if ( !v9 )
    return 0;
  v10 = 0;
  v11 = 0;
  v35 = 8LL * (unsigned int)(v9 - 1) + 8;
  while ( 1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a3 + 120) + v10);
    v15 = sub_B799A0(v12);
    if ( v15 )
    {
      sub_1DC29F0(a4, v12, v13, v14);
      v21 = *(_QWORD *)(v12 + 48);
      v22 = sub_1E4CC70(a1, v21, a5);
      v24 = v22;
      if ( v22 )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v25 + 16) != 38 )
        {
          v33 = v24;
          v25 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL), v21, v24, v23);
          LODWORD(v24) = v33;
        }
        v36 = *(_QWORD *)(v25 + 32);
        v26 = v24 - 1;
        if ( v26 )
        {
          v37 = v10;
          v32 = v11 + v26;
          v38 = 1 - v11;
          while ( 1 )
          {
            v27 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL * v11);
            *(_QWORD *)(v27 + 40) = *(_QWORD *)(v12 + 40);
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
            {
              v34 = v27;
              v28 = *(_DWORD *)(a1 + 12632);
              *(_DWORD *)(a1 + 12632) = v38 + v11;
              v29 = (unsigned __int64)sub_1DD1D30(
                                        a1,
                                        v36,
                                        a5,
                                        *(_DWORD *)(v27 + 24),
                                        *(_QWORD *)(v27 + 40),
                                        nullptr,
                                        a6,
                                        a7);
              v27 = v34;
              if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
              {
                v19 = v15;
                *(_DWORD *)(a1 + 12632) = v28;
                return v19;
              }
              *(_QWORD *)(v34 + 48) = v29;
              *(_DWORD *)(a1 + 12632) = v28;
            }
            ++v11;
            sub_1DC26A0(a4, v12, v27, v23);
            if ( v11 == v32 )
            {
              v10 = v37;
              goto LABEL_22;
            }
          }
        }
        v32 = v11;
LABEL_22:
        v11 = v32;
      }
      goto LABEL_10;
    }
    v16 = *(_QWORD *)(v12 + 40);
    v17 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL * v11);
    *(_QWORD *)(v17 + 40) = v16;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
      break;
LABEL_9:
    ++v11;
    sub_1DC20B0(a4, v12, v17, v14);
LABEL_10:
    v10 += 8;
    if ( v35 == v10 )
      return 0;
  }
  v18 = (unsigned __int64)sub_1DD1D30(a1, *(_QWORD *)(v12 + 48), a5, *(_DWORD *)(v17 + 24), v16, nullptr, a6, a7);
  if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    *(_QWORD *)(v17 + 48) = v18;
    goto LABEL_9;
  }
  return 1;
}
