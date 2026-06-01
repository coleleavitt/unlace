_QWORD *__fastcall sub_4E97C0(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  double v17; // xmm4_8
  __int64 v18; // r12
  __int64 *v19; // r13
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v24; // [rsp+8h] [rbp-80h]
  __int64 v25; // [rsp+8h] [rbp-80h]
  _QWORD v27[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v28[11]; // [rsp+30h] [rbp-58h] BYREF

  v9 = a2 - (_QWORD)a1;
  v10 = a1;
  v11 = v9 >> 3;
  v28[3] = __readfsqword(0x28u);
  if ( v9 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v18 = v11 >> 1;
        v19 = &v10[v11 >> 1];
        v25 = *v19;
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a5 + 48LL))(a5, a4, *a3);
        v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a5 + 48LL))(a5, a4, v25);
        if ( !v20 )
          break;
        if ( !v21 )
          break;
        v24 = v21;
        v28[0] = sub_4D89F0(a4, *(_DWORD *)(*(_QWORD *)v21 + 24LL * *(int *)(v21 + 96)), 0);
        v13 = *(int *)(v20 + 96);
        v28[1] = v14;
        v15 = sub_4D89F0(a4, *(_DWORD *)(*(_QWORD *)v20 + 24 * v13), 0);
        v27[1] = v16;
        v27[0] = v15;
        if ( !sub_4D9280(v20 + 48, (__int64)v27, v24 + 48, v28, a6, a7, a8, a9, v17) )
          break;
        v11 >>= 1;
        if ( v18 <= 0 )
          return v10;
      }
      v10 = v19 + 1;
      v11 = v11 - 1 - v18;
    }
    while ( v11 > 0 );
  }
  return v10;
}
