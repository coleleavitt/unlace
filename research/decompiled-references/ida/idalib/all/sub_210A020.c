__int64 __fastcall sub_210A020(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  unsigned int v8; // esi
  __int64 v9; // r8
  unsigned int v10; // edx
  int *v11; // rax
  int v12; // edi
  _DWORD *v13; // rdx
  _QWORD *v14; // rbp
  __int64 result; // rax
  int v16; // r10d
  int *v17; // r11
  int v18; // edi
  _DWORD *v19; // rax
  unsigned int v20[3]; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v21[4]; // [rsp+18h] [rbp-20h] BYREF

  v6 = (__int64 *)(a1 + 1432);
  v20[0] = a2;
  v8 = *(_DWORD *)(a1 + 1448);
  if ( !v8 )
  {
    v21[0] = 0;
    goto LABEL_13;
  }
  a4 = v20[0];
  a6 = v8 - 1;
  v9 = *(_QWORD *)(a1 + 1432);
  v10 = a6 & (37 * v20[0]);
  v11 = (int *)(v9 + 16LL * v10);
  v12 = *v11;
  if ( v20[0] == *v11 )
    goto LABEL_3;
  v16 = 1;
  v17 = nullptr;
  if ( v12 == -1 )
  {
LABEL_6:
    v18 = *(_DWORD *)(a1 + 1440);
    v21[0] = v11;
    a3 = (unsigned int)(v18 + 1);
    a5 = (unsigned int)(4 * a3);
    if ( (unsigned int)a5 < 3 * v8 )
    {
      a5 = v8 >> 3;
      if ( v8 - *(_DWORD *)(a1 + 1444) - (unsigned int)a3 > (unsigned int)a5 )
      {
LABEL_8:
        *(_DWORD *)(a1 + 1440) = a3;
        if ( *v11 != -1 )
          --*(_DWORD *)(a1 + 1444);
        *v11 = a4;
        v14 = v11 + 2;
        *((_QWORD *)v11 + 1) = 0;
        goto LABEL_11;
      }
LABEL_14:
      sub_2109E30(v6, v8, a3, a4, a5, a6);
      sub_2105B70(v6, (int *)v20, v21);
      LODWORD(a4) = v20[0];
      LODWORD(a3) = *(_DWORD *)(a1 + 1440) + 1;
      v11 = (int *)v21[0];
      goto LABEL_8;
    }
LABEL_13:
    v8 *= 2;
    goto LABEL_14;
  }
  while ( 1 )
  {
    if ( v12 == -2 && !v17 )
      v17 = v11;
    v10 = a6 & (v16 + v10);
    v11 = (int *)(v9 + 16LL * v10);
    v12 = *v11;
    if ( v20[0] == *v11 )
      break;
    if ( v12 == -1 )
    {
      if ( v17 )
        v11 = v17;
      goto LABEL_6;
    }
    ++v16;
  }
LABEL_3:
  v13 = *((_DWORD **)v11 + 1);
  v14 = v11 + 2;
  if ( v13 )
  {
    result = (unsigned int)(*v13 + 1);
    *v13 = result;
    return result;
  }
LABEL_11:
  v19 = (_DWORD *)sub_2105F40((__int64 *)(a1 + 192), 4, 3u);
  *v19 = 0;
  *v14 = v19;
  *v19 = 1;
  return 1;
}
