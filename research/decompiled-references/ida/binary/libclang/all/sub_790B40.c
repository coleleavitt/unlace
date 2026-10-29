__int64 __fastcall sub_790B40(unsigned __int64 a1, unsigned __int64 a2)
{
  int v3; // r8d
  unsigned int v4; // ecx
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned int v15; // r14d
  unsigned int v16; // ebx
  __int64 v17; // rax
  size_t v18; // rdx
  size_t v19; // r12
  const void *v20; // rbp
  const void *v21; // rax
  size_t v22; // rdx
  size_t v23; // r15
  bool v24; // cc
  size_t v25; // rdx
  int v26; // eax
  bool v27; // sf
  unsigned int *v28; // rdx
  unsigned int *v29; // rax
  size_t v30; // rbx
  size_t v31; // rbp
  size_t v32; // rcx
  int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned __int64 v36; // rax
  unsigned int *v37; // rax
  size_t v38; // rbp
  const void *v39; // rdi
  unsigned __int64 v40; // rax
  unsigned int *v41; // rax
  size_t v42; // rdx
  size_t v43; // rbx
  int v44; // eax
  unsigned int v45; // [rsp+8h] [rbp-50h]
  unsigned int v46; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v47; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v48[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = a1 & 7;
  v4 = a2 & 7;
  if ( v3 == 7 )
  {
    if ( v4 != 7 )
      return 1;
    v8 = *(_DWORD *)(a1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 > 3 )
      v8 = 3;
    v9 = *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
    v6 = v8 + 8;
    if ( v9 > 3 )
      v9 = 3;
    v7 = v9 + 8;
  }
  else
  {
    if ( v4 == 7 )
      return 0xFFFFFFFFLL;
    v6 = a1 & 7;
    v7 = v4;
  }
  if ( (_DWORD)v7 != (_DWORD)v6 )
  {
    if ( (int)v6 >= (int)v7 )
      return 1;
    return 0xFFFFFFFFLL;
  }
  switch ( v7 )
  {
    case 0LL:
      if ( a1 <= 7 )
        return (unsigned int)-(a2 > 7);
      result = 1;
      if ( a2 > 7 )
      {
        v28 = *(unsigned int **)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v29 = *(unsigned int **)((a1 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v30 = *v28;
        v31 = *v29;
        v32 = v31;
        if ( v30 <= v31 )
          v32 = *v28;
        if ( v32 && (v33 = memcmp(v29 + 4, v28 + 4, v32)) != 0 )
        {
          return (v33 >> 31) | 1u;
        }
        else
        {
          result = 0;
          if ( v30 != v31 )
            return v31 < v30 ? -1 : 1;
        }
      }
      return result;
    case 1LL:
    case 2LL:
    case 7LL:
      v47 = a1;
      v48[0] = a2;
      if ( v4 == 1 && v3 == 1 )
      {
        if ( (a1 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_72;
        v36 = 0;
        if ( (a1 & 4) == 0 )
          v36 = a1 & 0xFFFFFFFFFFFFFFF8LL;
        v37 = *(unsigned int **)(v36 + 16);
        v38 = *v37;
        v39 = v37 + 4;
        if ( (a2 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
LABEL_72:
          BUG();
        v40 = 0;
        if ( (a2 & 4) == 0 )
          v40 = a2 & 0xFFFFFFFFFFFFFFF8LL;
        v41 = *(unsigned int **)(v40 + 16);
        v42 = v38;
        v43 = *v41;
        if ( v43 <= v38 )
          v42 = *v41;
        if ( v42 )
        {
          v44 = memcmp(v39, v41 + 4, v42);
          v27 = v44 < 0;
          if ( v44 )
          {
LABEL_50:
            if ( v27 )
              return 0xFFFFFFFFLL;
            return 1;
          }
        }
        result = 0;
        if ( v43 != v38 )
        {
          if ( v38 < v43 )
            return 0xFFFFFFFFLL;
          return 1;
        }
      }
      else
      {
        v13 = sub_C87220(&v47, v6, a2);
        v45 = v13;
        v15 = sub_C87220(v48, v6, v14);
        v46 = v15;
        if ( v13 <= v15 )
          v15 = v13;
        v16 = 0;
        if ( v15 )
        {
          do
          {
            v17 = sub_C87290(&v47, v16);
            v19 = v18;
            v20 = (const void *)v17;
            v21 = (const void *)sub_C87290(v48, v16);
            v23 = v22;
            v24 = v22 <= v19;
            v25 = v19;
            if ( v24 )
              v25 = v23;
            if ( v25 )
            {
              v26 = memcmp(v20, v21, v25);
              v27 = v26 < 0;
              if ( v26 )
                goto LABEL_50;
            }
            if ( v23 != v19 )
            {
              if ( v19 < v23 )
                return 0xFFFFFFFFLL;
              return 1;
            }
          }
          while ( v15 != ++v16 );
        }
        if ( v45 < v46 )
          return 0xFFFFFFFFLL;
        return v46 < v45;
      }
      return result;
    case 3LL:
    case 4LL:
    case 5LL:
      v10 = v3 - 3;
      if ( v4 - 3 > 2 )
      {
        if ( v10 > 2 )
          return 0;
        return *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFF8LL) + 8) != 0;
      }
      else
      {
        v11 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        if ( v10 <= 1 || v3 == 5 )
        {
          v12 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
          if ( v12 >= v11 )
            return v11 < v12;
        }
        else if ( !v11 )
        {
          return 0;
        }
        return 0xFFFFFFFFLL;
      }
    case 6LL:
      if ( v4 == 6 )
      {
        v34 = *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v3 == 6 )
        {
          v35 = *(_DWORD *)(a1 & 0xFFFFFFFFFFFFFFF8LL);
          result = 0xFFFFFFFFLL;
          if ( v35 >= v34 )
            return v34 < v35;
        }
        else
        {
          return (unsigned int)-(v34 != 0);
        }
      }
      else
      {
        result = 0;
        if ( v3 == 6 )
          return *(_DWORD *)(a1 & 0xFFFFFFFFFFFFFFF8LL) != 0;
      }
      return result;
  }
}

