__int64 __fastcall sub_2227F30(_DWORD *a1, unsigned int a2)
{
  unsigned int v4; // eax
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  _QWORD *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  char v17; // di
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  int v28; // ecx
  __int64 result; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 i; // rax

  v4 = a1[2];
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  if ( !v4 )
  {
LABEL_18:
    v10 = v5;
    v31 = 16;
    LODWORD(v7) = 1;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(v5 + 8) <= v6 )
  {
    if ( a2 > v4 - 1 )
    {
      v11 = a2 + 1;
      v12 = v4;
      if ( v11 != v4 )
      {
        if ( v11 < v4 )
        {
          a1[2] = v11;
          v6 = *(_DWORD *)(v5 + 12);
        }
        else
        {
          v13 = v11 - v4;
          if ( v11 > (unsigned int)a1[3] )
          {
            sub_2237220(a1, a1 + 4, v11, 16);
            v5 = *(_QWORD *)a1;
            v12 = (unsigned int)a1[2];
          }
          v14 = (_QWORD *)(v5 + 16 * v12);
          if ( v13 )
          {
            v15 = v13;
            do
            {
              *v14 = 0;
              v14 += 2;
              *((_DWORD *)v14 - 2) = 0;
              *((_DWORD *)v14 - 1) = 0;
              --v15;
            }
            while ( v15 );
            LODWORD(v12) = a1[2];
            v5 = *(_QWORD *)a1;
          }
          a1[2] = v13 + v12;
          v6 = *(_DWORD *)(v5 + 12);
        }
      }
    }
    goto LABEL_18;
  }
  v7 = a2 - 1;
  v8 = v5 + 16 * v7;
  v9 = *(_DWORD *)(v8 + 12);
  if ( v9 )
  {
    v30 = (unsigned int)(v9 - 1);
    *(_DWORD *)(v8 + 12) = v30;
    v31 = 16LL * a2;
    i = *(_QWORD *)(*(_QWORD *)v8 + 8 * v30);
    goto LABEL_23;
  }
  while ( 1 )
  {
    v10 = v5 + 16LL * (unsigned int)(v7 - 1);
    v6 = *(_DWORD *)(v10 + 12);
    if ( v6 )
      break;
    LODWORD(v7) = v7 - 1;
  }
  v31 = 16LL * (unsigned int)v7;
LABEL_19:
  v16 = v6 - 1;
  *(_DWORD *)(v10 + 12) = v16;
  i = *(_QWORD *)(*(_QWORD *)v10 + 8 * v16);
  if ( a2 != (_DWORD)v7 )
  {
    v17 = i;
    v18 = (unsigned int)v7;
    v19 = i & 0xFFFFFFFFFFFFFFC0LL;
    v20 = v7 + 1;
    v21 = v17 & 0x3F;
    v22 = 16 * v18 + v5;
    *(_QWORD *)v22 = v19;
    *(_DWORD *)(v22 + 8) = v21 + 1;
    *(_DWORD *)(v22 + 12) = v21;
    for ( i = *(_QWORD *)(v19 + 8 * v21); a2 != v20; i = *(_QWORD *)(v24 + 8 * v23) )
    {
      v23 = i & 0x3F;
      v24 = i & 0xFFFFFFFFFFFFFFC0LL;
      v25 = v20++;
      v26 = *(_QWORD *)a1 + 16 * v25;
      *(_QWORD *)v26 = v24;
      *(_DWORD *)(v26 + 8) = v23 + 1;
      *(_DWORD *)(v26 + 12) = v23;
    }
    v5 = *(_QWORD *)a1;
    v31 = 16LL * a2;
  }
LABEL_23:
  v27 = v31 + v5;
  v28 = i & 0x3F;
  *(_QWORD *)v27 = i & 0xFFFFFFFFFFFFFFC0LL;
  result = (unsigned int)(v28 + 1);
  *(_DWORD *)(v27 + 12) = v28;
  *(_DWORD *)(v27 + 8) = result;
  return result;
}
