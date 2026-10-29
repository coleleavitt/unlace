void __fastcall sub_1827340(__int64 a1, _QWORD *a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __m128i *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rax
  _QWORD *v26; // rax
  bool v27; // [rsp+7h] [rbp-D1h] BYREF
  __int64 v28; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v29[200]; // [rsp+10h] [rbp-C8h] BYREF

  v6 = a2[6];
  v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v9 = (unsigned int)(v8 - 3);
  if ( (unsigned __int8)(v8 - 3) <= 2u || (v9 = v8 & 0xFFFFFFFB, (v8 & 0xFB) == 2) )
  {
    if ( (v8 & 0xF7) != 0x22 )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)(*(_BYTE *)(v7 + 16) - 2) > 4u )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
            goto LABEL_5;
          v14 = sub_F63050(v7, a2, v9, a4);
          if ( !v14 )
            goto LABEL_5;
          v7 = v14;
        }
        v7 = *(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
  }
  else if ( (_BYTE)v8 != 42 )
  {
    goto LABEL_6;
  }
  v7 = *(_QWORD *)(sub_F68450(*(_QWORD *)(a2[6] & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v9, a4, a5) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_5:
  if ( sub_F57FF0(v7) )
  {
    v15 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u);
    sub_B15520(v15, *(_QWORD *)(a1 + 248), a3);
    sub_B8CC60((__int64)a2, (__int64)v15, v16, v17, v18, v19);
    return;
  }
LABEL_6:
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 16LL))(a2);
  sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), v10, 0x19B0u, 0);
  v11 = sub_15DD120((__int64)v29, (__int64)a3);
  v27 = (a3[2].m128i_i8[3] & 2) != 0;
  v12 = sub_1588420(v11, (unsigned __int8 *)&v27);
  v13 = v12;
  if ( *(_BYTE *)(v12 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v12 + 32), v6, 8u);
  }
  else if ( *(_BYTE *)(v12 + 132) )
  {
    v24 = sub_168B9E0((_QWORD *)v12);
    v25 = *(_QWORD *)(v13 + 16);
    if ( v25 )
      v25 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 32LL))(*(_QWORD *)(v13 + 16));
    v28 = v25;
    v26 = sub_1587BC0(v24, &v28, v20, v21, v22, v23);
    sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * *(unsigned int *)(v13 + 128) + 8), v6, 8u);
  }
  v28 = a3[1].m128i_i64[1];
  sub_1587DB0(v13, &v28);
  sub_15F7200(v29);
}
