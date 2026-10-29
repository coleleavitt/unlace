unsigned __int64 __fastcall sub_2119050(__int64 a1, _BYTE **a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _BYTE *v8; // rax
  __int64 v9; // r12
  void *v10; // rdi
  const void *v11; // rsi
  size_t v12; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  void *v17; // rdx
  _WORD *v18; // rdx
  _BYTE *v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // ecx
  _BYTE *v22; // rax
  _BYTE *v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  size_t *v27; // rsi
  size_t v28; // rdx
  void *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdi
  void *v32; // rdx
  _BYTE *v33; // rdx

  if ( (*((unsigned __int8 (__fastcall **)(_BYTE **, _QWORD, _QWORD))*a2 + 7))(
         a2,
         *(_QWORD *)(a1 + 152),
         *(_QWORD *)(a1 + 160)) )
  {
    v8 = *(_BYTE **)(a4 + 32);
    if ( (unsigned __int64)v8 >= *(_QWORD *)(a4 + 24) )
    {
      v9 = sub_227BA10(a4, 9);
    }
    else
    {
      v9 = a4;
      *(_QWORD *)(a4 + 32) = v8 + 1;
      *v8 = 9;
    }
    v10 = *(void **)(v9 + 32);
    v11 = *(const void **)(a1 + 152);
    v12 = *(_QWORD *)(a1 + 160);
    if ( v12 > *(_QWORD *)(v9 + 24) - (_QWORD)v10 )
    {
      sub_227BF10(v9, v11, v12);
    }
    else if ( v12 )
    {
      memcpy(v10, v11, v12);
      *(_QWORD *)(v9 + 32) += v12;
    }
    result = *(_QWORD *)(a4 + 32);
    v14 = *(_QWORD *)(a4 + 24);
    if ( a5 )
    {
      if ( result >= v14 )
      {
        v15 = sub_227BA10(a4, 9);
      }
      else
      {
        v15 = a4;
        *(_QWORD *)(a4 + 32) = result + 1;
        *(_BYTE *)result = 9;
      }
      sub_227B910(v15, a5);
      result = *(_QWORD *)(a4 + 32);
      v14 = *(_QWORD *)(a4 + 24);
    }
    v16 = a4;
    if ( v14 > result )
    {
      *(_QWORD *)(a4 + 32) = result + 1;
      *(_BYTE *)result = 10;
      return result;
    }
    return sub_227BA10(v16, 10);
  }
  v17 = *(void **)(a4 + 32);
  if ( *(_QWORD *)(a4 + 24) - (_QWORD)v17 > 9u )
  {
    qmemcpy(v17, "\t.section\t", 10);
    *(_QWORD *)(a4 + 32) += 10LL;
  }
  else
  {
    sub_227BF10(a4, "\t.section\t", 10);
  }
  sub_2118DE0(a4, *(void **)(a1 + 152), *(_QWORD *)(a1 + 160));
  v18 = *(_WORD **)(a4 + 32);
  if ( *(_QWORD *)(a4 + 24) - (_QWORD)v18 > 1u )
  {
    *v18 = 8748;
    v19 = (_BYTE *)(*(_QWORD *)(a4 + 32) + 2LL);
    *(_QWORD *)(a4 + 32) = v19;
  }
  else
  {
    sub_227BF10(a4, ",\"", 2);
    v19 = *(_BYTE **)(a4 + 32);
  }
  v20 = *(_QWORD *)(a4 + 24);
  if ( *(_BYTE *)(a1 + 196) )
  {
    if ( (unsigned __int64)v19 >= v20 )
    {
      sub_227BA10(a4, 112);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v19 + 1;
      *v19 = 112;
    }
    v19 = *(_BYTE **)(a4 + 32);
    v20 = *(_QWORD *)(a4 + 24);
  }
  if ( *(_QWORD *)(a1 + 176) )
  {
    if ( v20 <= (unsigned __int64)v19 )
    {
      sub_227BA10(a4, 71);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v19 + 1;
      *v19 = 71;
    }
    v19 = *(_BYTE **)(a4 + 32);
    v20 = *(_QWORD *)(a4 + 24);
  }
  v21 = *(_DWORD *)(a1 + 200);
  if ( (v21 & 1) != 0 )
  {
    if ( v20 <= (unsigned __int64)v19 )
    {
      sub_227BA10(a4, 83);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v19 + 1;
      *v19 = 83;
    }
    v21 = *(_DWORD *)(a1 + 200);
    v19 = *(_BYTE **)(a4 + 32);
    v20 = *(_QWORD *)(a4 + 24);
  }
  if ( (v21 & 2) != 0 )
  {
    if ( v20 <= (unsigned __int64)v19 )
    {
      sub_227BA10(a4, 84);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v19 + 1;
      *v19 = 84;
    }
    v21 = *(_DWORD *)(a1 + 200);
    v19 = *(_BYTE **)(a4 + 32);
    v20 = *(_QWORD *)(a4 + 24);
  }
  if ( (v21 & 4) != 0 )
  {
    if ( v20 <= (unsigned __int64)v19 )
    {
      sub_227BA10(a4, 82);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v19 + 1;
      *v19 = 82;
    }
    v19 = *(_BYTE **)(a4 + 32);
    v20 = *(_QWORD *)(a4 + 24);
  }
  if ( (unsigned __int64)v19 >= v20 )
  {
    sub_227BA10(a4, 34);
  }
  else
  {
    *(_QWORD *)(a4 + 32) = v19 + 1;
    *v19 = 34;
  }
  v22 = *(_BYTE **)(a4 + 32);
  if ( (unsigned __int64)v22 >= *(_QWORD *)(a4 + 24) )
  {
    sub_227BA10(a4, 44);
  }
  else
  {
    *(_QWORD *)(a4 + 32) = v22 + 1;
    *v22 = 44;
  }
  v23 = *(_BYTE **)(a4 + 32);
  v24 = *(_QWORD *)(a4 + 24);
  if ( *a2[6] == 64 )
  {
    if ( v24 <= (unsigned __int64)v23 )
    {
      sub_227BA10(a4, 37);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v23 + 1;
      *v23 = 37;
    }
  }
  else if ( v24 <= (unsigned __int64)v23 )
  {
    sub_227BA10(a4, 64);
  }
  else
  {
    *(_QWORD *)(a4 + 32) = v23 + 1;
    *v23 = 64;
  }
  v25 = *(_QWORD *)(a4 + 24);
  result = *(_QWORD *)(a4 + 32);
  if ( *(_QWORD *)(a1 + 176) )
  {
    if ( result == v25 )
    {
      sub_227BF10(a4, ",", 1);
    }
    else
    {
      *(_BYTE *)result = 44;
      ++*(_QWORD *)(a4 + 32);
    }
    v26 = *(_QWORD *)(a1 + 176);
    if ( (*(_BYTE *)(v26 + 8) & 1) != 0 )
    {
      v27 = *(size_t **)(v26 - 8);
      v28 = *v27;
      v29 = v27 + 3;
    }
    else
    {
      v28 = 0;
      v29 = nullptr;
    }
    sub_2118DE0(a4, v29, v28);
    v30 = *(_QWORD *)(a4 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(a4 + 24) - v30) > 6 )
    {
      *(_DWORD *)v30 = 1836016428;
      *(_WORD *)(v30 + 4) = 24932;
      *(_BYTE *)(v30 + 6) = 116;
      result = *(_QWORD *)(a4 + 32) + 7LL;
      *(_QWORD *)(a4 + 32) = result;
    }
    else
    {
      sub_227BF10(a4, ",comdat", 7);
      result = *(_QWORD *)(a4 + 32);
    }
    v25 = *(_QWORD *)(a4 + 24);
  }
  if ( *(_DWORD *)(a1 + 172) != -1 )
  {
    if ( v25 - result > 7 )
    {
      v31 = a4;
      *(_QWORD *)result = 0x2C657571696E752CLL;
      *(_QWORD *)(a4 + 32) += 8LL;
    }
    else
    {
      v31 = sub_227BF10(a4, ",unique,", 8);
    }
    sub_227B910(v31, *(unsigned int *)(a1 + 172));
    result = *(_QWORD *)(a4 + 32);
    v25 = *(_QWORD *)(a4 + 24);
  }
  if ( result >= v25 )
  {
    result = sub_227BA10(a4, 10);
  }
  else
  {
    *(_QWORD *)(a4 + 32) = result + 1;
    *(_BYTE *)result = 10;
  }
  if ( a5 )
  {
    v32 = *(void **)(a4 + 32);
    if ( *(_QWORD *)(a4 + 24) - (_QWORD)v32 > 0xCu )
    {
      qmemcpy(v32, "\t.subsection\t", 13);
      *(_QWORD *)(a4 + 32) += 13LL;
    }
    else
    {
      a4 = sub_227BF10(a4, "\t.subsection\t", 13);
    }
    result = sub_227B910(a4, a5);
    v33 = *(_BYTE **)(result + 32);
    if ( (unsigned __int64)v33 < *(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 32) = v33 + 1;
      *v33 = 10;
      return result;
    }
    v16 = result;
    return sub_227BA10(v16, 10);
  }
  return result;
}
