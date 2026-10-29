void __fastcall sub_4B8800(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 i; // r12
  __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  size_t v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  const void *v18; // r11
  void *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-58h]
  const void *v22; // [rsp+18h] [rbp-40h]

  if ( a2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 1528LL);
    v6 = v5 + 96;
    v7 = *(_QWORD *)(v5 + 104);
    v20 = v6;
    if ( v7 )
    {
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v7 + 16);
          v9 = *(_QWORD *)(v7 + 24);
          if ( *(_DWORD *)(v7 + 32) >= a3 )
            break;
          v7 = *(_QWORD *)(v7 + 24);
          if ( !v9 )
            goto LABEL_7;
        }
        v6 = v7;
        v7 = *(_QWORD *)(v7 + 16);
      }
      while ( v8 );
LABEL_7:
      while ( v20 != v6 )
      {
        if ( *(_DWORD *)(v6 + 32) >= a4 )
          break;
        v10 = *(_QWORD *)(v6 + 40);
        for ( i = v10 + 24LL * *(_QWORD *)(v6 + 48); i != v10; v10 += 24 )
        {
          v15 = a2[1];
          v16 = *a2;
          if ( a2[2] < (unsigned __int64)(v15 + 1) )
          {
            v17 = qvector_reserve(a2, v16, v15 + 1, 32);
            v15 = a2[1];
            *a2 = v17;
            v16 = v17;
          }
          v12 = v16 + 32 * v15;
          *(_QWORD *)v12 = 0xFFFFFFFFLL;
          *(_QWORD *)(v12 + 8) = 0;
          *(_OWORD *)(v12 + 16) = 0;
          ++a2[1];
          *(_DWORD *)v12 = *(_DWORD *)(v6 + 32);
          if ( v12 + 8 != v10 )
          {
            v13 = *(_QWORD *)(v10 + 8);
            if ( v13 && (v14 = v13 - 1, v13 != 1) )
            {
              v18 = *(const void **)v10;
              v19 = *(void **)(v12 + 8);
              if ( *(_QWORD *)(v12 + 24) < v13 )
              {
                v22 = *(const void **)v10;
                v19 = (void *)qvector_reserve(v12 + 8, *(_QWORD *)(v12 + 8), *(_QWORD *)(v10 + 8), 1);
                v18 = v22;
                v14 = v13 - 1;
                *(_QWORD *)(v12 + 8) = v19;
              }
              *(_QWORD *)(v12 + 16) = v13;
              memmove(v19, v18, v14);
              *(_BYTE *)(*(_QWORD *)(v12 + 8) + v13 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v12 + 16) = 0;
            }
          }
        }
        v6 = std::_Rb_tree_increment();
      }
    }
  }
}

