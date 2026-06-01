__int64 __fastcall sub_469BE0(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  _QWORD *v3; // r9
  __int64 result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r14
  int v23; // r13d
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rdi
  _QWORD *v34; // rax

  v3 = (_QWORD *)a1[5];
  result = -1;
  if ( v3[5] )
  {
    v6 = v3 + 1;
    v7 = (_QWORD *)v3[2];
    if ( v7 )
    {
      v8 = (_QWORD *)v3[2];
      v9 = (__int64)(v3 + 1);
      do
      {
        while ( 1 )
        {
          v10 = v8[2];
          v11 = v8[3];
          if ( v8[4] < a2 )
            break;
          v9 = (__int64)v8;
          v8 = (_QWORD *)v8[2];
          if ( !v10 )
            goto LABEL_7;
        }
        v8 = (_QWORD *)v8[3];
      }
      while ( v11 );
LABEL_7:
      if ( a3 <= 1 )
      {
        if ( v6 == (_QWORD *)v9 )
          return -1;
        v21 = *(_QWORD *)(v9 + 32);
        v22 = a1[6];
        if ( v21 >= v22 && v21 < a1[7] || v21 == a2 && (a3 & 1) != 0 )
        {
          v9 = std::_Rb_tree_increment(v9);
          result = -1;
          if ( v6 == (_QWORD *)v9 )
            return result;
          v30 = *(_QWORD *)(v9 + 32);
          if ( v30 >= v22 )
          {
            v31 = a1[7];
            if ( v30 < v31 )
            {
              v9 = (__int64)v6;
              v32 = v7;
              do
              {
                if ( v32[4] >= v31 )
                {
                  v9 = (__int64)v32;
                  v32 = (_QWORD *)v32[2];
                }
                else
                {
                  v32 = (_QWORD *)v32[3];
                }
              }
              while ( v32 );
              if ( (_QWORD *)v9 == v6 )
                return -1;
            }
          }
        }
        v23 = ~unk_23AD870;
LABEL_33:
        if ( (*(_DWORD *)(v9 + 40) & v23) != 0 )
        {
LABEL_43:
          if ( v6 != (_QWORD *)v9 )
            return *(_QWORD *)(v9 + 32);
          return -1;
        }
        while ( 1 )
        {
          v24 = std::_Rb_tree_increment(v9);
          v9 = v24;
          if ( v6 == (_QWORD *)v24 )
            return -1;
          v25 = *(_QWORD *)(v24 + 32);
          if ( v25 < v22 )
            goto LABEL_33;
          v26 = a1[7];
          if ( v25 >= v26 )
            goto LABEL_33;
          v9 = (__int64)v6;
          v27 = v7;
          do
          {
            while ( 1 )
            {
              v28 = v27[2];
              v29 = v27[3];
              if ( v27[4] < v26 )
                break;
              v9 = (__int64)v27;
              v27 = (_QWORD *)v27[2];
              if ( !v28 )
                goto LABEL_41;
            }
            v27 = (_QWORD *)v27[3];
          }
          while ( v29 );
LABEL_41:
          if ( v6 == (_QWORD *)v9 )
            return -1;
          if ( (*(_DWORD *)(v9 + 40) & v23) != 0 )
            goto LABEL_43;
        }
      }
      if ( a3 != 2 )
        goto LABEL_43;
    }
    else
    {
      if ( a3 <= 1 )
        return result;
      v9 = (__int64)(v3 + 1);
      if ( a3 != 2 )
        return result;
    }
    v12 = (_QWORD *)v3[3];
    result = -1;
    if ( v12 == (_QWORD *)v9 )
      return result;
    v13 = std::_Rb_tree_decrement(v9);
    v14 = a1[6];
    v9 = v13;
    v15 = *(_QWORD *)(v13 + 32);
    if ( v15 < v14 || v15 >= a1[7] )
    {
LABEL_12:
      if ( v6 != (_QWORD *)v9 )
      {
        while ( (*(_DWORD *)(v9 + 40) & ~unk_23AD870) == 0 )
        {
          if ( v12 == (_QWORD *)v9 )
            return -1;
          v9 = std::_Rb_tree_decrement(v9);
          v16 = *(_QWORD *)(v9 + 32);
          if ( v16 >= v14 && v16 < a1[7] )
          {
            v17 = v6;
            if ( v7 )
            {
              v18 = v7;
              do
              {
                while ( 1 )
                {
                  v19 = v18[2];
                  v20 = v18[3];
                  if ( v18[4] < v14 )
                    break;
                  v17 = v18;
                  v18 = (_QWORD *)v18[2];
                  if ( !v19 )
                    goto LABEL_22;
                }
                v18 = (_QWORD *)v18[3];
              }
              while ( v20 );
            }
LABEL_22:
            if ( v17 == v12 )
              return -1;
            v9 = std::_Rb_tree_decrement(v17);
          }
          if ( v6 == (_QWORD *)v9 )
            return -1;
        }
        goto LABEL_43;
      }
      return -1;
    }
    v33 = v6;
    if ( v7 )
    {
      v34 = v7;
      do
      {
        if ( v34[4] >= v14 )
        {
          v33 = v34;
          v34 = (_QWORD *)v34[2];
        }
        else
        {
          v34 = (_QWORD *)v34[3];
        }
      }
      while ( v34 );
    }
    result = -1;
    if ( v33 != v12 )
    {
      v9 = std::_Rb_tree_decrement(v33);
      goto LABEL_12;
    }
  }
  return result;
}
