/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435390
// Address: 0x00435390

//----- (00435390) --------------------------------------------------------
int **__userpurge sub_435390@<eax>(int a1@<ecx>, int a2@<ebx>, const char *a3)
{
  __int128 *v3; // esi
  char *v4; // edi
  int v5; // edx
  unsigned int i; // ecx
  int v7; // eax
  int *v8; // esi
  char *v9; // eax
  int **result; // eax
  bool v11; // cc
  int **v12; // edi
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // eax
  int **v16; // ecx
  int *v17; // eax
  bool v18; // zf
  int **v19; // eax
  int *v20; // edx
  int v21; // ecx
  int *v22; // eax
  int *v23; // [esp+Ch] [ebp-40h] BYREF
  unsigned int v24; // [esp+14h] [ebp-38h]
  int *v25; // [esp+18h] [ebp-34h]
  int *v26; // [esp+1Ch] [ebp-30h]
  int **v27; // [esp+20h] [ebp-2Ch]
  __int128 v28; // [esp+24h] [ebp-28h] BYREF
  unsigned int v29; // [esp+34h] [ebp-18h]
  unsigned int v30; // [esp+38h] [ebp-14h]
  int v31; // [esp+48h] [ebp-4h]

  v26 = (int *)a1;
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(303);
  }
  v27 = *(int ***)(a1 + 284);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  sub_4300C0(&v28, (unsigned int)a3, strlen(a3));
  v3 = &v28;
  v4 = (char *)v28;
  v5 = -2128831035;
  if ( v30 > 0xF )
    v3 = (__int128 *)v28;
  for ( i = 0; i < v29; v5 = 16777619 * (v5 ^ v7) )
    v7 = *((unsigned __int8 *)v3 + i++);
  v8 = sub_430150(v27, &v23, &v28, v5)[1];
  v25 = v8;
  if ( !v8 )
  {
    v8 = v27[1];
    v25 = v8;
  }
  if ( v30 > 0xF )
  {
    v9 = v4;
    v31 = 0;
    if ( v30 + 1 >= 0x1000 )
    {
      v4 = *((char **)v4 - 1);
      if ( (unsigned int)(v9 - v4 - 4) > 0x1F )
      {
        sub_467F04(a2, (int)v4);
        JUMPOUT(0x4355B0);
      }
    }
    sub_4627F2(v4);
    v31 = -1;
  }
  result = (int **)v26[71];
  v27 = result;
  if ( v8 != result[1] )
  {
    v11 = (unsigned int)v8[7] <= 0xF;
    v12 = (int **)(v8 + 2);
    v24 = v8[6];
    v26 = v8 + 2;
    if ( !v11 )
      v26 = *v12;
    v13 = 0;
    v14 = -2128831035;
    if ( v8[6] )
    {
      do
      {
        v15 = *((unsigned __int8 *)v26 + v13++);
        v14 = 16777619 * (v14 ^ v15);
      }
      while ( v13 < v24 );
      v8 = v25;
      result = v27;
      v12 = (int **)(v25 + 2);
    }
    v16 = (int **)&result[3][2 * (v14 & (unsigned int)result[6])];
    v17 = *v16;
    if ( v16[1] == v8 )
    {
      v18 = v17 == v8;
      v19 = v27;
      if ( v18 )
      {
        v20 = v27[1];
        *v16 = v20;
      }
      else
      {
        v20 = (int *)v8[1];
      }
      v16[1] = v20;
    }
    else
    {
      if ( v17 == v8 )
        *v16 = (int *)*v8;
      v19 = v27;
    }
    v21 = *v8;
    v19[2] = (int *)((char *)v19[2] - 1);
    *(_DWORD *)v8[1] = v21;
    *(_DWORD *)(v21 + 4) = v8[1];
    v22 = v12[6];
    v31 = 1;
    if ( v22 )
    {
      v12[7] = nullptr;
      sub_453A20(v22);
      v12[6] = nullptr;
      v12[8] = nullptr;
    }
    sub_430D50((int)v12, a2, (int)v12);
    return (int **)sub_4627F2(v8);
  }
  return result;
}
// 4355AB: control flows out of bounds to 4355B0
// 4B70F0: using guessed type char byte_4B70F0;
