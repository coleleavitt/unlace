__int64 __fastcall sub_B84BB0(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int v4; // edx
  __int64 result; // rax
  int v6; // r10d
  unsigned int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned int *v13; // rax
  unsigned int *v14; // rcx
  size_t v15; // rbp
  size_t v16; // rbx
  size_t v17; // rdx
  unsigned int v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rax
  size_t v22; // rdx
  size_t v23; // rbp
  const void *v24; // r12
  const void *v25; // rax
  size_t v26; // rdx
  size_t v27; // r15
  int v28; // eax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int *v33; // rax
  const void *v34; // rdi
  size_t v35; // rdx
  unsigned int *v36; // rax
  unsigned int v37; // [rsp+0h] [rbp-54h]
  unsigned int v38; // [rsp+4h] [rbp-50h]
  unsigned int v39; // [rsp+8h] [rbp-4Ch]
  __int64 v40; // [rsp+Ch] [rbp-48h] BYREF
  _QWORD v41[8]; // [rsp+14h] [rbp-40h] BYREF

  v2 = a1 & 7;
  v3 = a2 & 7;
  if ( v2 == 7 )
  {
    v4 = *(_DWORD *)(a1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v3 != 7 )
      return 1;
    if ( v4 > 3 )
      v4 = 3;
    v7 = v4 + 8;
    v6 = v7;
LABEL_11:
    v9 = 3;
    if ( *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL) <= 3u )
      v9 = *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
    v8 = v9 + 8;
    if ( v8 == v7 )
      goto LABEL_7;
    return 2 * (unsigned int)(v8 <= v6) - 1;
  }
  v6 = a1 & 7;
  v7 = v6;
  v8 = a2 & 7;
  if ( v3 == 7 )
    goto LABEL_11;
  if ( v3 != v2 )
    return 2 * (unsigned int)(v8 <= v6) - 1;
LABEL_7:
  switch ( v8 )
  {
    case 0:
      v11 = a2 & 0xFFFFFFFFFFFFFFF8LL;
      v12 = a1 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v12 )
        return (unsigned int)-(v11 != 0);
      result = 1;
      if ( v11 )
      {
        v13 = *(unsigned int **)(v12 + 16);
        v14 = *(unsigned int **)(v11 + 16);
        v15 = *v13;
        v16 = *v14;
        v17 = v15;
        if ( v16 <= v15 )
          v17 = *v14;
        if ( !v17 )
          goto LABEL_18;
        v10 = memcmp(v13 + 4, v14 + 4, v17);
        if ( !v10 )
          goto LABEL_18;
        return (v10 >> 31) | 1u;
      }
      return result;
    case 1:
    case 2:
    case 7:
      v40 = a1;
      v41[0] = a2;
      if ( v8 == 1 && v7 == 1 )
      {
        if ( (a1 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (a1 & 4) != 0 )
          BUG();
        v33 = *(unsigned int **)((a1 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v15 = *v33;
        v34 = v33 + 4;
        if ( (a2 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (a2 & 4) != 0 )
          BUG();
        v35 = *v33;
        v36 = *(unsigned int **)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v16 = *v36;
        if ( v16 <= v15 )
          v35 = *v36;
        if ( v35 && (v10 = memcmp(v34, v36 + 4, v35)) != 0 )
        {
          return (v10 >> 31) | 1u;
        }
        else
        {
LABEL_18:
          result = 0;
          if ( v16 != v15 )
            return v15 < v16 ? -1 : 1;
        }
      }
      else
      {
        v18 = sub_FDE930(&v40);
        v38 = v18;
        v19 = sub_FDE930(v41);
        v39 = v19;
        if ( v18 <= v19 )
          v19 = v18;
        v20 = 0;
        v37 = v19;
        if ( v19 )
        {
          while ( 1 )
          {
            v21 = sub_FDE9A0(&v40, v20);
            v23 = v22;
            v24 = (const void *)v21;
            v25 = (const void *)sub_FDE9A0(v41, v20);
            v27 = v26;
            if ( v23 <= v26 )
              v26 = v23;
            if ( v26 )
            {
              v28 = memcmp(v24, v25, v26);
              if ( v28 )
                break;
            }
            if ( v23 != v27 )
            {
              if ( v23 < v27 )
                return 0xFFFFFFFFLL;
              return 1;
            }
            if ( ++v20 == v37 )
              goto LABEL_52;
          }
          if ( v28 < 0 )
            return 0xFFFFFFFFLL;
          return 1;
        }
        else
        {
LABEL_52:
          result = v38 > v39;
          if ( v38 < v39 )
            return 0xFFFFFFFFLL;
        }
      }
      return result;
    case 3:
    case 4:
    case 5:
      if ( (unsigned int)(v3 - 3) > 2 )
      {
        v30 = 0;
        v29 = 0;
        if ( (unsigned int)(v2 - 3) > 2 )
          return v29 > v30;
      }
      else
      {
        v29 = 0;
        v30 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        if ( (unsigned int)(v2 - 3) > 2 )
          goto LABEL_42;
      }
      v29 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_42:
      if ( v30 > v29 )
        return 0xFFFFFFFFLL;
      return v29 > v30;
    case 6:
      if ( v3 != 6 )
      {
        if ( v2 != 6 )
          return 0;
        v31 = 0;
        goto LABEL_47;
      }
      v32 = 0;
      v31 = *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v2 == 6 )
LABEL_47:
        v32 = *(_DWORD *)(a1 & 0xFFFFFFFFFFFFFFF8LL);
      result = v31 < v32;
      if ( v31 > v32 )
        return 0xFFFFFFFFLL;
      return result;
  }
}
