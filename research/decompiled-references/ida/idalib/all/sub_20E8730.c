__int64 __fastcall sub_20E8730(__int64 *a1, unsigned int a2)
{
  _QWORD *v3; // r14
  __int64 v4; // r12
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned int v8; // r10d
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r10d
  char v15; // dl
  unsigned __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rbp
  unsigned int i; // r13d
  unsigned int v23; // edi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 *v29; // rdi
  __int64 v30; // rdi
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 *v34; // rsi
  unsigned int j; // r12d
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // [rsp+4h] [rbp-A4h]
  int v41; // [rsp+8h] [rbp-A0h]
  unsigned int v42; // [rsp+8h] [rbp-A0h]
  int v43; // [rsp+10h] [rbp-98h]
  int v44; // [rsp+10h] [rbp-98h]
  char v45; // [rsp+17h] [rbp-91h]
  unsigned int v46; // [rsp+18h] [rbp-90h]
  __int64 v47; // [rsp+18h] [rbp-90h]
  unsigned int v48; // [rsp+20h] [rbp-88h]
  unsigned int v49; // [rsp+28h] [rbp-80h]
  unsigned __int8 v50; // [rsp+28h] [rbp-80h]
  int v51; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v52[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v53[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v54[11]; // [rsp+50h] [rbp-58h] BYREF

  v3 = a1 + 1;
  v4 = 16LL * a2;
  v5 = *(_DWORD *)(a1[1] + v4 + 12);
  v6 = sub_2227E70(a1 + 1, a2);
  v7 = v6;
  if ( v6 )
  {
    v45 = 1;
    v54[0] = v6 & 0xFFFFFFFFFFFFFFC0LL;
    v8 = (v6 & 0x3F) + 1;
    v51 = 4;
    v52[0] = v8;
    v5 += v8;
    v46 = 48;
    v41 = 3;
    v48 = 32;
    v40 = 2;
    v43 = 1;
  }
  else
  {
    v45 = 0;
    v8 = 0;
    v51 = 3;
    v46 = 32;
    v41 = 2;
    v48 = 16;
    v40 = 1;
    v43 = 0;
  }
  v9 = v4 + a1[1];
  v10 = *(_DWORD *)(v9 + 8);
  v52[v43] = v10;
  v49 = v10 + v8;
  v54[v43] = *(_QWORD *)v9;
  v11 = sub_22280F0(v3, a2);
  v14 = v49;
  if ( v11 )
  {
    v15 = v11;
    v16 = v11 & 0xFFFFFFFFFFFFFFC0LL;
    v45 = 1;
    v17 = (v15 & 0x3F) + 1;
    v54[v40] = v16;
    v14 = v17 + v49;
    v52[v40] = v17;
    if ( v46 < v17 + v49 + 1 )
      goto LABEL_5;
    v45 = 0;
    v44 = 0;
    v40 = v41;
  }
  else
  {
    if ( v49 + 1 > v48 )
    {
      if ( v40 == 1 )
      {
        v17 = v52[1];
        v16 = v54[1];
        v41 = 1;
        v44 = 1;
        v45 = 1;
        v40 = 2;
        goto LABEL_6;
      }
      v37 = v41;
      v17 = v52[v43];
      v41 = 2;
      v16 = v54[v43];
      v51 = v37;
      v40 = v43;
LABEL_5:
      v44 = v40;
      v40 = v51;
LABEL_6:
      v54[v41] = v16;
      v18 = *a1;
      v52[v41] = v17;
      v19 = *(_QWORD *)(v18 + 272);
      v52[v44] = 0;
      v20 = *(_QWORD **)v19;
      if ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = *v20;
      }
      else
      {
        v38 = *(_QWORD *)(v19 + 8);
        *(_QWORD *)(v19 + 88) += 192LL;
        v20 = (_QWORD *)((v38 + 63) & 0xFFFFFFFFFFFFFFC0LL);
        if ( *(_QWORD *)(v19 + 16) >= (unsigned __int64)(v20 + 24) && v38 )
        {
          *(_QWORD *)(v19 + 8) = v20 + 24;
        }
        else
        {
          v42 = v14;
          v39 = sub_986170(v19 + 8, 192, 192, 6, v12, v13);
          v14 = v42;
          v20 = (_QWORD *)v39;
        }
      }
      memset(v20, 0, 0xC0u);
      v54[v44] = (__int64)v20;
      goto LABEL_9;
    }
    v45 = 0;
    v44 = 0;
  }
LABEL_9:
  v47 = sub_2228330(v40, v14, 16, (unsigned int)v52, (unsigned int)v53, v5, 1);
  sub_20E6C10(v54, v40, v52, v53);
  if ( v7 )
    ((void (__fastcall *)(_QWORD *, _QWORD))sub_2227F30)(v3, a2);
  v50 = 0;
  v21 = 0;
  for ( i = a2; ; sub_22281D0(v3, i) )
  {
    v23 = v53[v21];
    v24 = v54[v21];
    v25 = v23 - 1;
    v26 = *(unsigned int *)(v24 + 4 * v25 + 128);
    if ( v44 == (_DWORD)v21 && v45 )
    {
      v50 = sub_20E8BA0(a1, i, v24 & 0xFFFFFFFFFFFFFFC0LL | v25, v26);
      i += v50;
      goto LABEL_15;
    }
    v27 = a1[1];
    *(_DWORD *)(v27 + 16LL * i + 8) = v23;
    if ( i )
      break;
LABEL_15:
    if ( ++v21 == v40 )
      goto LABEL_24;
LABEL_16:
    ;
  }
  v28 = 16LL * (i - 1);
  v29 = (unsigned __int64 *)(*(_QWORD *)(v28 + v27) + 8LL * *(unsigned int *)(v28 + v27 + 12));
  *v29 = *v29 & 0xFFFFFFFFFFFFFFC0LL | v25;
  v30 = a1[1];
  v31 = (__int64 *)(v30 + v28);
  while ( (__int64 *)v30 != v31 )
  {
    v32 = *v31;
    v33 = *((unsigned int *)v31 + 3);
    v34 = v31;
    v31 -= 2;
    *(_DWORD *)(v32 + 4 * v33 + 128) = v26;
    v25 = (unsigned int)(*((_DWORD *)v34 + 2) - 1);
    if ( *((_DWORD *)v34 + 3) != (_DWORD)v25 )
      goto LABEL_15;
  }
  v25 = *(unsigned int *)(v30 + 12);
  ++v21;
  *(_DWORD *)(*(_QWORD *)v30 + 4 * v25 + 168) = v26;
  if ( v21 != v40 )
    goto LABEL_16;
LABEL_24:
  for ( j = v40 - 1; j != (_DWORD)v47; --j )
    sub_2227F30(v3, i, v25);
  *(_DWORD *)(a1[1] + 16LL * i + 12) = HIDWORD(v47);
  return v50;
}
