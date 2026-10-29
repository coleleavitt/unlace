_QWORD *__fastcall sub_86EBF0(__int64 a1, __int64 a2, double *a3)
{
  __int64 *v3; // r15
  unsigned int *v4; // rbp
  unsigned __int16 v5; // bx
  int v6; // r13d
  _WORD *v7; // r14
  _QWORD *v8; // rax
  __int64 *v9; // rax
  bool v10; // cf
  int v11; // ebx
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ebx
  _QWORD *result; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __m128 *v22; // rax
  __m128 *v23; // rdx

  v3 = nullptr;
  v4 = *(unsigned int **)a1;
  v5 = __ROL2__(*(_WORD *)(a2 + 3), 8);
  v6 = v5 - 2;
  v7 = (_WORD *)(*(_QWORD *)(a1 + 248) + *(_QWORD *)(a1 + 264) * (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8));
  sub_86B8E0(*(unsigned int **)a1, 32, 1, 0, 142, *(_DWORD *)(a1 + 76) + 8);
  if ( v5 - 1 > 0 )
  {
    while ( 1 )
    {
      v11 = 16 * (unsigned __int16)__ROL2__(*v7, 8);
      sub_86C730(v4, 4, (unsigned int)(*(_DWORD *)(a1 + 76) + v11));
      v12 = sub_86E080(v4, 1, 142, (unsigned int)(*(_DWORD *)(a1 + 76) + v11), 1, 0);
      if ( *v4 )
        goto LABEL_6;
      v13 = *((_QWORD *)v4 + 10);
      v14 = *(_QWORD *)(v13 + 8);
      v15 = v14 + 16;
      if ( (unsigned __int64)(v14 + 16) > 0xFF0 )
        break;
      v9 = (__int64 *)(v13 + v14 + 16);
      *(_QWORD *)(v13 + 8) = v15;
      if ( v9 )
      {
LABEL_5:
        *v9 = (__int64)v12;
        v9[1] = (__int64)v3;
        v3 = v9;
LABEL_6:
        v7 = (_WORD *)((char *)v7 + *(_QWORD *)(a1 + 264));
        v10 = v6-- == 0;
        if ( v10 )
          goto LABEL_11;
      }
      else
      {
        v7 = (_WORD *)((char *)v7 + *(_QWORD *)(a1 + 264));
        v10 = v6-- == 0;
        if ( v10 )
          goto LABEL_11;
      }
    }
    v8 = (_QWORD *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v4 + 7))(
                     4096,
                     *(_QWORD *)(*((_QWORD *)v4 + 7) + 16LL));
    if ( !v8 )
    {
      *v4 = 2;
      goto LABEL_6;
    }
    *v8 = *((_QWORD *)v4 + 10);
    *((_QWORD *)v4 + 10) = v8;
    v9 = v8 + 2;
    *(v9 - 1) = 16;
    goto LABEL_5;
  }
LABEL_11:
  v16 = 16 * (unsigned __int16)__ROL2__(*v7, 8);
  sub_86C730(v4, 4, (unsigned int)(*(_DWORD *)(a1 + 76) + v16));
  if ( a3 )
  {
    if ( !*(_DWORD *)(a1 + 480) )
    {
      sub_86E080(v4, 0, 142, (unsigned int)(*(_DWORD *)(a1 + 76) + v16), 1, 0);
      if ( !*v4 )
      {
        v19 = *((_QWORD *)v4 + 10);
        v20 = *(_QWORD *)(v19 + 8);
        v21 = v20 + 16;
        if ( (unsigned __int64)(v20 + 16) <= 0xFF0 )
        {
          v23 = (__m128 *)(v19 + v20 + 16);
          *(_QWORD *)(v19 + 8) = v21;
          if ( v23 )
            goto LABEL_23;
        }
        else
        {
          v22 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v4 + 7))(
                            4096,
                            *(_QWORD *)(*((_QWORD *)v4 + 7) + 16LL));
          if ( v22 )
          {
            v22->m128_u64[0] = *((_QWORD *)v4 + 10);
            v23 = v22 + 1;
            *((_QWORD *)v4 + 10) = v22;
            v22->m128_u64[1] = 16;
LABEL_23:
            *v23 = _mm_loadh_ps(a3);
            *(_QWORD *)a3 = v23;
            goto LABEL_13;
          }
          *v4 = 2;
        }
      }
    }
  }
LABEL_13:
  for ( result = sub_868BC0((__int64)v4); v3; v3 = (__int64 *)v3[1] )
  {
    v18 = *v3;
    if ( *v3 )
    {
      if ( result )
      {
        *(_QWORD *)(v18 + 16) &= ~1uLL;
        *(_QWORD *)(v18 + 24) = result;
      }
    }
  }
  return result;
}
