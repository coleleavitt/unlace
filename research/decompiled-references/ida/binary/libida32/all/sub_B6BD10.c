__int64 __fastcall sub_B6BD10(__int64 a1, __int64 *a2, const void *a3, __int64 a4)
{
  unsigned int v4; // ebx
  size_t v5; // r8
  __int64 v7; // rax
  __int64 v8; // rdx

  v4 = *(unsigned __int8 *)(a1 + 32);
  if ( (_BYTE)v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 != a4 || v5 && memcmp(*(const void **)a1, a3, v5) )
    return v4;
  v7 = a2[1];
  v8 = *a2;
  *(_BYTE *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 16) = v8;
  return 1;
}

