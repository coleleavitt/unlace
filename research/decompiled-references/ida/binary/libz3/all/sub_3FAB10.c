__int64 __fastcall sub_3FAB10(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rbp
  __int64 *v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+8h] [rbp-40h]

  result = a3[1];
  if ( result )
  {
    v7 = 0;
    do
    {
      if ( v7 >= *(_DWORD *)(result - 4) )
        break;
      v8 = 8LL * v7;
      v9 = (__int64 *)(result + v8);
      v10 = *(_QWORD *)(result + v8);
      if ( !*(_WORD *)(v10 + 4) )
      {
        v11 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
        if ( v11 )
        {
          if ( *(_DWORD *)(a1 + 8) == *v11 && v11[1] == 13 )
          {
            v12 = *(_QWORD *)a1;
            v21 = 0;
            v13 = *v9;
            v22 = v12;
            sub_3FA320((__int64 *)a1, a2, v13, &v21, 1u);
            v14 = v21;
            if ( v21 )
              ++*(_DWORD *)(v21 + 8);
            result = a3[1];
            v15 = (__int64 *)(result + v8);
            v16 = *(_QWORD *)(result + 8LL * v7);
            if ( v16 )
            {
              v17 = *a3;
              v18 = (*(_DWORD *)(v16 + 8))-- == 1;
              if ( v18 )
              {
                sub_15D7BC0(v17, v16);
                result = a3[1];
                v15 = (__int64 *)(result + v8);
              }
            }
            *v15 = v14;
            v19 = v21;
            if ( v21 )
            {
              v20 = v22;
              v18 = (*(_DWORD *)(v21 + 8))-- == 1;
              if ( v18 )
              {
                sub_15D7BC0(v20, v19);
                result = a3[1];
              }
            }
          }
        }
      }
      ++v7;
    }
    while ( result );
  }
  return result;
}

