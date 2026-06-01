unsigned __int64 __fastcall sub_1DCC860(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned __int8 v12; // al
  __int32 v13; // r14d
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // r8
  __int64 *v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned int v31; // eax
  unsigned __int8 v32; // [rsp+0h] [rbp-98h]
  unsigned __int64 v33; // [rsp+0h] [rbp-98h]
  __int64 v34; // [rsp+8h] [rbp-90h]
  __int64 *v35; // [rsp+8h] [rbp-90h]
  __int64 v36; // [rsp+8h] [rbp-90h]
  __m128i v37; // [rsp+10h] [rbp-88h] BYREF
  __int64 v38; // [rsp+20h] [rbp-78h] BYREF
  __m128i v39; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v41; // [rsp+50h] [rbp-48h]

  result = (unsigned __int64)sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( result != 1 )
  {
    v10 = *a1;
    v11 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || (result = a2, *(_QWORD *)(a2 + 16) != v11) )
    {
      v12 = *(_BYTE *)(a2 + 32);
      v13 = *(_DWORD *)(a2 + 24);
      v14 = *(_DWORD *)(a2 + 28);
      v39 = 0;
      v32 = v12;
      v15 = *(_QWORD *)(v10 + 248);
      *(_OWORD *)ptr = 0;
      v16 = *(_QWORD *)(v15 + 17504);
      v41 = 0;
      v17 = sub_2244B30("isa", 3);
      v18 = sub_2244CB0(v16, "isa", 3, v17);
      v20 = (__int64 *)(*(_QWORD *)v16 + 8LL * v18);
      if ( *v20 )
      {
        if ( *v20 != -8 )
        {
          sub_989490((__int64 **)&v37, v20, 0);
          v22 = *(_QWORD *)v37.m128i_i64[0];
          v23 = *(_QWORD *)(*(_QWORD *)v37.m128i_i64[0] + 8LL);
          if ( !v23 )
            goto LABEL_7;
          goto LABEL_18;
        }
        --*(_DWORD *)(v16 + 16);
      }
      v29 = *(_QWORD *)(v16 + 24);
      *(_QWORD *)(v16 + 104) += 20LL;
      v30 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v16 + 32) >= v30 + 20 && v29 )
      {
        *(_QWORD *)(v16 + 24) = v30 + 20;
      }
      else
      {
        v35 = v20;
        v30 = sub_986170(v16 + 24, 20, 20, 3, v19, (__int64)v20);
        v20 = v35;
      }
      *(_BYTE *)(v30 + 18) = 97;
      *(_WORD *)(v30 + 16) = 29545;
      *(_BYTE *)(v30 + 19) = 0;
      *(_QWORD *)v30 = 3;
      *(_QWORD *)(v30 + 8) = 0;
      *v20 = v30;
      ++*(_DWORD *)(v16 + 12);
      v31 = sub_22450D0(v16, v18);
      sub_989490((__int64 **)&v37, (__int64 *)(*(_QWORD *)v16 + 8LL * v31), 0);
      v22 = *(_QWORD *)v37.m128i_i64[0];
      v23 = *(_QWORD *)(*(_QWORD *)v37.m128i_i64[0] + 8LL);
      if ( !v23 )
      {
LABEL_7:
        v24 = *(_QWORD *)(v16 + 120);
        if ( !v24
          || (v34 = v22,
              v25 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v24 + 16LL))(v24, "isa", 3),
              v22 = v34,
              v23 = v25,
              (*(_QWORD *)(v34 + 8) = v25) == 0) )
        {
          v26 = *(_QWORD *)(v16 + 24);
          *(_QWORD *)(v16 + 104) += 24LL;
          v23 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v16 + 32) >= v23 + 24 && v26 )
          {
            *(_QWORD *)(v16 + 24) = v23 + 24;
            v27 = (_QWORD *)((v26 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          }
          else
          {
            v36 = v22;
            v27 = (_QWORD *)sub_986170(v16 + 24, 24, 24, 3, v21, v22);
            v22 = v36;
            v23 = (unsigned __int64)v27;
          }
          v28 = *v27 & 0xFFFFF80000000000LL;
          v27[1] = 0;
          *v27 = v28 | 0x1FFFC05;
          *(_QWORD *)(v22 + 8) = v27;
          v27[2] = v22;
        }
      }
LABEL_18:
      v37.m128i_i64[0] = v23;
      v37.m128i_i32[2] = v13;
      sub_B85890(&v38, v23);
      result = (unsigned __int64)sub_19CC2F0(
                                   (__m128 *)*a1,
                                   (_DWORD *)v11,
                                   *(_QWORD *)(v11 + 8),
                                   v14,
                                   v32,
                                   &v39,
                                   0,
                                   0,
                                   &v37,
                                   0,
                                   0,
                                   nullptr);
      if ( HIDWORD(ptr[1]) )
      {
        v33 = result;
        free(ptr[0]);
        return v33;
      }
    }
  }
  return result;
}
