__int64 __fastcall sub_1E1A320(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // al
  __int32 v12; // r14d
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // r8
  __int64 *v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  unsigned __int8 v31; // [rsp+0h] [rbp-98h]
  __int64 v32; // [rsp+0h] [rbp-98h]
  __int64 v33; // [rsp+8h] [rbp-90h]
  __int64 *v34; // [rsp+8h] [rbp-90h]
  __int64 v35; // [rsp+8h] [rbp-90h]
  __m128i v36; // [rsp+10h] [rbp-88h] BYREF
  __int64 v37; // [rsp+20h] [rbp-78h] BYREF
  __m128i v38; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v40; // [rsp+50h] [rbp-48h]

  result = sub_1E11560(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( result != 1 )
  {
    v9 = *a1;
    v10 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || (result = a2, *(_QWORD *)(a2 + 16) != v10) )
    {
      v11 = *(_BYTE *)(a2 + 32);
      v12 = *(_DWORD *)(a2 + 24);
      v13 = *(_DWORD *)(a2 + 28);
      v38 = 0;
      v31 = v11;
      v14 = *(_QWORD *)(v9 + 248);
      *(_OWORD *)ptr = 0;
      v15 = *(_QWORD *)(v14 + 17504);
      v40 = 0;
      v16 = sub_2244B30("isa", 3);
      v17 = sub_2244CB0(v15, "isa", 3, v16);
      v19 = (__int64 *)(*(_QWORD *)v15 + 8LL * v17);
      if ( *v19 )
      {
        if ( *v19 != -8 )
        {
          sub_989490((__int64 **)&v36, v19, 0);
          v21 = *(_QWORD *)v36.m128i_i64[0];
          v22 = *(_QWORD *)(*(_QWORD *)v36.m128i_i64[0] + 8LL);
          if ( !v22 )
            goto LABEL_7;
          goto LABEL_18;
        }
        --*(_DWORD *)(v15 + 16);
      }
      v28 = *(_QWORD *)(v15 + 24);
      *(_QWORD *)(v15 + 104) += 20LL;
      v29 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v15 + 32) >= v29 + 20 && v28 )
      {
        *(_QWORD *)(v15 + 24) = v29 + 20;
      }
      else
      {
        v34 = v19;
        v29 = sub_986170(v15 + 24, 20, 20, 3, v18, (__int64)v19);
        v19 = v34;
      }
      *(_BYTE *)(v29 + 18) = 97;
      *(_WORD *)(v29 + 16) = 29545;
      *(_BYTE *)(v29 + 19) = 0;
      *(_QWORD *)v29 = 3;
      *(_QWORD *)(v29 + 8) = 0;
      *v19 = v29;
      ++*(_DWORD *)(v15 + 12);
      v30 = sub_22450D0(v15, v17);
      sub_989490((__int64 **)&v36, (__int64 *)(*(_QWORD *)v15 + 8LL * v30), 0);
      v21 = *(_QWORD *)v36.m128i_i64[0];
      v22 = *(_QWORD *)(*(_QWORD *)v36.m128i_i64[0] + 8LL);
      if ( !v22 )
      {
LABEL_7:
        v23 = *(_QWORD *)(v15 + 120);
        if ( !v23
          || (v33 = v21,
              v24 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v23 + 16LL))(v23, "isa", 3),
              v21 = v33,
              v22 = v24,
              (*(_QWORD *)(v33 + 8) = v24) == 0) )
        {
          v25 = *(_QWORD *)(v15 + 24);
          *(_QWORD *)(v15 + 104) += 24LL;
          v22 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v15 + 32) >= v22 + 24 && v25 )
          {
            *(_QWORD *)(v15 + 24) = v22 + 24;
            v26 = (_QWORD *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          }
          else
          {
            v35 = v21;
            v26 = (_QWORD *)sub_986170(v15 + 24, 24, 24, 3, v20, v21);
            v21 = v35;
            v22 = (unsigned __int64)v26;
          }
          v27 = *v26 & 0xFFFFF80000000000LL;
          v26[1] = 0;
          *v26 = v27 | 0x1FFFC05;
          *(_QWORD *)(v21 + 8) = v26;
          v26[2] = v21;
        }
      }
LABEL_18:
      v36.m128i_i64[0] = v22;
      v36.m128i_i32[2] = v12;
      sub_B85890(&v37, v22);
      result = (__int64)sub_19CC2F0(
                          (__m128 *)*a1,
                          (_DWORD *)v10,
                          *(_QWORD *)(v10 + 8),
                          v13,
                          v31,
                          &v38,
                          0,
                          0,
                          &v36,
                          0,
                          0,
                          nullptr);
      if ( HIDWORD(ptr[1]) )
      {
        v32 = result;
        free(ptr[0]);
        return v32;
      }
    }
  }
  return result;
}
