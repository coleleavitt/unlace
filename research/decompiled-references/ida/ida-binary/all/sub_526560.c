void __fastcall stylable_widget_mixin_t__::vfunc_5(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r12
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // rdx
  const char *v14; // r8
  __int64 v15; // rax
  const char *v16; // [rsp+8h] [rbp-40h]

  v5 = a1[2];
  if ( v5 == *(_QWORD *)(a3 + 16) )
  {
    v9 = 0;
    if ( v5 )
    {
      do
      {
        v11 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 4 * v9);
        if ( *(_DWORD *)(a1[1] + 4 * v9) != v11 )
        {
          v12 = *a2;
          v13 = a2[1];
          v14 = *(const char **)(a1[4] + 24 * v9);
          if ( a2[2] < (unsigned __int64)(v13 + 1) )
          {
            v16 = *(const char **)(a1[4] + 24 * v9);
            v15 = qvector_reserve(a2, v12, v13 + 1, 24);
            v13 = a2[1];
            v14 = v16;
            *a2 = v15;
            v12 = v15;
          }
          v10 = v12 + 24 * v13;
          *(_QWORD *)v10 = 0;
          *(_OWORD *)(v10 + 8) = 0;
          ++a2[1];
          sub_5264C0((__int64 *)v10, v14, v11, 1);
        }
        ++v9;
      }
      while ( v5 != v9 );
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(40670, a2, a3, a4, a5);
    sub_526660(40670, a2);
  }
}
