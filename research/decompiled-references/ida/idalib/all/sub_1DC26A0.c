__int64 __fastcall sub_1DC26A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  char v8; // r9
  __int64 v9; // rdi
  int v10; // esi
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // rdx
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // r10d
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r10d
  __int64 *v26; // r11
  __int64 v27; // rdi
  int v28; // esi
  unsigned int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // rdi
  int v32; // esi
  unsigned int v33; // ecx
  __int64 v34; // r8
  int v35; // r10d
  __int64 *v36; // r9
  int v37; // esi
  int v38; // esi
  int v39; // r10d
  __int64 v40; // [rsp+8h] [rbp-20h]
  __int64 v41; // [rsp+8h] [rbp-20h]

  v4 = a2;
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (_BYTE)v7 == 43 )
    v4 = sub_1DB81F0(a2, a2, v7, a4);
  v8 = *(_BYTE *)(a1 + 8) & 1;
  if ( v8 )
  {
    v9 = a1 + 16;
    v10 = 3;
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 24);
    v9 = *(_QWORD *)(a1 + 16);
    if ( !v17 )
    {
      v18 = *(unsigned int *)(a1 + 8);
      v12 = nullptr;
      v19 = (unsigned int)((*(_DWORD *)(a1 + 8) >> 1) + 1);
      goto LABEL_11;
    }
    v10 = v17 - 1;
  }
  v11 = v10 & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
  v12 = (__int64 *)(v9 + 16LL * v11);
  v13 = *v12;
  if ( v4 != *v12 )
  {
    v25 = 1;
    v26 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v26 && v13 == -8192 )
          v26 = v12;
        v11 = v10 & (v25 + v11);
        v12 = (__int64 *)(v9 + 16LL * v11);
        v13 = *v12;
        if ( v4 == *v12 )
          goto LABEL_6;
        if ( v13 == -4096 )
          break;
        ++v25;
      }
      if ( v26 )
        v12 = v26;
    }
    v18 = *(unsigned int *)(a1 + 8);
    v20 = 12;
    v17 = 4;
    v19 = (unsigned int)((*(_DWORD *)(a1 + 8) >> 1) + 1);
    if ( v8 )
    {
LABEL_12:
      v21 = (unsigned int)(4 * v19);
      v22 = a1 + 8;
      if ( (unsigned int)v21 < v20 )
      {
        v23 = v17 - *(_DWORD *)(a1 + 12) - (unsigned int)v19;
        v24 = v17 >> 3;
        if ( (unsigned int)v23 > (unsigned int)v24 )
        {
LABEL_14:
          *(_DWORD *)(a1 + 8) = (2 * ((unsigned int)v18 >> 1) + 2) | v18 & 1;
          if ( *v12 != -4096 )
            --*(_DWORD *)(a1 + 12);
          v14 = 0;
          v12[1] = 0;
          *v12 = v4;
          v16 = 1;
          goto LABEL_17;
        }
        v41 = v4;
        sub_1DC1BE0(v22, v17, (unsigned __int64)v12, v18, v23, v24);
        v4 = v41;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          v31 = a1 + 16;
          v32 = 3;
LABEL_36:
          v33 = v32 & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
          v12 = (__int64 *)(v31 + 16LL * v33);
          v34 = *v12;
          if ( v41 != *v12 && v34 != -4096 )
          {
            v35 = 1;
            v36 = nullptr;
            while ( 1 )
            {
              if ( v34 == -8192 && !v36 )
                v36 = v12;
              v33 = v32 & (v35 + v33);
              v12 = (__int64 *)(v31 + 16LL * v33);
              v34 = *v12;
              if ( v41 == *v12 )
                break;
              if ( v34 == -4096 )
                goto LABEL_44;
              ++v35;
            }
          }
LABEL_33:
          LODWORD(v18) = *(_DWORD *)(a1 + 8);
          goto LABEL_14;
        }
        v38 = *(_DWORD *)(a1 + 24);
        v31 = *(_QWORD *)(a1 + 16);
        if ( v38 )
        {
          v32 = v38 - 1;
          goto LABEL_36;
        }
LABEL_59:
        *(_DWORD *)(a1 + 8) = (2 * (*(_DWORD *)(a1 + 8) >> 1) + 2) | *(_DWORD *)(a1 + 8) & 1;
        BUG();
      }
      v40 = v4;
      sub_1DC1BE0(v22, 2 * v17, (unsigned __int64)v12, v18, v19, v21);
      v4 = v40;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        v27 = a1 + 16;
        v28 = 3;
      }
      else
      {
        v37 = *(_DWORD *)(a1 + 24);
        v27 = *(_QWORD *)(a1 + 16);
        if ( !v37 )
          goto LABEL_59;
        v28 = v37 - 1;
      }
      v29 = v28 & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
      v12 = (__int64 *)(v27 + 16LL * v29);
      v30 = *v12;
      if ( v40 != *v12 && v30 != -4096 )
      {
        v39 = 1;
        v36 = nullptr;
        while ( 1 )
        {
          if ( !v36 && v30 == -8192 )
            v36 = v12;
          v29 = v28 & (v39 + v29);
          v12 = (__int64 *)(v27 + 16LL * v29);
          v30 = *v12;
          if ( v40 == *v12 )
            break;
          if ( v30 == -4096 )
          {
LABEL_44:
            if ( v36 )
              v12 = v36;
            goto LABEL_33;
          }
          ++v39;
        }
      }
      goto LABEL_33;
    }
    v17 = *(_DWORD *)(a1 + 24);
LABEL_11:
    v20 = 3 * v17;
    goto LABEL_12;
  }
LABEL_6:
  v14 = v12[1] & 0xFFFFFFFFFFFFFFF8LL;
  result = *(unsigned int *)(v14 + 8);
  v16 = result + 1;
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v14 + 12) )
  {
LABEL_17:
    sub_2237220(v14, v14 + 16, v16, 8);
    result = *(unsigned int *)(v14 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v14 + 8 * result) = a3;
  ++*(_DWORD *)(v14 + 8);
  return result;
}
