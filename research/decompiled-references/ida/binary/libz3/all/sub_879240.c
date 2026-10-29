__int64 __fastcall sub_879240(__int64 *a1)
{
  _QWORD *v2; // r12
  __int64 v3; // rdi
  double v4; // xmm0_8
  __int64 result; // rax
  int v6; // r14d
  int i; // r13d
  _QWORD *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // r15d
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  double v13; // [rsp+0h] [rbp-50h]
  unsigned int v14; // [rsp+0h] [rbp-50h]

  v2 = (_QWORD *)a1[4];
  v3 = *a1;
  v13 = (double)*(int *)(*(_QWORD *)(v3 + 24) + 456LL);
  v4 = v13 * *(double *)(sub_7E4EB0(v3) + 80);
  result = *((unsigned int *)a1 + 5);
  v6 = (int)v4;
  if ( (int)v4 > (unsigned int)result )
    v6 = *((_DWORD *)a1 + 5);
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v8 = v2;
      v2 = (_QWORD *)*v2;
      if ( *((_DWORD *)v8 + 6) < *((_DWORD *)a1 + 14) )
      {
        result = *((unsigned int *)v8 + 7);
        if ( (_DWORD)result )
          continue;
      }
      v9 = *(_QWORD *)(*a1 + 88);
      if ( v9 )
      {
        v10 = *((_DWORD *)v8 + 5);
        if ( v10 < *(_DWORD *)(v9 - 4) )
        {
          v14 = *((_DWORD *)v8 + 4);
          v11 = *(_QWORD **)(v9 + 8LL * v14);
          if ( v11 )
          {
            if ( *(_QWORD *)(v9 + 8LL * v10) )
            {
              v12 = sub_15D1F10(*v11);
              if ( v12 == sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 88) + 8LL * v10)) )
              {
                if ( (unsigned __int8)sub_1673B10(*a1 + 128, v12) )
                  sub_86CF90(*a1, v14, v10);
              }
            }
          }
        }
      }
      result = sub_878D20((__int64)a1, v8);
    }
  }
  return result;
}

