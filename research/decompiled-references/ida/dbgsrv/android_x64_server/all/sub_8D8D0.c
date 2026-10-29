/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D8D0
// Address: 0x000000000008D8D0

//----- (000000000008D8D0) ----------------------------------------------------
__int64 *__fastcall sub_8D8D0(_QWORD *a1, unsigned __int8 *a2)
{
  unsigned __int64 v3; // rdx
  const void *v4; // r15
  __int64 *v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 **v12; // rax
  __int64 *v13; // rbx
  unsigned __int64 v14; // r13
  size_t v15; // r13
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // cl
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  int v21; // eax
  char v23[8]; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+10h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = a2 + 1;
  if ( (v3 & 1) != 0 )
  {
    v5 = *((__int64 **)a2 + 2);
    v6 = *((_QWORD *)a2 + 1);
  }
  else
  {
    v6 = v3 >> 1;
    v5 = (__int64 *)(a2 + 1);
  }
  v7 = sub_8C090((__int64)v23, v5, v6);
  v8 = a1[1];
  if ( v8 )
  {
    v9 = v7;
    v10 = v8 - 1;
    if ( (v8 & (v8 - 1)) != 0 )
      v11 = v7 >= v8 ? v7 % v8 : v7;
    else
      v11 = v7 & v10;
    v12 = *(__int64 ***)(*a1 + 8 * v11);
    if ( v12 )
    {
      v13 = *v12;
      if ( *v12 )
      {
        v14 = *a2;
        if ( (v14 & 1) != 0 )
        {
          v15 = *((_QWORD *)a2 + 1);
          v4 = *((const void **)a2 + 2);
        }
        else
        {
          v15 = v14 >> 1;
        }
        do
        {
          v16 = v13[1];
          if ( v16 == v9 )
          {
            v17 = *((_BYTE *)v13 + 16);
            v18 = (unsigned __int64)v17 >> 1;
            if ( (v17 & 1) != 0 )
              v18 = v13[3];
            if ( v18 == v15 )
            {
              if ( (v17 & 1) != 0 )
              {
                if ( !v15 )
                  return v13;
                v20 = v11;
                v21 = memcmp((const void *)v13[4], v4, v15);
                v11 = v20;
                v10 = v8 - 1;
                if ( !v21 )
                  return v13;
              }
              else
              {
                if ( !v15 )
                  return v13;
                v19 = 0;
                while ( *((_BYTE *)v13 + v19 + 17) == *((_BYTE *)v4 + v19) )
                {
                  if ( (unsigned __int64)*((unsigned __int8 *)v13 + 16) >> 1 == ++v19 )
                    return v13;
                }
              }
            }
          }
          else
          {
            if ( (v8 & v10) != 0 )
            {
              if ( v16 >= v8 )
                v16 %= v8;
            }
            else
            {
              v16 &= v10;
            }
            if ( v16 != v11 )
              return nullptr;
          }
          v13 = (__int64 *)*v13;
        }
        while ( v13 );
      }
    }
  }
  return nullptr;
}
