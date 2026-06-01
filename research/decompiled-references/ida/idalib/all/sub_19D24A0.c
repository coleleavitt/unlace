__int64 __fastcall sub_19D24A0(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  int v3; // ebp
  __int64 v5; // r14
  int v7; // ebp
  int v8; // eax
  size_t v9; // r15
  const void *v10; // rcx
  unsigned int v11; // r13d
  int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // rbx
  const void *v15; // rsi
  unsigned int v16; // r13d
  int v17; // edx
  unsigned int v18; // r13d
  int v19; // eax
  const void *v20; // [rsp+8h] [rbp-50h]
  int v21; // [rsp+14h] [rbp-44h]
  __int64 v22; // [rsp+18h] [rbp-40h]

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a1;
    v7 = v3 - 1;
    v8 = sub_2248890(*a2, a2[1]);
    v9 = a2[1];
    v10 = (const void *)*a2;
    v11 = v7 & v8;
    if ( v9 )
    {
      v12 = 1;
      v13 = 0;
      while ( 1 )
      {
        v14 = v5 + 24LL * v11;
        v15 = *(const void **)v14;
        if ( *(_QWORD *)v14 == -1 )
          break;
        if ( v15 == (const void *)-2LL )
        {
          if ( v10 == (const void *)-2LL )
            goto LABEL_10;
          if ( !v13 )
            v13 = v5 + 24LL * v11;
        }
        else if ( v9 == *(_QWORD *)(v14 + 8) )
        {
          v22 = v13;
          v21 = v12;
          v20 = v10;
          v19 = memcmp(v10, v15, v9);
          v10 = v20;
          v12 = v21;
          v13 = v22;
          if ( !v19 )
            goto LABEL_10;
        }
        v16 = v12 + v11;
        ++v12;
        v11 = v7 & v16;
      }
    }
    else
    {
      v17 = 1;
      v13 = 0;
      while ( 1 )
      {
        v14 = v5 + 24LL * v11;
        if ( *(_QWORD *)v14 == -1 )
          break;
        if ( *(_QWORD *)v14 == -2 )
        {
          if ( v10 == (const void *)-2LL )
            goto LABEL_10;
          if ( !v13 )
            v13 = v5 + 24LL * v11;
        }
        else if ( !*(_QWORD *)(v14 + 8) )
        {
          goto LABEL_10;
        }
        v18 = v17 + v11;
        ++v17;
        v11 = v7 & v18;
      }
    }
    if ( v10 == (const void *)-1LL )
    {
LABEL_10:
      *a3 = v14;
      return 1;
    }
    else
    {
      if ( !v13 )
        v13 = v14;
      *a3 = v13;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
