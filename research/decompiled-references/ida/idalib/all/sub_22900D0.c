_QWORD *__fastcall sub_22900D0(_QWORD *a1, unsigned int a2, _QWORD *a3, size_t a4)
{
  size_t v6; // rbx
  int *v7; // rax
  size_t v8; // rdx
  int *v9; // r12
  size_t v10; // r14
  void *v11; // r14
  ssize_t v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+18h] [rbp-60h]
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  ssize_t v17; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+38h] [rbp-40h]

  v6 = a3[1];
  v7 = __errno_location();
  v8 = v6;
  v9 = v7;
  while ( 2 )
  {
    v10 = a4 + v6;
    if ( a4 + v6 != v8 )
    {
      if ( a4 + v6 >= v8 && v10 > a3[2] )
        sub_2236E10((__int64)a3, a3 + 3, a4 + v6, 1);
      a3[1] = v10;
    }
    v11 = (void *)(v6 + *a3);
    while ( 1 )
    {
      *v9 = 0;
      v12 = read(a2, v11, a4);
      if ( v12 != -1 )
        break;
      if ( *v9 != 4 )
      {
        v15 = *v9;
        v13 = std::_V2::generic_category((std::_V2 *)a2);
        sub_2220500(&v16, v15, v13);
        v17 = 0;
        v18 |= 1u;
        *a1 = v16;
        goto LABEL_13;
      }
    }
    v18 &= ~1u;
    v17 = v12;
    if ( v12 )
    {
      v6 += v12;
      sub_A0AE70(&v17);
      v8 = a3[1];
      continue;
    }
    break;
  }
  *a1 = 0;
LABEL_13:
  sub_A0AE70(&v17);
  a3[1] = v6;
  return a1;
}
