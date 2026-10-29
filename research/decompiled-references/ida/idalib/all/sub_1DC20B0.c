__int64 __fastcall sub_1DC20B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  char v8; // r9
  __int64 v9; // rdi
  int v10; // esi
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  __int64 v13; // r8
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r10d
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r10d
  __int64 *v25; // r11
  __int64 v26; // rdi
  int v27; // esi
  unsigned int v28; // ecx
  __int64 v29; // r8
  int v30; // esi
  unsigned int v31; // ecx
  __int64 v32; // r8
  int v33; // r10d
  __int64 *v34; // r9
  int v35; // esi
  int v36; // esi
  int v37; // r10d
  __int64 v38; // [rsp+8h] [rbp-20h]
  __int64 v39; // [rsp+8h] [rbp-20h]

  result = a2;
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (_BYTE)v7 == 43 )
    result = sub_1DB81F0(a2, a2, v7, a4);
  v8 = *(_BYTE *)(a1 + 8) & 1;
  if ( v8 )
  {
    v9 = a1 + 16;
    v10 = 3;
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 24);
    v9 = *(_QWORD *)(a1 + 16);
    if ( !v16 )
    {
      v17 = *(unsigned int *)(a1 + 8);
      v12 = nullptr;
      v18 = (unsigned int)((*(_DWORD *)(a1 + 8) >> 1) + 1);
      goto LABEL_15;
    }
    v10 = v16 - 1;
  }
  v11 = v10 & (((unsigned int)result >> 9) ^ ((unsigned int)result >> 4));
  v12 = (__int64 *)(v9 + 16LL * v11);
  v13 = *v12;
  if ( result != *v12 )
  {
    v24 = 1;
    v25 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v25 && v13 == -8192 )
          v25 = v12;
        v11 = v10 & (v24 + v11);
        v12 = (__int64 *)(v9 + 16LL * v11);
        v13 = *v12;
        if ( result == *v12 )
          goto LABEL_6;
        if ( v13 == -4096 )
          break;
        ++v24;
      }
      if ( v25 )
        v12 = v25;
    }
    v17 = *(unsigned int *)(a1 + 8);
    v19 = 12;
    v16 = 4;
    v18 = (unsigned int)((*(_DWORD *)(a1 + 8) >> 1) + 1);
    if ( v8 )
    {
LABEL_16:
      v20 = (unsigned int)(4 * v18);
      v21 = a1 + 8;
      if ( (unsigned int)v20 < v19 )
      {
        v22 = v16 - *(_DWORD *)(a1 + 12) - (unsigned int)v18;
        v23 = v16 >> 3;
        if ( (unsigned int)v22 > (unsigned int)v23 )
        {
LABEL_18:
          *(_DWORD *)(a1 + 8) = (2 * ((unsigned int)v17 >> 1) + 2) | v17 & 1;
          if ( *v12 != -4096 )
            --*(_DWORD *)(a1 + 12);
          *v12 = result;
          v14 = (unsigned __int64 *)(v12 + 1);
          v12[1] = 0;
          goto LABEL_21;
        }
        v39 = result;
        sub_1DC1BE0(v21, v16, (unsigned __int64)v12, v17, v22, v23);
        result = v39;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          v26 = a1 + 16;
          v30 = 3;
LABEL_40:
          v31 = v30 & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
          v12 = (__int64 *)(v26 + 16LL * v31);
          v32 = *v12;
          if ( v39 != *v12 && v32 != -4096 )
          {
            v33 = 1;
            v34 = nullptr;
            while ( 1 )
            {
              if ( v32 == -8192 && !v34 )
                v34 = v12;
              v31 = v30 & (v33 + v31);
              v12 = (__int64 *)(v26 + 16LL * v31);
              v32 = *v12;
              if ( v39 == *v12 )
                break;
              if ( v32 == -4096 )
                goto LABEL_48;
              ++v33;
            }
          }
LABEL_37:
          LODWORD(v17) = *(_DWORD *)(a1 + 8);
          goto LABEL_18;
        }
        v36 = *(_DWORD *)(a1 + 24);
        v26 = *(_QWORD *)(a1 + 16);
        if ( v36 )
        {
          v30 = v36 - 1;
          goto LABEL_40;
        }
LABEL_63:
        sub_2EAD22(v26);
      }
      v38 = result;
      sub_1DC1BE0(v21, 2 * v16, (unsigned __int64)v12, v17, v18, v20);
      result = v38;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        v26 = a1 + 16;
        v27 = 3;
      }
      else
      {
        v35 = *(_DWORD *)(a1 + 24);
        v26 = *(_QWORD *)(a1 + 16);
        if ( !v35 )
          goto LABEL_63;
        v27 = v35 - 1;
      }
      v28 = v27 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
      v12 = (__int64 *)(v26 + 16LL * v28);
      v29 = *v12;
      if ( v38 != *v12 && v29 != -4096 )
      {
        v37 = 1;
        v34 = nullptr;
        while ( 1 )
        {
          if ( !v34 && v29 == -8192 )
            v34 = v12;
          v28 = v27 & (v37 + v28);
          v12 = (__int64 *)(v26 + 16LL * v28);
          v29 = *v12;
          if ( v38 == *v12 )
            break;
          if ( v29 == -4096 )
          {
LABEL_48:
            if ( v34 )
              v12 = v34;
            goto LABEL_37;
          }
          ++v37;
        }
      }
      goto LABEL_37;
    }
    v16 = *(_DWORD *)(a1 + 24);
LABEL_15:
    v19 = 3 * v16;
    goto LABEL_16;
  }
LABEL_6:
  result = v12[1];
  v14 = (unsigned __int64 *)(v12 + 1);
  v15 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_21:
    *v14 = a3 & 0xFFFFFFFFFFFFFFFBLL;
    return result;
  }
  if ( (result & 4) != 0 )
  {
    result = *(unsigned int *)(v15 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(v15 + 12) )
    {
      sub_2237220(v15, v15 + 16, result + 1, 8);
      result = *(unsigned int *)(v15 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v15 + 8 * result) = a3;
    ++*(_DWORD *)(v15 + 8);
  }
  return result;
}
