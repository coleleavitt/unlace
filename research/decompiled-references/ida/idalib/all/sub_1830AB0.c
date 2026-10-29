void __fastcall sub_1830AB0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // r13d
  size_t v9; // rax
  unsigned int *v10; // rdi
  size_t v11; // rdx
  unsigned int v12; // r13d
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rax
  __int32 v16; // r15d
  __int64 v17; // r14
  __m128i *v18; // rax
  __int32 v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // [rsp+8h] [rbp-E0h]
  __int64 v25; // [rsp+8h] [rbp-E0h]
  __int32 v26; // [rsp+14h] [rbp-D4h] BYREF
  int v27; // [rsp+18h] [rbp-D0h] BYREF
  int v28; // [rsp+1Ch] [rbp-CCh] BYREF
  _BYTE v29[200]; // [rsp+20h] [rbp-C8h] BYREF

  if ( a3[3].m128i_i16[4] && (a3[5].m128i_i8[0] & 2) != 0 )
  {
    v26 = 0;
    if ( (unsigned __int8)sub_1830010(
                            a1,
                            a2,
                            (__int64)a3,
                            2u,
                            (_DWORD *)(a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL),
                            (__int64)&v26,
                            0,
                            1u) )
    {
      v7 = a3[6].m128i_i64[0];
      v27 = 0;
      if ( (unsigned __int8)sub_1830010(
                              a1,
                              a2,
                              (__int64)a3,
                              3u,
                              (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL),
                              (__int64)&v27,
                              0,
                              1u) )
      {
        v8 = 0;
        v9 = j__strlen("pointer_with_type_tag");
        v10 = *(unsigned int **)(a3->m128i_i64[0] + 16);
        v11 = *v10;
        if ( v11 == v9 && (!*v10 || !memcmp(v10 + 4, "pointer_with_type_tag", v11)) )
        {
          v12 = (v26 & 0x3FFFFFFF) - 1 - ((v26 & 0x40000000) != 0);
          v13 = sub_B8DC30(a2, 1);
          if ( v13 )
          {
            v14 = *(unsigned __int16 *)(v13 + 22);
          }
          else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
          {
            v14 = *(_DWORD *)(a2 + 80);
          }
          else
          {
            v14 = *(_DWORD *)(a2 + 104);
          }
          if ( v12 >= v14
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_18064C0(a2, v12) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 42 )
          {
            sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC8Fu, 0);
            v15 = sub_15DD120((__int64)v29, (__int64)a3);
            v28 = 0;
            sub_1587D10(v15, &v28);
            sub_15F7200(v29);
          }
          v8 = 1;
        }
        v16 = v26;
        v24 = v27;
        v17 = *(_QWORD *)((a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 8);
        v18 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 64, 3u);
        v19 = v24;
        v25 = (__int64)v18;
        sub_B09EB0(v18, *(_QWORD *)(a1 + 248), a3, v17, v16, v19, v8);
        sub_B8CC60(a2, v25, v20, v21, v22, v23);
      }
    }
  }
  else
  {
    sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC53u, 0);
    v5 = sub_15DD120((__int64)v29, (__int64)a3);
    v27 = 1;
    v6 = sub_1587D10(v5, &v27);
    v28 = 3;
    sub_180A710(v6, &v28);
    sub_15F7200(v29);
  }
}
