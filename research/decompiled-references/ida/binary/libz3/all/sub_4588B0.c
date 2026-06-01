__int64 __fastcall sub_4588B0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // r15
  int v8; // r14d
  __int64 v9; // rbp
  int *v10; // rax
  int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  unsigned int v15; // r14d
  __int64 *v16; // rbp
  __int64 v17; // rsi
  __int64 v19; // [rsp+10h] [rbp-78h] BYREF
  __int64 *v20; // [rsp+18h] [rbp-70h]
  _BYTE v21[16]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v22[22]; // [rsp+30h] [rbp-58h] BYREF

  if ( (unsigned int)sub_3D4AD0(*a1) != 1 )
    return 0;
  v3 = a2[1];
  v4 = *a1;
  v20 = nullptr;
  v19 = v3;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  v5 = (_QWORD *)sub_186B270(0x18u);
  v5[1] = v4;
  v20 = v5 + 1;
  *v5 = 0x100000002LL;
  sub_15EE300(&v19);
  v6 = v20;
  if ( !v20 )
    return 0;
  v7 = &v20[*((unsigned int *)v20 - 1)];
  if ( v7 == v20 )
  {
    v15 = 0;
    goto LABEL_29;
  }
  v8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *v6;
      sub_16744A0(v22, v3);
      sub_16669D0(v21, v3);
      if ( *(_WORD *)(v9 + 4) )
        goto LABEL_8;
      v10 = *(int **)(*(_QWORD *)(v9 + 16) + 24LL);
      if ( !v10 )
        goto LABEL_8;
      v11 = *v10;
      if ( *v10 )
      {
        if ( v11 == 5 )
          goto LABEL_13;
        goto LABEL_7;
      }
      if ( v10[1] == 8 && *(_DWORD *)(v9 + 24) == 1 )
        break;
LABEL_7:
      if ( v11 != v22[0] || v10[1] != 22 && v10[1] != 23 )
        goto LABEL_8;
LABEL_13:
      if ( (unsigned int)sub_3D4AD0(v9) != 1 || (unsigned __int8)sub_3D9C60(v9, v3) )
        goto LABEL_8;
      if ( v8 )
        goto LABEL_36;
LABEL_16:
      v12 = *a2;
      ++*(_DWORD *)(v9 + 8);
      if ( v12 )
      {
        v13 = a2[1];
        v14 = (*(_DWORD *)(v12 + 8))-- == 1;
        if ( v14 )
          sub_15D7BC0(v13, v12);
      }
      ++v6;
      *a2 = v9;
      v8 = 1;
      if ( v7 == v6 )
      {
LABEL_20:
        v6 = v20;
        v15 = v8 & 1;
        goto LABEL_21;
      }
    }
    if ( (unsigned __int8)sub_458800(*(_QWORD *)(v9 + 32), v3) )
      break;
LABEL_8:
    if ( v7 == ++v6 )
      goto LABEL_20;
  }
  if ( !v8 )
    goto LABEL_16;
LABEL_36:
  v6 = v20;
  v15 = 0;
LABEL_21:
  if ( v6 )
  {
    v16 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v16 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v17 = *v6;
        if ( *v6 )
        {
          v14 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v6 >= v16 )
          goto LABEL_28;
      }
      sub_15D7BC0(v19, v17);
      ++v6;
    }
    while ( v6 < v16 );
LABEL_28:
    v6 = v20;
    if ( v20 )
LABEL_29:
      sub_186B220(v6 - 1);
  }
  return v15;
}

