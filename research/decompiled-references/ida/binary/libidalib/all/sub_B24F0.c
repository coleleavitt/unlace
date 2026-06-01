__int64 __fastcall sub_B24F0(__m128i *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 bpt_kernel_interface; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  int v12; // eax
  int *v13; // rax
  int *v14; // rsi
  void (__fastcall *v15)(__m128i *, int *); // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax

  v7 = operator new(0x20u);
  *(_QWORD *)v7 = a4;
  v8 = (_QWORD *)v7;
  *(_QWORD *)(v7 + 8) = 0;
  *(_OWORD *)(v7 + 16) = 0;
  bpt_kernel_interface = get_bpt_kernel_interface();
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 40LL))(bpt_kernel_interface, a4);
  if ( v10 )
  {
    v11 = v10;
    v12 = *(_DWORD *)(v10 + 64);
    if ( v12 != 4 && (v12 & 0xFFFFFFFD) == 1 )
    {
      v17 = *(int *)(v11 + 80);
      v18 = v8[2];
      v19 = v17;
      if ( v18 < v17 )
      {
        v20 = v8[1];
        if ( v8[3] < v17 )
        {
          v21 = qvector_reserve();
          v18 = v8[2];
          v8[1] = v21;
          v20 = v21;
        }
        memset((void *)(v20 + v18), 0, v17 - v18);
        v8[2] = v17;
        v19 = *(unsigned int *)(v11 + 80);
      }
      else if ( v17 != v18 )
      {
        v8[2] = v17;
        v19 = *(unsigned int *)(v11 + 80);
      }
      if ( !(unsigned int)sub_D1150(*(_QWORD *)(v11 + 56), v8[1], v19) && v8[1] )
      {
        v8[2] = 0;
        qfree();
        v8[1] = 0;
        v8[3] = 0;
      }
    }
  }
  v13 = sub_AF5F0(a1, 4u, a2, a3);
  v14 = v13;
  if ( v13 )
  {
    *((_QWORD *)v13 + 3) = v8;
    v15 = (void (__fastcall *)(__m128i *, int *))a1[14].m128i_i64[0];
    if ( v15 )
      v15(a1, v14);
    return 1;
  }
  else
  {
    if ( v8 )
    {
      if ( v8[1] )
      {
        v8[2] = 0;
        qfree();
      }
      operator delete(v8, 0x20u);
    }
    return 0;
  }
}

