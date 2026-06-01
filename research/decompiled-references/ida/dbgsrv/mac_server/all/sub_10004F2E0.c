/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004F2E0
// Address: 0x000000010004F2E0

//----- (000000010004F2E0) ----------------------------------------------------
__int64 **__fastcall sub_10004F2E0(_QWORD *a1, unsigned __int8 *a2)
{
  unsigned int v4; // edx
  unsigned __int8 *v5; // r15
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  __int64 ***v13; // rax
  __int64 **v14; // r15
  unsigned int v15; // ebx
  size_t v16; // rbx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r13
  __int64 *v20; // rdi
  int v21; // eax
  unsigned __int64 v23; // [rsp+0h] [rbp-50h]
  unsigned __int8 *__s2; // [rsp+10h] [rbp-40h]
  char v25; // [rsp+1Fh] [rbp-31h] BYREF

  v4 = *a2;
  v5 = a2 + 1;
  if ( (v4 & 1) != 0 )
  {
    v6 = *((_QWORD **)a2 + 2);
    v7 = *((_QWORD *)a2 + 1);
  }
  else
  {
    v7 = v4 >> 1;
    v6 = a2 + 1;
  }
  v8 = sub_10004D570((__int64)&v25, v6, v7);
  v9 = a1[1];
  if ( v9 )
  {
    v10 = v8;
    v11 = (0x101010101010101LL
         * ((((v9 - ((v9 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v9 - ((v9 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v9 - ((v9 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v9 - ((v9 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4))
          & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( v11 > 1 )
    {
      if ( v8 >= v9 )
        v12 = (v9 | v8) >> 32 ? v8 % v9 : (unsigned int)v8 % (unsigned int)v9;
      else
        v12 = v8;
    }
    else
    {
      v12 = v8 & (v9 - 1);
    }
    v13 = *(__int64 ****)(*a1 + 8 * v12);
    if ( v13 )
    {
      __s2 = v5;
      v14 = *v13;
      if ( *v13 )
      {
        v15 = *a2;
        if ( (v15 & 1) != 0 )
        {
          v16 = *((_QWORD *)a2 + 1);
          __s2 = *((unsigned __int8 **)a2 + 2);
        }
        else
        {
          v16 = v15 >> 1;
        }
        v23 = v10;
        do
        {
          v17 = (unsigned __int64)v14[1];
          if ( v17 == v10 )
          {
            v18 = *((unsigned __int8 *)v14 + 16);
            if ( (v18 & 1) != 0 )
            {
              if ( v14[3] != (__int64 *)v16 )
                goto LABEL_20;
            }
            else if ( v18 >> 1 != v16 )
            {
              goto LABEL_20;
            }
            v19 = v12;
            if ( (v18 & 1) != 0 )
              v20 = v14[4];
            else
              v20 = (__int64 *)((char *)v14 + 17);
            v21 = memcmp(v20, __s2, v16);
            v10 = v23;
            v12 = v19;
            if ( !v21 )
              return v14;
          }
          else
          {
            if ( (unsigned int)v11 <= 1 )
            {
              v17 &= v9 - 1;
            }
            else if ( v17 >= v9 )
            {
              if ( (v9 | v17) >> 32 )
                v17 %= v9;
              else
                v17 = (unsigned int)v17 % (unsigned int)v9;
            }
            if ( v17 != v12 )
              return nullptr;
          }
LABEL_20:
          v14 = (__int64 **)*v14;
        }
        while ( v14 );
      }
    }
  }
  return nullptr;
}
