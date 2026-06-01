__int64 __fastcall sub_6B37C0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int *v6; // rbx
  unsigned int *v7; // r13
  _DWORD *v8; // rdx
  _DWORD *v9; // rax
  bool v10; // al
  int v11; // r8d
  _QWORD *v12; // rax
  __int64 v13; // rbp
  unsigned int v14; // ebp
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r8
  int v18; // r9d
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  _DWORD *v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // dl
  _DWORD *v30; // rax
  _DWORD *v31; // rdx
  __int64 v32; // rax
  _DWORD *v33; // rax
  _DWORD *v34; // rdx
  _DWORD *v35; // rax
  _DWORD *v36; // rdx
  int v37; // [rsp+8h] [rbp-80h]
  _QWORD *v38; // [rsp+8h] [rbp-80h]
  char v39; // [rsp+8h] [rbp-80h]
  __int64 *v40; // [rsp+8h] [rbp-80h]
  int v41; // [rsp+10h] [rbp-78h]
  __int64 *v42; // [rsp+10h] [rbp-78h]
  int v43; // [rsp+18h] [rbp-70h]
  int v44; // [rsp+18h] [rbp-70h]
  char v45; // [rsp+18h] [rbp-70h]
  int v46; // [rsp+18h] [rbp-70h]
  char v47; // [rsp+18h] [rbp-70h]
  int v48; // [rsp+1Ch] [rbp-6Ch]
  char v49; // [rsp+2Fh] [rbp-59h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v51; // [rsp+38h] [rbp-50h]
  char v52; // [rsp+40h] [rbp-48h] BYREF

  sub_6A83C0(&ptr, a2, *(_QWORD *)(a1 + 2152), a4, a5);
  v6 = (unsigned int *)ptr;
  v7 = (unsigned int *)((char *)ptr + 4 * v51);
  if ( ptr == v7 )
  {
    v13 = 0;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v14 = *v6;
    if ( (int)*v6 <= 0 )
      goto LABEL_15;
    v15 = *(_QWORD *)(a1 + 18200);
    if ( v15 && !*(_BYTE *)(a1 + 18304) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 168LL))(v15);
      *(_BYTE *)(a1 + 18304) = 1;
    }
    if ( (unsigned __int8)sub_AA5B80(a1 + 18224) )
      goto LABEL_15;
    v16 = *(_QWORD *)(a1 + 2152);
    v17 = *(int *)(v16 + 408);
    v18 = v17 + 1;
    if ( (unsigned int)(v17 + 1) <= 1 )
    {
      v8 = *(_DWORD **)(v16 + 184);
      if ( v14 < (*v8 & 0x7FFFFFFFu) )
        goto LABEL_23;
      goto LABEL_5;
    }
    if ( (int)v17 >= 0 )
    {
      v8 = *(_DWORD **)(v16 + 184);
      if ( v14 < (v8[6 * v17] & 0x7FFFFFFFu) )
        goto LABEL_23;
LABEL_5:
      if ( *(_DWORD *)(v16 + 192) != v18 )
      {
        v9 = &v8[6 * v18];
LABEL_7:
        v10 = v14 < (*v9 & 0x7FFFFFFFu);
        goto LABEL_8;
      }
      goto LABEL_28;
    }
    v20 = (unsigned int)(-2 - v17);
    v21 = *(_QWORD *)(*(_QWORD *)(v16 + 256) + 8LL * ((unsigned int)(-2 - v17) >> 6));
    if ( _bittest64(&v21, v20) )
    {
      v32 = *(_QWORD *)(*(_QWORD *)(v16 + 208) + 8 * ((unsigned __int64)(int)v20 >> 5));
      if ( !v32 )
      {
        v48 = v17 + 1;
        v42 = (__int64 *)(*(_QWORD *)(v16 + 208) + 8 * ((unsigned __int64)(int)v20 >> 5));
        v39 = -2 - v17;
        v46 = *(_DWORD *)(v16 + 408);
        v33 = (_DWORD *)sub_6A7810(*(_QWORD *)(v16 + 224) & 0xFFFFFFFFFFFFFFF8LL, 768, 3);
        v18 = v48;
        LOBYTE(v20) = v39;
        LODWORD(v17) = v46;
        v34 = v33 + 192;
        *v42 = (__int64)v33;
        do
        {
          *v33 = 0;
          v33 += 6;
          *((_OWORD *)v33 - 1) = 0;
        }
        while ( v33 != v34 );
        v32 = *v42;
      }
      v22 = (_DWORD *)(v32 + 24 * (v20 & 0x1F));
    }
    else
    {
      v37 = v17 + 1;
      v43 = *(_DWORD *)(v16 + 408);
      v22 = (_DWORD *)sub_CA9380(*(_QWORD *)(a1 + 2152), (unsigned int)v20, 0);
      LODWORD(v17) = v43;
      v18 = v37;
    }
    if ( v14 < (*v22 & 0x7FFFFFFFu) )
      goto LABEL_23;
    if ( (_DWORD)v17 == -2 )
    {
LABEL_9:
      v11 = *(_DWORD *)(v16 + 408);
      goto LABEL_10;
    }
    if ( *(_DWORD *)(v16 + 192) != v18 )
    {
      v23 = (unsigned int)(-2 - v18);
      v24 = *(_QWORD *)(*(_QWORD *)(v16 + 256) + 8LL * ((unsigned int)(-2 - v18) >> 6));
      if ( _bittest64(&v24, v23) )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(v16 + 208) + 8 * ((unsigned __int64)(int)v23 >> 5));
        if ( !v25 )
        {
          v40 = (__int64 *)(*(_QWORD *)(v16 + 208) + 8 * ((unsigned __int64)(int)v23 >> 5));
          v47 = -2 - v18;
          v35 = (_DWORD *)sub_6A7810(*(_QWORD *)(v16 + 224) & 0xFFFFFFFFFFFFFFF8LL, 768, 3);
          LOBYTE(v23) = v47;
          v36 = v35 + 192;
          *v40 = (__int64)v35;
          do
          {
            *v35 = 0;
            v35 += 6;
            *((_OWORD *)v35 - 1) = 0;
          }
          while ( v35 != v36 );
          v25 = *v40;
        }
        v9 = (_DWORD *)(v25 + 24 * (v23 & 0x1F));
      }
      else
      {
        v9 = (_DWORD *)sub_CA9380(v16, (unsigned int)v23, 0);
      }
      goto LABEL_7;
    }
LABEL_28:
    v10 = v14 < *(_DWORD *)(v16 + 248);
LABEL_8:
    if ( v10 )
      goto LABEL_9;
LABEL_23:
    v11 = sub_CA9700(v16, v14);
LABEL_10:
    v49 = 0;
    if ( (unsigned int)(v11 + 1) > 1 )
      break;
LABEL_15:
    if ( v7 == ++v6 )
    {
      v7 = (unsigned int *)ptr;
      v13 = 0;
      goto LABEL_25;
    }
  }
  if ( v11 < 0 )
  {
    v26 = (unsigned int)(-2 - v11);
    v27 = *(_QWORD *)(*(_QWORD *)(v16 + 256) + 8LL * ((unsigned int)(-2 - v11) >> 6));
    if ( _bittest64(&v27, v26) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v16 + 208) + 8 * ((unsigned __int64)(int)v26 >> 5)) )
        goto LABEL_12;
      v41 = v11;
      v38 = (_QWORD *)(*(_QWORD *)(v16 + 208) + 8 * ((unsigned __int64)(int)v26 >> 5));
      v45 = -2 - v11;
      v30 = (_DWORD *)sub_6A7810(*(_QWORD *)(v16 + 224) & 0xFFFFFFFFFFFFFFF8LL, 768, 3);
      v11 = v41;
      v31 = v30 + 192;
      *v38 = v30;
      do
      {
        *v30 = 0;
        v30 += 6;
        *((_OWORD *)v30 - 1) = 0;
      }
      while ( v31 != v30 );
      v29 = v49;
      v28 = *v38 + 24LL * (v45 & 0x1F);
    }
    else
    {
      v44 = v11;
      v28 = sub_CA9380(v16, (unsigned int)v26, &v49);
      v29 = v49;
      v11 = v44;
    }
    if ( v29 || !v28 )
      goto LABEL_15;
  }
LABEL_12:
  v12 = (_QWORD *)sub_AA5AF0(a1 + 18224, (unsigned int)v11);
  if ( !v12 )
    goto LABEL_15;
  if ( !v12[5] )
    goto LABEL_15;
  v13 = sub_6B3230(a1, a2, v14, v12);
  if ( !v13 )
    goto LABEL_15;
  v7 = (unsigned int *)ptr;
LABEL_25:
  if ( v7 != (unsigned int *)&v52 )
    free(v7);
  return v13;
}

