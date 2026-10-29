__int64 __fastcall sub_467C30(__int64 a1, int a2, int a3, unsigned int a4, int **a5)
{
  unsigned int v6; // eax
  int v7; // ebp
  _QWORD *v8; // rbx
  int *v9; // rax
  int *v10; // r14
  int v11; // ecx
  size_t v12; // r12
  __int64 *v13; // rbx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // r13
  _QWORD *v19; // rbp
  unsigned int v20; // eax
  _QWORD *v21; // r14
  __int64 v22; // rbx
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 i; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rbx
  void *v29; // rax
  _QWORD *v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rax
  int **v33; // [rsp+8h] [rbp-40h]
  unsigned int v34; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v35; // [rsp+18h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  if ( (_BYTE)a3 != 83 )
  {
    if ( (unsigned __int8)a3 <= 0x53u )
    {
      if ( (_BYTE)a3 == 65 )
      {
        if ( a4 == 8 )
        {
          if ( !a5 )
          {
            v18 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 1480LL);
            v19 = v18 + 180;
            v20 = sub_3B9110(v18, a2);
            v21 = v18 + 180;
            if ( v18[181] )
            {
              v22 = v18[181];
              do
              {
                v23 = *(_DWORD *)(v22 + 32);
                if ( v23 < v20 )
                {
                  v22 = *(_QWORD *)(v22 + 24);
                }
                else
                {
                  v24 = *(_QWORD *)(v22 + 16);
                  if ( v20 >= v23 )
                  {
                    for ( i = *(_QWORD *)(v22 + 24); i; i = *(_QWORD *)(i + 24) )
                    {
                      while ( 1 )
                      {
                        v26 = *(_QWORD *)(i + 16);
                        if ( v20 >= *(_DWORD *)(i + 32) )
                          break;
                        v21 = (_QWORD *)i;
                        i = *(_QWORD *)(i + 16);
                        if ( !v26 )
                          goto LABEL_60;
                      }
                    }
LABEL_60:
                    while ( v24 )
                    {
                      while ( 1 )
                      {
                        v27 = *(_QWORD *)(v24 + 16);
                        if ( *(_DWORD *)(v24 + 32) < v20 )
                          break;
                        v22 = v24;
                        v24 = *(_QWORD *)(v24 + 16);
                        if ( !v27 )
                          goto LABEL_63;
                      }
                      v24 = *(_QWORD *)(v24 + 24);
                    }
LABEL_63:
                    if ( v18[182] != v22 || v19 != v21 )
                    {
                      if ( v21 != (_QWORD *)v22 )
                      {
                        do
                        {
                          v28 = std::_Rb_tree_increment();
                          v29 = (void *)std::_Rb_tree_rebalance_for_erase();
                          operator delete(v29, 0x28u);
                          --v18[184];
                        }
                        while ( (_QWORD *)v28 != v21 );
                      }
                      return 1;
                    }
LABEL_48:
                    sub_467550((_QWORD *)v18[181]);
                    v18[182] = v19;
                    v18[181] = 0;
                    v18[183] = v19;
                    v18[184] = 0;
                    return 1;
                  }
                  v21 = (_QWORD *)v22;
                  v22 = *(_QWORD *)(v22 + 16);
                }
              }
              while ( v22 );
            }
            if ( (_QWORD *)v18[182] != v21 || v19 != v21 )
              return 1;
            goto LABEL_48;
          }
          if ( a5[1] == (int *)&byte_4 )
          {
            v7 = **a5;
            v8 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 1480LL);
            v34 = sub_3B9110(v8, a2);
            *(_DWORD *)sub_467A60(v8 + 179, &v34) = v7;
            return 1;
          }
        }
        else if ( a4 <= 8 )
        {
          if ( a4 == 1 )
            return 1;
        }
        else if ( a4 <= 0xA || a4 == 20 )
        {
          return 1;
        }
      }
    }
    else if ( (((_BYTE)a3 - 108) & 0xFB) == 0 || (_BYTE)a3 == 103 )
    {
      return 1;
    }
    return 0;
  }
  if ( a4 <= 0x24 )
  {
    a3 = -537001985;
    if ( ((1LL << a4) & 0x1FDFFDFFFFLL) == 0 )
    {
      if ( ((1LL << a4) & 0x20020000) != 0 )
        return 1;
      goto LABEL_14;
    }
    return 0;
  }
  if ( a4 - 12288 <= 0xFFF )
  {
    if ( a4 == 12288 )
    {
      if ( !a5 )
      {
        switch_dbctx(*(int *)(*(_QWORD *)(a1 + 32) + 4LL * *(int *)(a1 + 40) + 16));
        v30 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 1480LL);
        v31 = sub_3B9110(v30, a2);
        sub_675160(v30, v31, 0, 0, 0);
        return 1;
      }
      v33 = a5;
      sub_467720(a1);
      LOBYTE(a4) = 0;
      a5 = v33;
      *(_DWORD *)(a1 + 48) = a2;
    }
    else
    {
      if ( a2 != *(_DWORD *)(a1 + 48) )
      {
        if ( !under_debugger )
          interr(2075);
        BUG();
      }
      if ( !a5 )
        return 1;
    }
    v9 = a5[1];
    if ( !v9 )
      return 0;
    v10 = *a5;
    v11 = a4 & 1;
    v12 = (size_t)v9 - 1;
    if ( *((_BYTE *)v9 + (_QWORD)*a5 - 1) )
    {
      if ( v11 )
        v13 = (__int64 *)(a1 + 80);
      else
        v13 = (__int64 *)(a1 + 56);
      v12 = (size_t)a5[1];
    }
    else
    {
      v13 = (__int64 *)(a1 + 56);
      if ( v11 )
        v13 = (__int64 *)(a1 + 80);
      if ( v9 == (int *)((char *)&dword_0 + 1) )
        return 0;
    }
    v14 = v13[1];
    v15 = v12 + v14;
    if ( __CFADD__(v12, v14) )
    {
      if ( v14 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v14 != 0x7FFFFFFFFFFFFFFFLL )
          v13[1] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_36;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v16 = *v13;
    v17 = v13[1];
    if ( v13[2] < v15 )
    {
      v32 = qvector_reserve(v13, v16, v15, 1);
      *v13 = v32;
      v16 = v32;
      v17 = v13[1];
    }
    memset((void *)(v16 + v17), 0, v15 - v17);
    v13[1] = v15;
LABEL_36:
    memcpy((void *)(v14 + *v13), v10, v12);
    return 0;
  }
  if ( a4 - 4096 <= 0xFFF )
    return 1;
LABEL_14:
  if ( a4 - 0x4000 <= 0x3FFF )
    return 0;
  v6 = a4 - 0x2000;
  LOBYTE(v6) = a4 - 0x2000 <= 0xFFF;
  LOBYTE(a3) = a4 - 0x8000 <= 0xFFF;
  return a3 | v6;
}

