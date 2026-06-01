__int64 __fastcall sub_8C0110(__int64 a1, __int64 *a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rbx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // r12d
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 (__fastcall **v15)(); // [rsp+0h] [rbp-78h] BYREF
  char v16; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v18; // [rsp+18h] [rbp-60h]
  bool v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v16 = 36;
  v18 = 0;
  v15 = &off_2B3E5A8;
  ptr = nullptr;
  if ( a3 )
  {
    v4 = strlen(a3);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v18 = v5;
    memmove(ptr, a3, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = *(_QWORD *)(a1 + 40);
  v19 = a2 != nullptr;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v7 + 80))(a1 + 40, &v15);
  v11 = sub_8BE300((_QWORD *)(a1 + 40), (__int64)v8, 37, nullptr, v9, v10);
  if ( !v11 && a2 )
  {
    v12 = *a2;
    v13 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v8[2];
    a2[1] = v8[3];
    a2[2] = v8[4];
    v8[2] = v12;
    *(__m128i *)(v8 + 3) = v13;
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  sub_8D5840(&v15);
  return v11;
}
