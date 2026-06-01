/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C160
// Address: 0x000000000046C160

//----- (000000000046C160) ----------------------------------------------------
void *__fastcall sub_46C160(char **a1, unsigned int *a2)
{
  unsigned int v2; // edx
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  const char *v11; // rsi
  size_t v12; // rax
  _BYTE v13[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v14[5]; // [rsp+13h] [rbp-35h] BYREF
  _QWORD v15[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = a2[5];
  v15[0] = __readfsqword(0x28u);
  v4 = sub_47FB50(v13, (unsigned __int64)v14, v2 & 0xFFFFFFF) - v13;
  if ( v4 )
    sub_46B720(a1, v13, v4);
  v5 = sub_47FB50(v13, (unsigned __int64)v14, *a2) - v13;
  if ( v5 )
    sub_46B720(a1, v13, v5);
  v6 = sub_47FB50(v13, (unsigned __int64)v14, a2[1]) - v13;
  if ( v6 )
    sub_46B720(a1, v13, v6);
  v7 = sub_47FC90(v13, (unsigned __int64)v15, *((_QWORD *)a2 + 1) + 1LL) - v13;
  if ( v7 )
    sub_46B720(a1, v13, v7);
  v8 = sub_47FB50(v13, (unsigned __int64)v14, *((unsigned __int8 *)a2 + 16)) - v13;
  if ( v8 )
    sub_46B720(a1, v13, v8);
  switch ( a2[5] & 0xFFFFFFF )
  {
    case 1u:
    case 8u:
    case 0xBu:
      return (void *)sub_46BBC0(a1, (__int64)(a2 + 6));
    case 2u:
    case 4u:
      v9 = sub_47FB50(v13, (unsigned __int64)v14, a2[6]) - v13;
      if ( !v9 )
        return (void *)(v15[0] - __readfsqword(0x28u));
      goto LABEL_13;
    case 3u:
    case 9u:
    case 0xAu:
      v11 = s1;
      if ( *((_QWORD *)a2 + 4) )
        v11 = *((const char **)a2 + 3);
      return sub_45BFB0(a1, v11);
    case 5u:
      v12 = sub_47FC90(v13, (unsigned __int64)v15, *((_QWORD *)a2 + 3) + 1LL) - v13;
      if ( v12 )
        sub_46B720(a1, v13, v12);
      v9 = sub_47FC90(v13, (unsigned __int64)v15, *((_QWORD *)a2 + 4) + 1LL) - v13;
      if ( v9 )
LABEL_13:
        sub_46B720(a1, v13, v9);
      return (void *)(v15[0] - __readfsqword(0x28u));
    case 7u:
      return sub_46BD80(a1, a2 + 6);
    default:
      return (void *)(v15[0] - __readfsqword(0x28u));
  }
}
