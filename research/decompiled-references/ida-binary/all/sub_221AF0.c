__int64 __fastcall sub_221AF0(__m128i *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v5; // r13d
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 bpt_kernel_interface; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  int v13; // eax
  int *v14; // rax
  int *v15; // rsi
  void (__fastcall *v16)(__m128i *, int *); // rax
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  const char *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax

  v5 = a2;
  v8 = operator new(0x20u);
  *(_QWORD *)v8 = a4;
  v9 = (_QWORD *)v8;
  *(_QWORD *)(v8 + 8) = 0;
  *(_OWORD *)(v8 + 16) = 0;
  bpt_kernel_interface = get_bpt_kernel_interface(32, a2);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 40LL))(bpt_kernel_interface, a4);
  if ( v11 )
  {
    v12 = v11;
    v13 = *(_DWORD *)(v11 + 64);
    if ( v13 != 4 && (v13 & 0xFFFFFFFD) == 1 )
    {
      v18 = *(int *)(v12 + 80);
      v19 = v9[2];
      v20 = v18;
      if ( v19 < v18 )
      {
        v24 = v9[1];
        if ( v9[3] < v18 )
        {
          v25 = qvector_reserve(v9 + 1, v24, v18, 1);
          v19 = v9[2];
          v9[1] = v25;
          v24 = v25;
        }
        memset((void *)(v24 + v19), 0, v18 - v19);
        v9[2] = v18;
        v20 = *(unsigned int *)(v12 + 80);
      }
      else if ( v18 != v19 )
      {
        v9[2] = v18;
        v20 = *(unsigned int *)(v12 + 80);
      }
      v21 = (const char *)v9[1];
      if ( !(unsigned int)sub_2404E0(*(_QWORD *)(v12 + 56), v21, v20) )
      {
        v22 = v9[1];
        if ( v22 )
        {
          v9[2] = 0;
          qfree(v22, v21);
          v9[1] = 0;
          v9[3] = 0;
        }
      }
    }
  }
  v14 = sub_21EBB0(a1, 4u, v5, a3);
  v15 = v14;
  if ( v14 )
  {
    *((_QWORD *)v14 + 3) = v9;
    v16 = (void (__fastcall *)(__m128i *, int *))a1[14].m128i_i64[0];
    if ( v16 )
      v16(a1, v15);
    return 1;
  }
  else
  {
    if ( v9 )
    {
      v23 = v9[1];
      if ( v23 )
      {
        v9[2] = 0;
        qfree(v23, nullptr);
      }
      operator delete(v9, 0x20u);
    }
    return 0;
  }
}
