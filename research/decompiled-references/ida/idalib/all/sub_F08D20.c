__int64 __fastcall sub_F08D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  char *v9; // r12
  const char *v10; // rsi
  __int64 v11; // rdi
  unsigned __int16 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  char v17; // cl
  __int64 v18; // [rsp+8h] [rbp-30h] BYREF
  __m128 v19[2]; // [rsp+10h] [rbp-28h] BYREF

  v9 = *(char **)(a2 + 24);
  if ( !v9 )
    return sub_B72CF0(*(_QWORD *)(a2 + 16), *(_QWORD *)a1);
  if ( (*(_BYTE *)(a1 + 28) & 0x40) == 0 )
    goto LABEL_3;
  v13 = (unsigned __int16 *)sub_BFB840(*(_QWORD *)(a2 + 24));
  a3 = *v13;
  LOWORD(a3) = a3 & 0x1FF;
  if ( (_WORD)a3 != 71 )
    goto LABEL_3;
  a4 = *((_QWORD *)v13 + 2);
  a3 = *(_BYTE *)(a4 + 28) & 0x7F;
  if ( (_BYTE)a3 != 45 || (*(_BYTE *)(a4 + 98) & 0x1C) != 0 )
    goto LABEL_3;
  if ( (*(_QWORD *)v13 & 0x80000LL) == 0 )
  {
    if ( !*((_DWORD *)v13 + 1) )
      return sub_B72CF0(*(_QWORD *)(a2 + 16), *(_QWORD *)a1);
    goto LABEL_3;
  }
  v14 = *((_QWORD *)v13 + 4);
  v15 = *((_QWORD *)v13 + 5);
  if ( v14 )
  {
    v18 = v15;
    a7 = _mm_loadh_ps((const double *)&v18);
    v19[0] = a7;
    v16 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v16 )
    {
      v19[0].m128_u64[0] = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v17 = 0;
      while ( (*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v17 = 1;
        v16 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      }
      if ( v17 )
        v19[0].m128_u64[0] = v16;
    }
    if ( (unsigned int)sub_E90530((__int64 *)v19) )
    {
      v9 = *(char **)(a2 + 24);
      if ( !v9 )
      {
        sub_F049C0((__int64 *)a1);
        goto LABEL_4;
      }
LABEL_3:
      sub_F05430((_QWORD *)a1, v9, a3, a4, a5, a6, *(double *)a7.m128_u64);
LABEL_4:
      v10 = "->";
      v11 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(a2 + 40) & 1) == 0 )
        v10 = ".";
      sub_995540(v11, v10);
    }
  }
  return sub_B72CF0(*(_QWORD *)(a2 + 16), *(_QWORD *)a1);
}
