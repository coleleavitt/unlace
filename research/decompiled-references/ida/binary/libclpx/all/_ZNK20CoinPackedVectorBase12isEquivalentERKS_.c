__int64 __fastcall CoinPackedVectorBase::isEquivalent(CoinPackedVectorBase *this, const CoinPackedVectorBase *a2)
{
  unsigned int v2; // ebx
  int v3; // r13d
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // xmm0_8
  __int64 v9; // r15
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  double *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-B8h]
  __int64 v18; // [rsp+0h] [rbp-B8h]
  double v19; // [rsp+0h] [rbp-B8h]
  __int64 v20; // [rsp+8h] [rbp-B0h]
  double v21; // [rsp+8h] [rbp-B0h]
  int v22; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-A0h]
  char v24[8]; // [rsp+20h] [rbp-98h] BYREF
  int v25; // [rsp+28h] [rbp-90h] BYREF
  __int64 v26; // [rsp+30h] [rbp-88h]
  int *v27; // [rsp+38h] [rbp-80h]
  int *v28; // [rsp+40h] [rbp-78h]
  __int64 v29; // [rsp+48h] [rbp-70h]
  int v30; // [rsp+50h] [rbp-68h] BYREF
  __int64 v31; // [rsp+58h] [rbp-60h] BYREF
  __int64 v32; // [rsp+60h] [rbp-58h]
  double *v33; // [rsp+68h] [rbp-50h]
  __int64 *v34; // [rsp+70h] [rbp-48h]
  __int64 v35; // [rsp+78h] [rbp-40h]

  v2 = 0;
  v3 = (**(__int64 (__fastcall ***)(CoinPackedVectorBase *))this)(this);
  if ( v3 == (**(unsigned int (__fastcall ***)(const CoinPackedVectorBase *))a2)(a2) )
  {
    CoinPackedVectorBase::duplicateIndex(this, "equivalent", "CoinPackedVector");
    CoinPackedVectorBase::duplicateIndex(a2, "equivalent", "CoinPackedVector");
    v25 = 0;
    v26 = 0;
    v29 = 0;
    v27 = &v25;
    v28 = &v25;
    v5 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 8LL))(this);
    v17 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 16LL))(this);
    v6 = (**(__int64 (__fastcall ***)(CoinPackedVectorBase *))this)(this) - 1;
    if ( v6 >= 0 )
    {
      v7 = v6;
      v20 = v6 - 1LL - (unsigned int)v6;
      do
      {
        v8 = *(_QWORD *)(v17 + 8 * v7);
        v30 = *(_DWORD *)(v5 + 4 * v7);
        v31 = v8;
        std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_insert_unique<std::pair<int,double>>(
          v24,
          &v30);
        --v7;
      }
      while ( v20 != v7 );
    }
    LODWORD(v31) = 0;
    v32 = 0;
    v35 = 0;
    v33 = (double *)&v31;
    v34 = &v31;
    v9 = (*(__int64 (__fastcall **)(const CoinPackedVectorBase *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = (*(__int64 (__fastcall **)(const CoinPackedVectorBase *))(*(_QWORD *)a2 + 16LL))(a2);
    v11 = (**(__int64 (__fastcall ***)(CoinPackedVectorBase *))this)(this) - 1;
    if ( v11 >= 0 )
    {
      v12 = v11;
      v18 = v11 - 1LL - (unsigned int)v11;
      do
      {
        v13 = *(_DWORD *)(v9 + 4 * v12);
        v23 = *(_QWORD *)(v10 + 8 * v12);
        v22 = v13;
        std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_insert_unique<std::pair<int,double>>(
          &v30,
          &v22);
        --v12;
      }
      while ( v12 != v18 );
    }
    v14 = (__int64)v27;
    v15 = v33;
    if ( v27 == &v25 )
    {
LABEL_23:
      v2 = 1;
    }
    else
    {
      if ( *((_DWORD *)v33 + 8) == v27[8] )
      {
        do
        {
          v21 = *(double *)(v14 + 40);
          v19 = v15[5];
          if ( (unsigned __int8)CoinIsnan(v21)
            || (unsigned __int8)CoinIsnan(v19)
            || v19 != v21
            && (!(unsigned __int8)CoinFinite(v21)
             || !(unsigned __int8)CoinFinite(v19)
             || (fmax(fabs(v21), fabs(v19)) + 1.0) * 1.0e-10 < fabs(v21 - v19)) )
          {
            break;
          }
          v14 = std::_Rb_tree_increment();
          v16 = std::_Rb_tree_increment();
          v15 = (double *)v16;
          if ( (int *)v14 == &v25 )
            goto LABEL_23;
        }
        while ( *(_DWORD *)(v14 + 32) == *(_DWORD *)(v16 + 32) );
      }
      v2 = 0;
    }
    std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
      &v30,
      v32);
    std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
      v24,
      v26);
  }
  return v2;
}

