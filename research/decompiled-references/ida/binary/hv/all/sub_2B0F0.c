__int64 __fastcall sub_2B0F0(__int64 a1, __int64 *a2, const char *a3, const char *a4, int a5)
{
  size_t v7; // r15
  size_t v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rbx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r12d
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 (__fastcall **v18)(); // [rsp+10h] [rbp-88h] BYREF
  char v19; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v21; // [rsp+28h] [rbp-70h]
  void *v22; // [rsp+38h] [rbp-60h] BYREF
  __int128 v23; // [rsp+40h] [rbp-58h]
  int v24; // [rsp+50h] [rbp-48h]
  bool v25; // [rsp+54h] [rbp-44h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v19 = 104;
  v21 = 0;
  v18 = &off_162588;
  ptr = nullptr;
  if ( a3 )
  {
    v7 = strlen(a3);
    ptr = (void *)sub_96080(&ptr, 0, v7 + 1, 1);
    *(_QWORD *)&v21 = v7 + 1;
    memmove(ptr, a3, v7);
    *((_BYTE *)ptr + v7) = 0;
  }
  v22 = nullptr;
  v23 = 0;
  if ( a4 )
  {
    v8 = strlen(a4);
    v22 = (void *)sub_96080(&v22, 0, v8 + 1, 1);
    *(_QWORD *)&v23 = v8 + 1;
    memmove(v22, a4, v8);
    *((_BYTE *)v22 + v8) = 0;
  }
  v9 = *(_QWORD *)(a1 + 40);
  v24 = a5;
  v25 = a2 != nullptr;
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v9 + 80))(a1 + 40, &v18);
  v13 = sub_2A6A0((_QWORD *)(a1 + 40), (__int64)v10, 105, nullptr, v11, v12);
  if ( !v13 && a2 )
  {
    v14 = *a2;
    v15 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v10[2];
    a2[1] = v10[3];
    a2[2] = v10[4];
    v10[2] = v14;
    *(__m128i *)(v10 + 3) = v15;
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
  sub_3C190(&v18);
  return v13;
}

