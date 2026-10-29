/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D5D0
// Address: 0x000000010006D5D0

//----- (000000010006D5D0) ----------------------------------------------------
__int64 __fastcall sub_10006D5D0(__int64 a1, const char *a2, const char *a3, __int128 *a4)
{
  __int128 v6; // xmm0
  size_t v7; // rax
  size_t v8; // r12
  size_t v9; // rbx
  void *v10; // rdi
  size_t v11; // rax
  size_t v12; // rbx
  size_t v13; // r12
  void *v14; // rdi
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 result; // rax
  const char *__src; // [rsp+0h] [rbp-40h]
  _QWORD *v19; // [rsp+8h] [rbp-38h]
  _QWORD *v20; // [rsp+10h] [rbp-30h]

  *(_QWORD *)a1 = 0;
  v20 = (_QWORD *)(a1 + 24);
  v6 = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  __src = a3;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = v7;
    v9 = v7 + 1;
    if ( v7 == -1 )
    {
      v10 = nullptr;
    }
    else
    {
      v10 = qvector_reserve((__int64)v20, nullptr, v7 + 1, 1u);
      *v20 = v10;
    }
    *(_QWORD *)(a1 + 32) = v9;
    memmove(v10, a2, v8);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v8) = 0;
    a3 = __src;
    v6 = 0;
  }
  *(_OWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 64) = 0;
  if ( a3 )
  {
    v19 = (_QWORD *)(a1 + 48);
    v11 = strlen(a3);
    v12 = v11;
    v13 = v11 + 1;
    if ( v11 == -1 )
    {
      v14 = nullptr;
    }
    else
    {
      v14 = qvector_reserve((__int64)v19, nullptr, v11 + 1, 1u);
      *v19 = v14;
    }
    *(_QWORD *)(a1 + 56) = v13;
    memmove(v14, __src, v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + v12) = 0;
  }
  v15 = *a4;
  v16 = a4[1];
  *(_OWORD *)(a1 + 104) = a4[2];
  *(_OWORD *)(a1 + 88) = v16;
  *(_OWORD *)(a1 + 72) = v15;
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_QWORD *)(a1 + 8) = qmutex_create();
  result = qsem_create(nullptr, 0);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
