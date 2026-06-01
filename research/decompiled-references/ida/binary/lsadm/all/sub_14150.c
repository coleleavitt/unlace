__int64 __fastcall sub_14150(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  const char *v7; // rbx
  bool v8; // zf
  const char *v10; // r15
  __int64 v11; // rcx
  size_t v12; // r14
  size_t v13; // rax
  size_t v14; // r15
  size_t v15; // r14
  _QWORD *v16; // rbx
  unsigned int v17; // ebp
  __int64 v18; // rax
  __m128i v19; // xmm0
  void *v21; // rax
  const void *v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-A8h]
  __int64 n; // [rsp+8h] [rbp-A0h]
  __int64 (__fastcall **v25)(); // [rsp+10h] [rbp-98h] BYREF
  char v26; // [rsp+18h] [rbp-90h]
  void *v27; // [rsp+20h] [rbp-88h]
  __int128 v28; // [rsp+28h] [rbp-80h]
  void *v29; // [rsp+38h] [rbp-70h] BYREF
  __int128 v30; // [rsp+40h] [rbp-68h]
  void *v31; // [rsp+50h] [rbp-58h] BYREF
  __int128 v32; // [rsp+58h] [rbp-50h]
  unsigned __int64 v33; // [rsp+68h] [rbp-40h]

  v7 = s1;
  v8 = *(_QWORD *)(a4 + 8) == 0;
  v33 = __readfsqword(0x28u);
  if ( !v8 )
    v7 = *(const char **)a4;
  v10 = s1;
  if ( *(_QWORD *)(a3 + 8) )
    v10 = *(const char **)a3;
  v11 = *(_QWORD *)(a2 + 8);
  v26 = 26;
  v27 = nullptr;
  v28 = 0;
  v25 = &off_798B0;
  if ( v11 )
  {
    v23 = v11;
    n = 6 * v11;
    v21 = (void *)sub_29E10(6 * v11);
    v22 = *(const void **)a2;
    v27 = v21;
    *((_QWORD *)&v28 + 1) = v23;
    memcpy(v21, v22, n);
    *(_QWORD *)&v28 = v23;
  }
  v29 = nullptr;
  v30 = 0;
  if ( v10 )
  {
    v12 = strlen(v10);
    v29 = (void *)sub_29E60(&v29, 0, v12 + 1, 1);
    *(_QWORD *)&v30 = v12 + 1;
    memmove(v29, v10, v12);
    *((_BYTE *)v29 + v12) = 0;
  }
  v31 = nullptr;
  v32 = 0;
  if ( v7 )
  {
    v13 = strlen(v7);
    v14 = v13 + 1;
    v15 = v13;
    v31 = (void *)sub_29E60(&v31, 0, v13 + 1, 1);
    *(_QWORD *)&v32 = v14;
    memmove(v31, v7, v15);
    *((_BYTE *)v31 + v15) = 0;
  }
  v16 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 80LL))(a1, &v25);
  v17 = sub_14400(a1, v16, 23, a6, 0);
  if ( !v17 )
  {
    v18 = *a5;
    v19 = _mm_loadu_si128((const __m128i *)(a5 + 1));
    *a5 = v16[2];
    a5[1] = v16[3];
    a5[2] = v16[4];
    v16[2] = v18;
    *(__m128i *)(v16 + 3) = v19;
  }
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
  sub_2FB40(&v25);
  return v17;
}

