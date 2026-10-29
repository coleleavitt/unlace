_QWORD *__fastcall sub_4E9650(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  double v16; // xmm4_8
  __int64 v17; // r12
  _QWORD *v18; // rbp
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r14
  _QWORD *v25; // [rsp+8h] [rbp-80h]
  _QWORD v27[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v28[11]; // [rsp+30h] [rbp-58h] BYREF

  v9 = a2 - (_QWORD)a1;
  v10 = v9 >> 3;
  v28[3] = __readfsqword(0x28u);
  if ( v9 <= 0 )
    return a1;
  v25 = a1;
  do
  {
    while ( 1 )
    {
      v17 = v10 >> 1;
      v18 = &v25[v10 >> 1];
      v19 = *a3;
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a5 + 48LL))(a5, a4, *v18);
      v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a5 + 48LL))(a5, a4, v19);
      v22 = v21;
      if ( !v20 )
        break;
      if ( !v21 )
        break;
      v28[0] = sub_4D89F0(a4, *(_DWORD *)(*(_QWORD *)v21 + 24LL * *(int *)(v21 + 96)), 0);
      v12 = *(int *)(v20 + 96);
      v28[1] = v13;
      v14 = sub_4D89F0(a4, *(_DWORD *)(*(_QWORD *)v20 + 24 * v12), 0);
      v27[1] = v15;
      v27[0] = v14;
      if ( !sub_4D9280(v20 + 48, (__int64)v27, v22 + 48, v28, a6, a7, a8, a9, v16) )
        break;
      v25 = v18 + 1;
      v10 = v10 - 1 - v17;
      if ( v10 <= 0 )
        return v25;
    }
    v10 >>= 1;
  }
  while ( v17 > 0 );
  return v25;
}
