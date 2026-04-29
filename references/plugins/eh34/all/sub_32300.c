__int64 __fastcall sub_32300(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v5; // rsi
  unsigned int *v6; // rax
  __int64 v7; // rdx
  unsigned int *v8; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD v17[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a1[1];
  v17[1] = __readfsqword(0x28u);
  v5 = *a1;
  if ( v3 )
  {
    v6 = (unsigned int *)*a1;
    v7 = 0;
    while ( 1 )
    {
      v8 = v6;
      if ( *v6 == a2 )
      {
        ++v6[1];
        return 0;
      }
      if ( (int)*v6 > (int)a2 )
        break;
      ++v7;
      v6 += 2;
      if ( v7 == v3 )
      {
        v11 = v3 + 1;
        goto LABEL_12;
      }
    }
    v10 = 8 * v7;
    if ( a1[2] < v3 + 1 )
    {
      v15 = qvector_reserve(a1, v5, v3 + 1, 8);
      v3 = a1[1];
      *a1 = v15;
      v8 = (unsigned int *)(v15 + v10);
    }
    memmove(v8 + 2, v8, 8 * v3 - v10);
    *v8 = a2;
    v8[1] = 1;
    ++a1[1];
  }
  else
  {
    v11 = 1;
LABEL_12:
    v17[0] = a2 | 0x100000000LL;
    v12 = a1[2];
    if ( (unsigned __int64)v17 < v5 || (unsigned __int64)v17 >= v5 + 8 * v12 )
    {
      if ( v12 < v11 )
      {
        v14 = qvector_reserve(a1, v5, v11, 8);
        v3 = a1[1];
        *a1 = v14;
        v5 = v14;
      }
      *(_QWORD *)(v5 + 8 * v3) = v17[0];
    }
    else
    {
      if ( v12 < v11 )
      {
        v16 = qvector_reserve(a1, v5, v11, 8);
        v3 = a1[1];
        *a1 = v16;
        v5 = v16;
      }
      v13 = (unsigned int *)(v5 + 8 * v3);
      *v13 = a2;
      v13[1] = 1;
    }
    ++a1[1];
  }
  return 1;
}
