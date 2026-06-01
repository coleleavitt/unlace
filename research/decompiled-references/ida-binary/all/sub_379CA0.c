void __fastcall sub_379CA0(__int64 a1, _BYTE *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v5; // r12
  __int64 v6; // rbx
  __int64 i; // r13
  unsigned __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, int); // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax

  sub_2C7C70(a1, a2, a3, (__int64)a4);
  if ( a4[5] )
  {
    v5 = (_QWORD *)sub_2B70C0(a1);
    if ( v5 )
    {
      v6 = a4[4];
      for ( i = v6 + 20LL * a4[5]; i != v6; v6 += 20 )
      {
        if ( *(_BYTE *)v6 )
        {
          v8 = *(int *)(v6 + 4);
          if ( v8 < v5[35] )
          {
            v9 = *(__int64 (__fastcall **)(__int64, int))(*v5 + 296LL);
            v10 = v9 == proxim_graph_t__::vfunc_37 ? *(_QWORD *)(v5[34] + 40 * v8) : v9((__int64)v5, v8);
            if ( v10 != -1 )
            {
              v11 = a4[9];
              v12 = a4[8];
              if ( a4[10] < (unsigned __int64)(v11 + 1) )
              {
                v13 = qvector_reserve(a4 + 8, v12, v11 + 1, 8);
                a4[8] = v13;
                v12 = v13;
                v11 = a4[9];
              }
              *(_QWORD *)(v12 + 8 * v11) = v10;
              ++a4[9];
            }
          }
        }
      }
    }
  }
}
