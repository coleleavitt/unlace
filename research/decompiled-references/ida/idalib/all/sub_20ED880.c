__int64 __fastcall sub_20ED880(int a1, _DWORD *a2)
{
  __int64 v2; // r12
  int *v3; // r13
  __int64 v4; // rax
  __int64 v5; // r12
  int *v6; // rax
  int *v7; // rdx
  int *v8; // rbp
  unsigned int v9; // edx
  int *v10; // r14
  __int64 v11; // rcx
  int v12; // r15d
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  int *v17; // [rsp+0h] [rbp-48h]
  int v18; // [rsp+0h] [rbp-48h]
  _DWORD *v19; // [rsp+8h] [rbp-40h]

  v2 = 1;
  v3 = (int *)((char *)&unk_26F1000 + 32 * dword_26F0E20[a1]);
  if ( (unsigned __int64)a1 <= 0x72 )
  {
    v4 = v3[1];
    if ( v3[1] )
    {
      v3 += 2;
      v2 = v4;
    }
  }
  v5 = (__int64)&v3[v2];
  v19 = a2 + 4;
  do
  {
    v6 = (int *)sub_20EAA90((unsigned int *)v3, v5);
    v8 = v7;
    if ( v6 != v3 )
    {
      v9 = a2[2];
      v10 = v3;
      do
      {
        while ( 1 )
        {
          v11 = v9;
          v12 = *v10;
          v13 = v9 + 1LL;
          if ( v13 > (unsigned int)a2[3] )
            break;
          ++v10;
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v11) = v12;
          v9 = a2[2] + 1;
          a2[2] = v9;
          if ( v6 == v10 )
            goto LABEL_10;
        }
        v17 = v6;
        ++v10;
        sub_2237220(a2, v19, v13, 4);
        *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)a2[2]) = v12;
        v9 = a2[2] + 1;
        v6 = v17;
        a2[2] = v9;
      }
      while ( v17 != v10 );
LABEL_10:
      v3 += ((unsigned __int64)((char *)(v6 - 1) - (char *)v3) >> 2) + 1;
    }
    if ( v6 != v8 )
    {
      v14 = sub_20ED540(v6, v8 - v6);
      v15 = (unsigned int)a2[2];
      if ( v15 + 1 > (unsigned __int64)(unsigned int)a2[3] )
      {
        v18 = v14;
        sub_2237220(a2, v19, v15 + 1, 4);
        v15 = (unsigned int)a2[2];
        v14 = v18;
      }
      v3 = v8;
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v15) = v14;
      ++a2[2];
    }
  }
  while ( v3 != (int *)v5 );
  return *(_QWORD *)a2;
}
