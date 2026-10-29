void __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<CoinTreeSiblings **,std::vector<CoinTreeSiblings *>>,__gnu_cxx::__ops::_Iter_comp_iter<CoinSearchTreeCompareDepth>>(
        int **src,
        char *a2)
{
  char *v2; // rbx
  int *v3; // r12
  int v4; // ecx
  int *v5; // rax
  int **v6; // rdx

  if ( a2 != (char *)src )
  {
    v2 = (char *)(src + 1);
    if ( src + 1 != (int **)a2 )
    {
      do
      {
        while ( 1 )
        {
          v3 = *(int **)v2;
          v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL) + 8LL * **(int **)v2) + 8LL);
          if ( v4 >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*src + 1) + 8LL * **src) + 8LL) )
            break;
          v5 = *((int **)v2 - 1);
          v6 = (int **)(v2 - 8);
          if ( v4 >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 8LL * *v5) + 8LL) )
          {
            while ( 1 )
            {
              v6[1] = v5;
              v5 = *(v6 - 1);
              if ( v4 < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 8LL * *v5) + 8LL) )
                break;
              --v6;
            }
            *v6 = v3;
          }
          else
          {
            *(_QWORD *)v2 = v3;
          }
          v2 += 8;
          if ( a2 == v2 )
            return;
        }
        if ( src != (int **)v2 )
          memmove(src + 1, src, v2 - (char *)src);
        v2 += 8;
        *src = v3;
      }
      while ( a2 != v2 );
    }
  }
}

