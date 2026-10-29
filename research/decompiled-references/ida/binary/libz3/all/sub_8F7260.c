char __fastcall sub_8F7260(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned int v6; // esi
  unsigned int **v7; // rbx
  unsigned int **i; // rbp
  unsigned int *v9; // r15
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // edi
  __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  __int64 v18; // rsi
  int v20[2]; // [rsp+0h] [rbp-48h]
  unsigned int v21; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8904);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 - 4);
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( *(_DWORD *)(a1 + 9464) < v5 )
        v6 = *(_DWORD *)(a1 + 9464);
      if ( v6 >= a2 )
      {
        v21 = a2;
        *(_QWORD *)v20 = 8LL * a2;
        while ( 1 )
        {
          v7 = *(unsigned int ***)(v4 + *(_QWORD *)v20);
          if ( v7 )
          {
            for ( i = &v7[*((unsigned int *)v7 - 1)]; i != v7; ++v7 )
            {
              v9 = *v7;
              v10 = **v7;
              v11 = (__int64)&(*v7)[v10];
              if ( (_DWORD)v10 )
              {
                do
                {
                  while ( 1 )
                  {
                    v12 = v9[2] >> 1;
                    if ( a2 < (*(_DWORD *)(*(_QWORD *)(a1 + 8872) + 16 * v12 + 12) & 0x7FFFFFu) )
                      break;
                    if ( (unsigned int *)v11 == ++v9 )
                      goto LABEL_14;
                  }
                  ++v9;
                  sub_8F6840(a1, *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8 * v12), a2);
                }
                while ( (unsigned int *)v11 != v9 );
              }
LABEL_14:
              ;
            }
          }
          ++v21;
          *(_QWORD *)v20 += 8LL;
          if ( v6 < v21 )
            break;
          v4 = *(_QWORD *)(a1 + 8904);
        }
      }
    }
  }
  v13 = *(_QWORD *)(a1 + 8912);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 - 4);
    if ( v14 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(a1 + 9480) + 20LL * a2 + 16);
      if ( v15 < v14 )
      {
        v16 = 24LL * v15;
        v17 = 24 * (v15 + (unsigned __int64)(v14 - 1 - v15) + 1);
        while ( 1 )
        {
          v18 = *(_QWORD *)(v13 + v16);
          v16 += 24;
          LOBYTE(v13) = sub_8F6840(a1, v18, a2);
          if ( v17 == v16 )
            break;
          v13 = *(_QWORD *)(a1 + 8912);
        }
      }
    }
  }
  return v13;
}

