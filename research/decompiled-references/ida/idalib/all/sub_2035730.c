_BYTE *__fastcall sub_2035730(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // rax
  _BYTE *result; // rax
  size_t v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // r14
  __int64 v10; // rbp
  __int64 *v11; // r15
  size_t v12; // rdx
  char *v13; // rsi
  size_t v14; // [rsp+0h] [rbp-40h]

  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
    return (_BYTE *)sub_995540(a3, "opaque");
  if ( (*(_DWORD *)(a2 + 8) & 0x200) != 0 )
  {
    v5 = *(_BYTE **)(a3 + 32);
    if ( (unsigned __int64)v5 >= *(_QWORD *)(a3 + 24) )
    {
      sub_227BA10(a3, 60);
      if ( !*(_DWORD *)(a2 + 12) )
        goto LABEL_6;
LABEL_11:
      sub_995540(a3, "{ ");
      v7 = j__strlen(", ");
      v8 = *(__int64 **)(a2 + 16);
      v14 = v7;
      v9 = &v8[*(unsigned int *)(a2 + 12)];
      if ( v9 != v8 )
      {
        v10 = *v8;
        v11 = v8 + 1;
        v12 = 0;
        v13 = nullptr;
        while ( 1 )
        {
          sub_9954E0(a3, v13, v12);
          sub_2034FF0(a1, v10, a3);
          if ( v9 == v11 )
            break;
          v12 = v14;
          v10 = *v11;
          v13 = ", ";
          ++v11;
        }
      }
      result = (_BYTE *)sub_995540(a3, " }");
      goto LABEL_7;
    }
    *(_QWORD *)(a3 + 32) = v5 + 1;
    *v5 = 60;
  }
  if ( *(_DWORD *)(a2 + 12) )
    goto LABEL_11;
LABEL_6:
  result = (_BYTE *)sub_995540(a3, "{}");
LABEL_7:
  if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
  {
    result = *(_BYTE **)(a3 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(a3 + 24) )
    {
      return (_BYTE *)sub_227BA10(a3, 62);
    }
    else
    {
      *(_QWORD *)(a3 + 32) = result + 1;
      *result = 62;
    }
  }
  return result;
}
