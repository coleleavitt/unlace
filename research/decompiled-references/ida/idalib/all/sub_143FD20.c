__int64 __fastcall sub_143FD20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  __int64 v11; // r15
  int v12; // r12d
  __int16 v13; // ax
  __m128i si128; // xmm0
  char *v16; // rax
  size_t v17; // rdx
  __int16 v18; // ax
  unsigned __int8 v19; // al
  unsigned int v20; // ebx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // r14
  _BYTE *v24; // rax
  int v25; // eax
  int v27; // [rsp+18h] [rbp-150h]
  unsigned int v28; // [rsp+1Ch] [rbp-14Ch]
  unsigned __int8 v29; // [rsp+2Fh] [rbp-139h] BYREF
  char *v30; // [rsp+30h] [rbp-138h] BYREF
  size_t v31; // [rsp+38h] [rbp-130h]
  unsigned __int8 *v32[10]; // [rsp+40h] [rbp-128h] BYREF
  void *ptr; // [rsp+90h] [rbp-D8h] BYREF
  __m128i v34; // [rsp+98h] [rbp-D0h]
  _BYTE v35[192]; // [rsp+A8h] [rbp-C0h] BYREF

  LODWORD(v11) = *(unsigned __int8 *)(a3 + 546);
  v12 = *(_DWORD *)a1;
  if ( !(_BYTE)v11 )
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a3 + 48), v12, 1107);
    sub_AE9DF0((unsigned __int8 **)&ptr, a2, 5u);
    sub_AEA040((__int64)&ptr);
    *(_QWORD *)(a1 + 8) = a2;
    return (unsigned int)v11;
  }
  do
  {
    if ( (unsigned __int8)sub_1464550(a3, a1, 1) )
      goto LABEL_5;
    v13 = *(_WORD *)(a1 + 16);
  }
  while ( v13 == 4 );
  if ( v13 != 22 )
  {
    v27 = sub_13DC060(v12, 0, *(__int64 **)(a3 + 88), *(_QWORD *)(a3 + 56), a7, a8);
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a3 + 48), v27, 1120);
    sub_AE9DF0((unsigned __int8 **)&ptr, a2, 5u);
    sub_AE9DF0((unsigned __int8 **)&ptr, 22, 4u);
    sub_AEA040((__int64)&ptr);
    if ( *(_WORD *)(a1 + 16) == 16 )
      goto LABEL_9;
LABEL_5:
    LODWORD(v11) = 0;
    return (unsigned int)v11;
  }
  v27 = *(_DWORD *)a1;
  LODWORD(v11) = sub_1464550(a3, a1, 1);
  if ( (_BYTE)v11 )
    goto LABEL_5;
  if ( *(_WORD *)(a1 + 16) != 16 )
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a3 + 48), *(_DWORD *)a1, 1127);
    sub_AEA040((__int64)&ptr);
    return (unsigned int)v11;
  }
LABEL_9:
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v29 = 0;
  ptr = v35;
  v34 = si128;
  v16 = (char *)sub_145C740(a3, a1, &ptr, &v29);
  LODWORD(v11) = v29;
  v30 = v16;
  v31 = v17;
  if ( v29 )
  {
LABEL_23:
    LODWORD(v11) = 0;
    goto LABEL_24;
  }
  v28 = *(_DWORD *)a1;
  do
  {
    sub_14634E0(a3, a1);
    v18 = *(_WORD *)(a1 + 16);
  }
  while ( v18 == 4 );
  if ( v18 == 23 )
  {
    v19 = sub_141AD20(a3, *(_DWORD *)a1, &v30);
    if ( v31 )
    {
      v32[0] = nullptr;
      v20 = v19;
      v21 = sub_141EB20(
              a3,
              v28,
              v30,
              v31,
              v19,
              a6,
              a4,
              a5,
              nullptr,
              nullptr,
              nullptr,
              (__int64 *)v32,
              nullptr,
              nullptr,
              0,
              1,
              1);
      v11 = *(_QWORD *)(a3 + 1192);
      v22 = v21;
      if ( v11 )
      {
        v23 = 0;
        if ( v21 )
        {
          v24 = (_BYTE *)sub_13C2430(*(_QWORD *)(a3 + 104), v21);
          if ( v24 )
            v23 = (*v24 >> 3) & 7;
        }
        (*(void (__fastcall **)(__int64, _QWORD, char *, size_t, _QWORD, unsigned __int64, __int64))(*(_QWORD *)v11 + 288LL))(
          v11,
          v28,
          v30,
          v31,
          v20,
          v22,
          v23);
      }
      LOBYTE(v11) = v22 != 0;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  v25 = sub_13DC060(v28, 0, *(__int64 **)(a3 + 88), *(_QWORD *)(a3 + 56), si128, a8);
  sub_FC70B0((__int64)v32, *(_QWORD *)(a3 + 48), v25, 1120);
  sub_AE9DF0(v32, a2, 5u);
  sub_AE9DF0(v32, 23, 4u);
  sub_AEA040((__int64)v32);
  sub_FC70B0((__int64)v32, *(_QWORD *)(a3 + 48), v27, 109);
  sub_AE9DF0(v32, 22, 4u);
  sub_AEA040((__int64)v32);
LABEL_24:
  if ( ptr != v35 )
    free(ptr);
  return (unsigned int)v11;
}
