void __fastcall sub_E1EF90(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  unsigned int v5; // ebx
  unsigned int v6; // r12d
  __int64 v7; // rdx
  unsigned int *v8; // rcx
  __int64 v9; // rax
  int v10; // r13d
  unsigned __int64 v11; // r14
  __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi

  if ( a2 )
  {
    v3 = a1[14];
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 - 4);
      if ( v4 )
      {
        v5 = a2;
        if ( v4 <= a2 )
          v5 = *(_DWORD *)(v3 - 4);
        v6 = v4 - v5;
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 408LL))(a1, v5);
        v7 = a1[14];
        v8 = (unsigned int *)(v7 + 4LL * v6);
        v9 = a1[13];
        if ( v9 )
        {
          v10 = *v8;
          v11 = v9 + 8LL * *(unsigned int *)(v9 - 4);
          v12 = (__int64 *)(v9 + 8LL * *v8);
          if ( (unsigned __int64)v12 >= v11 )
            goto LABEL_14;
          do
          {
            while ( 1 )
            {
              v13 = *v12;
              if ( *v12 )
              {
                v14 = a1[12];
                if ( (*(_DWORD *)(v13 + 8))-- == 1 )
                  break;
              }
              if ( (unsigned __int64)++v12 >= v11 )
                goto LABEL_13;
            }
            sub_15D7BC0(v14, v13);
            ++v12;
          }
          while ( (unsigned __int64)v12 < v11 );
LABEL_13:
          v9 = a1[13];
          v7 = a1[14];
          if ( v9 )
LABEL_14:
            *(_DWORD *)(v9 - 4) = v10;
        }
        if ( v7 )
          *(_DWORD *)(v7 - 4) = v6;
      }
    }
  }
}

