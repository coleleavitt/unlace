__int64 __fastcall sub_BFDDE0(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  __int32 v7; // ebx
  unsigned int v8; // eax
  _DWORD *v9; // rsi
  __int64 v10; // rax
  _DWORD *v11; // rdi
  _DWORD *i; // rax
  unsigned int v13; // edx
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int32 v16; // ebx
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  _DWORD *v19; // rsi
  __int64 v20; // rdx
  _DWORD *v21; // rdi
  _DWORD *j; // rax
  unsigned int v23; // edx
  unsigned int v25[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v5 = *(unsigned int *)(a1 + 4272);
  v6 = *(_DWORD **)(a1 + 4264);
  v7 = 2 * *(_DWORD *)(a2 + 32);
  v8 = v5 - 1;
  v5 *= 16;
  v9 = (_DWORD *)((char *)v6 + v5);
  v10 = 16LL * (v7 & v8);
  v11 = &v6[(unsigned __int64)v10 / 4];
  if ( v10 != v5 )
  {
    for ( i = &v6[(unsigned __int64)v10 / 4]; v9 != i; i += 4 )
    {
      v13 = i[1];
      if ( v13 == 2 )
      {
        if ( v7 == *i && v7 == i[2] )
        {
LABEL_8:
          v13 = i[3];
          goto LABEL_9;
        }
      }
      else if ( !v13 )
      {
        goto LABEL_9;
      }
    }
  }
  for ( ; v11 != v6; v6 += 4 )
  {
    v13 = v6[1];
    if ( v13 == 2 )
    {
      if ( v7 == *v6 && v7 == v6[2] )
      {
        i = v6;
        goto LABEL_8;
      }
    }
    else if ( !v13 )
    {
      goto LABEL_9;
    }
  }
  v13 = 0;
LABEL_9:
  v25[0] = v13;
  v14 = sub_BFD6D0(a1, v25, *(_QWORD *)(a2 + 40), a2, (int)a2 + 16, a3);
  sub_BF9320(a1, v7, v25[0]);
  if ( !(_BYTE)v14 )
  {
    v15 = *(unsigned int *)(a1 + 4272);
    v16 = v7 + 1;
    v17 = *(_DWORD **)(a1 + 4264);
    v18 = v15 - 1;
    v15 *= 16;
    v19 = (_DWORD *)((char *)v17 + v15);
    v20 = 16LL * (v16 & v18);
    v21 = &v17[(unsigned __int64)v20 / 4];
    if ( v20 != v15 )
    {
      for ( j = &v17[(unsigned __int64)v20 / 4]; v19 != j; j += 4 )
      {
        v23 = j[1];
        if ( v23 == 2 )
        {
          if ( v16 == *j && v16 == j[2] )
          {
LABEL_17:
            v23 = j[3];
            goto LABEL_18;
          }
        }
        else if ( !v23 )
        {
          goto LABEL_18;
        }
      }
    }
    for ( ; v21 != v17; v17 += 4 )
    {
      v23 = v17[1];
      if ( v23 == 2 )
      {
        if ( v16 == *v17 && v16 == v17[2] )
        {
          j = v17;
          goto LABEL_17;
        }
      }
      else if ( !v23 )
      {
        goto LABEL_18;
      }
    }
    v23 = 0;
LABEL_18:
    v25[0] = v23;
    v14 = sub_BFD6D0(a1, v25, *(_QWORD *)(a2 + 40), a2 + 16, a2, a3);
    sub_BF9320(a1, v16, v25[0]);
  }
  return v14;
}

