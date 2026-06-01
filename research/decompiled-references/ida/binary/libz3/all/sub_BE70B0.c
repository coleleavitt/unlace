__int64 __fastcall sub_BE70B0(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // esi
  char *v5; // rdi
  int v6; // ecx
  __int64 v7; // rsi
  char *v8; // rdx
  char *v9; // rax
  unsigned int v10; // ebp
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rdx
  char *v16; // rdi
  int v17; // ecx
  char *v18; // rdx
  unsigned int v19; // esi
  unsigned int v20; // ebp
  __int64 v21; // r12
  void *v22; // rcx
  unsigned int v23; // esi
  unsigned int v24; // esi

  result = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 9464LL) - a2);
  if ( *(_DWORD *)(a1 + 216) > (int)result )
  {
    v3 = *(_DWORD *)(a1 + 204);
    *(_DWORD *)(a1 + 216) = -1;
    if ( !v3 && !*(_DWORD *)(a1 + 208) )
    {
LABEL_21:
      if ( !*(_DWORD *)(a1 + 180) )
      {
        result = *(unsigned int *)(a1 + 184);
        if ( !(_DWORD)result )
          return result;
      }
      v16 = *(char **)(a1 + 168);
      v17 = 0;
      v18 = &v16[8 * *(unsigned int *)(a1 + 176)];
      v19 = *(_DWORD *)(a1 + 176);
      result = (__int64)v16;
      if ( v16 == v18 )
        goto LABEL_33;
      do
      {
        while ( *(_QWORD *)result )
        {
          *(_QWORD *)result = 0;
          result += 8;
          if ( v18 == (char *)result )
            goto LABEL_27;
        }
        result += 8;
        ++v17;
      }
      while ( v18 != (char *)result );
LABEL_27:
      if ( v19 <= 0x10 || (result = 3 * v19, (unsigned int)result >= 4 * v17) )
      {
LABEL_33:
        *(_QWORD *)(a1 + 180) = 0;
        return result;
      }
      if ( v16 )
      {
        sub_186B220(v16);
        v20 = *(_DWORD *)(a1 + 176);
        *(_QWORD *)(a1 + 168) = 0;
        v20 >>= 1;
        *(_DWORD *)(a1 + 176) = v20;
        v21 = v20;
        result = sub_186B270(8LL * v20);
        v22 = (void *)result;
        if ( !v20 )
        {
LABEL_32:
          *(_QWORD *)(a1 + 168) = v22;
          goto LABEL_33;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 168) = 0;
        v24 = v19 >> 1;
        v21 = v24;
        *(_DWORD *)(a1 + 176) = v24;
        v22 = (void *)sub_186B270(8LL * v24);
      }
      result = (__int64)memset(v22, 0, 8 * v21);
      v22 = (void *)result;
      goto LABEL_32;
    }
    v5 = *(char **)(a1 + 192);
    v6 = 0;
    v7 = *(unsigned int *)(a1 + 200);
    v8 = &v5[24 * v7];
    v9 = *(char **)(a1 + 192);
    if ( v5 == v8 )
      goto LABEL_20;
    do
    {
      while ( *(_QWORD *)v9 )
      {
        *(_QWORD *)v9 = 0;
        v9 += 24;
        if ( v8 == v9 )
          goto LABEL_8;
      }
      v9 += 24;
      ++v6;
    }
    while ( v8 != v9 );
LABEL_8:
    if ( (unsigned int)v7 <= 0x10 || 3 * (int)v7 >= (unsigned int)(4 * v6) )
    {
LABEL_20:
      *(_QWORD *)(a1 + 204) = 0;
      goto LABEL_21;
    }
    if ( v5 )
    {
      sub_186B220(v5);
      v10 = *(_DWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 192) = 0;
      v11 = v10 >> 1;
      *(_DWORD *)(a1 + 200) = v11;
      v12 = sub_186B270(24LL * v11);
      if ( !v11 )
        goto LABEL_19;
      if ( v11 - 1 <= 2 )
      {
        v14 = v11;
        v15 = v12;
        goto LABEL_16;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = 0;
      v23 = (unsigned int)v7 >> 1;
      *(_DWORD *)(a1 + 200) = v23;
      v11 = v23;
      v12 = sub_186B270(24LL * v23);
    }
    v13 = v12;
    do
    {
      *(_DWORD *)(v13 + 20) = 0;
      v13 += 96;
      *(_OWORD *)(v13 - 96) = 0;
      *(_OWORD *)(v13 - 72) = 0;
      *(_OWORD *)(v13 - 48) = 0;
      *(_OWORD *)(v13 - 24) = 0;
      *(_DWORD *)(v13 - 52) = 0;
      *(_DWORD *)(v13 - 28) = 0;
      *(_DWORD *)(v13 - 4) = 0;
    }
    while ( v12 + 96LL * (v11 >> 2) != v13 );
    v14 = v11 & 3;
    v15 = v12 + 24LL * (v11 & 0x7FFFFFFC);
    if ( (v11 & 3) != 0 )
    {
LABEL_16:
      *(_QWORD *)(v15 + 16) = 0;
      *(_OWORD *)v15 = 0;
      if ( v14 != 1 )
      {
        *(_QWORD *)(v15 + 40) = 0;
        *(_OWORD *)(v15 + 24) = 0;
        if ( v14 != 2 )
        {
          *(_QWORD *)(v15 + 64) = 0;
          *(_OWORD *)(v15 + 48) = 0;
        }
      }
    }
LABEL_19:
    *(_QWORD *)(a1 + 192) = v12;
    goto LABEL_20;
  }
  return result;
}

