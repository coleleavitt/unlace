__int64 __fastcall sub_2FA220(__int64 a1, __int64 a2)
{
  char *v4; // rdi
  int v5; // ecx
  __int64 v6; // rsi
  char *v7; // rax
  char *v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // rdx
  unsigned int v13; // ebx
  __int64 result; // rax
  int *v15; // rcx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int v21; // esi
  _QWORD v22[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( *(_DWORD *)(a1 + 668) || *(_DWORD *)(a1 + 672) )
  {
    v4 = *(char **)(a1 + 656);
    v5 = 0;
    v6 = *(unsigned int *)(a1 + 664);
    v7 = v4;
    v8 = &v4[16 * v6];
    if ( v4 == v8 )
      goto LABEL_15;
    do
    {
      while ( *(_QWORD *)v7 )
      {
        *(_QWORD *)v7 = 0;
        v7 += 16;
        if ( v8 == v7 )
          goto LABEL_8;
      }
      v7 += 16;
      ++v5;
    }
    while ( v8 != v7 );
LABEL_8:
    if ( (unsigned int)v6 <= 0x10 || 3 * (int)v6 >= (unsigned int)(4 * v5) )
      goto LABEL_15;
    if ( v4 )
    {
      sub_186B220(v4);
      v9 = *(_DWORD *)(a1 + 664);
      *(_QWORD *)(a1 + 656) = 0;
      v9 >>= 1;
      v10 = v9;
      *(_DWORD *)(a1 + 664) = v9;
      v11 = sub_186B270(16LL * v9);
      if ( !v9 )
      {
LABEL_14:
        *(_QWORD *)(a1 + 656) = v11;
LABEL_15:
        *(_QWORD *)(a1 + 668) = 0;
        goto LABEL_16;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 656) = 0;
      v21 = (unsigned int)v6 >> 1;
      v10 = v21;
      *(_DWORD *)(a1 + 664) = v21;
      v11 = sub_186B270(16LL * v21);
    }
    v12 = (_QWORD *)v11;
    do
    {
      *v12 = 0;
      v12 += 2;
      *((_DWORD *)v12 - 2) = 0;
    }
    while ( v12 != (_QWORD *)(v11 + 16 * v10) );
    goto LABEL_14;
  }
LABEL_16:
  v13 = 0;
  sub_2FD290(a2, a1 + 208);
  result = *(_QWORD *)(a1 + 608);
  if ( result )
  {
    while ( 1 )
    {
      if ( v13 >= *(_DWORD *)(result - 4) )
        return result;
      v15 = (int *)(result + 104LL * v13);
      v16 = *v15;
      if ( *v15 == 1 )
        break;
      if ( v16 == 2 )
      {
        v19 = *((_QWORD *)v15 + 4);
        if ( v19 )
          v20 = *(unsigned int *)(v19 - 4);
        else
          v20 = 0;
        v18 = sub_2F9C10(a1, v13, 2, v20);
        v22[0] = v18;
        if ( !v18 )
          goto LABEL_24;
LABEL_23:
        ++*(_DWORD *)(v18 + 8);
LABEL_24:
        sub_2F13A0((_QWORD *)(a2 + 8), v22);
        result = *(_QWORD *)(a1 + 608);
        goto LABEL_25;
      }
      if ( !v16 )
      {
        v17 = 0;
        v22[0] = *((_QWORD *)v15 + 1);
        goto LABEL_22;
      }
LABEL_25:
      ++v13;
      if ( !result )
        return result;
    }
    v17 = 1;
    v22[0] = *((_QWORD *)v15 + 1);
LABEL_22:
    v18 = sub_2FA010(a1, v13, v17, v22);
    v22[0] = v18;
    if ( v18 )
      goto LABEL_23;
    goto LABEL_24;
  }
  return result;
}

