_QWORD *__fastcall sub_2007770(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v5; // rax
  void (__fastcall *v6)(_QWORD *, __int64, __int64); // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  void (__fastcall *v12)(_QWORD *, __int64, __int64); // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r13
  unsigned int v17; // ebp
  __int64 v18; // r12
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r14
  unsigned int v22; // r12d
  __int64 v23; // r13
  _QWORD v24[2]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v25; // [rsp+10h] [rbp-48h]
  __int16 v26; // [rsp+20h] [rbp-38h]

  v5 = "No action to execute.";
  if ( !a4 )
    goto LABEL_15;
  if ( a4 != 1 )
  {
    v5 = "Only support executing exactly 1 action at this point.";
LABEL_15:
    v24[0] = v5;
    v26 = 259;
    v14 = sub_2220490(a1);
    v16 = v15;
    v17 = v14;
    v18 = operator new(0x40u);
    sub_2220590(v18, v24, v17, v16);
    *a1 = v18;
    return a1;
  }
  v6 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(a3 + 24);
  v8 = a2 + 80;
  v25.m128i_i64[0] = 0;
  if ( v6 )
  {
    v6(v24, a3 + 8, 2);
    v25 = _mm_loadu_si128((const __m128i *)(a3 + 24));
  }
  sub_2009580(v8, v24, a3, a4, a5);
  if ( v25.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v25.m128i_i64[0])(v24, v24, 3);
  v25.m128i_i64[0] = 0;
  v12 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(a2 + 440);
  if ( v12 )
  {
    v12(v24, a2 + 424, 2);
    v25 = _mm_loadu_si128((const __m128i *)(a2 + 440));
  }
  sub_2009580(v8, v24, v9, v10, v11);
  if ( v25.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v25.m128i_i64[0])(v24, v24, 3);
  if ( (unsigned int)sub_200BB40(v8, *(_QWORD *)a3) )
  {
    v24[0] = "Failed to run action.";
    v26 = 259;
    v19 = sub_2220490(v8);
    v21 = v20;
    v22 = v19;
    v23 = operator new(0x40u);
    sub_2220590(v23, v24, v22, v21);
    *a1 = v23;
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}
