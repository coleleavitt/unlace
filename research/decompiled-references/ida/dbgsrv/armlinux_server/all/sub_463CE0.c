/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463CE0
// Address: 0x0000000000463CE0

//----- (0000000000463CE0) ----------------------------------------------------
__int64 __fastcall sub_463CE0(__int64 a1, __int64 a2, __off64_t a3, int a4, __int64 a5)
{
  unsigned int v10; // w0
  int v11; // w2
  _BOOL4 v12; // w22
  __int64 v13; // x0
  __int64 v15; // x23
  int v16; // w1
  void **v17; // x20
  __int64 v18; // x25
  unsigned int v19; // w26
  int v20; // w1
  int v21; // w5
  __int64 v22; // x0
  __int64 v23; // x2
  __int64 v24; // x0
  int v25; // w1
  int v26; // w2
  int v27; // w1
  unsigned int v28; // w1
  int v29; // w2
  char *v30; // x0
  __int64 v31; // x3
  _DWORD *v32; // x19
  unsigned __int64 v33; // x2
  char *v34; // x4
  int v35; // w0
  unsigned int v36; // w3
  int v37; // w1
  int v38; // w20
  char *v39; // x19
  unsigned __int64 v40; // x0
  char *v41; // x1
  unsigned __int64 v42; // x2
  __int64 (*v43)(); // x1
  bool v45; // zf
  __int64 v46; // x22
  unsigned int v47; // w0
  int v48; // w1
  int v49; // w2
  int v50; // w1
  __int64 v51; // x21
  _QWORD *v52; // x19
  __int64 v53; // x0
  unsigned int v54; // [xsp+64h] [xbp-2Ch]
  unsigned int v55; // [xsp+64h] [xbp-2Ch]
  int v56; // [xsp+68h] [xbp-28h]
  int v57; // [xsp+6Ch] [xbp-24h]
  void *ptr; // [xsp+70h] [xbp-20h] BYREF
  unsigned __int64 v59; // [xsp+78h] [xbp-18h]
  unsigned __int64 v60; // [xsp+80h] [xbp-10h]

  v10 = *(_DWORD *)(a1 + 128);
  v11 = *(_DWORD *)(a1 + 132);
  *(_QWORD *)(a1 + 16) = 0;
  ptr = nullptr;
  v59 = 0;
  v60 = 0;
  v12 = v11 == v10 && v10 <= 0xFFF;
  sub_48C428(a2, a3, 0);
  if ( a3 == -1 )
    a3 = sub_48C428(a2, 0, 1);
  v13 = sub_48C400(a2) - a3;
  if ( a3 < 0 || v13 < 0 )
  {
    a4 = 0;
  }
  else
  {
    if ( !a4 )
      goto LABEL_11;
    if ( is_mul_ok(a4, 0x28u) && 40LL * a4 <= (unsigned __int64)v13 )
      goto LABEL_41;
    a4 = v13 / 0x28uLL;
  }
  if ( (unsigned int)sub_41A9E0() != 1 )
    sub_420558(nullptr);
LABEL_41:
  if ( a4 <= 0 )
  {
LABEL_11:
    if ( v12 )
    {
      v43 = *(__int64 (**)())(*(_QWORD *)a5 + 8LL);
      if ( v43 == sub_462698 )
      {
        v16 = *(_DWORD *)(a1 + 132);
        goto LABEL_53;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 72) != 23126 )
        goto LABEL_13;
      v43 = *(__int64 (**)())(*(_QWORD *)a5 + 8LL);
      if ( v43 == sub_462698 )
        goto LABEL_13;
    }
    v28 = ((__int64 (__fastcall *)(__int64))v43)(a5);
    if ( v28 )
      goto LABEL_57;
    if ( v12 )
    {
      v16 = *(_DWORD *)(a1 + 132);
LABEL_53:
      v15 = a1 + 72;
      if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) <= 3u )
        goto LABEL_54;
      goto LABEL_14;
    }
LABEL_13:
    v15 = a1 + 72;
    v16 = 512;
    if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) <= 3u )
    {
LABEL_54:
      if ( a4 > 0 )
      {
LABEL_55:
        v57 = -1;
        goto LABEL_17;
      }
      v19 = 0;
LABEL_80:
      if ( *(_DWORD *)(a1 + 72) == 23126 )
        *(_DWORD *)(a1 + 152) = v19;
LABEL_67:
      if ( a4 )
        v45 = !v12;
      else
        v45 = 0;
      if ( v45 )
      {
        v28 = 0;
      }
      else
      {
        v46 = sub_48C400(a2);
        v47 = *(_DWORD *)(a1 + 152);
        if ( (unsigned __int16)(*(_WORD *)(v15 + 92) - 10) > 3u )
        {
          if ( *(_DWORD *)(v15 + 56) == 4096 || (v48 = *(_DWORD *)(v15 + 60)) == 0 )
          {
            v50 = -512;
            v49 = 511;
          }
          else
          {
            v49 = v48 - 1;
            v50 = -v48;
          }
          v47 = (v47 + v49) & v50;
        }
        v51 = v47;
        v52 = *(_QWORD **)(a1 + 8);
        v53 = *(_QWORD *)(a1 + 16);
        if ( (unsigned __int64)(v53 + 1) > *(_QWORD *)(a1 + 24) )
        {
          v52 = sub_491288(a1 + 8, *(void **)(a1 + 8), v53 + 1, 0x20u);
          v53 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = v52;
        }
        memmove(v52 + 4, v52, 32 * v53);
        *v52 = 0;
        v52[1] = v51;
        v28 = 0;
        v52[2] = 0;
        v52[3] = v46;
        ++*(_QWORD *)(a1 + 16);
      }
      goto LABEL_57;
    }
LABEL_14:
    if ( *(_DWORD *)(a1 + 72) == 23126 )
    {
      if ( a4 > 0 )
        goto LABEL_55;
      *(_DWORD *)(a1 + 152) = 0;
    }
    else if ( a4 > 0 )
    {
      v57 = -v16;
LABEL_17:
      v17 = (void **)(a1 + 8);
      v18 = 0;
      v19 = 0;
      v56 = 0;
      while ( 1 )
      {
        v30 = (char *)*v17;
        v31 = *(_QWORD *)(a1 + 16);
        v32 = (char *)ptr + v18;
        v33 = v31 + 1;
        v54 = v57 & *(_DWORD *)((_BYTE *)ptr + v18 + 20);
        if ( (unsigned __int64)(v31 + 1) > *(_QWORD *)(a1 + 24) )
        {
          v30 = (char *)sub_491288(a1 + 8, v30, v33, 0x20u);
          v31 = *(_QWORD *)(a1 + 16);
          *v17 = v30;
          v33 = v31 + 1;
        }
        *(_QWORD *)(a1 + 16) = v33;
        v34 = &v30[32 * v31];
        *(_QWORD *)v34 = (unsigned int)v32[3];
        v35 = v32[2];
        v36 = v32[4];
        v37 = *(_DWORD *)(v15 + 56);
        v23 = v36;
        if ( v35 )
        {
          if ( !v37 )
          {
            v20 = -1;
            v21 = 0;
            goto LABEL_20;
          }
        }
        else
        {
          if ( !v37 )
            goto LABEL_22;
          v35 = v32[4];
        }
        v21 = v37 - 1;
        v20 = -v37;
LABEL_20:
        v22 = (v35 + v21) & (unsigned int)v20;
        if ( v36 >= (unsigned int)v22 )
          v23 = v22;
LABEL_22:
        *((_QWORD *)v34 + 3) = v23;
        v24 = (unsigned int)(v32[3] + v23);
        if ( (unsigned __int16)(*(_WORD *)(v15 + 92) - 10) > 3u )
        {
          if ( *(_DWORD *)(v15 + 56) == 4096 || (v25 = *(_DWORD *)(v15 + 60)) == 0 )
          {
            v27 = -512;
            v26 = 511;
          }
          else
          {
            v26 = v25 - 1;
            v27 = -v25;
          }
          v24 = ((_DWORD)v24 + v26) & (unsigned int)v27;
        }
        *((_QWORD *)v34 + 1) = v24;
        *((_QWORD *)v34 + 2) = v54;
        if ( *(_DWORD *)v15 == 23126 )
          *((_QWORD *)v34 + 2) = v54 + (__int64)(40 - *(unsigned __int16 *)(a1 + 38));
        v28 = (**(__int64 (__fastcall ***)(__int64, _DWORD *))a5)(a5, v32);
        if ( v28 )
          goto LABEL_57;
        v18 += 40;
        v29 = ++v56;
        if ( v19 < v32[3] + v32[2] )
          v19 = v32[3] + v32[2];
        if ( v29 >= a4 )
          goto LABEL_80;
      }
    }
    goto LABEL_67;
  }
  v38 = 0;
  while ( 1 )
  {
    v41 = (char *)ptr;
    v40 = v59;
    v42 = v59 + 1;
    if ( v59 + 1 > v60 )
    {
      v41 = (char *)sub_491288((__int64)&ptr, ptr, v42, 0x28u);
      v40 = v59;
      ptr = v41;
      v42 = v59 + 1;
    }
    v59 = v42;
    v39 = &v41[40 * v40];
    if ( sub_48C160(a2, v39, 0x28u) != 40 )
      break;
    if ( *((_DWORD *)v39 + 3) == *((_DWORD *)v39 + 5) )
    {
      if ( *((_DWORD *)v39 + 2) > *((_DWORD *)v39 + 4) )
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    if ( ++v38 == a4 )
      goto LABEL_11;
  }
  v28 = -1;
LABEL_57:
  if ( ptr )
  {
    v55 = v28;
    v59 = 0;
    j__free(ptr);
    return v55;
  }
  return v28;
}
