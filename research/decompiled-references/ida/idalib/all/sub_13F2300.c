__int64 __fastcall sub_13F2300(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int *v5; // rdx
  int v6; // r15d
  int *v7; // r12
  int v8; // r14d
  unsigned int v9; // ebx
  int v10; // eax
  _DWORD *v11; // rsi
  unsigned int v12; // r15d
  unsigned int v13; // ebx
  int v14; // eax
  _DWORD *v15; // rsi
  unsigned __int64 v16; // rax
  int v17; // eax
  char v18; // al
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  _QWORD *v21; // r9
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // r9
  char v25; // al
  __int64 *v26; // rdi
  __int64 v27; // rcx
  _DWORD *v28; // rax
  _DWORD *v29; // rdx
  __int64 *v30; // rdi
  __int64 v31; // rcx
  _DWORD *v32; // rax
  _DWORD *v33; // rdx
  char v34; // [rsp+0h] [rbp-54h]
  char v35; // [rsp+0h] [rbp-54h]
  _QWORD *v36; // [rsp+4h] [rbp-50h]
  _QWORD *v37; // [rsp+4h] [rbp-50h]
  _BYTE v38[57]; // [rsp+1Bh] [rbp-39h] BYREF

  result = *(unsigned int *)(a1 + 28);
  *(_BYTE *)(a1 + 36) |= 1u;
  if ( !result )
  {
    *(_DWORD *)(a1 + 32) = 0;
    return result;
  }
  v5 = *(int **)(a1 + 16);
  v6 = *v5;
  v7 = &v5[6 * result - 6];
  v8 = *v7;
  v9 = *v5 & 0x7FFFFFFF;
  if ( v9 >= *(_DWORD *)(a2 + 476) && v9 < *(_DWORD *)(a2 + 480) )
    v10 = *(_DWORD *)(a2 + 472);
  else
    v10 = sub_101D590(a2, v9);
  v38[0] = 0;
  if ( (unsigned int)(v10 + 1) <= 1 )
    goto LABEL_23;
  if ( v10 >= 0 )
  {
    v11 = (_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL * (unsigned int)v10);
    goto LABEL_9;
  }
  v19 = (unsigned int)(-2 - v10);
  v20 = *(_QWORD *)(*(_QWORD *)(a2 + 320) + 8LL * ((unsigned int)(-2 - v10) >> 6));
  if ( _bittest64(&v20, v19) )
  {
    v21 = (_QWORD *)(*(_QWORD *)(a2 + 272) + 8 * ((unsigned __int64)(int)v19 >> 5));
    if ( *v21 )
    {
      v11 = (_DWORD *)(*v21 + 24 * (v19 & 0x1F));
      goto LABEL_9;
    }
    v26 = (__int64 *)(*(_QWORD *)(a2 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v27 = *v26;
    v26[10] += 768;
    v28 = (_DWORD *)((v27 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v26[1] >= (unsigned __int64)(v28 + 192) && v27 )
    {
      *v26 = (__int64)(v28 + 192);
    }
    else
    {
      v37 = v21;
      v35 = v19;
      v28 = (_DWORD *)sub_986170((__int64)v26, 768, 768, 3, v19, (__int64)v21);
      v21 = v37;
      LOBYTE(v19) = v35;
    }
    *v21 = v28;
    v29 = v28 + 192;
    do
    {
      *v28 = 0;
      v28 += 6;
      *((_OWORD *)v28 - 1) = 0;
      *((_QWORD *)v28 - 1) = 0;
    }
    while ( v28 != v29 );
    v18 = v38[0];
    v11 = (_DWORD *)(*v21 + 24 * (v19 & 0x1F));
  }
  else
  {
    v11 = (_DWORD *)sub_101F930(a2, v19, v38);
    v18 = v38[0];
  }
  if ( v18 )
    goto LABEL_23;
LABEL_9:
  if ( !v11 )
  {
LABEL_23:
    v12 = 0;
    goto LABEL_12;
  }
  if ( v6 < 0 )
    v12 = sub_1021390(a2, v11) >> 32;
  else
    v12 = v9 - (*v11 & 0x7FFFFFFF);
LABEL_12:
  v13 = v8 & 0x7FFFFFFF;
  if ( (v8 & 0x7FFFFFFFu) < *(_DWORD *)(a2 + 476) || v13 >= *(_DWORD *)(a2 + 480) )
  {
    v14 = sub_101D590(a2, v13);
    v38[0] = 0;
    if ( (unsigned int)(v14 + 1) > 1 )
    {
LABEL_15:
      if ( v14 >= 0 )
      {
        v15 = (_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL * (unsigned int)v14);
        goto LABEL_17;
      }
      v22 = (unsigned int)(-2 - v14);
      v23 = *(_QWORD *)(*(_QWORD *)(a2 + 320) + 8LL * ((unsigned int)(-2 - v14) >> 6));
      if ( _bittest64(&v23, v22) )
      {
        v24 = (_QWORD *)(*(_QWORD *)(a2 + 272) + 8 * ((unsigned __int64)(int)v22 >> 5));
        if ( *v24 )
        {
          v15 = (_DWORD *)(*v24 + 24 * (v22 & 0x1F));
LABEL_17:
          if ( v15 )
          {
            if ( v8 < 0 )
              v16 = sub_1021390(a2, v15) >> 32;
            else
              LODWORD(v16) = v13 - (*v15 & 0x7FFFFFFF);
            goto LABEL_20;
          }
          goto LABEL_26;
        }
        v30 = (__int64 *)(*(_QWORD *)(a2 + 288) & 0xFFFFFFFFFFFFFFF8LL);
        v31 = *v30;
        v30[10] += 768;
        v32 = (_DWORD *)((v31 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v30[1] >= (unsigned __int64)(v32 + 192) && v31 )
        {
          *v30 = (__int64)(v32 + 192);
        }
        else
        {
          v36 = v24;
          v34 = v22;
          v32 = (_DWORD *)sub_986170((__int64)v30, 768, 768, 3, v22, (__int64)v24);
          v24 = v36;
          LOBYTE(v22) = v34;
        }
        *v24 = v32;
        v33 = v32 + 192;
        do
        {
          *v32 = 0;
          v32 += 6;
          *((_OWORD *)v32 - 1) = 0;
          *((_QWORD *)v32 - 1) = 0;
        }
        while ( v32 != v33 );
        v25 = v38[0];
        v15 = (_DWORD *)(*v24 + 24 * (v22 & 0x1F));
      }
      else
      {
        v15 = (_DWORD *)sub_101F930(a2, v22, v38);
        v25 = v38[0];
      }
      if ( v25 )
      {
        LODWORD(v16) = 0;
        goto LABEL_20;
      }
      goto LABEL_17;
    }
  }
  else
  {
    v14 = *(_DWORD *)(a2 + 472);
    v38[0] = 0;
    if ( (unsigned int)(v14 + 1) > 1 )
      goto LABEL_15;
  }
LABEL_26:
  LODWORD(v16) = 0;
LABEL_20:
  v17 = v16 - v12;
  *(_DWORD *)(a1 + 32) = v17;
  result = (unsigned int)(v7[1] + v17);
  *(_DWORD *)(a1 + 32) = result;
  return result;
}
