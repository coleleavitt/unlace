// Alternative name is '_ZN20CoinPackedVectorBaseD1Ev'
void __fastcall CoinPackedVectorBase::~CoinPackedVectorBase(CoinPackedVectorBase *this)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // rbx
  _QWORD *v3; // r12

  v1 = *((_QWORD **)this + 2);
  *(_QWORD *)this = &off_4D1AE0;
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
}

