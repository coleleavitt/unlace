__int64 __fastcall sub_31AE10(
        __int64 a1,
        unsigned int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r15
  size_t v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  char *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  char v27; // [rsp+0h] [rbp-4A8h]
  void *v28; // [rsp+18h] [rbp-490h] BYREF
  void *v29; // [rsp+20h] [rbp-488h] BYREF
  __int128 v30; // [rsp+28h] [rbp-480h]
  _BYTE v31[16]; // [rsp+40h] [rbp-468h] BYREF
  char v32[16]; // [rsp+50h] [rbp-458h] BYREF
  char s[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v34; // [rsp+468h] [rbp-40h]

  v10 = (int)a2;
  v34 = __readfsqword(0x28u);
  s[0] = 0;
  if ( (unsigned __int64)(int)a2 > 0x10 || a2 != get_bytes(v31, (int)a2, a1, 0, 0) )
    return 0;
  print_fpval(s, 1024, v31, a2);
  v29 = nullptr;
  v30 = 0;
  v12 = strlen(s);
  v29 = (void *)qvector_reserve(&v29, 0, v12 + 1, 1);
  *(_QWORD *)&v30 = v12 + 1;
  memmove(v29, s, v12);
  *((_BYTE *)v29 + v12) = 0;
  v14 = itext(993, s, v13);
  v15 = nullptr;
  if ( (unsigned __int8)sub_196F50(
                          (int)&v29,
                          0,
                          (int)"%s",
                          v14,
                          v16,
                          v17,
                          (__m128)0LL,
                          a4,
                          a5,
                          a6,
                          v18,
                          v19,
                          a9,
                          a10,
                          (char)&v29)
    && (unsigned __int64)v30 > 1 )
  {
    v28 = v29;
    v20 = asctoreal(&v28, v32);
    v15 = (char *)v20;
    if ( v20 == 1 )
    {
      v15 = v32;
      if ( (unsigned int)ieee2cpu(v31, v32, (unsigned int)v10) == 1 )
      {
        v15 = v31;
        patch_bytes(a1, v31, v10);
      }
    }
    else
    {
      sub_169630(
        (int)"Could not convert the input string to floating point, error %d",
        v20,
        v21,
        v22,
        v23,
        v24,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v25,
        v26,
        a9,
        a10,
        v27);
    }
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, v15);
  }
  return 1;
}
