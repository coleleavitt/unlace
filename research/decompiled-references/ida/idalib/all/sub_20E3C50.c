void __fastcall sub_20E3C50(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r11
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  unsigned int v16; // ecx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r8
  int v20; // ecx
  char *v21; // rsi
  bool v22; // zf
  unsigned __int64 *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rdx
  __int64 *v30; // rcx
  __int64 v31; // rsi
  int v32; // ecx
  char *v33; // rsi
  unsigned int v34; // r14d
  __int64 v35; // [rsp+0h] [rbp-B8h]
  int v36; // [rsp+0h] [rbp-B8h]
  int v37; // [rsp+0h] [rbp-B8h]
  __int64 v38; // [rsp+8h] [rbp-B0h]
  int v39; // [rsp+8h] [rbp-B0h]
  int v40; // [rsp+8h] [rbp-B0h]
  __int64 v41; // [rsp+10h] [rbp-A8h]
  int v42; // [rsp+1Ch] [rbp-9Ch]
  void *v43; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v44; // [rsp+28h] [rbp-90h]
  _QWORD v45[4]; // [rsp+30h] [rbp-88h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int64 v47; // [rsp+58h] [rbp-60h]
  _BYTE v48[88]; // [rsp+60h] [rbp-58h] BYREF

  v2 = *(_DWORD *)(a1 + 264);
  if ( !v2 )
    goto LABEL_2;
  LODWORD(v3) = *(_DWORD *)(a1 + 268);
  v4 = v45;
  v44 = 0x400000000LL;
  v43 = v45;
  ptr = v48;
  v47 = 0x400000000LL;
  if ( (_DWORD)v3 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    LODWORD(v44) = 1;
    v45[0] = v5;
    if ( (_DWORD)v3 == 1 )
    {
      v42 = v2 - 1;
      if ( v2 == 1 )
        goto LABEL_34;
    }
    else
    {
      v6 = 1;
      v3 = 1;
      do
      {
        v7 = *(_QWORD *)(a1 + 8 * v6 + 8);
        if ( v3 + 1 <= (unsigned __int64)HIDWORD(v44) )
        {
          *((_QWORD *)v43 + v3) = v7;
        }
        else
        {
          sub_2237220(&v43, v45, v3 + 1, 8);
          *((_QWORD *)v43 + (unsigned int)v44) = v7;
        }
        ++v6;
        v3 = (unsigned int)(v44 + 1);
        LODWORD(v44) = v44 + 1;
      }
      while ( *(_DWORD *)(a1 + 268) != (_DWORD)v6 );
      v42 = *(_DWORD *)(a1 + 264) - 1;
      if ( *(_DWORD *)(a1 + 264) == 1 )
        goto LABEL_33;
    }
    v4 = v43;
    v8 = (unsigned int)v47;
  }
  else
  {
    v42 = v2 - 1;
    if ( v2 == 1 )
      goto LABEL_38;
    v8 = 0;
  }
  while ( 2 )
  {
    if ( !(_DWORD)v3 )
      goto LABEL_22;
    v9 = 0;
    v35 = 8LL * (unsigned int)(v3 - 1);
    while ( 2 )
    {
      v10 = v4[v9 / 8];
      v11 = 0;
      v12 = 8 * (v10 & 0x3F) + 8;
      while ( 1 )
      {
        v13 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFC0LL) + v11);
        if ( v8 + 1 > (unsigned __int64)HIDWORD(v47) )
          break;
        v11 += 8;
        *((_QWORD *)ptr + v8) = v13;
        v8 = (unsigned int)(v47 + 1);
        LODWORD(v47) = v47 + 1;
        if ( v12 == v11 )
          goto LABEL_18;
LABEL_15:
        v10 = *(_QWORD *)((char *)v43 + v9);
      }
      v41 = v12;
      v38 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFC0LL) + v11);
      v11 += 8;
      sub_2237220(&ptr, v48, v8 + 1, 8);
      v12 = v41;
      *((_QWORD *)ptr + (unsigned int)v47) = v38;
      v8 = (unsigned int)(v47 + 1);
      LODWORD(v47) = v47 + 1;
      if ( v11 != v41 )
        goto LABEL_15;
LABEL_18:
      v14 = *(_QWORD **)(a1 + 272);
      v15 = (_QWORD *)(*(_QWORD *)((_BYTE *)v43 + v9) & 0xFFFFFFFFFFFFFFC0LL);
      *v15 = *v14;
      *v14 = v15;
      v4 = v43;
      if ( v35 != v9 )
      {
        v9 += 8LL;
        continue;
      }
      break;
    }
LABEL_22:
    LODWORD(v44) = 0;
    if ( v4 != v45 && ptr != v48 )
    {
      v43 = ptr;
      v16 = HIDWORD(v47);
      ptr = v4;
      LODWORD(v47) = 0;
      HIDWORD(v47) = HIDWORD(v44);
      v44 = __PAIR64__(v16, v8);
      LODWORD(v3) = v8;
      v8 = 0;
      goto LABEL_25;
    }
    v17 = (unsigned int)v8;
    if ( HIDWORD(v44) < (unsigned int)v8 )
    {
      sub_2237220(&v43, v45, (unsigned int)v8, 8);
      v18 = (unsigned int)v44;
      LODWORD(v3) = v44;
      if ( HIDWORD(v47) < (unsigned int)v44 )
      {
        sub_2237220(&ptr, v48, (unsigned int)v44, 8);
        v18 = (unsigned int)v44;
        LODWORD(v3) = v44;
      }
      v8 = (unsigned int)v47;
      v17 = (unsigned int)v47;
      v19 = (unsigned int)v47;
      if ( v18 <= (unsigned int)v47 )
        v19 = v18;
      if ( v19 )
      {
        v28 = 0;
        do
        {
          v29 = (__int64 *)((char *)ptr + v28);
          v30 = (__int64 *)((char *)v43 + v28);
          v28 += 8;
          v31 = *v30;
          *v30 = *v29;
          *v29 = v31;
        }
        while ( v28 != 8 * v19 );
        v18 = (unsigned int)v44;
        v8 = (unsigned int)v47;
        LODWORD(v3) = v44;
        v17 = (unsigned int)v47;
      }
      if ( v18 > v17 )
      {
        v32 = v17;
        v33 = (char *)v43 + 8 * v19;
        if ( v33 != (char *)v43 + 8 * v18 )
        {
          v40 = v19;
          v37 = v17;
          memcpy((char *)ptr + 8 * v17, v33, 8 * v18 - 8 * v19);
          v32 = v47;
          LODWORD(v19) = v40;
          LODWORD(v17) = v37;
        }
        LODWORD(v44) = v19;
        v34 = v32 + v18 - v17;
        LODWORD(v3) = v19;
        v8 = v34;
        LODWORD(v47) = v34;
        goto LABEL_25;
      }
    }
    else
    {
      v18 = 0;
      LODWORD(v3) = 0;
      v19 = 0;
    }
    if ( v17 <= v18 )
    {
LABEL_25:
      if ( --v42 )
        goto LABEL_26;
    }
    else
    {
      v20 = v18;
      v21 = (char *)ptr + 8 * v19;
      if ( v21 != (char *)ptr + 8 * v17 )
      {
        v39 = v17;
        v36 = v19;
        memcpy((char *)v43 + 8 * v18, v21, 8 * v17 - 8 * v19);
        v20 = v44;
        LODWORD(v17) = v39;
        LODWORD(v19) = v36;
      }
      v8 = (unsigned int)v19;
      LODWORD(v47) = v19;
      v22 = v42-- == 1;
      LODWORD(v3) = v20 + v17 - v18;
      LODWORD(v44) = v3;
      if ( !v22 )
      {
LABEL_26:
        v4 = v43;
        continue;
      }
    }
    break;
  }
LABEL_33:
  if ( (_DWORD)v3 )
  {
LABEL_34:
    v23 = *(unsigned __int64 **)(a1 + 272);
    v24 = 0;
    v25 = 8LL * (unsigned int)(v3 - 1) + 8;
    v26 = *v23;
    do
    {
      v27 = *(_QWORD *)((char *)v43 + v24);
      v24 += 8;
      v27 &= 0xFFFFFFFFFFFFFFC0LL;
      *(_QWORD *)v27 = v26;
      v26 = v27;
      *v23 = v27;
    }
    while ( v25 != v24 );
  }
  if ( ptr != v48 )
    free(ptr);
LABEL_38:
  if ( v43 != v45 )
    free(v43);
  *(_DWORD *)(a1 + 264) = 0;
  memset((void *)a1, 0, 0x100u);
LABEL_2:
  *(_DWORD *)(a1 + 268) = 0;
}
