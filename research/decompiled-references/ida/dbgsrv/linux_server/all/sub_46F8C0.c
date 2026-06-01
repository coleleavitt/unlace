/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F8C0
// Address: 0x000000000046F8C0

//----- (000000000046F8C0) ----------------------------------------------------
__int64 __fastcall sub_46F8C0(__int64 a1, char **a2, void *a3, unsigned __int64 a4)
{
  unsigned int v5; // r14d
  unsigned int v6; // eax
  size_t v7; // rbp
  void *v8; // r13
  void *v9; // rsi
  unsigned int v10; // ebp
  size_t v11; // rax
  size_t v12; // rbp
  void *v13; // r14
  size_t v14; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  size_t v17; // [rsp+8h] [rbp-50h] BYREF
  void *src; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]
  _BYTE v20[5]; // [rsp+23h] [rbp-35h] BYREF
  _QWORD v21[6]; // [rsp+28h] [rbp-30h] BYREF

  v21[0] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 40) )
    return 1;
  src = a3;
  v19 = a4;
  v5 = sub_47FD50((unsigned __int64 *)&src, a4);
  v6 = sub_47FD50((unsigned __int64 *)&src, v19);
  v7 = v6;
  if ( !v6 )
    return 1;
  v8 = sub_4813B0(v6);
  if ( !v8 )
    return 2;
  v9 = src;
  if ( v19 < (unsigned __int64)src + v7 || (char *)src + v7 < src )
    return 1;
  src = (char *)src + v7;
  memcpy(v8, v9, v7);
  ptr = nullptr;
  v17 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, size_t, void **, size_t *))(a1 + 40))(
          a1,
          v5,
          v8,
          v7,
          &ptr,
          &v17);
  j__free(v8);
  v11 = sub_47FB50(v20, (unsigned __int64)v21, v10) - v20;
  if ( v11 )
    sub_46F400(a2, v20, v11);
  v12 = v17;
  v13 = ptr;
  if ( HIDWORD(v17) )
    sub_46F3E0();
  v14 = sub_47FB50(v20, (unsigned __int64)v21, (unsigned int)v17) - v20;
  if ( v14 )
    sub_46F400(a2, v20, v14);
  if ( v12 )
    sub_46F400(a2, v13, v12);
  j__free(ptr);
  return 0;
}
