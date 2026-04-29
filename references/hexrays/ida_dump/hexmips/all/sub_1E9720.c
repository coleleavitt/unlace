__int64 __fastcall sub_1E9720(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  int v9; // eax
  unsigned int *v10; // rax
  unsigned int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // rcx
  int v20; // ebx
  _DWORD *v21; // rax
  unsigned __int64 v22; // rdx
  _DWORD *v23; // rdi
  __int64 v24; // rdx
  _DWORD *v25; // rsi
  int v26; // r12d
  _DWORD *v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx

  v2 = a1;
  if ( *(_BYTE *)a2 == 14 )
  {
    v15 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)v15 == 9 )
    {
      v23 = (_DWORD *)a1[6];
      v24 = v2[7];
      v25 = &v23[v24];
      v26 = *(_DWORD *)(*(_QWORD *)(v15 + 8) + 16LL);
      if ( v23 == v25 )
        goto LABEL_33;
      v27 = v23;
      while ( v26 != *v27 )
      {
        if ( v25 == ++v27 )
          goto LABEL_33;
      }
      if ( v25 == v27 )
      {
LABEL_33:
        v28 = v24 + 1;
        if ( v2[8] < v28 )
        {
          v29 = qvector_reserve(v2 + 6, v23, v28, 4);
          v30 = v2[7];
          v2[6] = v29;
          v25 = (_DWORD *)(v29 + 4 * v30);
        }
        *v25 = v26;
        ++v2[7];
        v15 = *(_QWORD *)(a2 + 8);
      }
    }
    if ( *(_BYTE *)(v15 + 16) == 9 )
    {
      v16 = (_DWORD *)v2[6];
      v17 = v2[7];
      v18 = *(_QWORD *)(v15 + 24);
      v19 = &v16[v17];
      v20 = *(_DWORD *)(v18 + 16);
      if ( v16 == v19 )
        goto LABEL_25;
      v21 = (_DWORD *)v2[6];
      while ( v20 != *v21 )
      {
        if ( v19 == ++v21 )
          goto LABEL_25;
      }
      if ( v19 == v21 )
      {
LABEL_25:
        v22 = v17 + 1;
        if ( v2[8] < v22 )
        {
          v31 = qvector_reserve(v2 + 6, v16, v22, 4);
          v32 = v2[7];
          v2[6] = v31;
          v19 = (_DWORD *)(v31 + 4 * v32);
        }
        *v19 = v20;
        ++v2[7];
      }
    }
    return 0;
  }
  if ( *(_BYTE *)a2 == 9 )
  {
    v5 = *(__int64 **)(a2 + 8);
    if ( !v5[1] && (*(_BYTE *)(a1[4] + 4LL) & 0x10) != 0 )
    {
      v6 = *v5;
      v7 = *((int *)v5 + 4);
      if ( *(_QWORD *)(v6 + 440) < v7 )
        goto LABEL_43;
      v8 = *(_QWORD *)(v6 + 432) + 104 * v7;
      v9 = *(_DWORD *)(v8 + 24);
      if ( (v9 & 0x800) == 0 && ((v9 & 0x40) == 0 || (get_tinfo_property(*(_QWORD *)(v8 + 80), 2) & 0xF) == 9) )
      {
        a1 = (_QWORD *)*(unsigned int *)(v8 + 88);
        if ( *(_DWORD *)(a2 + 4) == (_DWORD)a1 && sub_1188D0((int)a1) )
        {
          v10 = (unsigned int *)v2[4];
          v11 = *v10;
          if ( *v10 > 0x40 )
          {
            if ( v11 - 65 <= 1 && (unsigned int *)a2 == v10 + 8 )
              return 0;
          }
          else
          {
            if ( v11 <= 0x3E && v11 != 1 )
            {
              if ( v11 != 2 || (unsigned int *)a2 != v10 + 12 )
                goto LABEL_16;
              return 0;
            }
            if ( (unsigned int *)a2 == v10 + 16 )
              return 0;
          }
LABEL_16:
          v12 = *(__int64 **)(a2 + 8);
          v13 = *v12;
          v14 = *((int *)v12 + 4);
          if ( *(_QWORD *)(v13 + 440) >= v14 )
          {
            *(_DWORD *)(*(_QWORD *)(v13 + 432) + 104 * v14 + 24) |= 0x800u;
            return 0;
          }
LABEL_43:
          sub_1E8300(a1);
        }
      }
    }
  }
  return 0;
}
