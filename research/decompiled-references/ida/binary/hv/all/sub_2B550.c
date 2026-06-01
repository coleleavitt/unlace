__int64 __fastcall sub_2B550(__int64 a1, __int64 *a2, const char *a3, const char *a4, int a5, int a6)
{
  __int64 v9; // rax
  _QWORD *v10; // rbp
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r12d
  __int64 v14; // rax
  __m128i v15; // xmm0
  size_t n; // [rsp+0h] [rbp-B0h]
  size_t na; // [rsp+0h] [rbp-B0h]
  __int64 (__fastcall **v20)(); // [rsp+18h] [rbp-98h] BYREF
  char v21; // [rsp+20h] [rbp-90h]
  void *ptr; // [rsp+28h] [rbp-88h] BYREF
  __int128 v23; // [rsp+30h] [rbp-80h]
  void *v24; // [rsp+40h] [rbp-70h] BYREF
  __int128 v25; // [rsp+48h] [rbp-68h]
  int v26; // [rsp+58h] [rbp-58h]
  int v27; // [rsp+5Ch] [rbp-54h]
  bool v28; // [rsp+60h] [rbp-50h]
  unsigned __int64 v29; // [rsp+70h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v21 = 72;
  v23 = 0;
  v20 = &off_161F88;
  ptr = nullptr;
  if ( a3 )
  {
    n = strlen(a3);
    ptr = (void *)sub_96080(&ptr, 0, n + 1, 1);
    *(_QWORD *)&v23 = n + 1;
    memmove(ptr, a3, n);
    *((_BYTE *)ptr + n) = 0;
  }
  v24 = nullptr;
  v25 = 0;
  if ( a4 )
  {
    na = strlen(a4);
    v24 = (void *)sub_96080(&v24, 0, na + 1, 1);
    *(_QWORD *)&v25 = na + 1;
    memmove(v24, a4, na);
    *((_BYTE *)v24 + na) = 0;
  }
  v9 = *(_QWORD *)(a1 + 40);
  v26 = a5;
  v27 = a6;
  v28 = a2 != nullptr;
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v9 + 80))(a1 + 40, &v20);
  v13 = sub_2A6A0((_QWORD *)(a1 + 40), (__int64)v10, 73, nullptr, v11, v12);
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
  sub_3BF70(&v20);
  return v13;
}

