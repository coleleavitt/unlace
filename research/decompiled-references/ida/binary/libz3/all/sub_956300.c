__int64 __fastcall sub_956300(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD); // r14
  __int64 v7; // r12
  __int64 v8; // rax
  void (__fastcall ***v9)(_QWORD); // r14
  __int64 v10; // r12
  __int64 v11; // r12
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  void (__fastcall ***v16)(_QWORD); // r14
  __int64 v17; // r12
  void *v18; // r13

  v3 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  *(_QWORD *)(a1 + 24) = v3;
  *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)(v3 + 112));
  v4 = *(_QWORD *)(v3 + 104);
  v5 = sub_B9C860(v3);
  v6 = *(void (__fastcall ****)(_QWORD))(a1 + 32);
  if ( (void (__fastcall ***)(_QWORD))v5 != v6 )
  {
    v7 = v5;
    if ( v6 )
    {
      (**v6)(*(_QWORD *)(a1 + 32));
      sub_186B220(v6);
    }
    *(_QWORD *)(a1 + 32) = v7;
  }
  v8 = sub_B9C860(*(_QWORD *)(a1 + 24));
  v9 = *(void (__fastcall ****)(_QWORD))(a1 + 40);
  v10 = v8;
  if ( (void (__fastcall ***)(_QWORD))v8 != v9 )
  {
    if ( v9 )
    {
      (**v9)(*(_QWORD *)(a1 + 40));
      sub_186B220(v9);
    }
    *(_QWORD *)(a1 + 40) = v10;
  }
  v11 = sub_186B270(0x80u);
  sub_AC7EF0(v11, v4, v12, v13, v14, v15);
  v16 = *(void (__fastcall ****)(_QWORD))(a1 + 48);
  if ( (void (__fastcall ***)(_QWORD))v11 != v16 )
  {
    if ( v16 )
    {
      (**v16)(*(_QWORD *)(a1 + 48));
      sub_186B220(v16);
    }
    *(_QWORD *)(a1 + 48) = v11;
  }
  v17 = sub_186B270(0xB8u);
  sub_ADEB60(v17, v4, *(_QWORD *)(a1 + 16) + 104LL, *(_QWORD *)(a1 + 48));
  v18 = *(void **)(a1 + 56);
  if ( (void *)v17 != v18 )
  {
    if ( v18 )
    {
      sub_ADEC40(*(_QWORD *)(a1 + 56));
      sub_186B220(v18);
    }
    *(_QWORD *)(a1 + 56) = v17;
  }
  sub_AC7950(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 24));
  return sub_ADEE50(*(_QWORD *)(a1 + 56), a2);
}

