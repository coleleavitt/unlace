bool __fastcall sub_981690(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  const __m128i *v4; // r12
  __m128i *v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  _BYTE *v11; // r12
  _DWORD *v12; // r12
  _WORD *v13; // r12
  __int64 v14; // r12
  __int64 v15; // rdi
  unsigned int v16; // eax
  _QWORD *v17; // r12
  __int64 v18; // r12
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 *v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rbx

  v3 = *(_QWORD *)(a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a3 + 3));
  if ( (*(_BYTE *)(v3 + 1) & 6) != 0 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
    {
LABEL_3:
      v4 = (const __m128i *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 24);
      v5 = (__m128i *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
      *v5 = _mm_loadu_si128(v4);
      v5[1].m128i_i64[0] = v4[1].m128i_i64[0];
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v6 = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(v3 + 8));
  if ( !BYTE4(v6) )
  {
LABEL_5:
    v7 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
    v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v8, v7);
    goto LABEL_6;
  }
  switch ( (int)v6 )
  {
    case 0:
    case 1:
    case 10:
      v11 = (_BYTE *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 8);
      *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = *v11;
      break;
    case 2:
    case 3:
      v13 = (_WORD *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 8);
      *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = *v13;
      break;
    case 4:
    case 5:
      v12 = (_DWORD *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 8);
      *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = *v12;
      break;
    case 6:
    case 7:
      v17 = (_QWORD *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 8);
      *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = *v17;
      break;
    case 8:
    case 9:
      v14 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 16);
      v15 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
      v16 = *(_DWORD *)(v14 + 8);
      *(_DWORD *)(v15 + 8) = v16;
      if ( v16 > 0x40 )
        sub_2585B30(v15);
      else
        *(_QWORD *)v15 = *(_QWORD *)v14;
      break;
    case 11:
      v18 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 24);
      v19 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
      v20 = *(_DWORD *)(v18 + 8);
      *(_DWORD *)(v19 + 8) = v20;
      if ( v20 > 0x40 )
        sub_2585B30(v19);
      else
        *(_QWORD *)v19 = *(_QWORD *)v18;
      *(_BYTE *)(v19 + 12) = *(_BYTE *)(v18 + 12);
      *(_DWORD *)(v19 + 16) = *(_DWORD *)(v18 + 16);
      break;
    case 12:
      v21 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 24);
      v22 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
      sub_835150(v22, v21, v23);
      break;
    case 13:
      goto LABEL_5;
    case 14:
      goto LABEL_3;
    case 15:
      v24 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 72);
      v25 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
      sub_A1BFE0(v25, v24);
      *(_QWORD *)(v25 + 56) = *(_QWORD *)(v24 + 56);
      *(_DWORD *)(v25 + 64) = *(_DWORD *)(v24 + 64);
      break;
    default:
      break;
  }
LABEL_6:
  v9 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 8) & 4) != 0 )
    v9 = 0;
  return (*(_BYTE *)(v9 + 84) & 3) != 0;
}

