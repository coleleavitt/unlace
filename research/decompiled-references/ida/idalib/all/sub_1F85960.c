void __fastcall sub_1F85960(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v6; // r12
  int v7; // edi
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  int v14; // edx
  __int64 *v15; // rbp
  __int64 *v16; // rax
  int v17; // edi
  __int64 *v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax

  v4 = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 > 256 )
  {
    v6 = a1 + 16;
    if ( !a3 )
    {
      v18 = a2;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v7 = *(_DWORD *)(a1 + 16);
      --a3;
      v8 = *((_DWORD *)a2 - 4);
      v9 = *(_DWORD *)a1;
      v10 = *(_QWORD *)(a1 + 8);
      v11 = a1 + 16 * (v4 >> 5);
      v12 = *(_DWORD *)v11;
      if ( v7 >= *(_DWORD *)v11 )
      {
        if ( v7 >= v8 )
        {
          if ( v12 >= v8 )
          {
LABEL_23:
            *(_DWORD *)a1 = v12;
            v26 = *(_QWORD *)(v11 + 8);
            *(_DWORD *)v11 = v9;
            v9 = *((_DWORD *)a2 - 4);
            *(_QWORD *)(a1 + 8) = v26;
            *(_QWORD *)(v11 + 8) = v10;
            goto LABEL_7;
          }
LABEL_16:
          v21 = *(a2 - 1);
          *(_DWORD *)a1 = v8;
          *((_DWORD *)a2 - 4) = v9;
          *(_QWORD *)(a1 + 8) = v21;
          *(a2 - 1) = v10;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v12 < v8 )
          goto LABEL_23;
        if ( v7 < v8 )
          goto LABEL_16;
      }
      v13 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v10;
      *(_DWORD *)a1 = v7;
      *(_QWORD *)(a1 + 8) = v13;
      *(_DWORD *)(a1 + 16) = v9;
      v9 = *((_DWORD *)a2 - 4);
LABEL_7:
      v14 = *(_DWORD *)a1;
      v15 = (__int64 *)v6;
      v16 = a2;
      while ( 1 )
      {
        v17 = *(_DWORD *)v15;
        v18 = v15;
        if ( *(_DWORD *)v15 < v14 )
          goto LABEL_13;
        v16 -= 2;
        if ( v9 > v14 )
        {
          do
            v16 -= 2;
          while ( *(_DWORD *)v16 > v14 );
        }
        if ( v16 <= v15 )
          break;
        v19 = v16[1];
        *(_DWORD *)v15 = *(_DWORD *)v16;
        v20 = v15[1];
        *(_DWORD *)v16 = v17;
        v15[1] = v19;
        v9 = *((_DWORD *)v16 - 4);
        v16[1] = v20;
        v14 = *(_DWORD *)a1;
LABEL_13:
        v15 += 2;
      }
      sub_1F85960(v15, a2, a3);
      v4 = (__int64)v15 - a1;
      if ( (__int64)v15 - a1 <= 256 )
        return;
      a2 = v15;
      if ( !a3 )
      {
LABEL_19:
        v22 = v4 >> 4;
        v23 = ((v4 >> 4) - 2) >> 1;
        sub_1F6AFA0(a1, v23, v4 >> 4, *(_QWORD *)(a1 + 16 * v23), *(_QWORD *)(a1 + 16 * v23 + 8));
        do
        {
          --v23;
          sub_1F6AFA0(a1, v23, v22, *(_QWORD *)(a1 + 16 * v23), *(_QWORD *)(a1 + 16 * v23 + 8));
        }
        while ( v23 );
        do
        {
          v18 -= 2;
          v24 = *v18;
          v25 = v18[1];
          *(_DWORD *)v18 = *(_DWORD *)a1;
          v18[1] = *(_QWORD *)(a1 + 8);
          sub_1F6AFA0(a1, 0, ((__int64)v18 - a1) >> 4, v24, v25);
        }
        while ( (__int64)v18 - a1 > 16 );
        return;
      }
    }
  }
}
