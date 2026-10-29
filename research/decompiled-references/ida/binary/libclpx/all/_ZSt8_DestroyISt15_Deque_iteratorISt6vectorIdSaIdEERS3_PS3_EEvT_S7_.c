void __fastcall std::_Destroy<std::_Deque_iterator<std::vector<double>,std::vector<double>&,std::vector<double>*>>(
        __int64 a1,
        void ***a2)
{
  void **v2; // rbp
  void **v3; // rbx
  __int64 v4; // r12
  void ***v5; // r13
  void *v6; // rdi

  v2 = *a2;
  v3 = *(void ***)a1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(void ****)(a1 + 24);
  while ( v2 != v3 )
  {
    v6 = *v3;
    if ( *v3 )
    {
      v3 += 3;
      operator delete(v6);
      if ( (void **)v4 != v3 )
        continue;
      v3 = *++v5;
      v4 = (__int64)(*v5 + 63);
    }
    else
    {
      v3 += 3;
      if ( (void **)v4 != v3 )
        continue;
      v3 = *++v5;
      v4 = (__int64)(*v5 + 63);
    }
  }
}

