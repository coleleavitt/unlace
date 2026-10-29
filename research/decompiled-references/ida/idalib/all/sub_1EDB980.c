__int64 __fastcall sub_1EDB980(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rax
  int v8; // ebp
  unsigned int v9; // eax
  unsigned __int64 v10; // rbp
  __int64 v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // r15
  _QWORD *v15; // rbp
  size_t v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  void (__fastcall *v20)(__int64, unsigned __int64, _QWORD); // [rsp+8h] [rbp-50h]
  unsigned __int64 v21[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a2 <= 0x13 )
    return sub_1EDB740((__int64)a1, a2, a3, a4, a5, a6);
  v21[0] = a2;
  v7 = *(_QWORD *)(a1[20] + 8LL * (unsigned int)(HIDWORD(a2) - 1));
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 3072);
    v9 = v8 + sub_B8F2E0((__int64)v21);
  }
  else
  {
    v9 = a2;
  }
  if ( (unsigned __int64)v9 >= a1[340] )
  {
    v16 = j__strlen("declaration ID out-of-range for AST file");
    sub_1EAD680((__int64)a1, "declaration ID out-of-range for AST file", v16);
    return 0;
  }
  v10 = 8 * ((unsigned __int64)v9 >> 7);
  v11 = v9 & 0x7F;
  v12 = (_QWORD *)(v10 + a1[341]);
  if ( *v12 )
  {
    result = *(_QWORD *)(*v12 + 8 * v11);
    if ( result )
      return result;
    goto LABEL_9;
  }
  v17 = (_QWORD *)sub_1EC2080((__int64 *)(a1[343] & 0xFFFFFFFFFFFFFFF8LL), 1024, 3u);
  *v12 = v17;
  *v17 = 0;
  v17[127] = 0;
  memset(
    (void *)((unsigned __int64)(v17 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v17 - (((_DWORD)v17 + 8) & 0xFFFFFFF8) + 1024) >> 3));
  if ( !v17[v11] )
  {
LABEL_9:
    sub_1F342B0(a1, a2);
    v13 = a1[8];
    if ( v13 )
    {
      v14 = (_QWORD *)(v10 + a1[341]);
      if ( *v14 )
      {
        (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v13 + 48LL))(
          v13,
          a2,
          *(_QWORD *)(*v14 + 8 * v11));
      }
      else
      {
        v20 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v13 + 48LL);
        v19 = (_QWORD *)sub_1EC2080((__int64 *)(a1[343] & 0xFFFFFFFFFFFFFFF8LL), 1024, 3u);
        *v14 = v19;
        *v19 = 0;
        v19[127] = 0;
        memset(
          (void *)((unsigned __int64)(v19 + 1) & 0xFFFFFFFFFFFFFFF8LL),
          0,
          8LL * (((unsigned int)v19 - (((_DWORD)v19 + 8) & 0xFFFFFFF8) + 1024) >> 3));
        v20(v13, a2, v19[v11]);
      }
    }
  }
  v15 = (_QWORD *)(a1[341] + v10);
  if ( *v15 )
    return *(_QWORD *)(*v15 + 8 * v11);
  v18 = (_QWORD *)sub_1EC2080((__int64 *)(a1[343] & 0xFFFFFFFFFFFFFFF8LL), 1024, 3u);
  *v15 = v18;
  *v18 = 0;
  v18[127] = 0;
  memset(
    (void *)((unsigned __int64)(v18 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v18 - (((_DWORD)v18 + 8) & 0xFFFFFFF8) + 1024) >> 3));
  return v18[v11];
}
