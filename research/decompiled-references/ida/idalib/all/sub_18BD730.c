__int64 __fastcall sub_18BD730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 *v10; // rdx
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // r10d
  __int64 result; // rax
  __int64 v17; // rbp
  __int64 v18; // rsi
  _QWORD *v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  _QWORD *v27; // rdx
  int v28; // esi
  __int64 *v29; // r8
  __int64 v30; // r10
  _QWORD *v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // rax
  int v34; // r9d
  char *v35; // r10
  __int64 v36; // rax
  unsigned int v37; // r11d
  __int64 v38; // r10

  v7 = *(__int64 **)a1;
  v8 = **(_QWORD **)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 232) + 60LL) & 0x10) == 0 )
    goto LABEL_2;
  v24 = sub_15F2610(v8, 0, a3, a4, a5, a6);
  if ( !v24 )
    goto LABEL_2;
  v25 = *(_QWORD *)v7[1];
  if ( (*(_WORD *)v25 & 0x1FF) != 0x47 )
    goto LABEL_2;
  v26 = *(_QWORD *)(v25 + 16);
  if ( (*(_BYTE *)(v26 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_2;
  if ( !*(_BYTE *)(v24 + 1932) )
  {
    result = sub_2236570(v24 + 1912, v26);
    if ( result )
      return result;
LABEL_2:
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(__int64 **)(a1 + 16);
    v11 = *(_DWORD *)(v9 + 4424);
    if ( !v11 )
    {
      v12 = sub_18BC1F0(*(_QWORD **)(v9 + 4440), *(_QWORD *)(v9 + 4440) + 8LL * *(unsigned int *)(v9 + 4448), v10);
      if ( (_QWORD *)v14 != v12 )
      {
        v10 = (__int64 *)v9;
        if ( (_QWORD *)v14 != v12 + 1 )
        {
          memmove(v12, v12 + 1, v14 - (_QWORD)(v12 + 1));
          v15 = *(_DWORD *)(v9 + 4448);
          v10 = *(__int64 **)(a1 + 8);
        }
        *(_DWORD *)(v9 + 4448) = v15 - 1;
        v9 = (__int64)v10;
      }
      goto LABEL_7;
    }
    v13 = *(unsigned int *)(v9 + 4432);
    v14 = *(_QWORD *)(v9 + 4416);
    if ( (_DWORD)v13 )
    {
      v28 = v13 - 1;
      v13 = ((_DWORD)v13 - 1) & (((unsigned int)*v10 >> 9) ^ ((unsigned int)*v10 >> 4));
      v29 = (__int64 *)(v14 + 8 * v13);
      v30 = *v29;
      if ( *v29 == *v10 )
      {
LABEL_34:
        *v29 = -8192;
        v31 = *(_QWORD **)(v9 + 4440);
        *(_DWORD *)(v9 + 4424) = v11 - 1;
        v32 = *(unsigned int *)(v9 + 4448);
        ++*(_DWORD *)(v9 + 4428);
        v33 = sub_18BC1F0(v31, (__int64)&v31[v32], v10);
        if ( v35 == (char *)(v33 + 1) )
        {
          v36 = v9;
        }
        else
        {
          memmove(v33, v33 + 1, v35 - (char *)(v33 + 1));
          v34 = *(_DWORD *)(v9 + 4448);
          v36 = *(_QWORD *)(a1 + 8);
        }
        v14 = (unsigned int)(v34 - 1);
        *(_DWORD *)(v9 + 4448) = v14;
        v9 = v36;
        goto LABEL_7;
      }
      a5 = 1;
      if ( v30 != -4096 )
      {
        do
        {
          v37 = a5 + 1;
          v13 = v28 & (unsigned int)(a5 + v13);
          v29 = (__int64 *)(v14 + 8LL * (unsigned int)v13);
          v38 = *v29;
          if ( *v10 == *v29 )
            goto LABEL_34;
          a5 = v37;
        }
        while ( v38 != -4096 );
      }
    }
LABEL_7:
    result = sub_15F2610(v9, 0, (__int64)v10, v13, a5, v14);
    v17 = result;
    if ( !result )
      return result;
    v18 = **(_QWORD **)(a1 + 16);
    if ( !*(_BYTE *)(result + 1732) )
      goto LABEL_15;
    v19 = *(_QWORD **)(result + 1712);
    v20 = *(unsigned int *)(result + 1724);
    v21 = &v19[v20];
    if ( v19 != v21 )
    {
      result = *(_QWORD *)(result + 1712);
      if ( v18 == *v19 )
        goto LABEL_40;
      while ( 1 )
      {
        result += 8;
        if ( v21 == (_QWORD *)result )
          break;
        if ( v18 == *(_QWORD *)result )
          goto LABEL_40;
      }
    }
    if ( (unsigned int)v20 < *(_DWORD *)(v17 + 1720) )
    {
      *(_DWORD *)(v17 + 1724) = v20 + 1;
      *v21 = v18;
      v19 = *(_QWORD **)(v17 + 1712);
      result = (__int64)&v19[v20];
    }
    else
    {
LABEL_15:
      result = sub_2236760(v17 + 1712, v18);
      v19 = *(_QWORD **)(v17 + 1712);
      if ( !*(_BYTE *)(v17 + 1732) )
      {
        v22 = &v19[*(unsigned int *)(v17 + 1720)];
LABEL_17:
        if ( v22 != (_QWORD *)result && *(_QWORD *)result >= 0xFFFFFFFFFFFFFFFELL )
        {
          result += 8;
          do
          {
            v23 = (_QWORD *)result;
            if ( v22 == (_QWORD *)result )
              break;
            result += 8;
          }
          while ( *v23 >= 0xFFFFFFFFFFFFFFFELL );
        }
        return result;
      }
    }
LABEL_40:
    v22 = &v19[*(unsigned int *)(v17 + 1724)];
    goto LABEL_17;
  }
  v27 = *(_QWORD **)(v24 + 1912);
  result = (__int64)&v27[*(unsigned int *)(v24 + 1924)];
  if ( v27 == (_QWORD *)result )
    goto LABEL_2;
  while ( v26 != *v27 )
  {
    if ( (_QWORD *)result == ++v27 )
      goto LABEL_2;
  }
  return result;
}
