void __fastcall sub_631FA0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, size_t a5)
{
  int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  void *v11; // rdi
  __m128i v12; // xmm3
  __int64 *v13; // rax
  __int64 v14; // rax
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h] BYREF
  __m128i v17; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+30h] [rbp-38h]

  if ( a3 && (v7 = a2) != 0 )
  {
    v15 = (__m128i)_mm_loadh_ps((const double *)(a1 + 8));
  }
  else
  {
    clang_getNullLocation(&v17);
    v7 = v18;
    v15 = _mm_load_si128(&v17);
  }
  v8 = *(_QWORD *)(a1 + 40);
  v9 = operator new(0x70u);
  v10 = a5;
  *(_OWORD *)(v9 + 16) = 0;
  v11 = (void *)(v9 + 72);
  *(_QWORD *)(v9 + 32) = 0;
  *(_BYTE *)(v9 + 40) = 0;
  *(_DWORD *)(v9 + 48) = 2;
  *(_QWORD *)(v9 + 56) = v9 + 72;
  *(__m128i *)v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_47CFFA8, (__m128i)(unsigned __int64)&off_47CFF88);
  if ( !a4 && a5 )
    sub_535392(v11, a2);
  v16 = a5;
  if ( a5 > 0xF )
  {
    v14 = std::string::_M_create();
    *(_QWORD *)(v9 + 56) = v14;
    v11 = (void *)v14;
    *(_QWORD *)(v9 + 72) = v16;
LABEL_15:
    memcpy(v11, a4, a5);
    v10 = v16;
    v11 = *(void **)(v9 + 56);
    goto LABEL_9;
  }
  if ( a5 == 1 )
  {
    *(_BYTE *)(v9 + 72) = *a4;
    goto LABEL_9;
  }
  if ( a5 )
    goto LABEL_15;
LABEL_9:
  v12 = _mm_load_si128(&v15);
  *(_QWORD *)(v9 + 64) = v10;
  *((_BYTE *)v11 + v10) = 0;
  *(_DWORD *)(v9 + 104) = v7;
  *(__m128i *)(v9 + 88) = v12;
  v13 = *(__int64 **)(v8 + 16);
  if ( v13 == *(__int64 **)(v8 + 24) )
  {
    v16 = v9;
    sub_631D40(v8 + 8, &v16);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  }
  else
  {
    *v13 = v9;
    *(_QWORD *)(v8 + 16) += 8LL;
  }
}

