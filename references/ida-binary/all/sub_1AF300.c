unsigned __int64 __fastcall sub_1AF300(__int64 a1, char a2, char a3)
{
  const char *v3; // rsi
  _BYTE *v5; // rdx
  _BYTE *v6; // r14
  void **v7; // rbx
  void *v8; // rbp
  void **v9; // r13
  volatile signed __int32 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 i; // r12
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 j; // r12
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 k; // r12
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // edi
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+18h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( a2 )
  {
    v27 = operator new(0x80u);
    v28 = *((_QWORD *)&xmmword_8CAE08 + 1);
    v29 = qword_8CAE00;
    *(_QWORD *)v27 = a1;
    v30 = v27;
    *(_QWORD *)(v27 + 8) = -1;
    *(_DWORD *)(v27 + 16) = -1;
    *(_QWORD *)(v27 + 24) = 0;
    *(_QWORD *)(v27 + 48) = 0;
    *(_QWORD *)(v27 + 72) = 0;
    *(_QWORD *)(v27 + 112) = 0;
    *(_DWORD *)(v27 + 120) = -1;
    *(_OWORD *)(v27 + 32) = 0;
    *(_OWORD *)(v27 + 56) = 0;
    *(_OWORD *)(v27 + 80) = 0;
    *(_OWORD *)(v27 + 96) = 0;
    v31 = xmmword_8CAE08;
    if ( v28 < (__int64)xmmword_8CAE08 + 1 )
    {
      qword_8CAE00 = (void *)qvector_reserve(&qword_8CAE00, v29, xmmword_8CAE08 + 1, 8);
      v29 = qword_8CAE00;
      v31 = xmmword_8CAE08;
    }
    v29[v31] = v30;
    v32 = xmmword_8CAE08;
    *(_QWORD *)&xmmword_8CAE08 = xmmword_8CAE08 + 1;
  }
  else
  {
    v3 = (const char *)xmmword_8CAE08;
    v5 = qword_8CAE00;
    v6 = qword_8CAE00;
    v7 = (void **)qword_8CAE00;
    if ( !(8LL * (_QWORD)xmmword_8CAE08) )
      return v36 - __readfsqword(0x28u);
    while ( 1 )
    {
      v8 = *v7;
      v9 = v7++;
      if ( *(_QWORD *)v8 == a1 )
        break;
      if ( (char *)qword_8CAE00 + 8 * (_QWORD)xmmword_8CAE08 == (char *)v7 )
        return v36 - __readfsqword(0x28u);
    }
    if ( v8 )
    {
      v10 = *((volatile signed __int32 **)v8 + 12);
      if ( v10 && !_InterlockedSub(v10, 1u) )
        free(*((void **)v8 + 12));
      v11 = *((_QWORD *)v8 + 9);
      if ( v11 )
      {
        v12 = *((_QWORD *)v8 + 10);
        if ( v12 )
        {
          for ( i = 0; i != v12; ++i )
          {
            v14 = (__int64 *)(v11 + 24 * i);
            v15 = *v14;
            if ( *v14 )
            {
              v14[1] = 0;
              v33 = v12;
              qfree(v15, v3);
              v11 = *((_QWORD *)v8 + 9);
              v12 = v33;
            }
          }
        }
        *((_QWORD *)v8 + 10) = 0;
        qfree(v11, v3);
      }
      v16 = *((_QWORD *)v8 + 6);
      if ( v16 )
      {
        v17 = *((_QWORD *)v8 + 7);
        if ( v17 )
        {
          for ( j = 0; j != v17; ++j )
          {
            v19 = (__int64 *)(v16 + 24 * j);
            v20 = *v19;
            if ( *v19 )
            {
              v19[1] = 0;
              v34 = v17;
              qfree(v20, v3);
              v16 = *((_QWORD *)v8 + 6);
              v17 = v34;
            }
          }
        }
        *((_QWORD *)v8 + 7) = 0;
        qfree(v16, v3);
      }
      v21 = *((_QWORD *)v8 + 3);
      if ( v21 )
      {
        v22 = *((_QWORD *)v8 + 4);
        if ( v22 )
        {
          for ( k = 0; k != v22; ++k )
          {
            v24 = (__int64 *)(v21 + 24 * k);
            v25 = *v24;
            if ( *v24 )
            {
              v24[1] = 0;
              v35 = v22;
              qfree(v25, v3);
              v21 = *((_QWORD *)v8 + 3);
              v22 = v35;
            }
          }
        }
        *((_QWORD *)v8 + 4) = 0;
        qfree(v21, v3);
      }
      operator delete(v8, 0x80u);
      v5 = qword_8CAE00;
      v3 = (const char *)xmmword_8CAE08;
    }
    memmove(v9, v7, &v5[8 * (_QWORD)v3] - (_BYTE *)v9 - 8);
    *(_QWORD *)&xmmword_8CAE08 = xmmword_8CAE08 - 1;
    if ( !a3 )
      return v36 - __readfsqword(0x28u);
    v32 = (((char *)v9 - v6) >> 3) - ((int)(((char *)v9 - v6) >> 3) > 0);
  }
  return sub_1AF250(v32, 0);
}
