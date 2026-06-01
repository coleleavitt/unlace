void *__fastcall sub_76AB80(unsigned __int64 *a1, const void *a2, size_t a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v4 = a1[1];
  v5 = *a1;
  v16 = __readfsqword(0x28u);
  v15 = 0;
  v7 = a3 + v4;
  if ( __CFADD__(a3, v4) )
  {
LABEL_7:
    a1[1] = v7;
    return memcpy((void *)(v4 + v5), a2, a3);
  }
  if ( v4 < v7 )
  {
    v9 = a1[2];
    if ( (unsigned __int64)&v15 < v5 || (unsigned __int64)&v15 >= v5 + v9 )
    {
      v10 = v4;
      if ( v9 >= v7 || (v13 = qvector_reserve(a1, v5, v7, 1), *a1 = v13, v5 = v13, v10 = a1[1], v10 < v7) )
      {
        do
        {
          *(_BYTE *)(v5 + v10++) = 0;
          v5 = *a1;
        }
        while ( v7 != v10 );
      }
    }
    else
    {
      v11 = v4;
      if ( v9 >= v7 || (v14 = qvector_reserve(a1, v5, v7, 1), *a1 = v14, v5 = v14, v11 = a1[1], v11 < v7) )
      {
        do
        {
          *(_BYTE *)(v5 + v11) = 0;
          v12 = v11 + 1;
          v5 = *a1;
          if ( v7 == v12 )
            break;
          *(_BYTE *)(v5 + v12) = 0;
          v11 = v12 + 1;
          v5 = *a1;
        }
        while ( v7 != v11 );
      }
    }
    goto LABEL_7;
  }
  return memcpy((void *)(v4 + v5), a2, a3);
}

