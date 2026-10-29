void __fastcall sub_1436710(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rbp
  __int64 v5; // rax
  void **v6; // rax
  void *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  void *v12; // r12
  void *v13; // rbx
  __int64 v14; // rdi

  v3 = *(void **)(a1 + 1144);
  if ( v3 )
  {
    v5 = *(unsigned int *)(a1 + 2404);
    if ( (_DWORD)v5 == 8 )
    {
      *(_QWORD *)(a1 + 1144) = 0;
      sub_1466570(v3, a2, a3);
      a2 = 72;
      operator delete(v3, 0x48u);
    }
    else
    {
      *(_QWORD *)(a1 + 1144) = 0;
      a3 = (unsigned int)(v5 + 1);
      v6 = (void **)(a1 + 8 * v5 + 2408);
      *(_DWORD *)(a1 + 2404) = a3;
      v7 = *v6;
      *v6 = v3;
      if ( v7 )
      {
        sub_1466570(v7, a2, a3);
        a2 = 72;
        operator delete(v7, 0x48u);
      }
    }
  }
  v8 = *(_QWORD *)(a1 + 1176);
  v9 = *(_QWORD *)(v8 - 40);
  *(_QWORD *)(v8 - 40) = 0;
  v10 = *(_QWORD *)(a1 + 1112);
  *(_QWORD *)(a1 + 1112) = v9;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v8 = *(_QWORD *)(a1 + 1176);
  }
  *(_QWORD *)(a1 + 1120) = *(_QWORD *)(v8 - 32);
  v11 = *(_QWORD *)(v8 - 24);
  *(_QWORD *)(v8 - 24) = 0;
  v12 = *(void **)(a1 + 1144);
  *(_QWORD *)(a1 + 1144) = v11;
  if ( v12 )
  {
    sub_1466570(v12, a2, a3);
    a2 = 72;
    operator delete(v12, 0x48u);
    v8 = *(_QWORD *)(a1 + 1176);
  }
  *(__m128i *)(a1 + 1128) = _mm_loadu_si128((const __m128i *)(v8 - 16));
  *(_QWORD *)(a1 + 1160) = *(_QWORD *)(v8 - 48);
  *(_QWORD *)(a1 + 1152) = *(_QWORD *)(v8 - 56);
  *(_QWORD *)(a1 + 1176) = v8 - 56;
  v13 = *(void **)(v8 - 24);
  if ( v13 )
  {
    sub_1466570(*(_QWORD *)(v8 - 24), a2, a3);
    operator delete(v13, 0x48u);
  }
  v14 = *(_QWORD *)(v8 - 40);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
}
