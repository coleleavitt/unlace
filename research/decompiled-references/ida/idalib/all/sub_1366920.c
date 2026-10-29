__int64 __fastcall sub_1366920(__int64 a1, __m128i *a2)
{
  _QWORD *v3; // rbx
  void (*v4)(void); // rax
  char v5; // r12
  __int64 v6; // rdi
  char v7; // al
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  void *v11; // rbp
  __int64 result; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  void *v17; // rdi
  size_t v18; // r15
  const void *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  void *v22; // [rsp+8h] [rbp-90h] BYREF
  __m128i v23; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v24[48]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v25; // [rsp+50h] [rbp-48h]

  v3 = *(_QWORD **)(a1 + 96);
  if ( v3[12] )
    sub_145CD10();
  v4 = *(void (**)(void))(**(_QWORD **)(v3[4] + 48LL) + 32LL);
  if ( v4 != nullsub_556 )
    v4();
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  v5 = **(_BYTE **)(v3[2] + 160LL) & 1;
  if ( !v5 )
  {
    sub_12E9DD0((__int64)v3, 0);
    sub_12E9D50((__int64)v3, nullptr);
    a2 = &v23;
    v23.m128i_i64[0] = 0;
    sub_12E9E10((__int64)v3, v23.m128i_i64);
    v6 = v23.m128i_i64[0];
    if ( v23.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23.m128i_i64[0] + 8LL))(v23.m128i_i64[0]);
    if ( (**(_BYTE **)(v3[2] + 160LL) & 8) == 0 )
      goto LABEL_9;
LABEL_23:
    v14 = sub_227D6D0(v6, a2);
    v15 = sub_995540(v14, "\nSTATISTICS FOR '");
    v16 = v15;
    if ( *(_BYTE *)(a1 + 72) )
    {
      v17 = *(void **)(v15 + 32);
      v18 = *(_QWORD *)(a1 + 64);
      v19 = *(const void **)(a1 + 56);
      if ( v18 <= *(_QWORD *)(v15 + 24) - (_QWORD)v17 )
        goto LABEL_25;
    }
    else
    {
      v17 = *(void **)(v15 + 32);
      v18 = *(_QWORD *)(a1 + 16);
      v19 = *(const void **)(a1 + 8);
      if ( v18 <= *(_QWORD *)(v15 + 24) - (_QWORD)v17 )
      {
LABEL_25:
        if ( v18 )
        {
          memcpy(v17, v19, v18);
          *(_QWORD *)(v16 + 32) += v18;
        }
        goto LABEL_27;
      }
    }
    v16 = sub_227BF10(v15, v19, v18);
LABEL_27:
    sub_995540(v16, "':\n");
    if ( v3[12] )
    {
      sub_145C0E0();
      sub_FE2F50(v3[12] + 552LL);
      sub_13BFC20(*(_QWORD *)(v3[12] + 104LL));
    }
    v20 = v3[9];
    if ( v20 )
      sub_101D6D0(v20, (__int64)"':\n");
    v21 = sub_227D6D0(v20, "':\n");
    sub_995540(v21, "\n");
    goto LABEL_9;
  }
  sub_12EA360((__int64)v3);
  sub_220FB80(v3[14]);
  v13 = v3[16];
  v3[14] = 0;
  v3[16] = 0;
  v6 = v13;
  sub_220FB80(v13);
  if ( v13 )
  {
    v6 = v13;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  if ( (**(_BYTE **)(v3[2] + 160LL) & 8) != 0 )
    goto LABEL_23;
LABEL_9:
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  sub_12ED210((__int64)v3, v7);
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( v5 )
    {
      v8 = (_QWORD *)operator new(0x10u);
      *v8 = v3[12];
      v9 = v3[13];
      v8[1] = v9;
      if ( v9 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
        else
          ++*(_DWORD *)(v9 + 8);
      }
      sub_220FB80(v8);
      sub_220FB80(v3[9]);
      v3[9] = 0;
      sub_220FB80(v3[8]);
      v3[8] = 0;
      v10 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = 0;
      sub_220FB80(v10);
    }
    else
    {
      v23 = 0u;
      sub_12E9CC0((__int64)v3, &v23);
      if ( v23.m128i_i64[1] )
        sub_4343A0((volatile signed __int32 *)v23.m128i_i64[1]);
      sub_12E9C80((__int64)v3, nullptr);
      sub_12E9C40((__int64)v3, nullptr);
    }
  }
  *(_QWORD *)(a1 + 96) = 0;
  v22 = nullptr;
  v25 = 0;
  v23.m128i_i64[0] = (__int64)v24;
  v23.m128i_i64[1] = 0;
  v24[0] = 0;
  WORD4(v25) = 0;
  sub_13668A0(a1, &v23, (__int64 *)&v22);
  if ( (_BYTE *)v23.m128i_i64[0] != v24 )
    operator delete((void *)v23.m128i_i64[0]);
  v11 = v22;
  if ( v22 )
  {
    sub_12E2140((__int64)v22);
    operator delete(v11, 0x828u);
  }
  result = *(_QWORD *)v3[2];
  *(_BYTE *)(result + 201) &= 0x1Fu;
  return result;
}
