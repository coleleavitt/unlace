__int64 __fastcall sub_B15100(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r15
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // r12
  unsigned int v8; // ecx
  __int64 v9; // r14
  __int64 v10; // rdx
  void *v11; // r12
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r14
  void *v21; // r13
  __int64 v22; // rsi
  int v24; // [rsp+0h] [rbp-D8h]
  char *v25; // [rsp+8h] [rbp-D0h]
  __int64 v26; // [rsp+10h] [rbp-C8h]
  __int64 *v27; // [rsp+18h] [rbp-C0h]
  __int64 v28; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-B0h]
  __int64 v30; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-A0h]
  char v32[16]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v33[16]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v34; // [rsp+60h] [rbp-78h] BYREF
  int v35; // [rsp+68h] [rbp-70h]
  __int128 v36; // [rsp+70h] [rbp-68h]
  _QWORD v37[11]; // [rsp+80h] [rbp-58h] BYREF

  v26 = a1;
  v34 = *a2;
  v4 = v34;
  sub_180C5A0(v32, "pb");
  v35 = sub_15DA4C0(v4 + 560, v32);
  v37[0] = 0;
  v37[1] = 0;
  v37[2] = 1;
  v37[3] = 0;
  v28 = 0;
  v29 = 0;
  v30 = 1;
  v31 = 0;
  v36 = 0;
  sub_182CBA0(qword_1C7F2C0, &v30);
  v7 = *(_QWORD *)(a1 + 8);
  BYTE4(v30) &= ~1u;
  LODWORD(v30) = 1;
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 )
  {
    v9 = 0;
    v25 = (char *)&v28;
    v27 = &v34;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v9);
        if ( *(_QWORD *)(v4 + 856) != v10 )
          break;
        sub_168DB50(
          (unsigned int)v32,
          (_DWORD)v27,
          *(_QWORD *)(v7 + 16),
          v9,
          v5,
          v6,
          v24,
          (_DWORD)v25,
          v26,
          (_DWORD)v27,
          v28,
          v29,
          v30,
          v31);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v25, (__int64)v32, (__int64)v25);
        v11 = qword_1C7F2C0;
        ++v9;
        sub_182CBA0(qword_1C7F2C0, v32);
        sub_182CBA0(v11, v33);
        v7 = *(_QWORD *)(v26 + 8);
        v8 = *(_DWORD *)(v7 + 24);
        if ( (unsigned int)v9 >= v8 )
          goto LABEL_7;
      }
      if ( v10 != *(_QWORD *)(v4 + 864) )
        goto LABEL_14;
      ++v9;
    }
    while ( (unsigned int)v9 < v8 );
  }
  else
  {
    v25 = (char *)&v28;
  }
LABEL_7:
  sub_168DDF0(v32, &v34, *(_QWORD *)(v7 + 16));
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL) + 24LL);
  if ( !v12 )
    goto LABEL_30;
  v13 = *(_DWORD *)(v12 + 4);
  if ( v13 == 2 )
  {
LABEL_27:
    if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v32, (__int64)v25) )
      goto LABEL_13;
    goto LABEL_28;
  }
  if ( v13 <= 2 )
  {
    if ( v13 )
    {
      if ( v13 == 1 )
        goto LABEL_12;
LABEL_30:
      sub_1872CE0("");
      sub_1873130(114, 2339);
    }
    goto LABEL_27;
  }
  if ( v13 != 3 )
    goto LABEL_30;
LABEL_12:
  if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v25, (__int64)v32) )
  {
LABEL_13:
    v7 = *(_QWORD *)(v4 + 864);
    sub_25A130(v32);
    goto LABEL_14;
  }
LABEL_28:
  v7 = *(_QWORD *)(v4 + 856);
  sub_25A130(v32);
LABEL_14:
  sub_25A130(v25);
  sub_25A130((char *)v37);
  v14 = *((_QWORD *)&v36 + 1);
  if ( *((_QWORD *)&v36 + 1) )
  {
    v15 = *(unsigned int *)(*((_QWORD *)&v36 + 1) - 4LL);
    if ( (_DWORD)v15 )
    {
      v16 = *((_QWORD *)&v36 + 1) + 16 * v15;
      do
      {
        v17 = v14;
        v14 += 16;
        sub_15D0DF0(v17);
      }
      while ( v16 != v14 );
      v14 = *((_QWORD *)&v36 + 1);
    }
    sub_186B220((void *)(v14 - 8));
  }
  v18 = v36;
  if ( (_QWORD)v36 )
  {
    v19 = *(unsigned int *)(v36 - 4);
    if ( (_DWORD)v19 )
    {
      v20 = v36 + 32 * v19;
      do
      {
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v18);
        v22 = v18 + 16;
        v18 += 32;
        sub_182CBA0(v21, v22);
      }
      while ( v20 != v18 );
      v18 = v36;
    }
    sub_186B220((void *)(v18 - 8));
  }
  return v7;
}

