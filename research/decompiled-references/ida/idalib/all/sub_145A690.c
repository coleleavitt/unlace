_BYTE *__fastcall sub_145A690(
        __int64 a1,
        _QWORD *a2,
        char a3,
        const void *a4,
        size_t a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r9
  char v12; // al
  char *v13; // rcx
  __int64 v14; // rax
  _BYTE *result; // rax

  v9 = a6 & 1;
  *(_DWORD *)a1 = 3;
  *(_QWORD *)(a1 + 4) = a9;
  v12 = *(_BYTE *)(a1 + 32);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 32) = (8 * (a7 & 1)) | (2 * (a3 & 3)) & 0xF7 | v9 & 0xF7 | v12 & 0xF0;
  *(_QWORD *)(a1 + 40) = a8;
  v13 = (char *)a2[2];
  v14 = (unsigned int)(a5 + 1);
  a2[12] += v14;
  if ( a2[3] >= (unsigned __int64)&v13[v14] && v13 )
    a2[2] = &v13[v14];
  else
    v13 = (char *)sub_986170((__int64)(a2 + 2), (unsigned int)(a5 + 1), (unsigned int)(a5 + 1), 0, a5, v9);
  result = memcpy(v13, a4, a5);
  result[a5] = 0;
  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
