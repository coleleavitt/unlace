void __fastcall CoinSearchTreeManager::newSolution(CoinSearchTreeManager *this, double a2)
{
  __int64 v2; // rax
  double v3; // xmm1_8
  int **v4; // rdx
  __int64 v5; // rdx
  _QWORD *v7; // rax
  __int64 v8; // r12
  _QWORD *v9; // rbp
  int **v10; // rsi
  int **v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int **v15; // r14
  int **v16; // r15
  unsigned __int64 v17; // rax
  int **v18; // r13
  int *v19; // r9
  int *v20; // rax
  int v21; // r8d
  int v22; // eax
  _QWORD *v23; // r12
  __int64 (__fastcall *v24)(void *); // rax
  void *v25; // rdi
  int **v26; // [rsp-40h] [rbp-40h]

  v2 = *((_QWORD *)this + 1);
  ++*((_DWORD *)this + 4);
  *((_BYTE *)this + 20) = 1;
  v3 = a2;
  if ( *(_DWORD *)(v2 + 36) )
  {
    v4 = *(int ***)(v2 + 8);
    if ( *(int ***)(v2 + 16) != v4 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)*v4 + 1) + 8LL * **v4);
      if ( v5 )
        v3 = *(double *)(v5 + 16);
    }
  }
  if ( fabs(v3) >= 0.001 )
  {
    if ( (a2 - v3) / fabs(v3) >= 0.005 )
      return;
  }
  else if ( fabs(a2) >= 0.005 )
  {
    return;
  }
  if ( !__dynamic_cast(
          (const void *)v2,
          (const struct __class_type_info *)&`typeinfo for'CoinSearchTreeBase,
          (const struct __class_type_info *)&`typeinfo for'CoinSearchTree<CoinSearchTreeCompareDepth>,
          0) )
  {
    v7 = (_QWORD *)operator new(0x30u);
    v8 = *((_QWORD *)this + 1);
    v9 = v7;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v10 = (int **)(v8 + 8);
    *v7 = off_4D21B0;
    std::vector<CoinTreeSiblings *>::operator=(v7 + 1, v8 + 8);
    v15 = (int **)v9[2];
    v16 = (int **)v9[1];
    if ( v15 != v16 )
    {
      _BitScanReverse64(&v17, v15 - v16);
      std::__introsort_loop<__gnu_cxx::__normal_iterator<CoinTreeSiblings **,std::vector<CoinTreeSiblings *>>,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinSearchTreeCompareDepth>>(
        (int)v16,
        (int)v15,
        2 * (63 - (v17 ^ 0x3F)),
        v12,
        v13,
        v14,
        0);
      if ( ((char *)v15 - (char *)v16 - 128 < 0) ^ __OFADD__(-128, (char *)v15 - (char *)v16)
         | ((char *)v15 - (char *)v16 == 128) )
      {
        v10 = v15;
        std::__insertion_sort<__gnu_cxx::__normal_iterator<CoinTreeSiblings **,std::vector<CoinTreeSiblings *>>,__gnu_cxx::__ops::_Iter_comp_iter<CoinSearchTreeCompareDepth>>(v16);
        v11 = v26;
      }
      else
      {
        v18 = v16 + 16;
        std::__insertion_sort<__gnu_cxx::__normal_iterator<CoinTreeSiblings **,std::vector<CoinTreeSiblings *>>,__gnu_cxx::__ops::_Iter_comp_iter<CoinSearchTreeCompareDepth>>(v16);
        v10 = v26;
        if ( v15 != v16 + 16 )
        {
          do
          {
            v19 = *v18;
            v20 = *(v18 - 1);
            v11 = v18 - 1;
            v10 = (int **)*v20;
            v21 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v18 + 1) + 8LL * **v18) + 8LL);
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 8LL * (_QWORD)v10) + 8LL) <= v21 )
            {
              while ( 1 )
              {
                v11[1] = v20;
                v20 = *(v11 - 1);
                v10 = (int **)*v20;
                if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 8LL * (_QWORD)v10) + 8LL) > v21 )
                  break;
                --v11;
              }
            }
            else
            {
              v11 = v18;
            }
            ++v18;
            *v11 = v19;
          }
          while ( v15 != v18 );
        }
      }
    }
    *((_DWORD *)v9 + 8) = *(_DWORD *)(v8 + 32);
    v22 = *(_DWORD *)(v8 + 36);
    v23 = *((_QWORD **)this + 1);
    *((_DWORD *)v9 + 9) = v22;
    if ( v23 )
    {
      v24 = *(__int64 (__fastcall **)(void *))(*v23 + 32LL);
      if ( v24 == CoinSearchTree<CoinSearchTreeCompareDepth>::~CoinSearchTree )
      {
        v25 = (void *)v23[1];
        *v23 = &off_4D2170;
        if ( v25 )
          operator delete(v25);
        operator delete(v23);
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, int **, int **))v24)(v23, v10, v11);
      }
    }
    *((_QWORD *)this + 1) = v9;
  }
}

