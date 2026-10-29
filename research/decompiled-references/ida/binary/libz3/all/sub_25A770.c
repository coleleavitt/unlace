__int64 __fastcall sub_25A770(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD *v5; // rdx
  __int64 *v6; // r13
  __int64 *i; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *j; // r12
  __int64 v12; // rdx
  _BYTE v13[88]; // [rsp+0h] [rbp-58h] BYREF

  sub_15F01E0(v13, a1);
  result = sub_15F0200(v13);
  v5 = *(_DWORD **)(a3 + 24);
  if ( v5 )
  {
    if ( (_DWORD)result == *v5 )
    {
      result = (unsigned int)v5[1];
      if ( !(_DWORD)result )
      {
        result = sub_15F6BE0(v13, a3);
        v6 = *(__int64 **)result;
        if ( *(_QWORD *)result )
        {
          result = *((unsigned int *)v6 - 1);
          for ( i = &v6[result]; i != v6; ++v6 )
          {
            v8 = *v6;
            sub_E06850(*a2, *v6 + 16, *v6);
            v9 = sub_15FCA80(v13, v8);
            sub_E06850(*a2, v9 + 16, v9);
            result = sub_15FB1F0(v13, v8);
            v10 = *(__int64 **)result;
            if ( *(_QWORD *)result )
            {
              result = *((unsigned int *)v10 - 1);
              for ( j = &v10[result]; j != v10; result = sub_E06850(*a2, v12 + 16, v12) )
                v12 = *v10++;
            }
          }
        }
      }
    }
  }
  return result;
}

