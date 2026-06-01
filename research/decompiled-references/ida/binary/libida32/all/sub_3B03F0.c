__int64 __fastcall sub_3B03F0(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int v5; // ebp
  void *v6; // rdi
  __int64 v7; // rax
  void *v8; // rdx
  __m128i v9; // xmm0
  __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __m128i v13; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v5 = sub_3A60E0((__int64)&v11, a3);
  if ( (_BYTE)v5 && a2 )
  {
    ptr = nullptr;
    v13 = 0;
    if ( (a4 & 1) != 0 )
      sub_3B0010((unsigned int *)(v11 + 32), (__int64 *)&ptr);
    else
      sub_3573A0((char **)&ptr);
    v7 = *(_QWORD *)(a2 + 16);
    v8 = ptr;
    v9 = _mm_loadu_si128(&v13);
    ptr = *(void **)a2;
    v6 = ptr;
    *(_QWORD *)a2 = v8;
    v13.m128i_i64[1] = v7;
    *(__m128i *)(a2 + 8) = v9;
    if ( v6 )
    {
      v13.m128i_i64[0] = 0;
      qfree(v6);
    }
  }
  return v5;
}

