__int64 __fastcall sub_162290(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int32 v5; // r14d
  const __m128i *v6; // rbp
  const char *v7; // r13
  const char *v8; // rsi
  __int64 v9; // r9
  const char *v10; // rdi
  __int64 v11; // rax
  struct _Unwind_Exception *v13; // rbx
  const char *v14; // [rsp+0h] [rbp-88h] BYREF
  __int128 v15; // [rsp+8h] [rbp-80h]
  const char *v16; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h]
  _QWORD v18[9]; // [rsp+40h] [rbp-48h] BYREF

  v18[3] = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 760) = a2[3].m128i_i64[0];
  v3 = *(_QWORD *)(a1 + 856);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 296LL))(v3);
  sub_15E330(a1, a2[7].m128i_i64[0], a2[7].m128i_i64[1]);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2[7].m128i_i64[0] + 112LL))(a2[7].m128i_i64[0]);
  get_place_class();
  v4 = *(_QWORD *)a1;
  v14 = nullptr;
  v15 = 0;
  (*(void (__fastcall **)(__int64, const char **))(v4 + 616))(a1, &v14);
  v5 = a2[8].m128i_i32[0];
  v6 = a2 + 4;
  v7 = s1;
  if ( (_QWORD)v15 )
    v7 = v14;
  sub_154460((__int64)&v16, a1);
  v8 = s1;
  if ( v17 )
    v8 = v16;
  sub_15CED0((__m128i *)(a1 + 440), v8, (__int64)v7, v6, v5);
  if ( v16 )
  {
    v17 = 0;
    qfree();
  }
  v10 = v14;
  *(_BYTE *)(a1 + 992) = 1;
  if ( !v10 || (*(_QWORD *)&v15 = 0, qfree(), *(_BYTE *)(a1 + 992)) )
  {
    if ( !*(_QWORD *)(a1 + 480) )
    {
      v13 = (struct _Unwind_Exception *)sub_158B30(v10);
      if ( v16 )
      {
        v17 = 0;
        qfree();
      }
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree();
      }
      _Unwind_Resume(v13);
    }
    if ( *(_DWORD *)(a1 + 472) == 1 && *(_QWORD *)(a1 + 856) )
      nullsub_9();
  }
  v11 = *(_QWORD *)(a1 + 536);
  v18[0] = 0;
  v18[1] = v11;
  sub_161FE0(a1 + 440, v6, v18, 7, 0, v9);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 680LL))(a1);
}

