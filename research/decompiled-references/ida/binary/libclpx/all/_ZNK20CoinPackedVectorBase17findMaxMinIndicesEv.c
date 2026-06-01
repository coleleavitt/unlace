__int64 __fastcall CoinPackedVectorBase::findMaxMinIndices(CoinPackedVectorBase *this)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 v3; // rbp
  int *v4; // rbp
  int *v5; // rax
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rbp
  int *v9; // rbp
  int v10; // edx

  result = (**(__int64 (__fastcall ***)(CoinPackedVectorBase *))this)(this);
  if ( (_DWORD)result )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
    {
      *((_DWORD *)this + 2) = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
      result = *(unsigned int *)(*(_QWORD *)(v2 + 24) + 32LL);
      *((_DWORD *)this + 3) = result;
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 8LL))(this);
      v4 = (int *)(v3 + 4LL * (**(int (__fastcall ***)(CoinPackedVectorBase *))this)(this));
      v5 = (int *)(*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 8LL))(this);
      if ( v4 == v5 )
      {
        v6 = *v4;
      }
      else
      {
        v6 = *v5;
        while ( v4 != ++v5 )
        {
          if ( v6 < *v5 )
            v6 = *v5;
        }
      }
      v7 = *(_QWORD *)this;
      *((_DWORD *)this + 2) = v6;
      v8 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(v7 + 8))(this);
      v9 = (int *)(v8 + 4LL * (**(int (__fastcall ***)(CoinPackedVectorBase *))this)(this));
      result = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 8LL))(this);
      if ( v9 == (int *)result )
      {
        v10 = *v9;
      }
      else
      {
        v10 = *(_DWORD *)result;
        while ( 1 )
        {
          result += 4;
          if ( v9 == (int *)result )
            break;
          if ( v10 > *(_DWORD *)result )
            v10 = *(_DWORD *)result;
        }
      }
      *((_DWORD *)this + 3) = v10;
    }
  }
  return result;
}

