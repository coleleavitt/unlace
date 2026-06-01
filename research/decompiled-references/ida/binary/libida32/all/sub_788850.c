char *__fastcall sub_788850(__int64 a1, int a2, unsigned int *a3, __int64 a4, int a5, int a6)
{
  bool v6; // zf
  unsigned int v7; // ebx
  unsigned int v8; // r12d
  int v9; // eax
  unsigned int v11; // r14d
  unsigned int v12; // ebx
  int v13; // r12d
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // [rsp+0h] [rbp-38h] BYREF
  void *v20; // [rsp+8h] [rbp-30h]
  __int64 v21; // [rsp+10h] [rbp-28h]
  int v22; // [rsp+18h] [rbp-20h]
  int v23; // [rsp+20h] [rbp-18h]
  int v24; // [rsp+28h] [rbp-10h]
  __int64 v25; // [rsp+30h] [rbp-8h]

  v6 = *(_DWORD *)(a4 + 132) == 3;
  v20 = (void *)__readfsqword(0x28u);
  if ( v6 )
  {
    v11 = *a3;
    v12 = a3[1];
    v13 = *(_DWORD *)(a4 + 136);
    if ( *a3 < v12 )
    {
      do
      {
        v14 = sub_8930A0(v11);
        v18 = v11++;
        if ( v13 == BYTE2(v14) )
          rangeset_t_add(a2, (int)&v19, v18, v15, v16, v17, v18, v20, v21, v22, v23, v24, v25);
      }
      while ( v12 != v11 );
    }
  }
  else
  {
    v7 = *a3;
    v8 = a3[1];
    if ( *a3 < v8 )
    {
      do
      {
        v9 = v7++;
        rangeset_t_add(a2, (int)&v19, (int)a3, a4, a5, a6, v9, v20, v21, v22, v23, v24, v25);
      }
      while ( v7 < v8 );
    }
  }
  return (char *)v20 - __readfsqword(0x28u);
}

