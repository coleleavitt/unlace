__int64 __fastcall sub_E00280(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a2;
  v10[0] = 0;
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(v3 + 120))(a2, v10, a1 + 248);
  v5 = v10[0];
  if ( v10[0] )
  {
    v6 = v10[0] + 16LL * *(unsigned int *)(v10[0] - 4LL);
    if ( v6 == v10[0] )
      return sub_186B220((void *)(v5 - 8));
    v7 = *((_DWORD *)a2 + 4);
    do
    {
      v9 = *(_QWORD *)(a1 + 312);
      if ( !v9 )
      {
        sub_DFBCB0(a1);
        v9 = *(_QWORD *)(a1 + 312);
      }
      v8 = sub_DE18C0(v9, (__int64 *)(v5 + 8), v7, *(_DWORD *)v5);
      result = sub_DFAB80(a1, (unsigned __int64 *)(v8 + 24), v8);
      v5 += 16;
    }
    while ( v6 != v5 );
    v5 = v10[0];
    if ( v10[0] )
      return sub_186B220((void *)(v5 - 8));
  }
  return result;
}

