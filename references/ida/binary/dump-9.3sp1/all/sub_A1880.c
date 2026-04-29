__int64 __fastcall sub_A1880(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // r12
  __int64 v6; // r13
  _QWORD *v7; // rbp
  _QWORD *v8; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // rdx
  unsigned int v22; // ebp
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // [rsp+10h] [rbp-68h]
  _BYTE v26[4]; // [rsp+20h] [rbp-58h] BYREF
  int v27; // [rsp+24h] [rbp-54h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( a2 == *(_QWORD *)(a1 + 32) + 64LL || *(_BYTE *)a2 == 4 )
    return 0;
  v3 = *(_QWORD **)(a1 + 48);
  v4 = (_QWORD *)*v3;
  if ( !*v3 )
    return 1;
  if ( !v3[1] )
    return 1;
  v5 = (_QWORD *)v4[1];
  if ( v4 == v5 )
    return 1;
  while ( 1 )
  {
    v6 = v5[3];
    v7 = v5 + 3;
    if ( (unsigned __int8)sub_125B60(v6 + 64, a2, 0) )
      break;
    if ( (*v5 & 2) != 0 )
    {
LABEL_10:
      if ( v5 == **(_QWORD ***)(a1 + 48) )
        return 1;
    }
    else
    {
      v8 = (_QWORD *)v5[2];
      if ( (*(_BYTE *)v8 & 2) == 0 )
      {
        do
        {
          v5 = v8;
          v8 = (_QWORD *)v8[1];
        }
        while ( (*(_BYTE *)v8 & 2) == 0 );
        goto LABEL_10;
      }
      v10 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
      v11 = *v10;
      if ( (*v10 & 2) != 0 )
      {
LABEL_13:
        v5 = v10;
        if ( v10 == **(_QWORD ***)(a1 + 48) )
          return 1;
      }
      else
      {
        while ( 1 )
        {
          if ( (_QWORD *)v10[2] != v5 )
            goto LABEL_13;
          v5 = v10;
          v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
          v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v11 & 2) != 0 )
            break;
          v10 = (_QWORD *)v12;
        }
        v5 = (_QWORD *)v12;
        if ( v12 == **(_QWORD **)(a1 + 48) )
          return 1;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 68) )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL);
    v13 = *(_QWORD *)(a1 + 56) + 64LL;
    sub_123A40(v26);
    if ( v26[0] == 8 )
    {
      if ( !under_debugger )
        sub_383060(51793);
      goto LABEL_50;
    }
    v16 = j__qalloc_or_throw(80, v13, v14, v15);
    v17 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 56) = 0;
    *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 72) = 0;
    sub_330970(v16, v17);
    *(_DWORD *)v16 = *(_DWORD *)v6;
    v18 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v16 + 68) = 1;
    *(_DWORD *)(v16 + 4) = v18;
    v19 = v7[1];
    if ( v19 )
    {
      sub_125180(v16 + 48);
      v20 = v16;
      if ( v19 != v6 + 32 )
      {
        while ( 1 )
        {
          sub_125180(v20 + 32);
          if ( *(_BYTE *)(v6 + 32) != 4 )
            break;
          v6 = *(_QWORD *)(v6 + 40);
          v20 = *(_QWORD *)(v20 + 40);
          if ( v6 + 32 == v19 )
            goto LABEL_26;
        }
        if ( !under_debugger )
          sub_383060(50019);
LABEL_50:
        BUG();
      }
LABEL_26:
      if ( !*(_DWORD *)(a1 + 64) )
      {
        v23 = *(unsigned int *)(v6 + 36);
        if ( v27 < (int)v23 )
        {
          v24 = **(unsigned int **)(a1 + 56);
          if ( (unsigned int)(v24 - 8) > 1 || *(_BYTE *)(v6 + 32) != 4 || (_DWORD)v24 != **(_DWORD **)(v6 + 40) )
          {
            if ( !under_debugger )
              sub_383060(52678);
            goto LABEL_50;
          }
          sub_1207E0(v26, v25, v24, *(_QWORD *)(v6 + 24), v23);
        }
      }
      sub_11CA10(v20 + 32, v26);
    }
    else
    {
      sub_11CA10(v16 + 32, v26);
      if ( *(_DWORD *)v6 != 29 )
        sub_120A10(v16 + 48, v25, 0, *(unsigned int *)(v16 + 36), *(_QWORD *)(v16 + 24), 0);
      v20 = v16;
    }
    v21 = *(unsigned int *)(a1 + 64);
    if ( (_DWORD)v21 )
    {
      v22 = *(_DWORD *)(v6 + 36);
      if ( *(_DWORD *)(v20 + 36) <= (signed int)v22 )
      {
        if ( !under_debugger )
          sub_383060(52026);
        goto LABEL_50;
      }
      sub_1207E0(v20 + 32, v25, v21, *(_QWORD *)(v6 + 24), v22);
      if ( *(_DWORD *)(v20 + 52) > (signed int)v22 )
        sub_1207E0(v20 + 48, v25, 10, *(_QWORD *)(v6 + 24), v22);
    }
    sub_11CDA0(a2);
    *(_BYTE *)a2 = 4;
    *(_QWORD *)(a2 + 8) = v16;
    *(_DWORD *)(a2 + 4) = 1;
    *(_BYTE *)(a1 + 40) = 1;
    sub_11CDA0(v26);
  }
  return 0;
}
