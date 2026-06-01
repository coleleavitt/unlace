__int64 __fastcall sub_455820(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // r9
  __int64 result; // rax
  unsigned int v6; // r8d
  _QWORD *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // r13
  __int64 v15; // rax
  unsigned int v16; // r15d
  unsigned int v17; // eax
  unsigned int v18; // eax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r14d
  int v25; // r13d
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // esi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // edx
  __int64 v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rax

  v3 = *(_QWORD **)(a1 + 40);
  result = -1;
  if ( v3[5] )
  {
    v6 = a2;
    v8 = v3 + 1;
    v9 = v3[2];
    if ( v9 )
    {
      v10 = v3[2];
      v11 = (__int64)(v3 + 1);
      do
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v10 + 16);
          v13 = *(_QWORD *)(v10 + 24);
          if ( *(_DWORD *)(v10 + 32) < v6 )
            break;
          v11 = v10;
          v10 = *(_QWORD *)(v10 + 16);
          if ( !v12 )
            goto LABEL_7;
        }
        v10 = *(_QWORD *)(v10 + 24);
      }
      while ( v13 );
LABEL_7:
      if ( a3 <= 1 )
      {
        if ( v8 == (_QWORD *)v11 )
          return -1;
        v23 = *(unsigned int *)(v11 + 32);
        v24 = *(_DWORD *)(a1 + 48);
        if ( (unsigned int)v23 >= v24 && (unsigned int)v23 < *(_DWORD *)(a1 + 52) || a3 == 1 && v23 == a2 )
        {
          v11 = std::_Rb_tree_increment();
          result = -1;
          if ( v8 == (_QWORD *)v11 )
            return result;
          v32 = *(_DWORD *)(v11 + 32);
          if ( v32 >= v24 )
          {
            v33 = *(_DWORD *)(a1 + 52);
            if ( v32 < v33 )
            {
              v11 = (__int64)v8;
              v34 = v9;
              do
              {
                if ( *(_DWORD *)(v34 + 32) >= v33 )
                {
                  v11 = v34;
                  v34 = *(_QWORD *)(v34 + 16);
                }
                else
                {
                  v34 = *(_QWORD *)(v34 + 24);
                }
              }
              while ( v34 );
              if ( (_QWORD *)v11 == v8 )
                return -1;
            }
          }
        }
        v25 = ~unk_2389830;
LABEL_32:
        if ( (*(_DWORD *)(v11 + 36) & v25) != 0 )
        {
LABEL_42:
          if ( v8 != (_QWORD *)v11 )
            return *(unsigned int *)(v11 + 32);
          return -1;
        }
        while ( 1 )
        {
          v26 = std::_Rb_tree_increment();
          v11 = v26;
          if ( v8 == (_QWORD *)v26 )
            return -1;
          v27 = *(_DWORD *)(v26 + 32);
          if ( v27 < v24 )
            goto LABEL_32;
          v28 = *(_DWORD *)(a1 + 52);
          if ( v27 >= v28 )
            goto LABEL_32;
          v11 = (__int64)v8;
          v29 = v9;
          do
          {
            while ( 1 )
            {
              v30 = *(_QWORD *)(v29 + 16);
              v31 = *(_QWORD *)(v29 + 24);
              if ( *(_DWORD *)(v29 + 32) < v28 )
                break;
              v11 = v29;
              v29 = *(_QWORD *)(v29 + 16);
              if ( !v30 )
                goto LABEL_40;
            }
            v29 = *(_QWORD *)(v29 + 24);
          }
          while ( v31 );
LABEL_40:
          if ( v8 == (_QWORD *)v11 )
            return -1;
          if ( (*(_DWORD *)(v11 + 36) & v25) != 0 )
            goto LABEL_42;
        }
      }
      if ( a3 != 2 )
        goto LABEL_42;
    }
    else
    {
      if ( a3 <= 1 )
        return result;
      v11 = (__int64)(v3 + 1);
      if ( a3 != 2 )
        return result;
    }
    v14 = (_QWORD *)v3[3];
    result = -1;
    if ( v14 == (_QWORD *)v11 )
      return result;
    v15 = std::_Rb_tree_decrement();
    v16 = *(_DWORD *)(a1 + 48);
    v11 = v15;
    v17 = *(_DWORD *)(v15 + 32);
    if ( v17 < v16 || v17 >= *(_DWORD *)(a1 + 52) )
    {
LABEL_12:
      if ( v8 != (_QWORD *)v11 )
      {
        while ( (*(_DWORD *)(v11 + 36) & ~unk_2389830) == 0 )
        {
          if ( v14 == (_QWORD *)v11 )
            return -1;
          v11 = std::_Rb_tree_decrement();
          v18 = *(_DWORD *)(v11 + 32);
          if ( v18 >= v16 && v18 < *(_DWORD *)(a1 + 52) )
          {
            v19 = v8;
            if ( v9 )
            {
              v20 = v9;
              do
              {
                while ( 1 )
                {
                  v21 = *(_QWORD *)(v20 + 16);
                  v22 = *(_QWORD *)(v20 + 24);
                  if ( *(_DWORD *)(v20 + 32) < v16 )
                    break;
                  v19 = (_QWORD *)v20;
                  v20 = *(_QWORD *)(v20 + 16);
                  if ( !v21 )
                    goto LABEL_22;
                }
                v20 = *(_QWORD *)(v20 + 24);
              }
              while ( v22 );
            }
LABEL_22:
            if ( v19 == v14 )
              return -1;
            v11 = std::_Rb_tree_decrement();
          }
          if ( v8 == (_QWORD *)v11 )
            return -1;
        }
        goto LABEL_42;
      }
      return -1;
    }
    v35 = v8;
    if ( v9 )
    {
      v36 = v9;
      do
      {
        if ( *(_DWORD *)(v36 + 32) >= v16 )
        {
          v35 = (_QWORD *)v36;
          v36 = *(_QWORD *)(v36 + 16);
        }
        else
        {
          v36 = *(_QWORD *)(v36 + 24);
        }
      }
      while ( v36 );
    }
    result = -1;
    if ( v35 != v14 )
    {
      v11 = std::_Rb_tree_decrement();
      goto LABEL_12;
    }
  }
  return result;
}

