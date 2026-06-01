void __fastcall sub_8E7050(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  _OWORD *v10; // rax
  unsigned int v11; // r13d
  __int64 i; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  _OWORD v15[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v16; // [rsp+20h] [rbp-68h]
  _OWORD *v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  int v19; // [rsp+38h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+50h] [rbp-38h]

  if ( !*(_QWORD *)(a2 + 7496) )
    return;
  v5 = a1[13];
  sub_180C5A0(v15, "user_propagator");
  v6 = sub_15DA4C0(v5 + 560, v15);
  if ( v6 == -1 )
    goto LABEL_16;
  v7 = a1[1084];
  if ( !v7 )
    goto LABEL_6;
  if ( v6 >= *(_DWORD *)(v7 - 4) )
  {
LABEL_16:
    a1[937] = 0;
    if ( !a3 )
      return;
    goto LABEL_8;
  }
  v7 = *(_QWORD *)(v7 + 8LL * v6);
LABEL_6:
  a1[937] = v7;
  if ( !a3 )
    return;
LABEL_8:
  v8 = a1[13];
  v9 = *(_QWORD *)(a2 + 104);
  v16 = 0;
  v15[0] = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v8);
  v15[1] = 0;
  v10 = (_OWORD *)sub_186B270(0x80u);
  v17 = v10;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v18 = 8;
  v19 = 0;
  v21 = 0;
  v20 = 0;
  if ( v8 != v9 )
    sub_15D2280(*((_QWORD *)&v15[0] + 1), *(_QWORD *)&v15[0]);
  v11 = 0;
  for ( i = *(_QWORD *)(*(_QWORD *)(a2 + 7496) + 32LL); i; i = *(_QWORD *)(*(_QWORD *)(a2 + 7496) + 32LL) )
  {
    if ( v11 >= *(_DWORD *)(i - 4) )
      break;
    v13 = a1[937];
    v14 = **(_QWORD **)(i + 8LL * v11);
    if ( *(_QWORD *)&v15[0] != *((_QWORD *)&v15[0] + 1) )
      v14 = sub_15CFF50(v15, v14);
    sub_B35EF0(v13, v14, 1);
    ++v11;
  }
  sub_15CE760(v15);
}

