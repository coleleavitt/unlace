__int64 __fastcall sub_8D0D00(__int64 **a1, int a2)
{
  __int64 v3; // rbp
  unsigned int v4; // r14d
  __int64 *v5; // rdx
  int v6; // r12d
  unsigned int *v7; // rbx
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // eax
  void *v14; // rdi
  bool v15; // al
  __int64 v17; // [rsp+10h] [rbp-58h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  unsigned int v19; // [rsp+2Ch] [rbp-3Ch]

  v3 = (unsigned int)a2;
  v4 = a2;
  v5 = a1[1];
  v6 = a2 >> 1;
  v7 = (unsigned int *)v5 + (unsigned int)a2;
  v19 = *v7;
  v18 = *v7;
  if ( a2 >> 1 )
  {
    v17 = 40LL * v19;
    while ( 1 )
    {
      v10 = **a1;
      v11 = v10 + 40LL * *((unsigned int *)v5 + (unsigned int)v6);
      v12 = v10 + v17;
      if ( (*(_BYTE *)(v10 + v17 + 20) & 1) != 0
        || *(_DWORD *)(v12 + 16) != 1
        || (*(_BYTE *)(v11 + 20) & 1) != 0
        || *(_DWORD *)(v11 + 16) != 1 )
      {
        LOBYTE(v13) = sub_1848D40(qword_1C7F2C0, v10 + v17, v11);
      }
      else if ( (*(_BYTE *)(v12 + 4) & 1) != 0 || (*(_BYTE *)(v11 + 4) & 1) != 0 )
      {
        v13 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v10 + v17, v11) >> 31;
      }
      else
      {
        LOBYTE(v13) = *(_DWORD *)v12 < *(_DWORD *)v11;
      }
      if ( !(_BYTE)v13 )
      {
        v14 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v12 + 4) & 1) != 0 || (*(_BYTE *)(v11 + 4) & 1) != 0 )
        {
          v14 = qword_1C7F2C0;
          if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v12, v11) )
            goto LABEL_16;
        }
        else if ( *(_DWORD *)v12 != *(_DWORD *)v11 )
        {
          goto LABEL_16;
        }
        if ( (*(_BYTE *)(v12 + 20) & 1) != 0 || (*(_BYTE *)(v11 + 20) & 1) != 0 )
          v15 = (unsigned int)sub_182C7B0(v14, v12 + 16, v11 + 16) == 0;
        else
          v15 = *(_DWORD *)(v12 + 16) == *(_DWORD *)(v11 + 16);
        if ( !v15 || *(_DWORD *)(v12 + 32) >= *(_DWORD *)(v11 + 32) )
        {
LABEL_16:
          v8 = a1[2];
          v7 = (unsigned int *)a1[1] + v3;
          goto LABEL_17;
        }
      }
      v5 = a1[1];
      v8 = a1[2];
      v7 = (unsigned int *)v5 + (unsigned int)v6;
      v9 = *v7;
      *((_DWORD *)v5 + v3) = v9;
      *((_DWORD *)v8 + v9) = v4;
      v4 = v6;
      if ( !(v6 >> 1) )
        break;
      v6 >>= 1;
      v3 = v4;
    }
    v4 = 1;
  }
  else
  {
    v8 = a1[2];
  }
LABEL_17:
  *v7 = v19;
  *((_DWORD *)v8 + v18) = v4;
  return v18;
}

