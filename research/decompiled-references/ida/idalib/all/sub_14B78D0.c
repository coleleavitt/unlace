__int64 __fastcall sub_14B78D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v8; // ax
  __int64 v10; // rax
  int v11; // eax
  int *v12; // rsi
  int v13; // eax
  unsigned int *v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rbx
  unsigned int *v19; // rdi
  __int64 v20; // rsi
  const char *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rdx
  size_t v24; // rax
  size_t v25; // rax
  unsigned int v26; // eax
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  unsigned __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-B8h]
  __int64 v31; // [rsp+18h] [rbp-A0h] BYREF
  _BYTE *v32; // [rsp+20h] [rbp-98h] BYREF
  signed __int64 v33; // [rsp+28h] [rbp-90h]
  __m128i v34; // [rsp+30h] [rbp-88h] BYREF
  __m128i v35; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-68h]

  v8 = *(_WORD *)(a2 + 32);
  switch ( v8 )
  {
    case 31:
      v11 = *(_DWORD *)(a2 + 16);
      v12 = (int *)(a2 + 16);
      v12[6] = v11;
      sub_14634E0(*(__int64 **)(a2 + 8), v12);
      v13 = *(_DWORD *)(a2 + 40);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 32) = v13;
      *(_DWORD *)(a1 + 36) = v13;
      *(_BYTE *)(a1 + 40) = 1;
      break;
    case 3:
      v10 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(v10 + 760) )
      {
        *(_BYTE *)(v10 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v10 + 48) + 6LL) = 1;
      }
      *(_WORD *)(a2 + 32) = 1;
      sub_170F590(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 656LL));
      *(_BYTE *)(a1 + 40) = 0;
      break;
    case 5:
      v31 = 0;
      v14 = (unsigned int *)sub_14803B0(a2, a2, a3, a4, a5, a6);
      v15 = sub_147C6B0(a2, &v31);
      v17 = v16;
      v18 = v15;
      if ( (unsigned int)v15 | HIDWORD(v16) & 0x7FFFFFFF | ((unsigned int)v16 | HIDWORD(v15)) & 0x7FFFFFFF )
      {
        v19 = *(unsigned int **)(*((_QWORD *)v14 + 1) + 16LL);
        v20 = *v19;
        v32 = v19 + 4;
        v33 = v20;
        v21 = sub_1479BE0((_BYTE *)v19 + 16, v20);
        v30 = v22;
        sub_B8FAD0((__int64)v21, v22);
        if ( v23 )
        {
          v24 = j__strlen("xros");
          if ( sub_2246AB0(&v32, "xros", v24, 0) == -1 )
          {
            v25 = j__strlen("xrOS");
            if ( sub_2246AB0(&v32, "xrOS", v25, 0) == -1 )
            {
              v26 = *v14;
              v34.m128i_i64[1] = v17;
              v36 = __PAIR64__(HIDWORD(v31), v26);
              v34.m128i_i64[0] = v18;
              v27 = _mm_load_si128(&v34);
              v35.m128i_i64[0] = (__int64)v21;
              v35.m128i_i64[1] = v30;
              v28 = _mm_load_si128(&v35);
              v29 = __PAIR64__(HIDWORD(v31), v26);
              *(__m128i *)a1 = v27;
              *(__m128i *)(a1 + 16) = v28;
              *(_QWORD *)(a1 + 32) = v29;
              *(_BYTE *)(a1 + 40) = 1;
              return a1;
            }
          }
        }
        sub_1564820(&v34, a2, *v14, 1560);
        sub_AEC220((unsigned __int8 **)&v34, v32, v33);
        sub_AEA040((__int64)&v34);
      }
      *(_BYTE *)(a1 + 40) = 0;
      break;
    default:
      sub_1564840(&v34, a2, a2 + 16, 1559);
      sub_AEA040((__int64)&v34);
      *(_BYTE *)(a1 + 40) = 0;
      break;
  }
  return a1;
}
