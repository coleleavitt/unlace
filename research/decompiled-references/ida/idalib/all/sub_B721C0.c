__int64 __fastcall sub_B721C0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  unsigned __int64 v3; // r12
  void *v4; // rbp
  size_t v5; // r14
  const void *v6; // r14
  size_t v7; // r15
  _BYTE *v8; // r14
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // rax
  unsigned __int64 v12; // r12
  _BYTE *v13; // rdi
  size_t v14; // rbp
  __int64 v16; // rax
  _DWORD v17[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v17[0] = *(_DWORD *)(a1 + 32);
  if ( !v17[0] )
  {
    v16 = *(_QWORD *)(a1 + 24);
    if ( !v16 || (v17[0] = *(_DWORD *)(v16 + 24)) == 0 )
    {
LABEL_19:
      v4 = *(void **)(a2 + 32);
      v3 = *(_QWORD *)(a2 + 24);
      goto LABEL_4;
    }
  }
  sub_101AC40(v17, a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2312LL));
  v2 = j__strlen(": ");
  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(void **)(a2 + 32);
  v5 = v2;
  if ( v2 <= v3 - (unsigned __int64)v4 )
  {
    if ( !v2 )
      goto LABEL_4;
    memcpy(*(void **)(a2 + 32), ": ", v2);
    *(_QWORD *)(a2 + 32) += v5;
    goto LABEL_19;
  }
  sub_227BF10(a2, ": ", v2);
  v4 = *(void **)(a2 + 32);
  v3 = *(_QWORD *)(a2 + 24);
LABEL_4:
  v6 = *(const void **)(a1 + 40);
  if ( v6 )
  {
    v7 = j__strlen(*(const char **)(a1 + 40));
    if ( v7 <= v3 - (unsigned __int64)v4 )
    {
      if ( v7 )
      {
        memcpy(v4, v6, v7);
        *(_QWORD *)(a2 + 32) += v7;
        v3 = *(_QWORD *)(a2 + 24);
        v4 = *(void **)(a2 + 32);
      }
    }
    else
    {
      sub_227BF10(a2, v6, v7);
      v4 = *(void **)(a2 + 32);
      v3 = *(_QWORD *)(a2 + 24);
    }
  }
  v8 = *(_BYTE **)(a1 + 24);
  if ( v8 && (v8[28] & 0x7Fu) - 18 <= 0x3F )
  {
    v9 = j__strlen(" '");
    v10 = v9;
    if ( v9 > v3 - (unsigned __int64)v4 )
    {
      sub_227BF10(a2, " '", v9);
    }
    else if ( v9 )
    {
      memcpy(v4, " '", v9);
      *(_QWORD *)(a2 + 32) += v10;
    }
    (*(void (__fastcall **)(_BYTE *, __int64, __int64, __int64))(*(_QWORD *)v8 + 96LL))(
      v8,
      a2,
      *(_QWORD *)(a1 + 16) + 17464LL,
      1);
    v11 = j__strlen("'");
    v12 = *(_QWORD *)(a2 + 24);
    v13 = *(_BYTE **)(a2 + 32);
    v14 = v11;
    if ( v11 > v12 - (unsigned __int64)v13 )
    {
      sub_227BF10(a2, "'", v11);
      v13 = *(_BYTE **)(a2 + 32);
      v12 = *(_QWORD *)(a2 + 24);
    }
    else if ( v11 )
    {
      memcpy(v13, "'", v11);
      v12 = *(_QWORD *)(a2 + 24);
      v13 = (_BYTE *)(v14 + *(_QWORD *)(a2 + 32));
      *(_QWORD *)(a2 + 32) = v13;
    }
    if ( v12 > (unsigned __int64)v13 )
      goto LABEL_16;
  }
  else
  {
    v13 = v4;
    if ( v3 > (unsigned __int64)v4 )
    {
LABEL_16:
      *(_QWORD *)(a2 + 32) = v13 + 1;
      *v13 = 10;
      return (__int64)(v13 + 1);
    }
  }
  return sub_227BA10(a2, 10);
}
