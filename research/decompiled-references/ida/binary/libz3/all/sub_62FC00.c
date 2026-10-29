__int64 __fastcall sub_62FC00(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, _BYTE *a5, int a6)
{
  int v8; // ebp
  unsigned int v10; // r13d
  int v11; // ecx
  char *v12; // rdi
  int v13; // ecx
  char *v14; // rdx
  unsigned int v15; // esi
  char *v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rdx
  void *v20; // rcx
  unsigned int v21; // edx
  int v22; // ecx
  __int64 v23; // r14
  unsigned __int64 v24; // r13
  __int64 v25; // rdx
  __int64 result; // rax
  unsigned int v27; // esi
  __int64 v28; // rax
  _BYTE *v29; // [rsp+0h] [rbp-58h]
  _BYTE *v30; // [rsp+8h] [rbp-50h]
  int v31; // [rsp+10h] [rbp-48h]
  int v32; // [rsp+18h] [rbp-40h]
  int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+28h] [rbp-30h]
  int v35; // [rsp+30h] [rbp-28h]
  void *v36; // [rsp+38h] [rbp-20h]

  v8 = a1 + 1032;
  v10 = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 1034) = 0;
  v30 = a4;
  v11 = *(_DWORD *)(a1 + 1052);
  v29 = a3;
  *(_WORD *)(a1 + 1032) = 0;
  if ( v11 || *(_DWORD *)(a1 + 1056) )
  {
    v12 = *(char **)(a1 + 1040);
    v13 = 0;
    v14 = &v12[8 * *(unsigned int *)(a1 + 1048)];
    v15 = *(_DWORD *)(a1 + 1048);
    v16 = *(char **)(a1 + 1040);
    if ( v12 == v14 )
      goto LABEL_14;
    do
    {
      while ( *(_QWORD *)v16 )
      {
        *(_QWORD *)v16 = 0;
        v16 += 8;
        if ( v14 == v16 )
          goto LABEL_8;
      }
      v16 += 8;
      ++v13;
    }
    while ( v14 != v16 );
LABEL_8:
    if ( v15 <= 0x10 || 3 * v15 >= 4 * v13 )
      goto LABEL_14;
    if ( v12 )
    {
      sub_186B220(v12);
      v17 = *(_DWORD *)(a1 + 1048);
      *(_QWORD *)(a1 + 1040) = 0;
      v17 >>= 1;
      *(_DWORD *)(a1 + 1048) = v17;
      v31 = v17;
      v18 = sub_186B270(8LL * v17);
      v19 = v17;
      v20 = (void *)v18;
      if ( !v17 )
      {
LABEL_13:
        *(_QWORD *)(a1 + 1040) = v20;
LABEL_14:
        *(_QWORD *)(a1 + 1052) = 0;
        goto LABEL_15;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 1040) = 0;
      v27 = v15 >> 1;
      *(_DWORD *)(a1 + 1048) = v27;
      v31 = v27;
      v28 = sub_186B270(8LL * v27);
      v19 = v27;
      v20 = (void *)v28;
    }
    v20 = memset(v20, 0, 8 * v19);
    goto LABEL_13;
  }
LABEL_15:
  v21 = *(_DWORD *)(a2 + 68);
  if ( v21 < v10 )
  {
    v22 = *(_DWORD *)(a2 + 68);
    v23 = a2 + 8LL * v21;
    v24 = a2 + 8 * (v21 + (unsigned __int64)(v10 - 1 - v21)) + 8;
    do
    {
      v25 = *(_QWORD *)(v23 + 80);
      v23 += 8;
      sub_634B80(
        v8,
        a1 + 1040,
        v25 & 0xFFFFFFF8,
        v22,
        (int)a5,
        a6,
        (int)v29,
        (__int64)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    while ( v24 != v23 );
  }
  *v29 = *(_BYTE *)(a1 + 1032);
  *v30 = *(_BYTE *)(a1 + 1033);
  result = *(unsigned __int8 *)(a1 + 1034);
  *a5 = result;
  return result;
}

