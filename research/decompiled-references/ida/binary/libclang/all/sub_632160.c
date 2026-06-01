void __fastcall sub_632160(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        size_t a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned __int64 a12)
{
  int v14; // r13d
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rax
  _BYTE *v18; // rdi
  __m128i v19; // xmm3
  __int64 *v20; // rax
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+18h] [rbp-50h] BYREF
  __m128i v24; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+30h] [rbp-38h]

  if ( a12 <= 7 )
  {
    if ( a3 && (v14 = a2) != 0 )
    {
      v22 = (__m128i)_mm_loadh_ps((const double *)(a1 + 8));
    }
    else
    {
      clang_getNullLocation(&v24);
      v14 = v25;
      v22 = _mm_load_si128(&v24);
    }
    v15 = *(_QWORD *)(a1 + 40);
    v16 = operator new(0x70u);
    v17 = a6;
    *(_OWORD *)(v16 + 16) = 0;
    v18 = (_BYTE *)(v16 + 72);
    *(_QWORD *)(v16 + 32) = 0;
    *(_BYTE *)(v16 + 40) = 0;
    *(_DWORD *)(v16 + 48) = 2;
    *(_QWORD *)(v16 + 56) = v16 + 72;
    *(__m128i *)v16 = _mm_unpacklo_epi64(
                        (__m128i)(unsigned __int64)&off_47CFFA8,
                        (__m128i)(unsigned __int64)&off_47CFF88);
    if ( !a5 && a6 )
      JUMPOUT(0x5353A6);
    v23 = a6;
    if ( a6 > 0xF )
    {
      v21 = std::string::_M_create();
      *(_QWORD *)(v16 + 56) = v21;
      v18 = (_BYTE *)v21;
      *(_QWORD *)(v16 + 72) = v23;
    }
    else
    {
      if ( a6 == 1 )
      {
        *(_BYTE *)(v16 + 72) = *a5;
        goto LABEL_10;
      }
      if ( !a6 )
      {
LABEL_10:
        v19 = _mm_load_si128(&v22);
        *(_QWORD *)(v16 + 64) = v17;
        v18[v17] = 0;
        *(_DWORD *)(v16 + 104) = v14;
        *(__m128i *)(v16 + 88) = v19;
        v20 = *(__int64 **)(v15 + 16);
        if ( v20 == *(__int64 **)(v15 + 24) )
        {
          v23 = v16;
          sub_631D40(v15 + 8, &v23);
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        }
        else
        {
          *v20 = v16;
          *(_QWORD *)(v15 + 16) += 8LL;
        }
        return;
      }
    }
    memcpy(v18, a5, a6);
    v17 = v23;
    v18 = *(_BYTE **)(v16 + 56);
    goto LABEL_10;
  }
}

