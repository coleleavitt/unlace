__int64 __fastcall sub_7AD990(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbp
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rax
  const void *v18; // rbx
  int v19; // eax
  __int64 v20; // rbp
  void *v21; // rax
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v25; // [rsp+10h] [rbp-48h]
  int v26; // [rsp+1Ch] [rbp-3Ch]

  v11 = *(_QWORD *)(a1 + 8);
  if ( !v11 )
    v11 = *(_QWORD *)a1;
  sub_7443D0(v11, (unsigned __int16 *)(a1 + 53));
  if ( a7 )
  {
    sub_741460(v11);
    v13 = v12 - 1;
    if ( v12 )
      goto LABEL_5;
    return -1;
  }
  v23 = sub_741450(v11);
  if ( !v23 )
    return -1;
  v13 = v23 - 1;
LABEL_5:
  v14 = *(unsigned __int8 *)(v11 + 5881);
  if ( !v13 )
    return -1;
  v15 = (unsigned __int8)v14;
  if ( *(char *)(v13 + (unsigned __int8)v14 + 4) != a2 )
    return -1;
  if ( (*(_BYTE *)(v11 + 6016) & 2) != 0 )
  {
    v16 = *(unsigned int *)(v13 + 4);
    v17 = _byteswap_ulong(a3);
  }
  else
  {
    v26 = *(unsigned __int8 *)(v11 + 5881);
    v16 = *(_QWORD *)(v13 + 4);
    v25 = (unsigned __int8)v14;
    v17 = swap64(a3);
    v14 = v26;
    v15 = v25;
  }
  if ( v16 != v17 )
    return -1;
  v18 = (const void *)(v13 + v15 + 5);
  v19 = *(unsigned __int16 *)(v13 + 1) - v14 - 2;
  v20 = v19;
  if ( v19 == -1 )
    return -1;
  v21 = memchr(v18, 0, v19);
  if ( a4 )
  {
    if ( v21 )
      goto LABEL_21;
    result = sub_7B0040(a4, v18, v20);
  }
  else
  {
    if ( v21 )
    {
LABEL_21:
      if ( qword_2CD46D0 )
        qword_2CD46D0("null byte in ASCII string");
      return -1;
    }
    result = sub_7AFF80(a5, v18, v20, a6);
  }
  if ( result == -1 )
    goto LABEL_21;
  return result;
}
