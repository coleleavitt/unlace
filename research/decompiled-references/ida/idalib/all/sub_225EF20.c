void __fastcall sub_225EF20(unsigned int *a1)
{
  unsigned int v2; // eax
  char *v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // rax
  volatile signed __int32 *v8; // rdi
  unsigned int *v9; // r13
  unsigned int *v10; // rbx
  unsigned int *v11; // rbx
  volatile signed __int32 *v12; // rbp
  unsigned int *v13; // rdi
  int v14; // eax
  _DWORD *v15; // rbp
  int v16; // eax

  *(_QWORD *)a1 = &off_2BEB860;
  v2 = a1[55];
  v3 = *((char **)a1 + 26);
  if ( v2 )
  {
    v4 = a1[54];
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 != (_QWORD *)-8LL && v7 )
        {
          operator delete(*(_QWORD *)&v3[v5], *v7 + 9LL, 8);
          v3 = *((char **)a1 + 26);
        }
        v5 += 8;
      }
      while ( v5 != v6 );
    }
  }
  free(v3);
  v8 = *((volatile signed __int32 **)a1 + 25);
  if ( v8 )
    sub_4343A0(v8);
  v9 = *((unsigned int **)a1 + 6);
  v10 = &v9[4 * a1[14]];
  if ( v9 != v10 )
  {
    if ( &_pthread_key_create )
    {
      v11 = v10 - 4;
      v12 = *((volatile signed __int32 **)v11 + 1);
      if ( v12 )
        goto LABEL_15;
LABEL_13:
      while ( v9 != v11 )
      {
        while ( 1 )
        {
          v11 -= 4;
          v12 = *((volatile signed __int32 **)v11 + 1);
          if ( !v12 )
            break;
LABEL_15:
          if ( _InterlockedSub(v12 + 2, 1u) )
            goto LABEL_13;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
          if ( _InterlockedSub(v12 + 3, 1u) )
            goto LABEL_13;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 24LL))(v12);
          if ( v9 == v11 )
            goto LABEL_18;
        }
      }
    }
    else
    {
      do
      {
        v10 -= 4;
        v15 = *((_DWORD **)v10 + 1);
        if ( v15 )
        {
          v16 = v15[2];
          v15[2] = v16 - 1;
          if ( v16 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 16LL))(v15);
            v14 = v15[3];
            v15[3] = v14 - 1;
            if ( v14 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 24LL))(v15);
          }
        }
      }
      while ( v9 != v10 );
    }
LABEL_18:
    v10 = *((unsigned int **)a1 + 6);
  }
  if ( v10 != a1 + 16 )
    free(v10);
  v13 = *((unsigned int **)a1 + 1);
  *(_QWORD *)a1 = &unk_2C75FE0;
  if ( v13 != a1 + 6 )
    operator delete(v13);
  operator delete(a1, 0xE8u);
}
