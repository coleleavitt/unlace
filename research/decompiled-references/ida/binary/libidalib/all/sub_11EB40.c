__int64 __fastcall sub_11EB40(
        _QWORD *a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r12d
  double v11; // xmm4_8
  double v12; // xmm5_8
  int v13; // eax
  __int64 v14; // rdx
  _QWORD **v15; // rdi
  _QWORD **v16; // rbx
  __int64 v17; // rbp
  char *v18; // rbx
  __int64 v19; // rdi
  _QWORD *v21; // [rsp+8h] [rbp-21D0h] BYREF
  _QWORD v22[10]; // [rsp+10h] [rbp-21C8h] BYREF
  char v23; // [rsp+60h] [rbp-2178h] BYREF
  char v24; // [rsp+C0h] [rbp-2118h] BYREF
  _QWORD **v25; // [rsp+2158h] [rbp-80h]
  __int64 v26; // [rsp+2160h] [rbp-78h]
  __int64 v27; // [rsp+2170h] [rbp-68h]
  __int64 v28; // [rsp+2178h] [rbp-60h]
  unsigned __int64 v29; // [rsp+21A8h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  if ( a1 )
  {
    get_path();
    sub_11D960((__int64)v22);
    v13 = sub_11DAD0((__int64)v22, (__int64)a1, (__int64 *)&v21, a2, a3, a4, a5, a6, v11, v12, a9, a10);
    LOBYTE(v10) = v13 == 1;
    if ( v13 == 1 )
    {
      *a1 = *v21;
      qstrncpy();
    }
    v22[0] = off_231F18;
    if ( v27 )
    {
      v28 = 0;
      qfree();
    }
    v14 = v26;
    v15 = v25;
    v16 = v25;
    if ( 8 * v26 )
    {
      do
      {
        v17 = (__int64)*v16;
        if ( *v16 )
        {
          sub_119040(*v16);
          if ( *(_QWORD *)(v17 + 4240) )
          {
            *(_QWORD *)(v17 + 4248) = 0;
            qfree();
          }
          qfree();
          v15 = v25;
          v14 = v26;
        }
        ++v16;
      }
      while ( v16 != &v15[v14] );
    }
    if ( v15 )
    {
      v26 = 0;
      qfree();
    }
    v18 = &v24;
    v22[0] = &stru_236898;
    do
    {
      v19 = *((_QWORD *)v18 - 3);
      v18 -= 24;
      if ( v19 )
      {
        *((_QWORD *)v18 + 1) = 0;
        qfree();
      }
    }
    while ( v18 != &v23 );
  }
  else
  {
    return 0;
  }
  return v10;
}

