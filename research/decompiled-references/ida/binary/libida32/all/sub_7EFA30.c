__int64 __fastcall sub_7EFA30(__int64 a1, __int64 a2, char a3, __int64 *a4, _BYTE *a5, int a6)
{
  int v7; // ecx
  __int64 result; // rax
  unsigned __int64 v9; // r12
  size_t v11; // rax
  size_t v12; // r13
  unsigned __int64 v13; // rbx
  void *v14; // rdi
  size_t v15; // r14
  const void *v16; // r14
  void *v17; // rdi
  __int64 v18; // rax
  const void *v19; // r14
  void *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  char v23[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a2 )
  {
    v7 = *(unsigned __int8 *)(a2 + 8);
    result = 0;
    if ( (_BYTE)v7 != a3 )
    {
      if ( (_BYTE)v7 == 11 )
      {
        if ( a4 && a4 != (__int64 *)(a2 + 16) )
        {
          v9 = *(_QWORD *)(a2 + 24);
          if ( v9 > 1 )
          {
            v16 = *(const void **)(a2 + 16);
            v17 = (void *)*a4;
            if ( a4[2] < v9 )
            {
              v21 = qvector_reserve(a4, *a4, v9, 1);
              *a4 = v21;
              v17 = (void *)v21;
            }
            a4[1] = v9;
            memmove(v17, v16, v9 - 1);
            *(_BYTE *)(*a4 + v9 - 1) = 0;
          }
          else
          {
            a4[1] = 0;
          }
        }
        set_error_string();
        return *(unsigned int *)(a2 + 12);
      }
      else
      {
        qsnprintf((int)v23, 16, (int)"%d", v7, (int)a5, a6, v23[0]);
        if ( a4 )
        {
          v11 = strlen(v23);
          v12 = v11;
          if ( v11 )
          {
            v14 = (void *)*a4;
            v15 = v11 + 1;
            if ( a4[2] < v11 + 1 )
            {
              v18 = qvector_reserve(a4, *a4, v11 + 1, 1);
              *a4 = v18;
              v14 = (void *)v18;
            }
            a4[1] = v15;
            memmove(v14, v23, v12);
            *(_BYTE *)(*a4 + v12) = 0;
          }
          else
          {
            a4[1] = 0;
          }
        }
        set_error_string();
        if ( a5 )
          *a5 = 1;
        return 1;
      }
    }
  }
  else
  {
    if ( a4 && a4 != (__int64 *)(a1 + 16) )
    {
      v13 = *(_QWORD *)(a1 + 24);
      if ( v13 > 1 )
      {
        v19 = *(const void **)(a1 + 16);
        v20 = (void *)*a4;
        if ( a4[2] < v13 )
        {
          v22 = qvector_reserve(a4, *a4, v13, 1);
          *a4 = v22;
          v20 = (void *)v22;
        }
        a4[1] = v13;
        memmove(v20, v19, v13 - 1);
        *(_BYTE *)(*a4 + v13 - 1) = 0;
      }
      else
      {
        a4[1] = 0;
      }
    }
    set_error_string();
    return 2;
  }
  return result;
}

