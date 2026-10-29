__int64 __fastcall sub_8E50E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 **v8; // rbp
  int v9; // eax
  __int64 v10; // r15
  _QWORD *v11; // rdi
  __int64 (*v12)(void); // rax
  _QWORD *v13; // rdi
  __int64 (*v14)(void); // rdx
  _QWORD *v15; // rdi
  _QWORD **v16; // rdi
  unsigned int v18; // [rsp+Ch] [rbp-7Ch]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __m128i si128; // [rsp+18h] [rbp-70h]
  _BYTE v21[96]; // [rsp+28h] [rbp-60h] BYREF

  v5 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v6 = sub_A2E240(a1, v5, 2262, 0);
  if ( v6 )
  {
    v7 = *a3;
    v8 = (unsigned __int8 **)v6;
    v9 = sub_2575D50(*a3);
    v10 = *a3;
    v9 *= 59;
    ptr = v21;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v18 = (v9 + 195) / 0xC4u;
    if ( v10 == sub_2575D20(v7, &ptr, (unsigned int)(v9 + 195) / 0xC4uLL) )
      sub_2584F50(a3, &ptr, v18, 3, 1);
    else
      sub_2584B70(a3, &ptr, v18, 3, 1);
    sub_838D50(v8, ptr, si128.m128i_u64[0]);
    if ( ptr != v21 )
      free(ptr);
    sub_8D69A0(v8, *(_QWORD *)(v5 + 8));
  }
  v11 = *(_QWORD **)(a1 + 24);
  v12 = *(__int64 (**)(void))(*v11 + 32LL);
  if ( (char *)v12 != (char *)sub_8D7FC0 )
    return v12();
  v13 = (_QWORD *)v11[3];
  v14 = *(__int64 (**)(void))(*v13 + 32LL);
  if ( v14 == v12 )
  {
    v15 = (_QWORD *)v13[3];
    v12 = *(__int64 (**)(void))(*v15 + 32LL);
    if ( v12 != v14 )
      return v12();
    v16 = (_QWORD **)v15[3];
    v14 = (__int64 (*)(void))(*v16)[4];
    if ( v14 == v12 )
    {
      v12 = *(__int64 (**)(void))(*v16[3] + 32LL);
      return v12();
    }
  }
  return v14();
}

