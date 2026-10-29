unsigned __int64 __fastcall sub_13FE530(__int64 a1, int a2, _BYTE *a3, size_t a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 *v18; // rcx
  _QWORD *v19; // r14
  unsigned int v20; // eax
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 *v26; // r13
  __int64 v27; // rax
  unsigned __int64 *v28; // rbx
  unsigned __int64 v29; // rbp
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // esi
  bool v36; // zf
  unsigned __int64 v37; // rdx
  char v38; // dl
  unsigned __int64 v39; // r13
  __int64 v40; // rax
  _QWORD *v41; // r14
  _DWORD *v42; // rax
  _DWORD *v43; // rdx
  unsigned int v44; // [rsp+4h] [rbp-64h]
  __int64 *v45; // [rsp+8h] [rbp-60h]
  unsigned __int64 v46; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 *v47; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v48[8]; // [rsp+28h] [rbp-40h] BYREF

  v9 = sub_13FC7D0(a1, a2, a3, a4, 2, a6);
  *(_QWORD *)(a1 + 72) = v9;
  v10 = v9;
  v11 = sub_2244B30(a3, a4);
  v12 = (unsigned int)sub_2244CB0(a1 + 256, a3, a4, v11);
  v14 = (__int64 *)(*(_QWORD *)(a1 + 256) + 8 * v12);
  if ( *v14 )
  {
    if ( *v14 != -8 )
    {
      sub_13FA370(v48, v14, 0);
      v15 = v48[0];
      goto LABEL_8;
    }
    --*(_DWORD *)(a1 + 272);
  }
  v45 = v14;
  v44 = v12;
  v16 = sub_22300B0(a4 + 17, 8, v12, v14, v12, v13);
  v17 = v44;
  v18 = v45;
  v19 = (_QWORD *)v16;
  if ( a4 )
  {
    memcpy((void *)(v16 + 16), a3, a4);
    v18 = v45;
    v17 = v44;
  }
  *((_BYTE *)v19 + a4 + 16) = 0;
  *v19 = a4;
  v19[1] = 0;
  *v18 = (__int64)v19;
  ++*(_DWORD *)(a1 + 268);
  v20 = sub_22450D0(a1 + 256, v17);
  sub_13FA370(v48, (__int64 *)(*(_QWORD *)(a1 + 256) + 8LL * v20), 0);
  v15 = v48[0];
LABEL_8:
  *(_QWORD *)(*v15 + 8) = v10;
  v21 = *(_QWORD **)a1;
  v22 = *(unsigned int *)(*(_QWORD *)a1 + 520LL);
  LOBYTE(v48[0]) = 0;
  if ( (unsigned int)(v22 + 1) <= 1 )
    goto LABEL_25;
  if ( (int)v22 < 0 )
  {
    v39 = (unsigned int)(-2 - v22);
    v40 = *(_QWORD *)(v21[40] + 8LL * ((unsigned int)(-2 - v22) >> 6));
    if ( _bittest64(&v40, v39) )
    {
      v41 = (_QWORD *)(v21[34] + 8 * ((unsigned __int64)(int)v39 >> 5));
      if ( *v41 )
      {
        v23 = *v41 + 24 * (v39 & 0x1F);
        goto LABEL_11;
      }
      v42 = (_DWORD *)sub_13FC0F0((__int64 *)(v21[36] & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      *v41 = v42;
      v43 = v42 + 192;
      do
      {
        *v42 = 0;
        v42 += 6;
        *((_OWORD *)v42 - 1) = 0;
        *((_QWORD *)v42 - 1) = 0;
      }
      while ( v42 != v43 );
      v38 = (char)v48[0];
      v23 = *v41 + 24 * (v39 & 0x1F);
    }
    else
    {
      v23 = sub_101F930((__int64)v21, v39, v48);
      v38 = (char)v48[0];
    }
    if ( v38 )
      goto LABEL_25;
    goto LABEL_11;
  }
  v23 = v21[23] + 24 * v22;
LABEL_11:
  if ( v23 && *(char *)(v23 + 3) >= 0 )
  {
    v24 = *(_QWORD *)((*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    goto LABEL_14;
  }
LABEL_25:
  v24 = 0;
LABEL_14:
  v46 = v24;
  if ( (unsigned __int8)sub_13F7990((__int64 *)(a1 + 368), &v46, &v47) )
  {
    v26 = v47;
    v27 = *((unsigned int *)v47 + 4);
    v28 = v47 + 1;
    v29 = v10 & 0xFFFFFFFFFFFFFFF8LL | 1;
    if ( *((unsigned int *)v47 + 5) < (unsigned __int64)(v27 + 1) )
    {
      sub_2237220(v47 + 1, v47 + 3, v27 + 1, 8);
      v27 = *((unsigned int *)v26 + 4);
    }
    goto LABEL_17;
  }
  v31 = (__int64 *)v47;
  v32 = (unsigned int)(*(_DWORD *)(a1 + 376) + 1);
  v33 = *(unsigned int *)(a1 + 384);
  v48[0] = (__int64 *)v47;
  v34 = (unsigned int)(4 * v32);
  v35 = 2 * v33;
  if ( (unsigned int)v34 >= 3 * (int)v33 )
    goto LABEL_30;
  if ( (int)v33 - *(_DWORD *)(a1 + 380) - (int)v32 <= (unsigned int)v33 >> 3 )
  {
    v35 = v33;
LABEL_30:
    sub_13FE1D0(a1 + 368, v35, v32, v33, v34, v25);
    sub_13F7990((__int64 *)(a1 + 368), &v46, (unsigned __int64 **)v48);
    LODWORD(v32) = *(_DWORD *)(a1 + 376) + 1;
    v31 = v48[0];
  }
  v36 = *v31 == -4096;
  *(_DWORD *)(a1 + 376) = v32;
  if ( !v36 )
    --*(_DWORD *)(a1 + 380);
  v37 = v46;
  v28 = (unsigned __int64 *)(v31 + 1);
  v31[2] = 0x100000000LL;
  *v31 = v37;
  v29 = v10 & 0xFFFFFFFFFFFFFFF8LL | 1;
  v31[1] = (__int64)(v31 + 3);
  v27 = 0;
LABEL_17:
  *(_QWORD *)(*v28 + 8 * v27) = v29;
  ++*((_DWORD *)v28 + 2);
  return v10;
}
