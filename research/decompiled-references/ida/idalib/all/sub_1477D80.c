void __fastcall sub_1477D80(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 *v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  __int64 *v16; // rbp
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 *v19; // r12
  __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rcx
  double v23[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 128 )
  {
    v6 = a1 + 1;
    if ( !a3 )
    {
      v19 = a2;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v7 = a1[1];
      v8 = *(a2 - 1);
      --a3;
      v9 = &a1[v4 >> 4];
      v10 = *a1;
      v11 = *(_DWORD *)(v7 + 24);
      v12 = *(_DWORD *)(v8 + 24);
      v13 = *(_DWORD *)(*v9 + 24);
      if ( v11 >= v13 )
      {
        if ( v11 >= v12 )
        {
          if ( v13 >= v12 )
          {
LABEL_23:
            *a1 = *v9;
            *v9 = v10;
            v10 = *(a2 - 1);
            v7 = *a1;
            goto LABEL_7;
          }
LABEL_16:
          *a1 = v8;
          *(a2 - 1) = v10;
          v7 = *a1;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v13 < v12 )
          goto LABEL_23;
        if ( v11 < v12 )
          goto LABEL_16;
      }
      *(_QWORD *)&v23[0] = *a1;
      *(__m128 *)a1 = _mm_loadh_ps(v23);
      v10 = *(a2 - 1);
LABEL_7:
      v14 = *(_DWORD *)(v10 + 24);
      v15 = *(_DWORD *)(v7 + 24);
      v16 = v6;
      v17 = a2;
      while ( 1 )
      {
        v18 = *v16;
        v19 = v16;
        if ( *(_DWORD *)(*v16 + 24) < v15 )
          goto LABEL_13;
        --v17;
        if ( v15 < v14 )
        {
          do
            v10 = *--v17;
          while ( *(_DWORD *)(*v17 + 24) > v15 );
        }
        if ( v16 >= v17 )
          break;
        *v16 = v10;
        v10 = *(v17 - 1);
        *v17 = v18;
        v14 = *(_DWORD *)(v10 + 24);
        v15 = *(_DWORD *)(*a1 + 24);
LABEL_13:
        ++v16;
      }
      sub_1477D80(v16, a2, a3);
      v4 = (char *)v16 - (char *)a1;
      if ( (char *)v16 - (char *)a1 <= 128 )
        return;
      a2 = v16;
      if ( !a3 )
      {
LABEL_19:
        v20 = v4 >> 3;
        v21 = ((v4 >> 3) - 2) >> 1;
        sub_1477B80((__int64)a1, v21, v4 >> 3, a1[v21]);
        do
        {
          --v21;
          sub_1477B80((__int64)a1, v21, v20, a1[v21]);
        }
        while ( v21 );
        do
        {
          v22 = *--v19;
          *v19 = *a1;
          sub_1477B80((__int64)a1, 0, v19 - a1, v22);
        }
        while ( (char *)v19 - (char *)a1 > 8 );
        return;
      }
    }
  }
}
