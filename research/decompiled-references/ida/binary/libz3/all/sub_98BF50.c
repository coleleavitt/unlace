__int64 __fastcall sub_98BF50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int v12; // r11d
  unsigned int v13; // r13d
  __int64 v14; // r14
  unsigned int v15; // r10d
  int v16; // edx
  void *v17; // r12
  int v18; // ecx
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // rsi
  __int64 v25; // r9
  __int64 v26; // [rsp+0h] [rbp-78h]
  unsigned int v28; // [rsp+10h] [rbp-68h]
  unsigned __int8 v29; // [rsp+1Fh] [rbp-59h]
  _QWORD v30[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v31[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = 0;
  if ( *(int *)a5 >= 0 )
    return v5;
  v30[0] = 4294967294LL;
  v30[1] = 0;
  v31[0] = 1;
  v31[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v31);
  BYTE4(v31[0]) &= ~1u;
  LODWORD(v31[0]) = 1;
  sub_9AF730(qword_1C7F2C0, v30, a2, v30);
  sub_9AF730(qword_1C7F2C0, v30, a4, v30);
  LOBYTE(v9) = sub_3ED680((__int64)qword_1C7F2C0, a5, (__int64)v30);
  v5 = v9;
  if ( !(_BYTE)v9 )
    goto LABEL_11;
  v10 = *(_QWORD *)(a1 + 32);
  v26 = v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(a3 + 32);
    v12 = *(_DWORD *)(v10 - 4);
    if ( !v11 )
    {
      LODWORD(v10) = *(_DWORD *)(v10 - 4);
      v13 = 0;
LABEL_7:
      v14 = *(_QWORD *)(a5 + 32);
      if ( !v14 )
      {
        v16 = 0;
        v15 = 0;
LABEL_9:
        if ( v16 != (_DWORD)v10 )
        {
LABEL_10:
          v5 = 0;
          goto LABEL_11;
        }
        goto LABEL_15;
      }
LABEL_8:
      v15 = *(_DWORD *)(v14 - 4);
      v16 = 2 * v15;
      goto LABEL_9;
    }
LABEL_6:
    v13 = *(_DWORD *)(v11 - 4);
    LODWORD(v10) = v12 + v13;
    goto LABEL_7;
  }
  v11 = *(_QWORD *)(a3 + 32);
  v12 = 0;
  if ( v11 )
    goto LABEL_6;
  v14 = *(_QWORD *)(a5 + 32);
  v13 = 0;
  if ( v14 )
    goto LABEL_8;
  v15 = 0;
LABEL_15:
  v28 = v15;
  v18 = 1;
  v19 = 0;
  v29 = v5;
  v20 = 0;
  v21 = 0;
  v5 = v15 + 1;
  while ( 1 )
  {
    if ( v21 < v12 )
    {
      v22 = 0;
      v23 = *(_QWORD *)(v26 + 8LL * v21);
      v24 = v23;
      if ( v20 >= v13 )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( v20 >= v13 )
      break;
    v24 = 0;
    v23 = 0;
LABEL_21:
    v22 = *(_QWORD *)(v11 + 8LL * v20);
    v24 |= v22;
LABEL_22:
    if ( v18 == v5 )
    {
      LOBYTE(v5) = v24 == 0;
      goto LABEL_11;
    }
    v25 = *(_QWORD *)(v14 + 8 * v19);
    if ( !v24 )
    {
      LOBYTE(v5) = v25 == 0;
      goto LABEL_11;
    }
    if ( !v25 )
      goto LABEL_10;
    if ( v25 == v23 )
    {
      v21 += 2;
    }
    else
    {
      if ( v22 != v25 )
        goto LABEL_10;
      v20 += 2;
    }
    ++v19;
    ++v18;
  }
  v5 = v29;
  if ( (unsigned int)v19 < v28 )
    LOBYTE(v5) = *(_QWORD *)(v14 + 8 * v19) == 0;
LABEL_11:
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v30);
  sub_182CBA0(v17, v31);
  return v5;
}

