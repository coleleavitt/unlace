/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140060CF0
// Address: 0x0000000140060CF0

//----- (0000000140060CF0) ----------------------------------------------------
__int64 __fastcall sub_140060CF0(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4, unsigned int *a5)
{
  __int64 v9; // r8
  __int64 i; // rcx
  __int64 (__fastcall *v11)(__int64, __int64, __int64, unsigned __int16 *, int *); // rax
  int v12; // r12d
  int v13; // r13d
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rbp
  int v17; // eax
  unsigned int v18; // r11d
  _DWORD *v19; // r8
  unsigned int v20; // r9d
  __int16 v21; // r10
  int v22; // edx
  __int64 v23; // rcx
  _DWORD *v24; // rax
  _DWORD *v25; // r8
  int v26; // edx
  __int64 v27; // rcx
  _DWORD *v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int v31; // eax
  __int64 (__fastcall *v33)(__int64, _QWORD, _QWORD); // rax
  __int64 v34; // rcx
  int v35; // edi
  int v36; // eax
  int v37; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int16 v38; // [rsp+38h] [rbp-70h] BYREF
  __int16 v39; // [rsp+3Ah] [rbp-6Eh]

  if ( !a2 || !*a2 )
  {
    if ( a4 )
    {
      if ( *a4 )
      {
        v33 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(a1 + 120);
        v34 = a1 + 88;
        if ( v33 )
        {
          v35 = *(_DWORD *)(a1 + 128);
          v36 = v33(v34, *a4, *a5);
          if ( v36 == -1 )
          {
            if ( (*(_BYTE *)(a1 + 92) & 4) == 0 || *errno() == 7 )
            {
              *(_DWORD *)(a1 + 128) = v35;
              return -1;
            }
            v36 = 0;
          }
          *a4 += v36;
          *(_QWORD *)a5 -= v36;
        }
      }
    }
    *(_DWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 128) = 0;
    return 0;
  }
  v9 = *a3;
  if ( !v9 )
    return 0;
  for ( i = a1 + 32; ; i = a1 + 32 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int16 *, int *))(a1 + 40);
    v12 = *(_DWORD *)(a1 + 72);
    v13 = *(_DWORD *)(a1 + 128);
    v14 = *a2;
    v37 = 16;
    v15 = v11(i, v14, v9, &v38, &v37);
    v16 = v15;
    if ( v15 != -1 )
      break;
    v17 = *(_DWORD *)(a1 + 92);
    *(_DWORD *)(a1 + 72) = v12;
    if ( (v17 & 4) == 0 )
      return -1;
    ++*a2;
    --*a3;
LABEL_40:
    if ( !*a3 )
      return 0;
    v9 = (unsigned int)*a3;
  }
  v18 = v37;
  if ( !v37 )
  {
    *a2 += v15;
    *a3 -= v15;
    goto LABEL_40;
  }
  v19 = *(_DWORD **)(a1 + 80);
  if ( v19 )
  {
    LOWORD(v20) = v38;
    v21 = v39;
    v22 = v38;
    if ( (unsigned __int16)(v38 + 10240) <= 0x3FFu )
      v22 = (v39 & 0x3FF) + 0x10000 + ((v38 & 0x3FF) << 10);
    v23 = 0;
    if ( *v19 )
    {
      v24 = *(_DWORD **)(a1 + 80);
      while ( (v24[2] & 1) == 0 || v24[1] != v22 )
      {
        ++v23;
        v24 = &v19[3 * v23];
        if ( !*v24 )
          goto LABEL_18;
      }
      v20 = v19[3 * v23];
      if ( v20 >= 0x10000 )
      {
        v18 = 2;
        v37 = 2;
        v21 = v20 & 0x3FF | 0xDC00;
        v38 = ((v20 - 0x10000) >> 10) & 0x3FF | 0xD800;
        v39 = v21;
        LOWORD(v20) = v38;
      }
      else
      {
        v18 = 1;
        v38 = v19[3 * v23];
        v37 = 1;
      }
    }
  }
  else
  {
    v21 = v39;
    LOWORD(v20) = v38;
  }
LABEL_18:
  v25 = *(_DWORD **)(a1 + 136);
  if ( v25 )
  {
    v26 = (unsigned __int16)v20;
    if ( (unsigned __int16)(v20 + 10240) <= 0x3FFu )
      v26 = (v21 & 0x3FF) + ((v20 & 0x3FF) << 10) + 0x10000;
    v27 = 0;
    if ( *v25 )
    {
      v28 = *(_DWORD **)(a1 + 136);
      while ( (v28[2] & 2) == 0 || *v28 != v26 )
      {
        ++v27;
        v28 = &v25[3 * v27];
        if ( !*v28 )
          goto LABEL_35;
      }
      v29 = v25[3 * v27 + 1];
      if ( v29 >= 0x10000 )
      {
        v30 = v29 - 0x10000;
        v18 = 2;
        v38 = (v30 >> 10) & 0x3FF | 0xD800;
        v39 = v30 & 0x3FF | 0xDC00;
      }
      else
      {
        v38 = v29;
        v18 = 1;
      }
      v37 = v18;
    }
  }
LABEL_35:
  v31 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *, _QWORD, _QWORD, _DWORD))(a1 + 104))(
          a1 + 88,
          &v38,
          v18,
          *a4,
          *a5);
  if ( v31 != -1 )
  {
LABEL_39:
    *a2 += v16;
    *a4 += v31;
    *a3 -= v16;
    *(_QWORD *)a5 -= v31;
    goto LABEL_40;
  }
  if ( (*(_BYTE *)(a1 + 92) & 4) != 0 && *errno() != 7 )
  {
    *(_DWORD *)(a1 + 128) = v13;
    v31 = 0;
    goto LABEL_39;
  }
  *(_DWORD *)(a1 + 72) = v12;
  *(_DWORD *)(a1 + 128) = v13;
  return -1;
}
