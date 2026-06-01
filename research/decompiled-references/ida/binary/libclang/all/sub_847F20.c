void __fastcall sub_847F20(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r12
  _BYTE *v7; // rdi
  size_t v8; // rbp
  _BYTE *v9; // r15
  __int64 v10; // rax

  v3 = a2[1] - *a2;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v3 )
  {
    if ( v3 > 0x7FFFFFFFFFFFFFE0LL )
      sub_555886(a1);
    v4 = operator new(v3);
  }
  else
  {
    v4 = 0;
  }
  *(_QWORD *)(a1 + 16) = v4 + v3;
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
  v5 = a2[1];
  v6 = *a2;
  if ( *a2 != v5 )
  {
    while ( 1 )
    {
      v7 = (_BYTE *)(v4 + 16);
      *(_QWORD *)v4 = v4 + 16;
      v8 = *(_QWORD *)(v6 + 8);
      v9 = *(_BYTE **)v6;
      if ( v8 > 0xF )
        break;
      if ( v8 == 1 )
      {
        *(_BYTE *)(v4 + 16) = *v9;
        goto LABEL_8;
      }
      if ( v8 )
        goto LABEL_11;
LABEL_8:
      v6 += 32;
      *(_QWORD *)(v4 + 8) = v8;
      v4 += 32;
      v7[v8] = 0;
      if ( v5 == v6 )
        goto LABEL_13;
    }
    v10 = std::string::_M_create();
    *(_QWORD *)v4 = v10;
    v7 = (_BYTE *)v10;
    *(_QWORD *)(v4 + 16) = v8;
LABEL_11:
    memcpy(v7, v9, v8);
    v7 = *(_BYTE **)v4;
    goto LABEL_8;
  }
LABEL_13:
  *(_QWORD *)(a1 + 8) = v4;
}

