__int64 __fastcall sub_691500(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char *v3; // rbp
  __int64 v4; // rdx
  __int64 i; // rsi
  __int64 result; // rax
  char v7; // r13
  __int64 v8; // rax

  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &off_2B377B0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v2 = qvector_reserve(a1 + 16, 0, 9, 1);
  v3 = (char *)&unk_23B1B60;
  *(_QWORD *)(a1 + 16) = v2;
  v4 = *(_QWORD *)(a1 + 24);
  for ( i = v2; ; i = *(_QWORD *)(a1 + 16) )
  {
    v7 = *v3;
    if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v4 + 1) )
    {
      v8 = qvector_reserve(a1 + 16, i, v4 + 1, 1);
      *(_QWORD *)(a1 + 16) = v8;
      v4 = *(_QWORD *)(a1 + 24);
      i = v8;
    }
    *(_BYTE *)(i + v4) = v7;
    result = *(_QWORD *)(a1 + 24);
    ++v3;
    v4 = result + 1;
    *(_QWORD *)(a1 + 24) = result + 1;
    if ( v3 == (char *)&unk_23B1B69 )
      break;
  }
  return result;
}
