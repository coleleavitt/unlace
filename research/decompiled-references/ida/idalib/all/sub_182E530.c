void __fastcall sub_182E530(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v6; // rdx
  void *v7; // r13
  __int64 v8; // r14
  __m128i *v9; // r15
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // [rsp+4h] [rbp-114h] BYREF
  int v21; // [rsp+8h] [rbp-110h] BYREF
  unsigned int v22; // [rsp+Ch] [rbp-10Ch] BYREF
  __int64 v23; // [rsp+10h] [rbp-108h] BYREF
  __int64 v24; // [rsp+18h] [rbp-100h] BYREF
  void *src; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-F0h]
  void *v27[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v29[32]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int8 *v30; // [rsp+70h] [rbp-A8h] BYREF
  char v31; // [rsp+C8h] [rbp-50h]
  char v32; // [rsp+D4h] [rbp-44h]

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 260LL) == 20 )
  {
    sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xB96u, 0);
    sub_15DD120((__int64)v29, (__int64)a3);
    sub_15F7200(v29);
    return;
  }
  v6 = a3[5].m128i_i64[0];
  v20 = 0;
  v21 = 0;
  src = nullptr;
  v26 = 0;
  if ( (unsigned __int8)sub_16211A0(a1, a3, v6 & 0xFFFFFFFFFFFFFFFCLL, &v20, 0, 1) )
  {
    if ( a3[3].m128i_i16[4] <= 1u )
    {
LABEL_4:
      v7 = src;
      v8 = v26;
      v9 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 64, 3u);
      sub_B2F960(v9, *(_QWORD *)(a1 + 248), a3, v20, v21, v10, v7, v8);
      sub_B8CC60(a2, (__int64)v9, v11, v12, v13, v14);
      return;
    }
    v15 = a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
    if ( (unsigned __int8)sub_16211A0(a1, a3, v15, &v21, 1, 1) )
    {
      if ( v20 < (unsigned int)v21 )
      {
        sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC56u, 0);
        v27[0] = (void *)a3;
        v17 = sub_1810CD0((__int64)v29, (__int64 *)v27);
        LODWORD(v23) = 0;
        v18 = sub_1587D10(v17, (int *)&v23);
        v19 = sub_1588370(v18, (unsigned int *)&v20);
        LODWORD(v24) = sub_EEB7E0(v15, (__int64)&v20, *(double *)a4.m128i_i64);
        sub_180D980(v19, (int *)&v24);
        sub_15F7200(v29);
        return;
      }
      if ( a3[3].m128i_i16[4] != 3 )
        goto LABEL_4;
      v22 = 0;
      if ( (unsigned __int8)sub_181EB00(a1, (__int64)a3, 2u, &src, &v22, a4, a5) )
      {
        sub_18067E0(&v23, a1, (int)src, v26);
        if ( v23 )
        {
          sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), v22, 0xC8Eu, 0);
          v16 = v23;
          v23 = 0;
          v24 = v16;
          sub_2221210(v27, &v24);
          sub_1682AF0((__int64)v29, (__int64)v27);
          if ( v27[0] != &v28 )
            operator delete(v27[0]);
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          sub_15F7200(v29);
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        }
        else
        {
          if ( v26 )
            goto LABEL_4;
          sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), v22, 0xC8Eu, 0);
          if ( v31 )
          {
            sub_AE9DF0(&v30, (__int64)"section must not be empty", 1u);
          }
          else if ( v32 )
          {
            sub_180D0B0((__int64)v29, (__int64)"section must not be empty");
          }
          sub_15F7200(v29);
        }
      }
    }
  }
}
