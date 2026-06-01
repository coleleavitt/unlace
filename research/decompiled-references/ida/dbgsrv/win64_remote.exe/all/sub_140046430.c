/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046430
// Address: 0x0000000140046430

//----- (0000000140046430) ----------------------------------------------------
__int64 __fastcall sub_140046430(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  const char *v5; // rdx
  int v6; // esi
  __int64 result; // rax
  int (__fastcall *v8)(__int64, _QWORD, _QWORD, int *, _QWORD); // rbx
  unsigned int v9; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+48h] [rbp-10h]

  v4 = sub_140040170();
  v5 = Str1;
  if ( *(_QWORD *)(a1 + 48) )
    v5 = *(const char **)(a1 + 40);
  v6 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)v4 + 480LL))(v4, v5, 0);
  if ( v6 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30055);
  }
  result = sub_140029F90(a1);
  if ( !(_DWORD)result )
  {
    v10 = -2;
    *(_OWORD *)Block = 0;
    v12 = 0;
    Block[0] = *(void **)(a1 + 8);
    v8 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)v4 + 224LL);
    v9 = sub_140040180();
    *(_QWORD *)(a2 + 8) = v8(v4, v9, (unsigned int)v6, &v10, 0);
    if ( v10 >= -1 )
    {
      if ( Block[0] )
      {
        Block[1] = nullptr;
        j_free(Block[0]);
      }
    }
    return 0;
  }
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
