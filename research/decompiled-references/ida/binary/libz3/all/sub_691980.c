__int64 __fastcall sub_691980(__int64 a1, __int64 a2, unsigned int **a3)
{
  _OWORD *v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v10; // r8
  _DWORD *v11; // r10
  int v12; // edi
  char *v13; // rcx
  __int64 v14; // rax
  char *v15; // rsi
  __int64 v16; // rdx
  char *v17; // r9
  __int64 *i; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rax
  unsigned int v27; // [rsp+4h] [rbp-74h] BYREF
  __int64 v28; // [rsp+8h] [rbp-70h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v30; // [rsp+18h] [rbp-60h]
  int v31; // [rsp+20h] [rbp-58h]
  _BYTE v32[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = (_OWORD *)sub_186B270(0x80u);
  v7 = *(_QWORD *)(a1 + 4528);
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  ptr = v6;
  v30 = 8;
  v31 = 0;
  v28 = 0;
  sub_FC0E10(v7, &ptr, &v28);
  sub_16744A0(v32, *(_QWORD *)(a1 + 8));
  if ( *(_WORD *)(a2 + 4) || *(_DWORD *)(a2 + 24) )
    goto LABEL_3;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *(_DWORD **)(v10 + 24);
  if ( v11 && *v11 != -1 )
    goto LABEL_11;
  v8 = sub_15D2CB0(*(_QWORD *)(a1 + 8), a2);
  if ( (_BYTE)v8 )
  {
    v27 = sub_7E6C80(a1 + 4480);
    if ( v27 != 0x7FFFFFFF )
    {
      sub_68D0F0(a3, &v27);
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  if ( *(_WORD *)(a2 + 4) || *(_DWORD *)(a2 + 24) )
    goto LABEL_3;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *(_DWORD **)(v10 + 24);
  if ( v11 )
  {
LABEL_11:
    if ( *v11 == -1 )
      goto LABEL_12;
LABEL_3:
    v8 = 0;
    goto LABEL_4;
  }
LABEL_12:
  v12 = *(_DWORD *)(v10 + 12);
  v13 = (char *)ptr;
  v14 = 16LL * (unsigned int)v30;
  v15 = (char *)ptr + v14;
  v16 = 16LL * (v12 & (unsigned int)(v30 - 1));
  v17 = (char *)ptr + v16;
  if ( v16 != v14 )
  {
    for ( i = (__int64 *)((char *)ptr + v16); v15 != (char *)i; i += 2 )
    {
      v19 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v19 + 12) == v12 && v10 == v19 )
          goto LABEL_28;
      }
      else if ( !v19 )
      {
        goto LABEL_19;
      }
    }
  }
  if ( ptr == v17 )
  {
LABEL_19:
    if ( !v11 || *v11 == -1 )
    {
      v20 = sub_15D1F10(a2);
      sub_1673B10(v32, v20);
    }
    goto LABEL_3;
  }
  while ( 1 )
  {
    v26 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 > 1u )
      break;
    if ( !v26 )
      goto LABEL_19;
LABEL_38:
    v13 += 16;
    if ( v17 == v13 )
      goto LABEL_19;
  }
  if ( *(_DWORD *)(v26 + 12) != v12 || v10 != v26 )
    goto LABEL_38;
  i = (__int64 *)v13;
LABEL_28:
  v21 = i[1];
  v8 = 1;
  v22 = a1 + 4480;
  v23 = v21 + 32;
  v24 = 8LL * *(unsigned int *)(v21 + 24);
  v25 = v23 + v24;
  if ( v24 )
  {
    do
    {
      v27 = sub_7E6C80(v22);
      if ( v27 == 0x7FFFFFFF )
        v8 = 0;
      else
        sub_68D0F0(a3, &v27);
      v23 += 8;
    }
    while ( v25 != v23 );
  }
LABEL_4:
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  if ( ptr )
    sub_186B220(ptr);
  return v8;
}

