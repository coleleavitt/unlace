__int64 __fastcall sub_3A62A0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v6; // r12
  __int64 v8; // rbx
  unsigned int v9; // esi
  int v10; // edi
  size_t v11; // rdx
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // r15
  void *v16; // r14
  void *v17; // rdi
  unsigned __int64 v18; // rcx
  int v19; // eax
  size_t v20; // [rsp+0h] [rbp-40h]

  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    v6 = a1 + 8;
    v8 = a1 + 8;
    do
    {
      if ( *(_DWORD *)(result + 32) < a3 )
      {
        result = *(_QWORD *)(result + 24);
      }
      else
      {
        v8 = result;
        result = *(_QWORD *)(result + 16);
      }
    }
    while ( result );
    while ( 1 )
    {
      if ( v6 == v8 )
        return result;
      result = *(unsigned int *)(v8 + 32);
      if ( (unsigned int)result >= a4 )
        return result;
      v18 = *(_QWORD *)(v8 + 72);
      if ( v18 )
      {
        v9 = *(_DWORD *)(a2 + 8);
        v10 = *(_DWORD *)(a2 + 24);
        LODWORD(v11) = *(_QWORD *)(v8 + 72);
        v12 = result + v18;
        v13 = v10 + v9;
        if ( (unsigned int)result < v10 + v9 && v9 < v12 )
        {
          if ( (unsigned int)result >= v9 )
          {
            if ( v13 < v12 )
            {
              LODWORD(v11) = v13 - result;
              if ( (int)(v13 - result) <= 0 )
                goto LABEL_16;
            }
            else if ( (int)v18 <= 0 )
            {
              goto LABEL_16;
            }
            v14 = result - v9;
            v15 = 0;
            goto LABEL_13;
          }
          LODWORD(v15) = v9 - result;
          v19 = v18 - (v9 - result);
          if ( v13 >= v19 + v9 )
            v10 = v19;
          if ( v10 > 0 && (_DWORD)v15 != -1 )
          {
            v15 = (int)v15;
            if ( (int)v15 < v18 )
            {
              LODWORD(v11) = v10;
              v14 = 0;
LABEL_13:
              v16 = (void *)(*(_QWORD *)(a2 + 16) + v14);
              v11 = (int)v11;
              v17 = (void *)(v15 + *(_QWORD *)(v8 + 64));
              if ( *(_BYTE *)(a2 + 28) )
              {
                v20 = (int)v11;
                memcpy(v17, (const void *)(*(_QWORD *)(a2 + 16) + v14), (int)v11);
                v11 = v20;
                v17 = (void *)(v15 + *(_QWORD *)(dbg + 72LL));
              }
              memcpy(v16, v17, v11);
            }
          }
        }
      }
LABEL_16:
      result = std::_Rb_tree_increment();
      v8 = result;
    }
  }
  return result;
}

