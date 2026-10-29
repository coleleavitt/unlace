__int64 __fastcall sub_56BB40(__int64 a1, _QWORD **a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // r13
  unsigned int *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 i; // rsi
  __int64 v10; // rcx
  __int64 v11; // r10
  unsigned int *v12; // rcx
  unsigned int v13; // r13d
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // r9
  _QWORD *v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v25[56]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a2;
  sub_644D80(v25, "contains_fact", 2);
  v4 = *(_QWORD *)(a1 + 152);
  v5 = *a2;
  if ( v4 == 0xFFFFFFFFLL )
  {
    v21 = *(_QWORD *)(a1 + 80);
    v22 = *(unsigned int *)(a1 + 72);
    *(_QWORD *)(a1 + 152) = v21;
    sub_5716E0(a1 + 72, v21 + v22);
    v4 = *(_QWORD *)(a1 + 152);
  }
  v6 = *(unsigned int **)(a1 + 40);
  if ( v6 )
  {
    v7 = *(v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(v8 + v4 + *v6) = (*v5 << v6[1]) | *(_QWORD *)(v8 + v4 + *v6) & *((_QWORD *)v6 + 2);
      if ( (_DWORD)v7 != 1 )
      {
        for ( i = 1; i != v7; ++i )
        {
          v10 = i;
          v11 = v5[i];
          v12 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 32 * v10);
          *(_QWORD *)(v8 + v4 + *v12) = (v11 << v12[1]) | *((_QWORD *)v12 + 2) & *(_QWORD *)(v8 + v4 + *v12);
        }
      }
      v4 = *(_QWORD *)(a1 + 152);
    }
  }
  v13 = *(_DWORD *)(a1 + 24);
  if ( v13 )
  {
    v24 = v4;
    v15 = sub_570B70(a1 + 96, &v24);
    if ( v15 )
    {
      v16 = *(_QWORD *)(a1 + 16);
      if ( !v16 || (v17 = *(_DWORD *)(v16 - 4), v13 >= v17) )
      {
LABEL_19:
        LODWORD(v3) = 1;
        goto LABEL_11;
      }
      v18 = *(_QWORD *)(a1 + 40);
      v19 = (_QWORD *)(*v3 + 8LL * v13);
      v20 = (unsigned int *)(v18 + 32LL * v13);
      while ( *v19 == (*((_QWORD *)v20 + 1) & (*(_QWORD *)(*(_QWORD *)(v15 + 8) + *(_QWORD *)(a1 + 88) + *v20) >> v20[1])) )
      {
        v20 += 8;
        ++v19;
        if ( (unsigned int *)(v18 + 32 * (v13 + (unsigned __int64)(v17 - v13 - 1)) + 32) == v20 )
          goto LABEL_19;
      }
    }
    LODWORD(v3) = 0;
  }
  else
  {
    v23 = v4;
    LOBYTE(v3) = sub_570B70(a1 + 96, &v23) != 0;
  }
LABEL_11:
  sub_644EE0(v25);
  return (unsigned int)v3;
}

