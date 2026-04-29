__int64 __fastcall sub_A0B00(__int64 a1, __int64 a2)
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
  __int64 v13; // r12
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // r15
  __int64 v18; // rdx
  unsigned int v19; // ebp
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // [rsp+10h] [rbp-68h]
  _BYTE v23[4]; // [rsp+20h] [rbp-58h] BYREF
  int v24; // [rsp+24h] [rbp-54h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
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
    if ( (unsigned __int8)sub_123660(v6 + 64, a2, 0) )
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
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL);
    sub_121540(v23, *(_QWORD *)(a1 + 56) + 64LL);
    if ( v23[0] == 8 )
    {
      if ( !under_debugger )
        sub_37EA20(51793);
      goto LABEL_50;
    }
    v13 = j__qalloc_or_throw();
    v14 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v13 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v13 + 56) = 0;
    *(_QWORD *)(v13 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v13 + 72) = 0;
    sub_32D4D0(v13, v14);
    *(_DWORD *)v13 = *(_DWORD *)v6;
    v15 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v13 + 68) = 1;
    *(_DWORD *)(v13 + 4) = v15;
    v16 = v7[1];
    if ( v16 )
    {
      sub_122C80(v13 + 48);
      v17 = v13;
      if ( v16 != v6 + 32 )
      {
        while ( 1 )
        {
          sub_122C80(v17 + 32);
          if ( *(_BYTE *)(v6 + 32) != 4 )
            break;
          v6 = *(_QWORD *)(v6 + 40);
          v17 = *(_QWORD *)(v17 + 40);
          if ( v6 + 32 == v16 )
            goto LABEL_26;
        }
        if ( !under_debugger )
          sub_37EA20(50019);
LABEL_50:
        BUG();
      }
LABEL_26:
      if ( !*(_DWORD *)(a1 + 64) )
      {
        v20 = *(unsigned int *)(v6 + 36);
        if ( v24 < (int)v20 )
        {
          v21 = **(unsigned int **)(a1 + 56);
          if ( (unsigned int)(v21 - 8) > 1 || *(_BYTE *)(v6 + 32) != 4 || (_DWORD)v21 != **(_DWORD **)(v6 + 40) )
          {
            if ( !under_debugger )
              sub_37EA20(52678);
            goto LABEL_50;
          }
          sub_11E3A0(v23, v22, v21, *(_QWORD *)(v6 + 24), v20);
        }
      }
      sub_11A5D0(v17 + 32, v23);
    }
    else
    {
      sub_11A5D0(v13 + 32, v23);
      if ( *(_DWORD *)v6 != 29 )
        sub_11E5D0(v13 + 48, v22, 0, *(unsigned int *)(v13 + 36), *(_QWORD *)(v13 + 24), 0);
      v17 = v13;
    }
    v18 = *(unsigned int *)(a1 + 64);
    if ( (_DWORD)v18 )
    {
      v19 = *(_DWORD *)(v6 + 36);
      if ( *(_DWORD *)(v17 + 36) <= (signed int)v19 )
      {
        if ( !under_debugger )
          sub_37EA20(52026);
        goto LABEL_50;
      }
      sub_11E3A0(v17 + 32, v22, v18, *(_QWORD *)(v6 + 24), v19);
      if ( *(_DWORD *)(v17 + 52) > (signed int)v19 )
        sub_11E3A0(v17 + 48, v22, 10, *(_QWORD *)(v6 + 24), v19);
    }
    sub_11A960(a2);
    *(_BYTE *)a2 = 4;
    *(_QWORD *)(a2 + 8) = v13;
    *(_DWORD *)(a2 + 4) = 1;
    *(_BYTE *)(a1 + 40) = 1;
    sub_11A960(v23);
  }
  return 0;
}
