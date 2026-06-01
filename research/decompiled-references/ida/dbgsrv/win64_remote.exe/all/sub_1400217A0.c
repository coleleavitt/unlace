/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400217A0
// Address: 0x00000001400217A0

//----- (00000001400217A0) ----------------------------------------------------
int __fastcall sub_1400217A0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // zf
  size_t v6; // rbp
  __int64 v7; // rax
  size_t v8; // rsi
  size_t v9; // r8
  int result; // eax
  bool v11; // cc
  unsigned __int64 v12; // rax

  switch ( (unsigned int)sub_140026130((char *)a1, (char *)a2) )
  {
    case 2u:
    case 9u:
      v11 = *(_QWORD *)(a1 + 8) <= *(_QWORD *)(a2 + 8);
      goto LABEL_17;
    case 3u:
      return sub_140066BD0((_WORD *)(a1 + 8), (_WORD *)(a2 + 8));
    case 5u:
      return *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8);
    case 6u:
      v11 = *(_DWORD *)(a1 + 8) <= *(_DWORD *)(a2 + 8);
LABEL_17:
      if ( !v11 )
        goto LABEL_21;
      result = -1;
      break;
    case 7u:
      v4 = *(_QWORD *)(a1 + 16);
      v5 = v4 == 0;
      v6 = v4 - 1;
      v7 = *(_QWORD *)(a2 + 16);
      if ( v5 )
        v6 = 0;
      v8 = v7 - 1;
      if ( !v7 )
        v8 = 0;
      v9 = v8;
      if ( v6 < v8 )
        v9 = v6;
      result = memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v9);
      if ( !result )
      {
        if ( v6 >= v8 )
          return v6 > v8;
        else
          return -1;
      }
      return result;
    case 8u:
      v12 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a1 + 8) > v12 )
        goto LABEL_21;
      result = -(*(_QWORD *)(a1 + 8) < v12);
      break;
    default:
LABEL_21:
      result = 1;
      break;
  }
  return result;
}
