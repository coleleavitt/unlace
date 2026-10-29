void __fastcall sub_644390(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rbp
  void *v7; // rdi
  int v8; // eax
  size_t v9; // r12
  _BYTE *v10; // r15
  _BYTE *v11; // rdi
  size_t v12; // r12
  _BYTE *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = a2[1] - *a2;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v3 )
  {
    if ( v3 > 0x7FFFFFFFFFFFFFD0LL )
      sub_555886();
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
      v11 = (_BYTE *)(v4 + 16);
      *(_QWORD *)v4 = v4 + 16;
      v12 = *(_QWORD *)(v6 + 8);
      v13 = *(_BYTE **)v6;
      if ( v12 > 0xF )
        break;
      if ( v12 != 1 )
      {
        if ( !v12 )
          goto LABEL_8;
        goto LABEL_14;
      }
      *(_BYTE *)(v4 + 16) = *v13;
LABEL_8:
      *(_QWORD *)(v4 + 8) = v12;
      v11[v12] = 0;
      v7 = (void *)(v4 + 56);
      v8 = *(_DWORD *)(v6 + 32);
      *(_QWORD *)(v4 + 40) = v4 + 56;
      v9 = *(_QWORD *)(v6 + 48);
      v10 = *(_BYTE **)(v6 + 40);
      *(_DWORD *)(v4 + 32) = v8;
      if ( v9 > 0xF )
      {
        v15 = std::string::_M_create();
        *(_QWORD *)(v4 + 40) = v15;
        v7 = (void *)v15;
        *(_QWORD *)(v4 + 56) = v9;
LABEL_18:
        memcpy(v7, v10, v9);
        v7 = *(void **)(v4 + 40);
        goto LABEL_11;
      }
      if ( v9 == 1 )
      {
        *(_BYTE *)(v4 + 56) = *v10;
      }
      else if ( v9 )
      {
        goto LABEL_18;
      }
LABEL_11:
      *(_QWORD *)(v4 + 48) = v9;
      v6 += 80;
      v4 += 80;
      *((_BYTE *)v7 + v9) = 0;
      *(_QWORD *)(v4 - 8) = *(_QWORD *)(v6 - 8);
      if ( v5 == v6 )
        goto LABEL_19;
    }
    v14 = std::string::_M_create();
    *(_QWORD *)v4 = v14;
    v11 = (_BYTE *)v14;
    *(_QWORD *)(v4 + 16) = v12;
LABEL_14:
    memcpy(v11, v13, v12);
    v11 = *(_BYTE **)v4;
    goto LABEL_8;
  }
LABEL_19:
  *(_QWORD *)(a1 + 8) = v4;
}

