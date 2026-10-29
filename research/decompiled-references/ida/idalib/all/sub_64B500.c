__int64 __fastcall sub_64B500(__int64 a1, FILE *a2, char a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  const char *v7; // rdi
  unsigned int i; // r12d
  int *v9; // rax
  __int64 v10; // rdx
  int *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v17)(FILE *, __int64, __int64); // rax
  __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // r15
  unsigned int v21; // ecx
  int *v22; // rax
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // [rsp+0h] [rbp-48h]
  unsigned int v27; // [rsp+4h] [rbp-44h]

  v4 = (unsigned int)a2;
  if ( *(_DWORD *)(a1 + 52) != 0x7FFFFFFF && a1 )
    sub_64B390(a1);
  v6 = *(_DWORD *)(a1 + 8);
  if ( (v6 & 2) != 0 )
  {
    if ( (unsigned int)fwritebytes(a2) )
      return 0;
    if ( (unsigned __int8)sub_6478C0(a1) )
    {
      v19 = *(_DWORD *)(a1 + 48);
      if ( v19 )
      {
        v26 = 0;
        v20 = *(_QWORD *)(a1 + 40);
        v21 = 0;
        while ( 1 )
        {
          v22 = (int *)(v20 + 4LL * v21);
          if ( *v22 != -1 )
          {
            v23 = v21;
            v24 = *v22;
            while ( v24 < 0 )
            {
              v25 = v24 & 0x7FFFFFFF;
              v23 = v25;
              if ( v25 >= v19 )
              {
                if ( !under_debugger )
                  interr(128);
LABEL_45:
                BUG();
              }
              v24 = *(_DWORD *)(v20 + 4LL * v25);
              if ( v24 == -1 )
                goto LABEL_38;
            }
            if ( v21 != v23 && ((unsigned int)fwritebytes(a2) || (unsigned int)fwritebytes(a2)) )
              return 0;
          }
LABEL_38:
          v21 = v26 + 1;
          v26 = v21;
          if ( v21 >= v19 )
          {
            if ( !(unsigned int)fwritebytes(a2) )
              break;
            return 0;
          }
        }
      }
    }
    v6 = *(_DWORD *)(a1 + 8);
  }
  if ( (v6 & 1) != 0 )
  {
    v7 = *(const char **)(a1 + 32);
    for ( i = 0; i < *(_DWORD *)(a1 + 12); v7 = (const char *)sub_647640(v7) )
    {
      if ( *(_DWORD *)v7 != 2147483646 )
        *(_DWORD *)v7 |= 0x7FFFFFFFu;
      ++i;
    }
    qfree(*(void **)(a1 + 24));
    v9 = *(int **)(a1 + 40);
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v9 )
    {
      v10 = *(unsigned int *)(a1 + 48);
      if ( (_DWORD)v10 )
      {
        v11 = &v9[v10];
        do
        {
          if ( *v9 >= 0 )
            *v9 = -1;
          ++v9;
        }
        while ( v11 != v9 );
      }
    }
  }
  if ( *(_DWORD *)(a1 + 52) != 0x7FFFFFFF )
  {
    if ( !under_debugger )
      interr(129);
    goto LABEL_45;
  }
  v27 = *(_DWORD *)(a1 + 20);
  if ( (unsigned int)fwritebytes(a2) || (unsigned int)fwritebytes(a2) )
  {
    v4 = 0;
  }
  else
  {
    v17 = sub_647770;
    if ( !a3 )
      v17 = (__int64 (__fastcall *)(FILE *, __int64, __int64))qfwrite;
    v18 = v17(a2, *(_QWORD *)(a1 + 32), v27);
    v12 = v27;
    LOBYTE(v4) = v27 == v18;
  }
  sub_64B100(a1, 0, v12, v13, v14, v15);
  return v4;
}
