void __fastcall sub_1FA7820(__int64 a1, char a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // r10
  __int64 *v8; // r15
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // [rsp+0h] [rbp-1098h]
  __int64 *v18; // [rsp+8h] [rbp-1090h]
  unsigned int v19; // [rsp+10h] [rbp-1088h]
  __int128 v21; // [rsp+20h] [rbp-1078h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-1068h] BYREF
  void *ptr; // [rsp+40h] [rbp-1058h] BYREF
  __m128i si128; // [rsp+48h] [rbp-1050h]
  _BYTE v25[4160]; // [rsp+58h] [rbp-1040h] BYREF

  v17 = (a2 != 0) + 74LL;
  sub_1F6B880(&v21);
  sub_A1FE00(v21, v17, 1);
  sub_A1FE00(v21, 6, 4);
  sub_A1FE00(v21, 0, 10);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *((_QWORD *)&v21 + 1);
  ptr = (void *)v21;
  v21 = 0;
  si128.m128i_i64[0] = v5;
  v19 = sub_A22F90(v4, (__int64 *)&ptr);
  if ( si128.m128i_i64[0] )
    sub_4343A0((volatile signed __int32 *)si128.m128i_i64[0]);
  v6 = a1 + 1368;
  if ( a2 )
    v6 = a1 + 1408;
  v7 = *(__int64 **)(v6 + 24);
  v18 = &v7[9 * *(unsigned int *)(v6 + 32)];
  if ( v18 != v7 )
  {
    v8 = *(__int64 **)(v6 + 24);
    do
    {
      while ( 1 )
      {
        v9 = *v8;
        v10 = *v8;
        ptr = v25;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D90);
        sub_1FA5910(a1, v10, (__int64)(v8 + 1), (_DWORD **)&ptr, a2);
        v22[0] = v17;
        v15 = sub_1F85DD0(a1, v9, v11, v12, v13, v14);
        v16 = *(_QWORD *)(a1 + 16);
        v22[1] = v15;
        v2 &= 0xFFFFFF00FFFFFFFFLL;
        sub_1F759B0(v16, v19, (unsigned __int8 *)v22, 2, (unsigned __int64)ptr, si128.m128i_i64[0], v2);
        if ( ptr == v25 )
          break;
        free(ptr);
        v8 += 9;
        if ( v18 == v8 )
          goto LABEL_9;
      }
      v8 += 9;
    }
    while ( v18 != v8 );
  }
LABEL_9:
  if ( *((_QWORD *)&v21 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v21 + 1));
}
