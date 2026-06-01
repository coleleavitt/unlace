void __fastcall std::__merge_without_buffer<int *,long,__gnu_cxx::__ops::_Iter_less_iter>(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // eax
  _DWORD *v6; // r10
  __int64 v7; // r15
  __int64 v8; // r12
  _DWORD *v9; // r9
  __int64 v10; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // r13d
  int v15; // ebx
  int v16; // r9d
  __int64 v17; // r13
  __int64 v18; // rax
  _DWORD *v19; // rbx
  __int64 v20; // r11
  __int64 v21; // r11
  int v22; // [rsp+10h] [rbp-58h]
  int v23; // [rsp+18h] [rbp-50h]
  int v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+28h] [rbp-40h]

  if ( a4 && a5 )
  {
    if ( a4 + a5 == 2 )
    {
      v5 = *a1;
      if ( *a2 < *a1 )
      {
        *a1 = *a2;
        *a2 = v5;
      }
    }
    else
    {
      if ( a4 <= a5 )
      {
        v9 = a1;
        v13 = a5 / 2;
        v17 = a2 - a1;
        v6 = &a2[a5 / 2];
        while ( v17 > 0 )
        {
          v18 = v17 >> 1;
          v19 = &v9[v17 >> 1];
          if ( *v19 > *v6 )
          {
            while ( v18 )
            {
              v21 = v18 >> 1;
              v19 = &v9[v18 >> 1];
              if ( *v19 <= *v6 )
                goto LABEL_26;
              v18 >>= 1;
            }
            break;
          }
          v21 = v17 >> 1;
          v18 = v17;
LABEL_26:
          v9 = v19 + 1;
          v17 = v18 - v21 - 1;
        }
        v12 = 4 * (a5 / 2);
        v7 = v9 - a1;
      }
      else
      {
        v6 = a2;
        v7 = a4 / 2;
        v8 = (a3 - (__int64)a2) >> 2;
        v9 = &a1[a4 / 2];
        while ( v8 > 0 )
        {
          v10 = v8 >> 1;
          v11 = &v6[v8 >> 1];
          if ( *v11 >= *v9 )
          {
            while ( v10 )
            {
              v20 = v10 >> 1;
              v11 = &v6[v10 >> 1];
              if ( *v11 < *v9 )
                goto LABEL_25;
              v10 >>= 1;
            }
            break;
          }
          v20 = v8 >> 1;
          v10 = v8;
LABEL_25:
          v6 = v11 + 1;
          v8 = v10 - v20 - 1;
        }
        LODWORD(v12) = (_DWORD)v6 - (_DWORD)a2;
        v13 = v6 - a2;
      }
      v23 = a5;
      v22 = a4;
      v14 = a3;
      v25 = (int)v6;
      v24 = (int)v9;
      std::_V2::__rotate<int *>(v9);
      v15 = v24 + v12;
      std::__merge_without_buffer<int *,long,__gnu_cxx::__ops::_Iter_less_iter>((int)a1, v24, v15, v7, v13, v24, 0);
      std::__merge_without_buffer<int *,long,__gnu_cxx::__ops::_Iter_less_iter>(
        v15,
        v25,
        v14,
        v22 - v7,
        v23 - v13,
        v16,
        0);
    }
  }
}

