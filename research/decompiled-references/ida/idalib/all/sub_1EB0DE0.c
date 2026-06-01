void __fastcall sub_1EB0DE0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // r12
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r12
  __int64 v15; // r15
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  _QWORD *v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rsi

  if ( a2 )
  {
    v2 = a1[1];
    if ( a2 <= (a1[2] - v2) >> 3 )
    {
      if ( a2 == 1 )
      {
        v7 = (_QWORD *)a1[1];
      }
      else
      {
        v3 = 0;
        v4 = ((a2 - 2) >> 1) + 1;
        do
        {
          v5 = v3++;
          *(_OWORD *)(v2 + 16 * v5) = 0;
        }
        while ( v4 > v3 );
        v6 = 2 * v4;
        v7 = (_QWORD *)(v2 + 16 * v4);
        if ( a2 == v6 )
          goto LABEL_8;
      }
      *v7 = 0;
LABEL_8:
      a1[1] = v2 + 8 * a2;
      return;
    }
    v10 = v2 - *a1;
    v11 = v10 >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v10 >> 3) < a2 )
      std::__throw_length_error("vector::_M_default_append");
    v12 = (v2 - *a1) >> 3;
    if ( a2 >= v11 )
      v12 = a2;
    v13 = v11 + v12;
    if ( v13 > 0x1FFFFFFFFFFFFFFFLL )
      v13 = 0x1FFFFFFFFFFFFFFFLL;
    v14 = 8 * v13;
    v15 = operator new(v14);
    v16 = (_QWORD *)(v15 + v10);
    if ( a2 == 1 )
      goto LABEL_19;
    v17 = 0;
    v18 = ((a2 - 2) >> 1) + 1;
    do
    {
      v19 = v17++;
      *(_OWORD *)&v16[2 * v19] = 0;
    }
    while ( v18 > v17 );
    v16 += 2 * v18;
    if ( a2 != 2 * v18 )
LABEL_19:
      *v16 = 0;
    v20 = a1[1];
    v21 = (_QWORD *)*a1;
    if ( v20 == *a1 )
    {
      if ( !v21 )
        goto LABEL_25;
    }
    else
    {
      v22 = v20 - 8;
      v23 = 0;
      v24 = (unsigned __int64)(v22 - (_QWORD)v21) >> 3;
      while ( 1 )
      {
        *(_QWORD *)(v15 + 8 * v23) = v21[v23];
        if ( v23 == v24 )
          break;
        ++v23;
      }
    }
    operator delete(v21);
LABEL_25:
    *a1 = v15;
    a1[2] = v15 + v14;
    a1[1] = v15 + 8 * (a2 + v11);
  }
}
