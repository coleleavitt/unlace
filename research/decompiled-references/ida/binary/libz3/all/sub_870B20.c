__int64 __fastcall sub_870B20(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r14
  char *v4; // rax
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // r13d
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r15d
  unsigned int *v16; // rax
  unsigned int *v17; // rbp
  unsigned int *v18; // r15
  unsigned int v19; // edx
  __int64 v22; // rax

  v2 = sub_7E4F00((__int64)a1, a2);
  v3 = (_QWORD *)v2;
  if ( *(int *)(v2 + 88) >> 8 == -1 )
  {
LABEL_26:
    v6 = 0x7FFFFFFF8LL;
    v5 = -1;
  }
  else
  {
    v4 = (char *)(v2 + 88);
    while ( *((_DWORD *)a1 + 3) != *v4 )
    {
      v4 = *((char **)v4 + 1);
      if ( !v4 )
        goto LABEL_26;
    }
    v5 = *(int *)v4 >> 8;
    v6 = 8LL * v5;
  }
  v7 = *(_QWORD *)(a1[75] + v6);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  v8 = a2[6];
  v9 = v8 - 1;
  if ( v8 )
  {
    do
    {
      v10 = *(_QWORD *)(a1[10] + 1720LL);
      if ( v10 )
      {
        v11 = **(unsigned int **)(*v3 + 8LL * v9 + 32);
        if ( (unsigned int)v11 >= *(_DWORD *)(v10 - 4) )
          v10 = 0;
        else
          v10 = *(_QWORD *)(v10 + 8 * v11);
      }
      v12 = *((unsigned int *)a1 + 3);
      v13 = (char *)(v10 + 88);
      v14 = (unsigned int)(*(int *)(v10 + 88) >> 8);
      if ( (_DWORD)v14 == -1 )
        goto LABEL_23;
      while ( 1 )
      {
        v14 = (unsigned int)*v13;
        if ( (_DWORD)v12 == (_DWORD)v14 )
          break;
        v13 = *((char **)v13 + 1);
        if ( !v13 )
          goto LABEL_23;
      }
      v14 = (unsigned int)(*(int *)v13 >> 8);
      v15 = v14;
      if ( (_DWORD)v14 == -1 )
      {
LABEL_23:
        v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 528LL))(a1, v10, v14, v12);
        v22 = sub_15D1F10(*(_QWORD *)v10);
        if ( (unsigned __int8)sub_1673B10(a1 + 16, v22) )
          sub_86BD80(a1, v15);
      }
      v16 = *(unsigned int **)(a1[75] + 8LL * v15);
      if ( v16 )
      {
        v17 = &v16[*(v16 - 1)];
        if ( v17 != v16 )
        {
          v18 = *(unsigned int **)(a1[75] + 8LL * v15);
          do
          {
            v19 = *v18++;
            sub_86FA40((__int64)a1, v5, v19);
          }
          while ( v17 != v18 );
        }
      }
    }
    while ( v9-- != 0 );
  }
  return sub_813420(a1, v5);
}

