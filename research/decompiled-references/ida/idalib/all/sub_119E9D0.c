void __fastcall sub_119E9D0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rdx
  size_t v12; // rdx

  if ( a2 )
  {
    v6 = (4 * a2 / 3u + 1) | ((unsigned __int64)(4 * a2 / 3u + 1) >> 1);
    v7 = v6 >> 2;
    v8 = (((v6 >> 2) | v6) >> 4) | (v6 >> 2) | v6;
    v9 = ((((v8 >> 8) | v8) >> 16) | (v8 >> 8) | v8) + 1;
    *(_DWORD *)(a1 + 16) = v9;
    v10 = (char *)sub_22300B0(4 * v9, 4, v7, a4, a5, a6);
    v11 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v10;
    v12 = 4 * v11;
    if ( v10 != &v10[v12] )
      memset(v10, 255, v12);
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 0;
  }
}
