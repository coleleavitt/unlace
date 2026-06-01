unsigned __int64 __fastcall sub_A825E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // r14
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // r13
  __m128i v24[11]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v4;
  v7 = *(unsigned __int8 *)(*(_QWORD *)v4 + 16LL);
  switch ( (char)v7 )
  {
    case 0:
      v11 = sub_A825E0(a1, *(_QWORD *)(v6 + 40), a3, a4);
      return sub_A75F00(a1, *(_QWORD *)(v6 + 32), v11);
    case 8:
      v12 = *(_QWORD *)(v6 + 32);
      v13 = sub_A825E0(a1, *(_QWORD *)(v6 + 48), a3, a4);
      v14 = sub_A825E0(a1, *(_QWORD *)(v6 + 40), a3, a4);
      return sub_A71850(a1, *(_WORD *)(v6 + 18) >> 3, v14, v13, v12);
    case 9:
      v15 = sub_A825E0(a1, *(_QWORD *)(v6 + 32), a3, a4);
      return sub_A76570(a1, *(_QWORD *)(v6 + 40), v15);
    case 24:
      v16 = sub_A825E0(a1, *(_QWORD *)(v6 + 40), a3, a4);
      return sub_A76250(a1, (unsigned __int8)(*(_WORD *)(v6 + 18) >> 3), *(_QWORD *)(v6 + 32), v16, 0);
    case 30:
      v17 = *(_QWORD *)(v6 + 32);
      v18 = sub_A825E0(a1, *(_QWORD *)(v6 + 24), a3, a4);
      return sub_A820D0(a1, v18, v17, v19, v20, v21);
    case 40:
      v9 = sub_A825E0(a1, *(_QWORD *)(v6 + 32), a3, a4);
      return sub_A760B0(a1, v9);
    default:
      if ( (_BYTE)v7 == 25 )
        goto LABEL_9;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 25 )
        goto LABEL_13;
      v6 = sub_F63050(v6, v4, a3, v7);
      if ( v6 )
      {
LABEL_9:
        v22 = *(_QWORD *)(a4 + 8);
        v24[0].m128i_i16[0] = *(_WORD *)(v6 + 20) >> 2;
        return sub_A71610(v22, **(_QWORD **)a4, (unsigned __int16 *)v24);
      }
      else
      {
        v6 = *(_QWORD *)v4;
        v7 = *(unsigned __int8 *)(*(_QWORD *)v4 + 16LL);
LABEL_13:
        if ( (_BYTE)v7 != 26 )
          v6 = sub_F63050(v6, v4, a3, v7);
        v23 = *(_QWORD *)(a4 + 8);
        sub_A5E110((__m128 *)v24, v6);
        return sub_A73610(v23, **(_QWORD **)a4, (__int64 *)(v6 + 48), *(unsigned __int16 *)(v6 + 22), v24, 0);
      }
  }
}
