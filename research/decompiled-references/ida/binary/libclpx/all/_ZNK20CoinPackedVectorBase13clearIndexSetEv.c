void __fastcall CoinPackedVectorBase::clearIndexSet(CoinPackedVectorBase *this)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // rbx
  _QWORD *v3; // r13

  v1 = *((_QWORD **)this + 2);
  if ( v1 )
  {
    v2 = (_QWORD *)v1[2];
    if ( v2 )
    {
      do
      {
        std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(v1, v2[3]);
        v3 = (_QWORD *)v2[2];
        operator delete(v2);
        v2 = v3;
      }
      while ( v3 );
    }
    operator delete(v1);
  }
  *((_QWORD *)this + 2) = 0;
}

