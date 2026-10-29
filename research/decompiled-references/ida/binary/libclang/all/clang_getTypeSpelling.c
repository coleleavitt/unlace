const char *__fastcall clang_getTypeSpelling(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  _BYTE *v9; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // di
  __int64 v14; // [rsp+8h] [rbp-110h] BYREF
  _QWORD v15[2]; // [rsp+10h] [rbp-108h] BYREF
  _BYTE v16[32]; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+40h] [rbp-D8h]
  __int64 *v18; // [rsp+50h] [rbp-C8h] BYREF
  int v19; // [rsp+58h] [rbp-C0h]
  __int128 v20; // [rsp+60h] [rbp-B8h]
  __int64 v21; // [rsp+70h] [rbp-A8h]
  char v22; // [rsp+78h] [rbp-A0h]
  int v23; // [rsp+7Ch] [rbp-9Ch]
  void **p_ptr; // [rsp+80h] [rbp-98h]
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __m128i si128; // [rsp+98h] [rbp-80h]
  _BYTE v27[112]; // [rsp+A8h] [rbp-70h] BYREF

  v14 = a8;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return sub_690460();
  v22 = 0;
  v19 = 2;
  v18 = (__int64 *)&off_49DA340;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
  ptr = v27;
  v23 = 1;
  v21 = 0;
  p_ptr = &ptr;
  v20 = 0;
  sub_2623850(&v18, 0, 0, 0, a5, a6);
  if ( !a9 )
    BUG();
  v11 = *(_QWORD *)(a9 + 8);
  v15[1] = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 80) + 2160LL);
  v13 = *(_BYTE *)(v12 + 1);
  v15[0] = v15[0] & 0xFFFF000000000000LL
         | ((unsigned __int64)(*(_BYTE *)(v12 + 89) & 1) << 47)
         | ((unsigned __int64)((*(_DWORD *)v12 & 0x10000080) == 128) << 34)
         | ((unsigned __int64)((*(_BYTE *)(v12 + 3) & 8) != 0) << 33)
         | ((unsigned __int64)((v13 & 0x10) == 0) << 30)
         | ((unsigned __int64)((v13 & 8) == 0) << 29)
         | ((unsigned __int64)((*(_BYTE *)v12 & 2) != 0) << 28)
         | ((unsigned __int64)((v13 & 0x10) != 0) << 27)
         | ((unsigned __int64)(*(_BYTE *)v12 & 1) << 26)
         | ((unsigned __int64)((v13 & 8) != 0) << 25)
         | ((unsigned __int64)((*(_WORD *)v12 & 0x1008) != 0) << 24)
         | ((unsigned __int64)((v13 & 8) != 0) << 9)
         | 0x660800442002LL
         | ((unsigned __int64)((*(_BYTE *)(v12 + 3) & 4) != 0) << 23);
  v17 = 257;
  sub_B2AEC0(&v14, &v18, v15, v16, 0);
  v9 = sub_6905C0(*p_ptr, (size_t)p_ptr[1]);
  v18 = &qword_4A6EA70[2];
  sub_2623770(&v18);
  if ( ptr != v27 )
    free(ptr);
  return v9;
}

