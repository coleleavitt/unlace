unsigned __int64 __fastcall sub_681680(__int64 a1, __int64 a2, __int64 a3, void **a4, __int64 a5)
{
  __int64 v8; // r12
  __int64 i; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // edi
  char v13; // cl
  __int64 v14; // r15
  __int64 v15; // rsi
  unsigned __int64 v16; // r8
  void **v17; // rsi
  unsigned int v18; // edi
  unsigned int v19; // r9d
  bool v20; // cl
  __int64 v21; // r14
  unsigned int v22; // edx
  unsigned int v23; // ecx
  char v24; // dl
  void **v25; // r13
  bool v27; // dl
  unsigned int v28; // ecx
  unsigned int v29; // esi
  bool v30; // cf
  bool v31; // cf
  void *v32; // r13
  char *v33; // r12
  void **v34; // rbx
  char *v35; // rbp
  void *v36; // rdi
  char *v37; // rdx
  void *v38; // rdx
  __int64 v39; // rdx
  void **v40; // rdi
  void *v41; // rcx
  void *v42; // rdi
  void *v43; // rcx
  void *v44; // rax
  void *ptr; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+18h] [rbp-A0h]
  void *v48; // [rsp+28h] [rbp-90h]
  char *v49; // [rsp+30h] [rbp-88h]
  void *v50; // [rsp+48h] [rbp-70h]
  void *v51; // [rsp+50h] [rbp-68h]
  unsigned int v52; // [rsp+60h] [rbp-58h]
  char v53; // [rsp+69h] [rbp-4Fh]
  unsigned __int64 v54; // [rsp+78h] [rbp-40h]

  v8 = (a3 - 1) / 2;
  v54 = __readfsqword(0x28u);
  if ( a2 < v8 )
  {
    for ( i = a2; ; i = v14 )
    {
      v14 = 2 * (i + 1);
      v15 = 192 * (i + 1);
      v16 = a1 + v15 - 96;
      v17 = (void **)(a1 + v15);
      v11 = *(_DWORD *)*v17;
      v12 = **(_DWORD **)v16;
      if ( v11 == -1 )
      {
        if ( v12 != -1 )
          goto LABEL_8;
      }
      else if ( (*(_BYTE *)(a5 + 12) & 8) != 0 )
      {
        if ( v12 == -1 )
          goto LABEL_16;
        v11 &= ~1u;
        v12 &= ~1u;
        if ( v12 != v11 )
          goto LABEL_19;
      }
      else
      {
        if ( v12 == -1 )
          goto LABEL_16;
        if ( v12 != v11 )
        {
LABEL_19:
          v20 = v11 < v12;
          goto LABEL_15;
        }
      }
      v13 = *((_BYTE *)v17 + 89);
      if ( (v13 == 1) != (*(_BYTE *)(v16 + 89) == 1) )
        break;
      v18 = *((_DWORD *)*v17 + 1);
      v19 = *(_DWORD *)(*(_QWORD *)v16 + 4LL);
      if ( v18 != v19 )
      {
        v20 = v19 < v18;
        goto LABEL_15;
      }
      if ( v13 != 1 )
      {
        if ( v13 != 2 || (v44 = *(void **)(v16 + 32), v31 = v17[4] < v44, v17[4] == v44) )
          v31 = (unsigned __int64)v17 < v16;
        goto LABEL_55;
      }
      v41 = v17[4];
      v42 = *(void **)(v16 + 32);
      if ( v41 == v42 )
        goto LABEL_75;
      if ( !v41 )
        goto LABEL_16;
      if ( v42 )
      {
LABEL_75:
        v43 = v17[8];
        v31 = (unsigned __int64)v43 < *(_QWORD *)(v16 + 64);
        if ( v43 == *(void **)(v16 + 64) )
        {
          if ( v43 )
          {
            v20 = *(_DWORD *)v17[7] < **(_DWORD **)(v16 + 56);
            goto LABEL_15;
          }
          v31 = *((_DWORD *)v17 + 20) < *(_DWORD *)(v16 + 80);
        }
LABEL_55:
        v20 = v31;
LABEL_15:
        if ( !v20 )
          goto LABEL_8;
LABEL_16:
        --v14;
        v17 = (void **)(a1 + 96 * v14);
      }
LABEL_8:
      sub_679080((void **)(a1 + 96 * i), v17);
      if ( v14 >= v8 )
        goto LABEL_21;
    }
    if ( v13 != 1 )
      goto LABEL_8;
    goto LABEL_16;
  }
  v14 = a2;
LABEL_21:
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v14 )
  {
    v39 = 6 * (v14 + 1);
    v40 = (void **)(a1 + 96 * v14);
    v14 = 2 * (v14 + 1) - 1;
    sub_679080(v40, (void **)(a1 + 32 * v39 - 96));
  }
  ptr = nullptr;
  v53 = 0;
  v47 = 0;
  sub_679080(&ptr, a4);
  v21 = (v14 - 1) / 2;
  if ( v14 > a2 )
  {
    while ( 1 )
    {
      v25 = (void **)(a1 + 96 * v21);
      v23 = *(_DWORD *)ptr;
      v22 = *(_DWORD *)*v25;
      if ( v22 == -1 )
      {
        if ( v23 != -1 )
          goto LABEL_35;
      }
      else if ( (*(_BYTE *)(a5 + 12) & 8) != 0 )
      {
        if ( v23 == -1 )
          goto LABEL_31;
        v22 &= ~1u;
        v23 &= ~1u;
        if ( v23 != v22 )
          goto LABEL_43;
      }
      else
      {
        if ( v23 == -1 )
          goto LABEL_31;
        if ( v23 != v22 )
        {
LABEL_43:
          v27 = v22 < v23;
          goto LABEL_46;
        }
      }
      v24 = *((_BYTE *)v25 + 89);
      if ( (v24 == 1) != (v53 == 1) )
      {
        if ( v24 != 1 )
          goto LABEL_35;
        goto LABEL_31;
      }
      v28 = *((_DWORD *)*v25 + 1);
      v29 = *((_DWORD *)ptr + 1);
      if ( v28 != v29 )
      {
        v27 = v29 < v28;
        goto LABEL_46;
      }
      if ( v24 != 1 )
        break;
      v37 = (char *)v25[4];
      if ( v37 != v49 )
      {
        if ( !v37 )
          goto LABEL_31;
        if ( !v49 )
          goto LABEL_35;
      }
      v38 = v25[8];
      v30 = v38 < v51;
      if ( v38 != v51 )
        goto LABEL_51;
      if ( !v38 )
      {
        v30 = *((_DWORD *)v25 + 20) < v52;
LABEL_51:
        v27 = v30;
        goto LABEL_46;
      }
      v27 = *(_DWORD *)v25[7] < *(_DWORD *)v50;
LABEL_46:
      if ( !v27 )
        goto LABEL_35;
LABEL_31:
      sub_679080((void **)(a1 + 96 * v14), (void **)(a1 + 96 * v21));
      v14 = v21;
      if ( a2 >= v21 )
        goto LABEL_36;
      v21 = (v21 - 1) / 2;
    }
    if ( v24 != 2 || (v30 = v25[4] < v49, v25[4] == v49) )
      v30 = v25 < &ptr;
    goto LABEL_51;
  }
LABEL_35:
  v25 = (void **)(a1 + 96 * v14);
LABEL_36:
  sub_679080(v25, &ptr);
  if ( v53 == 2 )
  {
    v32 = v48;
    if ( v48 )
    {
      v33 = v49;
      v34 = (void **)v48;
      v35 = nullptr;
      if ( v49 )
      {
        do
        {
          v36 = *v34;
          if ( *v34 )
          {
            v34[1] = nullptr;
            qfree(v36);
          }
          ++v35;
          v34 += 5;
        }
        while ( v33 != v35 );
      }
      qfree(v32);
    }
  }
  else if ( v53 == 1 )
  {
    if ( v50 )
      qfree(v50);
    if ( v48 )
      qfree(v48);
  }
  if ( ptr )
    qfree(ptr);
  return v54 - __readfsqword(0x28u);
}

