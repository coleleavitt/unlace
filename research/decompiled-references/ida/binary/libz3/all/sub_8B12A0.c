char __fastcall sub_8B12A0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int *v10; // rdx
  int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // r10
  _DWORD *v16; // rcx
  __int64 v17; // r9
  _DWORD *v18; // r8
  unsigned int v20[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = a2;
  v3 = 232LL * a2;
  v6 = v3 + *(_QWORD *)(a1 + 1592);
  LOBYTE(v7) = *(_BYTE *)(v6 + 3);
  if ( (v7 & 0x40) == 0 )
  {
LABEL_2:
    if ( (v7 & 0x80u) == 0LL )
      return v7;
    LOBYTE(v7) = sub_8AEDF0(a1 + 736, v6 + 136, v6 + 8);
    if ( !(_BYTE)v7 )
      return v7;
    goto LABEL_5;
  }
  if ( !sub_8AEDF0(a1 + 736, v6 + 8, v6 + 72) )
  {
    v6 = v3 + *(_QWORD *)(a1 + 1592);
    LOBYTE(v7) = *(_BYTE *)(v6 + 3);
    goto LABEL_2;
  }
LABEL_5:
  v8 = *(_QWORD *)(a1 + 1584);
  v9 = *(_QWORD *)(a1 + 1576);
  v20[0] = a2;
  v10 = (int *)(v8 + 4 * v2);
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 - 4);
    *v10 = v11;
    LOBYTE(v7) = (unsigned __int8)sub_893BD0((unsigned int **)(a1 + 1576), v20);
    v12 = *(_QWORD *)(a1 + 1576);
    v13 = (unsigned int)v11;
    v14 = v11 >> 1;
    v15 = *(_QWORD *)(a1 + 1584);
    v16 = (_DWORD *)(v12 + 4LL * (unsigned int)v11);
    v17 = (unsigned int)*v16;
    if ( v11 >> 1 )
    {
      while ( 1 )
      {
        v16 = (_DWORD *)(v12 + 4 * v13);
        v18 = (_DWORD *)(v12 + 4LL * (unsigned int)v14);
        v7 = (unsigned int)*v18;
        if ( (unsigned int)v17 >= (unsigned int)v7 )
          break;
        *v16 = v7;
        *(_DWORD *)(v15 + 4 * v7) = v11;
        v11 = v14;
        v14 >>= 1;
        if ( !v14 )
        {
          *v18 = v17;
          *(_DWORD *)(v15 + 4 * v17) = 1;
          return v7;
        }
        v13 = (unsigned int)v11;
      }
    }
  }
  else
  {
    *v10 = 0;
    v11 = 0;
    LOBYTE(v7) = (unsigned __int8)sub_893BD0((unsigned int **)(a1 + 1576), v20);
    v16 = *(_DWORD **)(a1 + 1576);
    v15 = *(_QWORD *)(a1 + 1584);
    v17 = (unsigned int)*v16;
  }
  *v16 = v17;
  *(_DWORD *)(v15 + 4 * v17) = v11;
  return v7;
}

