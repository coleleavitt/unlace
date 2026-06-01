unsigned __int64 __fastcall sub_1CECC0(__int64 *a1, __int64 a2, const char *a3, const char *a4)
{
  size_t v6; // rax
  double v7; // xmm0_8
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r13
  const char *v11; // rdi
  __int64 v12; // rbx
  __int64 v14; // rbp
  int v16; // [rsp+14h] [rbp-64h]
  __int64 v17; // [rsp+18h] [rbp-60h]
  void *v18[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v6 = 0;
  if ( a3 )
    v6 = strlen(a3);
  v7 = QT::QString::fromUtf8(v18, v6, a3);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void **, double))(**(_QWORD **)(a2 + 48) + 72LL))(
         *(_QWORD *)(a2 + 48),
         v18,
         v7) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a2 + 48) + 80LL))(*(_QWORD *)(a2 + 48), v18);
    v8 = a1[1];
    v17 = *a1;
    if ( v8 )
    {
      v9 = *a1;
      v10 = 0;
      while ( 1 )
      {
        v11 = &s1;
        if ( *(_QWORD *)(v9 + 8) )
          v11 = *(const char **)v9;
        if ( !strcmp(v11, a4) )
          break;
        ++v10;
        v9 += 40;
        if ( v8 == v10 )
          goto LABEL_15;
      }
      v12 = v9 + 24;
    }
    else
    {
LABEL_15:
      if ( a1[2] < (unsigned __int64)(v8 + 1) )
      {
        v17 = qvector_reserve(a1, v17, v8 + 1, 40);
        v8 = a1[1];
        *a1 = v17;
      }
      v14 = v17 + 40 * v8;
      *(_QWORD *)v14 = 0;
      *(_DWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v14 + 32) = 0;
      *(_OWORD *)(v14 + 8) = 0;
      ++a1[1];
      sub_1CB2E0((__int64 *)v14, a4);
      v12 = v14 + 24;
    }
    if ( *(_DWORD *)v12 )
      jvalue_t_clear(v12);
    *(_DWORD *)v12 = 1;
    *(_QWORD *)(v12 + 8) = v16;
  }
  sub_16D970(v18);
  return v19 - __readfsqword(0x28u);
}
