__int64 *__fastcall sub_DB250(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 *result; // rax
  _QWORD *v6; // rbx
  __int64 *v7; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r13
  const void *v10; // r15
  void *v11; // rax
  const void *v12; // r15
  void *v13; // rax

  result = *(__int64 **)(a1 + 192);
  if ( a5 < result[1] )
  {
    v6 = (_QWORD *)(*result + (a5 << 6));
    if ( v6 )
    {
      sub_94360(*a2);
      sub_94360(*a2 + 3);
      sub_94360(*a2 + 6);
      v7 = *a2;
      if ( *a2 + 9 != v6 + 1 )
      {
        v8 = v6[2];
        if ( v8 > 1 )
        {
          v12 = (const void *)v6[1];
          v13 = (void *)v7[9];
          if ( v7[11] < v8 )
          {
            v13 = (void *)qvector_reserve();
            v7[9] = (__int64)v13;
          }
          v7[10] = v8;
          memmove(v13, v12, v8 - 1);
          *(_BYTE *)(v7[9] + v8 - 1) = 0;
          v7 = *a2;
        }
        else
        {
          v7[10] = 0;
          v7 = *a2;
        }
      }
      if ( v7 + 12 != v6 + 4 )
      {
        v9 = v6[5];
        if ( v9 < 2 )
        {
          v7[13] = 0;
          v7 = *a2;
        }
        else
        {
          v10 = (const void *)v6[4];
          v11 = (void *)v7[12];
          if ( v7[14] < v9 )
          {
            v11 = (void *)qvector_reserve();
            v7[12] = (__int64)v11;
          }
          v7[13] = v9;
          memmove(v11, v10, v9 - 1);
          *(_BYTE *)(v7[12] + v9 - 1) = 0;
          v7 = *a2;
        }
      }
      sub_94360(v7 + 15);
      sub_94360(*a2 + 18);
      sub_94360(*a2 + 21);
      return sub_94360(*a2 + 24);
    }
  }
  return result;
}

