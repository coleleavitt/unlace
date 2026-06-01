__int64 __fastcall sub_55C7B0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r8d
  int v4; // esi
  __int64 *v5; // r10
  __int64 *v6; // rax
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // r9d
  __int64 v10; // rax
  __int64 *v11; // r10
  __int64 v12; // rax
  bool v14; // zf
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rax

  v3 = a2;
  if ( (_DWORD)a2 != *(_DWORD *)(a1 + 56) )
  {
    *(_BYTE *)(a1 + 188) = 0;
    *(_DWORD *)(a1 + 184) = 0;
  }
  v4 = *(_DWORD *)(a1 + 160);
  v5 = *(__int64 **)(a1 + 96);
  *(_QWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 64) = a3;
  if ( v4 )
  {
    v6 = v5;
    v7 = 0;
    while ( 1 )
    {
      v8 = *((_DWORD *)v6 + 5);
      if ( v3 < v8 )
      {
        v9 = *((_DWORD *)v6 + 4);
        if ( v9 < v8 )
          break;
      }
      ++v7;
      v6 += 3;
      if ( v4 == v7 )
      {
        v10 = 3LL * (unsigned int)(v4 - 1);
        goto LABEL_9;
      }
    }
    if ( v9 >= v3 )
    {
      v17 = *v6;
      *(_DWORD *)(a1 + 56) = v9;
      *(_QWORD *)(a1 + 60) = v17;
    }
    v14 = *(_QWORD *)(a1 + 104) == 0;
    *(_DWORD *)(a1 + 164) = v7;
    if ( !v14 )
    {
      v15 = *(_DWORD *)(a1 + 56);
      v16 = *(_DWORD *)(a1 + 168);
      if ( v15 < v16 || v15 >= *(_DWORD *)(a1 + 172) + v16 )
      {
        *(_QWORD *)(a1 + 104) = 0;
        *(_QWORD *)(a1 + 168) = 0;
      }
    }
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 176) = 0;
    return 0;
  }
  else
  {
    v10 = 0x2FFFFFFFDLL;
LABEL_9:
    v11 = &v5[v10];
    *(_DWORD *)(a1 + 164) = v4;
    *(_DWORD *)(a1 + 56) = *((_DWORD *)v11 + 5);
    v12 = v11[1];
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 60) = v12;
    *(_QWORD *)(a1 + 168) = 0;
    *(_DWORD *)(a1 + 176) = 1;
    *(_DWORD *)a1 = 0;
    return 1;
  }
}
