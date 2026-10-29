__int64 __fastcall sub_8C09B0(__int64 a1, __int64 *a2, const char *a3, const char *a4)
{
  size_t v6; // r13
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // rbx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // r12d
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 (__fastcall **v18)(); // [rsp+8h] [rbp-88h] BYREF
  char v19; // [rsp+10h] [rbp-80h]
  void *ptr; // [rsp+18h] [rbp-78h] BYREF
  __int128 v21; // [rsp+20h] [rbp-70h]
  void *v22; // [rsp+30h] [rbp-60h] BYREF
  __int128 v23; // [rsp+38h] [rbp-58h]
  bool v24; // [rsp+48h] [rbp-48h]
  unsigned __int64 v25; // [rsp+50h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v19 = 21;
  v21 = 0;
  v18 = &off_2B3E2D8;
  ptr = nullptr;
  if ( a3 )
  {
    v6 = strlen(a3);
    ptr = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
    *(_QWORD *)&v21 = v6 + 1;
    memmove(ptr, a3, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v22 = nullptr;
  v23 = 0;
  if ( a4 )
  {
    v7 = strlen(a4);
    v8 = v7 + 1;
    v9 = v7;
    v22 = (void *)qvector_reserve(&v22, 0, v7 + 1, 1);
    *(_QWORD *)&v23 = v8;
    memmove(v22, a4, v9);
    *((_BYTE *)v22 + v9) = 0;
  }
  v10 = *(_QWORD *)(a1 + 40);
  v24 = a2 != nullptr;
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v10 + 80))(a1 + 40, &v18);
  v14 = sub_8BE300((_QWORD *)(a1 + 40), (__int64)v11, 22, nullptr, v12, v13);
  if ( !v14 && a2 )
  {
    v15 = *a2;
    v16 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v11[2];
    a2[1] = v11[3];
    a2[2] = v11[4];
    v11[2] = v15;
    *(__m128i *)(v11 + 3) = v16;
  }
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
  sub_8D5700(&v18);
  return v14;
}
