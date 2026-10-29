__int64 __fastcall sub_42CB10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edx
  __int64 v6; // rax
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r15
  unsigned int v12; // r14d
  int v13; // ebp
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  _BYTE *v18; // rcx
  int v19; // edx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  int v27; // edx
  int v28; // eax
  _BYTE *v30; // rcx
  _BYTE *v31; // rcx
  _BYTE *v32; // rcx
  int v33; // r14d
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rbp
  int v37; // r13d
  const char *v38; // rdi
  __int64 v39; // rax
  __int64 *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // [rsp+0h] [rbp-58h]
  int v43; // [rsp+Ch] [rbp-4Ch]
  _BOOL4 v44; // [rsp+10h] [rbp-48h]
  int v45; // [rsp+14h] [rbp-44h]
  __int64 v46; // [rsp+18h] [rbp-40h]

  v5 = 1;
  v6 = *(_QWORD *)(a4 + 3264);
  v7 = *(_DWORD *)(a2 + 28);
  v44 = 0;
  v43 = 0;
  v46 = v6;
  v8 = *(_DWORD *)(v6 + 28) - 1;
  if ( (unsigned int)(v7 - 3) > 1 )
    return v5;
  v9 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
  v10 = v9 + 24;
  if ( v7 == 4 )
  {
    v5 = 1;
    if ( *(_DWORD *)(v9 + 24) != 2 )
      return v5;
    v33 = *(_DWORD *)(v9 + 64);
    if ( v33 <= 1 )
      return 1;
    v34 = 8;
    if ( v33 < 9LL )
      v34 = v33;
    if ( memcmp(*(const void **)(v9 + 56), "-nocase", v34) )
      return 1;
    v43 = 1;
    v10 = v9 + 24 + 24LL * *(int *)(v9 + 44) + 24;
  }
  v45 = 0;
  v42 = 24LL * v8;
  do
  {
    if ( *(_DWORD *)v10 == 2 )
    {
      v11 = *(_QWORD *)(v10 + 32);
      v12 = *(_DWORD *)(v10 + 40);
      if ( !(v45 | v43) )
      {
        v35 = sub_48DF10(*(void **)(v10 + 32), v12);
        v36 = v35;
        v37 = *(_DWORD *)v35 + 1;
        *(_DWORD *)v35 = v37;
        v38 = *(const char **)(v35 + 8);
        if ( !v38 )
        {
          v41 = sub_47B3B0(v35);
          v37 = *(_DWORD *)v36;
          v38 = (const char *)v41;
        }
        v44 = strpbrk(v38, "*[?\\") == nullptr;
        *(_DWORD *)v36 = v37 - 1;
        if ( v37 - 1 <= 0 )
        {
          v39 = *(_QWORD *)(v36 + 24);
          if ( v39 && *(_QWORD *)(v39 + 8) )
          {
            sub_47B120(v36);
          }
          else
          {
            v40 = *(__int64 **)(v36 + 8);
            if ( v40 && v40 != off_656088 )
              Tcl_Free((__int64)v40);
            *(_DWORD *)(v36 + 16) = -1;
            sub_496830(v36);
          }
        }
      }
      v13 = sub_471010(a4, v11, v12, 0);
      if ( v13 <= 255 )
      {
        v31 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v31 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v31 = *(_BYTE **)(a4 + 120);
        }
        *v31 = 1;
        v32 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v32;
        *v32 = v13;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v19 = dword_65442C;
      }
      else
      {
        v14 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v14 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v14 = *(_BYTE **)(a4 + 120);
        }
        *v14 = 2;
        v15 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v15;
        *v15 = HIBYTE(v13);
        v16 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v16;
        *v16 = BYTE2(v13);
        v17 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v17;
        *v17 = BYTE1(v13);
        v18 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v18;
        *v18 = v13;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v19 = dword_65444C;
      }
      if ( v19 )
      {
        if ( v19 == 0x80000000 )
          v19 = 1 - v13;
        if ( v19 >= 0 )
        {
          v20 = *(_DWORD *)(a4 + 48);
LABEL_15:
          *(_DWORD *)(a4 + 48) = v19 + v20;
          goto LABEL_17;
        }
        v20 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) >= v20 )
          goto LABEL_15;
        *(_DWORD *)(a4 + 44) = v20;
        *(_DWORD *)(a4 + 48) = v19 + v20;
      }
    }
    else
    {
      v21 = *(_QWORD *)(v46 + 16);
      v22 = v43 + v45;
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v42 + v21 + 8) + 4 * v22 + 4);
      v23 = *(_QWORD *)(*(_QWORD *)(v42 + v21 + 16) + 8 * v22 + 8);
      v24 = *(unsigned int *)(v10 + 20);
      *(_QWORD *)(a4 + 3288) = v23;
      sub_4399D0(a1, v10 + 24, v24, a4);
    }
LABEL_17:
    ++v45;
    v10 += 24LL * *(int *)(v10 + 20) + 24;
  }
  while ( v45 <= 1 );
  if ( v44 )
  {
    v30 = *(_BYTE **)(a4 + 120);
    if ( v30 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v30 = *(_BYTE **)(a4 + 120);
    }
    *v30 = 73;
    *(_DWORD *)(a4 + 3276) = 0;
    v27 = dword_654D2C;
    ++*(_QWORD *)(a4 + 120);
    if ( v27 )
    {
      if ( v27 != 0x80000000 )
        goto LABEL_24;
      v27 = 1;
      goto LABEL_35;
    }
  }
  else
  {
    v25 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v25 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v25 = *(_BYTE **)(a4 + 120);
    }
    *v25 = 78;
    v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v26;
    *v26 = v43;
    *(_DWORD *)(a4 + 3276) = 0;
    v27 = dword_654DCC;
    ++*(_QWORD *)(a4 + 120);
    if ( v27 )
    {
      if ( v27 == 0x80000000 )
        v27 = 1 - v43;
LABEL_24:
      if ( v27 < 0 )
      {
        v28 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v28 )
          *(_DWORD *)(a4 + 44) = v28;
        *(_DWORD *)(a4 + 48) = v27 + v28;
        return 0;
      }
LABEL_35:
      *(_DWORD *)(a4 + 48) += v27;
    }
  }
  return 0;
}

