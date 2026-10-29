unsigned __int64 __fastcall sub_F04600(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  unsigned __int8 v7; // al
  __int64 v8; // r13
  int v9; // r14d
  void *v10; // rcx
  __int64 v11; // rsi
  unsigned __int8 v12; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  const char *v17; // rsi
  void *v18; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-A0h]
  void *v20[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v21[16]; // [rsp+30h] [rbp-88h] BYREF
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __m128i si128; // [rsp+48h] [rbp-70h]
  _BYTE v24[96]; // [rsp+58h] [rbp-60h] BYREF

  if ( (*(_BYTE *)(a1 + 28) & 0x20) == 0
    || (v5 = *(_QWORD *)(a1 + 72)) == 0
    || (result = sub_F03E20(*(_QWORD *)a1, a2, v5, a3), !(_BYTE)result) )
  {
    v7 = sub_F65140(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v8 = *(_QWORD *)a1;
    v9 = v7;
    v10 = *(void **)(a2 + 16);
    v11 = *(unsigned int *)(a2 + 24);
    v12 = v7;
    v13 = (unsigned __int64)(v11 + 63) >> 6;
    if ( v13 > 1 )
    {
      sub_2205610(&v18, v11, v13, v10);
    }
    else
    {
      v19 = v11;
      if ( (unsigned int)v11 > 0x40 )
        sub_2205470(&v18, v10, 0);
      else
        v18 = v10;
    }
    ptr = v24;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    sub_220BA90((unsigned int)&v18, (unsigned int)&ptr, 10, v9, 0, 1, 0);
    v20[0] = v21;
    sub_F03D80(v20, ptr, (__int64)ptr + si128.m128i_i64[0]);
    if ( ptr != v24 )
      free(ptr);
    sub_227BF10(v8, v20[0], v20[1]);
    if ( v20[0] != v21 )
      operator delete(v20[0]);
    if ( v19 > 0x40 && v18 )
      operator delete[](v18);
    v14 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v14 + 16) == 10 )
    {
      v17 = "wb";
      if ( !v12 )
        v17 = "uwb";
      return sub_995540(*(_QWORD *)a1, v17);
    }
    else
    {
      result = ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 18LL) >> 3) + 75) & 0x1FF;
      switch ( (int)result )
      {
        case 0:
        case 11:
        case 12:
          result = sub_995540(*(_QWORD *)a1, "i8");
          break;
        case 1:
          result = sub_995540(*(_QWORD *)a1, "Ui8");
          break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 10:
        case 13:
        case 15:
        case 18:
          return result;
        case 6:
          result = sub_995540(*(_QWORD *)a1, "Ui16");
          break;
        case 7:
          v15 = *(_QWORD *)a1;
          result = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
          if ( result >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
          {
            result = sub_227BA10(v15, 85);
          }
          else
          {
            *(_QWORD *)(v15 + 32) = result + 1;
            *(_BYTE *)result = 85;
          }
          break;
        case 8:
          result = sub_995540(*(_QWORD *)a1, "UL");
          break;
        case 9:
          result = sub_995540(*(_QWORD *)a1, "ULL");
          break;
        case 14:
          result = sub_995540(*(_QWORD *)a1, "i16");
          break;
        case 16:
          v16 = *(_QWORD *)a1;
          result = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
          if ( result >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
          {
            result = sub_227BA10(v16, 76);
          }
          else
          {
            *(_QWORD *)(v16 + 32) = result + 1;
            *(_BYTE *)result = 76;
          }
          break;
        case 17:
          result = sub_995540(*(_QWORD *)a1, "LL");
          break;
      }
    }
  }
  return result;
}
