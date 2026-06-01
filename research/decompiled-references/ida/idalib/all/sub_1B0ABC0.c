__int64 __fastcall sub_1B0ABC0(__int64 *a1, char *a2, __int64 a3, unsigned int a4, unsigned int a5, double a6)
{
  __int64 v6; // rax
  char *v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // r9
  char *v12; // rax
  char *v13; // rdx
  __int64 result; // rax
  unsigned int v16; // eax
  __m128i v17; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+20h] [rbp-B8h] BYREF

  v6 = 8 * a3;
  v7 = &a2[8 * a3];
  v8 = (8 * a3) >> 5;
  v9 = v6 >> 3;
  if ( v8 > 0 )
  {
    v10 = *(_QWORD *)a2;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 99 )
    {
      v13 = a2;
    }
    else
    {
      v10 = *((_QWORD *)a2 + 1);
      if ( *(_DWORD *)(v10 + 8) == 99 )
      {
        v13 = a2 + 8;
      }
      else
      {
        v10 = *((_QWORD *)a2 + 2);
        if ( *(_DWORD *)(v10 + 8) == 99 )
        {
          v13 = a2 + 16;
        }
        else
        {
          v10 = *((_QWORD *)a2 + 3);
          v11 = a2;
          v12 = &a2[32 * v8];
          v13 = a2 + 24;
          if ( *(_DWORD *)(v10 + 8) != 99 )
          {
            while ( 1 )
            {
              v13 = v11 + 32;
              if ( v11 + 32 == v12 )
              {
                a2 = (char *)(v7 - v12);
                v9 = (v7 - v12) >> 3;
                goto LABEL_14;
              }
              v10 = *((_QWORD *)v11 + 4);
              if ( *(_DWORD *)(v10 + 8) == 99 )
                goto LABEL_19;
              v10 = *((_QWORD *)v11 + 5);
              if ( *(_DWORD *)(v10 + 8) == 99 )
              {
                v13 = v11 + 40;
                goto LABEL_19;
              }
              v10 = *((_QWORD *)v11 + 6);
              if ( *(_DWORD *)(v10 + 8) == 99 )
              {
                v13 = v11 + 48;
                goto LABEL_19;
              }
              v10 = *((_QWORD *)v11 + 7);
              if ( *(_DWORD *)(v10 + 8) == 99 )
                break;
              v11 += 32;
            }
            v13 = v11 + 56;
          }
        }
      }
    }
    goto LABEL_19;
  }
  v13 = a2;
LABEL_14:
  if ( v9 == 2 )
    goto LABEL_29;
  if ( v9 == 3 )
  {
    v10 = *(_QWORD *)v13;
    if ( *(_DWORD *)(*(_QWORD *)v13 + 8LL) == 99 )
      goto LABEL_19;
    v13 += 8;
LABEL_29:
    v10 = *(_QWORD *)v13;
    if ( *(_DWORD *)(*(_QWORD *)v13 + 8LL) == 99 )
      goto LABEL_19;
    v13 += 8;
    goto LABEL_31;
  }
  if ( v9 != 1 )
    return 1;
LABEL_31:
  v10 = *(_QWORD *)v13;
  result = 1;
  if ( *(_DWORD *)(*(_QWORD *)v13 + 8LL) != 99 )
    return result;
LABEL_19:
  if ( v7 == v13 )
    return 1;
  result = 1;
  if ( *(_DWORD *)(v10 + 16) > a4 )
  {
    v16 = sub_EEB7E0(*(_QWORD *)(v10 + 8LL * a4 + 40), (__int64)a2, a6);
    sub_168B9F0((__int64)v19, a1, v16, a5, 0);
    sub_1AF81E0(&v17, *(_DWORD *)(v10 + 8));
    sub_1682AF0((__int64)v19, (__int64)&v17);
    if ( (__int64 *)v17.m128i_i64[0] != &v18 )
      operator delete((void *)v17.m128i_i64[0]);
    sub_15F7200(v19);
    return 0;
  }
  return result;
}
