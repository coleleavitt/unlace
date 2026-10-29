void __fastcall sub_1826EB0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  __m128i *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  int v29; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v30; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v31[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( a3[3].m128i_i16[4] && (v4 = a3[5].m128i_i64[0], (v4 & 2) != 0) )
  {
    v7 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 8);
    if ( (unsigned __int8)sub_B125C0(*(_QWORD *)(v7 + 16) + 16LL, **(unsigned int **)(v7 + 16), &v29) )
    {
      v8 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
      sub_B12590(v8, *(_QWORD *)(a1 + 248), a3, v29);
      sub_B8CC60(a2, (__int64)v8, v9, v10, v11, v12);
    }
    else
    {
      sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19C0u, 0);
      v20 = sub_15DD120((__int64)v31, (__int64)a3);
      v21 = v20;
      if ( *(_BYTE *)(v20 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v20 + 32), v7, 5u);
      }
      else if ( *(_BYTE *)(v20 + 132) )
      {
        v24 = sub_168B9E0((_QWORD *)v20);
        v27 = *(_QWORD *)(v21 + 16);
        if ( v27 )
          v27 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v27 + 32LL))(*(_QWORD *)(v21 + 16));
        v30 = v27;
        v28 = sub_1587BC0(v24, &v30, v22, v23, v25, v26);
        sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * *(unsigned int *)(v21 + 128) + 8), v7, 5u);
      }
      sub_15F7200(v31);
    }
  }
  else
  {
    sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC53u, 0);
    v5 = sub_15DD120((__int64)v31, (__int64)a3);
    v6 = v5;
    if ( *(_BYTE *)(v5 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v5 + 32), 0, 2u);
    }
    else if ( *(_BYTE *)(v5 + 132) )
    {
      v17 = sub_168B9E0((_QWORD *)v5);
      v18 = *(_QWORD *)(v6 + 16);
      if ( v18 )
        v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 32LL))(*(_QWORD *)(v6 + 16));
      v30 = v18;
      v19 = sub_1587BC0(v17, &v30, v13, v14, v15, v16);
      sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * *(unsigned int *)(v6 + 128) + 8), 0, 2u);
    }
    LODWORD(v30) = 3;
    sub_180A710(v6, (int *)&v30);
    sub_15F7200(v31);
  }
}
