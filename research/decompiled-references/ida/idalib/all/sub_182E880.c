void __fastcall sub_182E880(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned __int64 v8; // r12
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __m128i *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int32 v25; // [rsp+Ch] [rbp-CCh] BYREF
  int v26; // [rsp+10h] [rbp-C8h] BYREF
  int v27; // [rsp+14h] [rbp-C4h] BYREF
  __int64 v28; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v29[184]; // [rsp+20h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v11 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
    v12 = *v11;
    v13 = *v11 + 8LL * *((unsigned int *)v11 + 2);
    if ( *v11 >= v13 )
    {
      if ( v12 == v13 )
        goto LABEL_2;
      while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 102 )
      {
        v13 += 8LL;
        if ( v12 == v13 )
          goto LABEL_2;
      }
    }
    else
    {
      v14 = *v11;
      while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 102 )
      {
        v14 += 8LL;
        if ( v13 == v14 )
          goto LABEL_2;
      }
      if ( v13 == v14 )
        goto LABEL_2;
    }
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), v15, 0xC88u, 0);
    sub_15DD120((__int64)v29, (__int64)a3);
    sub_15F7200(v29);
    return;
  }
LABEL_2:
  v8 = a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( (unsigned __int8)sub_16211A0(a1, a3, v8, &v25, 1, 0) )
  {
    if ( v25 > 3 )
    {
      v16 = sub_EEB7E0(v8, (__int64)a3, a7);
      sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), v16, 0xC56u, 0);
      v17 = sub_15DD120((__int64)v29, (__int64)a3);
      v26 = 0;
      v18 = sub_1587D10(v17, &v26);
      v27 = 3;
      v19 = sub_1587D10(v18, &v27);
      v28 = sub_EEC8C0(v8, (__int64)&v27, a7);
      sub_1587DB0(v19, &v28);
      sub_15F7200(v29);
    }
    else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                   & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL) == 42 )
    {
      v20 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
      sub_B174F0(v20, *(_QWORD *)(a1 + 248), a3, v25);
      sub_B8CC60(a2, (__int64)v20, v21, v22, v23, v24);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), v9, 0xC8Fu, 0);
      v10 = sub_15DD120((__int64)v29, (__int64)a3);
      LODWORD(v28) = 1;
      sub_1587D10(v10, (int *)&v28);
      sub_15F7200(v29);
    }
  }
}
