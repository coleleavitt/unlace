__int64 __fastcall sub_367820(_DWORD *a1, __m128i *a2)
{
  bool v2; // zf
  unsigned int v3; // eax
  __int64 v5; // rsi
  __int64 v6; // rax
  void *v7; // rdi
  __m128i v8; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v11; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v2 = a1[2] == 65;
  v3 = a1[10];
  v12 = __readfsqword(0x28u);
  v5 = (unsigned int)a1[18];
  if ( v2 )
  {
    a2->m128i_i32[2] = netnode_altval(v3, v5, 65);
  }
  else
  {
    ptr = nullptr;
    v11 = 0;
    v6 = netnode_qsupstr(v3, &ptr, (unsigned int)v5, 83);
    v7 = ptr;
    if ( v6 < 0 )
    {
      if ( ptr )
      {
        v11.m128i_i64[0] = 0;
        qfree(ptr);
      }
    }
    else
    {
      v8 = _mm_loadu_si128(&v11);
      a2->m128i_i8[0] = 7;
      a2->m128i_i64[1] = (__int64)v7;
      a2[1] = v8;
    }
  }
  return 0;
}

