__int64 __fastcall sub_2119720(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE *v6; // rdi
  __int64 v7; // rdx
  _BYTE *v8; // rax
  __int64 result; // rax
  _BYTE *v10; // rdx
  size_t *v11; // rsi
  size_t v12; // r12
  const void *v13; // rsi

  v3 = *(_QWORD **)(a2 + 32);
  v4 = a2;
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v3 > 7u )
  {
    *v3 = 0x2074636573632E09LL;
    v6 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 8LL);
    *(_QWORD *)(a2 + 32) = v6;
  }
  else
  {
    v5 = sub_227BF10(a2, "\t.csect ", 8);
    v6 = *(_BYTE **)(v5 + 32);
    v4 = v5;
  }
  v7 = *(_QWORD *)(a1 + 176);
  v8 = *(_BYTE **)(v4 + 24);
  if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
  {
    v11 = *(size_t **)(v7 - 8);
    v12 = *v11;
    v13 = v11 + 3;
    if ( v12 > v8 - v6 )
    {
      v4 = sub_227BF10(v4, v13, v12);
      v6 = *(_BYTE **)(v4 + 32);
      if ( *(_BYTE **)(v4 + 24) == v6 )
        goto LABEL_5;
      goto LABEL_10;
    }
    if ( v12 )
    {
      memcpy(v6, v13, v12);
      v8 = *(_BYTE **)(v4 + 24);
      v6 = (_BYTE *)(v12 + *(_QWORD *)(v4 + 32));
      *(_QWORD *)(v4 + 32) = v6;
    }
  }
  if ( v8 == v6 )
  {
LABEL_5:
    v4 = sub_227BF10(v4, ",", 1);
    goto LABEL_6;
  }
LABEL_10:
  *v6 = 44;
  ++*(_QWORD *)(v4 + 32);
LABEL_6:
  result = sub_227B910(v4, *(unsigned __int8 *)(a1 + 32));
  v10 = *(_BYTE **)(result + 32);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(result + 24) )
    return sub_227BA10(result, 10);
  *(_QWORD *)(result + 32) = v10 + 1;
  *v10 = 10;
  return result;
}
