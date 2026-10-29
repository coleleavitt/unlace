/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_604C0
// Address: 0x000604C0

//----- (000604C0) --------------------------------------------------------
void __cdecl __noreturn sub_604C0(_DWORD *a1, int a2, int a3, signed int a4)
{
  signed int v4; // edi
  int v5; // ecx
  int v6; // edx
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8
  __int64 v9; // xmm0_8
  _DWORD *v10; // esi
  void *v11; // eax
  void *v12; // eax
  char *v13; // eax
  int v14; // esi
  unsigned int i; // edi
  int v16; // eax
  bool v17; // zf
  _DWORD v18[3]; // [esp+10h] [ebp-4Ch] BYREF
  unsigned int v19; // [esp+1Ch] [ebp-40h]
  int v20[6]; // [esp+20h] [ebp-3Ch] BYREF
  __int64 v21; // [esp+38h] [ebp-24h]
  __int64 v22; // [esp+40h] [ebp-1Ch]
  int v23; // [esp+48h] [ebp-14h]

  v4 = a4;
  LOBYTE(v20[0]) = 2;
  memset(&v20[2], 0, 12);
  v20[1] = a4;
  memset(v18, 0, sizeof(v18));
  sub_5E070((int)v18, a4);
  if ( a4 > 0 )
  {
    v5 = 0;
    v6 = v18[0];
    do
    {
      v23 = *(_DWORD *)(v6 + v5 + 16);
      v7 = *(_QWORD *)(v6 + v5);
      v22 = *(_QWORD *)(v6 + v5 + 8);
      v21 = v7;
      *(_DWORD *)(v6 + v5 + 16) = *(_DWORD *)(a3 + v5 + 16);
      v8 = *(_QWORD *)(a3 + v5);
      *(_QWORD *)(v6 + v5 + 8) = *(_QWORD *)(a3 + v5 + 8);
      *(_QWORD *)(v6 + v5) = v8;
      *(_DWORD *)(a3 + v5 + 16) = v23;
      v9 = v21;
      *(_QWORD *)(a3 + v5 + 8) = v22;
      *(_QWORD *)(a3 + v5) = v9;
      v5 += 20;
      --v4;
    }
    while ( v4 );
  }
  v10 = a1;
  v11 = (void *)a1[6];
  if ( v11 )
  {
    a1[7] = 0;
    qfree(v11);
    a1[6] = 0;
    a1[8] = 0;
  }
  v12 = (void *)a1[9];
  if ( v12 )
  {
    a1[10] = 0;
    qfree(v12);
    a1[9] = 0;
    a1[11] = 0;
  }
  v13 = (char *)a1[3];
  if ( v13 )
  {
    v19 = a1[4];
    if ( v19 )
    {
      v14 = 0;
      for ( i = 1; ; ++i )
      {
        free_idcv(&v13[v14]);
        if ( i >= v19 )
          break;
        v13 = (char *)a1[3];
        v14 += 20;
      }
      v10 = a1;
      v13 = (char *)a1[3];
    }
    else
    {
      v10 = a1;
    }
    v10[4] = 0;
    qfree(v13);
    v10[3] = 0;
    v10[5] = 0;
  }
  v16 = v10[1];
  v17 = (*(_DWORD *)(v16 + 64))-- == 1;
  if ( v17 && off_13B620 )
    ((void (__fastcall *)(int))off_13B620)(v5);
  *v10 = 0;
  (*(void (__cdecl **)(_DWORD, int *))(a2 + 4))(v18[0], v20);
  if ( !(_BYTE)under_debugger )
    interr(291);
  BUG();
}
// 60662: variable 'v5' is possibly undefined
// 13B620: using guessed type int (*off_13B620)();
// 13E34C: using guessed type int under_debugger;
