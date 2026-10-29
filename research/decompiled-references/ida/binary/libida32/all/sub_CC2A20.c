__int64 __fastcall sub_CC2A20(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  unsigned int *v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned int *v14; // r9
  unsigned int v15; // edi
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rtt
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // r13
  unsigned __int8 *v35; // r12
  _BYTE *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned int v40; // edx
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // r14
  void *v49; // rdi
  __int64 v50; // [rsp+8h] [rbp-B0h]
  __int64 v51; // [rsp+8h] [rbp-B0h]
  __int64 v52; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v53; // [rsp+18h] [rbp-A0h]
  int v54; // [rsp+28h] [rbp-90h]
  __int64 v55; // [rsp+30h] [rbp-88h]
  __int64 v56; // [rsp+38h] [rbp-80h]
  unsigned int v57; // [rsp+40h] [rbp-78h] BYREF
  char v58; // [rsp+44h] [rbp-74h]
  char v59; // [rsp+78h] [rbp-40h]

  v8 = (unsigned int *)**a1;
  if ( !v8 )
  {
    v58 &= ~1u;
    v57 = 0;
    sub_A2D6C0((__int64)&v57, 0, 0);
    sub_A2BFE0((__int64)a1[5], (__int64)&v57);
    if ( v57 > 1 )
      sub_A2BBA0((int *)&v57);
    return 1;
  }
  v9 = *(unsigned int *)(a2 + 24);
  if ( (_DWORD)v9 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v11 = *(_QWORD *)(a2 + 32);
      v10 = v11;
    }
    else
    {
      if ( (_DWORD)v9 == 2 || (_DWORD)v9 == 3 )
        BUG();
      v10 = *(_QWORD *)(a2 + 32);
      v11 = *(_QWORD *)(v10 + 32);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 32);
    if ( !v10 || *(_BYTE *)(v10 + 26) )
      return 0;
    v11 = *(_QWORD *)(v10 + 32);
    v12 = *(unsigned int *)(a2 + 40);
    if ( *(_DWORD *)(v11 + 24) != (_DWORD)v12 && (_DWORD)v12 )
      v11 = *(_QWORD *)(v10 + v12 + 32);
  }
  LOBYTE(v5) = *(_BYTE *)(v11 + 60) & (*(_QWORD *)(v11 + 40) == 0);
  if ( !(_BYTE)v5 )
    return v5;
  if ( *(_DWORD *)(v11 + 16) != 1 )
    return 0;
  v13 = 0xFFFFFFFFLL;
  if ( (_DWORD)v9 )
    goto LABEL_17;
  v14 = *(unsigned int **)(v10 + 32);
  v15 = *(_DWORD *)(a2 + 40);
  if ( v14[6] == v15 || !v15 )
  {
    v17 = v14[5];
    v18 = v17;
    if ( v15 == -1 )
      goto LABEL_15;
    if ( v14[6] == v15 || !v15 )
    {
LABEL_70:
      v10 = v14[4];
      goto LABEL_16;
    }
    v16 = v15;
LABEL_72:
    v14 = *(unsigned int **)(v10 + v16 + 32);
    goto LABEL_70;
  }
  v16 = v15;
  v17 = *(unsigned int *)(*(_QWORD *)(v10 + v15 + 32) + 20LL);
  if ( v15 != -1 )
    goto LABEL_72;
  v18 = v14[5];
LABEL_15:
  v10 = v18;
LABEL_16:
  v19 = v17;
  v13 = v17 / v10;
  v9 = v19 % v10;
LABEL_17:
  if ( (unsigned __int64)v8 <= v13 )
    goto LABEL_18;
  v8 = (unsigned int *)*a1[2];
  v33 = sub_E0FED0(a1[1], v8, 2370, 0);
  v34 = (_QWORD *)v33;
  if ( v33 )
  {
    v35 = *(unsigned __int8 **)v33;
    if ( !*(_QWORD *)v33 )
    {
      v43 = *(_QWORD *)(v33 + 8);
      v44 = *(_DWORD *)(v43 + 14976);
      if ( v44 )
      {
        v45 = (unsigned int)(v44 - 1);
        *(_DWORD *)(v43 + 14976) = v45;
        v35 = *(unsigned __int8 **)(v43 + 8 * v45 + 14848);
        v46 = *((unsigned int *)v35 + 134);
        v47 = *((_QWORD *)v35 + 66);
        *v35 = 0;
        *((_DWORD *)v35 + 106) = 0;
        v48 = v47 + (v46 << 6);
        while ( v47 != v48 )
        {
          while ( 1 )
          {
            v48 -= 64;
            v49 = *(void **)(v48 + 24);
            if ( v49 == (void *)(v48 + 40) )
              break;
            v51 = v47;
            operator delete(v49);
            v47 = v51;
            if ( v51 == v48 )
              goto LABEL_86;
          }
        }
LABEL_86:
        *((_DWORD *)v35 + 134) = 0;
      }
      else
      {
        v35 = (unsigned __int8 *)operator new(0x3A0u);
        *v35 = 0;
        *((_QWORD *)v35 + 12) = v35 + 112;
        *((_QWORD *)v35 + 16) = v35 + 144;
        *((_QWORD *)v35 + 20) = v35 + 176;
        *((_QWORD *)v35 + 24) = v35 + 208;
        *((_QWORD *)v35 + 28) = v35 + 240;
        *((_QWORD *)v35 + 32) = v35 + 272;
        *((_QWORD *)v35 + 36) = v35 + 304;
        *((_QWORD *)v35 + 40) = v35 + 336;
        *((_QWORD *)v35 + 44) = v35 + 368;
        *((_QWORD *)v35 + 48) = v35 + 400;
        *((_QWORD *)v35 + 52) = v35 + 432;
        *((_QWORD *)v35 + 13) = 0;
        v35[112] = 0;
        *((_QWORD *)v35 + 17) = 0;
        v35[144] = 0;
        *((_QWORD *)v35 + 21) = 0;
        v35[176] = 0;
        *((_QWORD *)v35 + 25) = 0;
        v35[208] = 0;
        *((_QWORD *)v35 + 29) = 0;
        v35[240] = 0;
        *((_QWORD *)v35 + 33) = 0;
        v35[272] = 0;
        *((_QWORD *)v35 + 37) = 0;
        v35[304] = 0;
        *((_QWORD *)v35 + 41) = 0;
        v35[336] = 0;
        *((_QWORD *)v35 + 45) = 0;
        v35[368] = 0;
        *((_QWORD *)v35 + 49) = 0;
        v35[400] = 0;
        *((_QWORD *)v35 + 53) = 0x800000000LL;
        *((_QWORD *)v35 + 66) = v35 + 544;
        *((_QWORD *)v35 + 67) = 0x600000000LL;
      }
      *v34 = v35;
    }
    v35[*v35 + 1] = 2;
    v36 = (_BYTE *)*v34;
    v37 = *(unsigned __int8 *)*v34;
    v10 = (unsigned int)(v37 + 1);
    *v36 = v37 + 1;
    *(_QWORD *)&v36[8 * v37 + 16] = 0;
  }
  v38 = 0xFFFFFFFFLL;
  if ( !*(_DWORD *)(a2 + 24) )
  {
    v39 = *(_QWORD *)(a2 + 32);
    v40 = *(_DWORD *)(a2 + 40);
    v8 = *(unsigned int **)(v39 + 32);
    if ( v8[6] == v40 || !v40 )
    {
      v42 = v8[5];
      v10 = v42;
      if ( v40 == -1 )
        goto LABEL_65;
      if ( v8[6] == v40 || !v40 )
      {
LABEL_76:
        v10 = v8[4];
        goto LABEL_65;
      }
      v41 = v40;
    }
    else
    {
      v41 = v40;
      v42 = *(unsigned int *)(*(_QWORD *)(v39 + v40 + 32) + 20LL);
      if ( v40 == -1 )
      {
        v10 = v8[5];
LABEL_65:
        v38 = v42 / v10;
        goto LABEL_66;
      }
    }
    v8 = *(unsigned int **)(v39 + v41 + 32);
    goto LABEL_76;
  }
LABEL_66:
  v9 = (unsigned __int64)*a1;
  **a1 = v38;
LABEL_18:
  v50 = sub_F44710(*(_QWORD *)(*(_QWORD *)(*a1[3] + 8) & 0xFFFFFFFFFFFFFFF0LL), v8, v9, v10, a5);
  v20 = **a1;
  v58 &= ~1u;
  v57 = 0;
  sub_A2D6C0((__int64)&v57, v20, v20);
  sub_A2BFE0((__int64)a1[5], (__int64)&v57);
  if ( v57 > 1 )
    sub_A2BBA0((int *)&v57);
  if ( **a1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v28 = *(_DWORD *)(a2 + 24);
      if ( v28 == 1 )
      {
        v29 = *(_QWORD *)(a2 + 40);
        v30 = *(_QWORD *)(a2 + 32);
        v52 = v21;
        v53 = 0;
        v54 = 1;
        v56 = v29;
        v55 = v30;
      }
      else if ( v28 == 2 )
      {
        v32 = *(_QWORD *)(a2 + 32);
        v52 = v21;
        v53 = 0;
        v54 = 2;
        v55 = v32;
      }
      else
      {
        v22 = *(unsigned int *)(a2 + 40);
        if ( (_DWORD)v22 == -1 )
        {
          if ( v28 == 3 )
            BUG();
          sub_DFF4E0(
            &v52,
            *(_QWORD *)(a2 + 32),
            v22,
            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 20LL));
        }
        else
        {
          if ( v28 )
          {
            if ( v28 == 3 )
              BUG();
            v23 = *(_QWORD *)(a2 + 32);
            v24 = (unsigned int)v22;
            v25 = *(_QWORD *)(v23 + 32);
            v26 = v21 * *(unsigned int *)(v25 + 16);
          }
          else
          {
            v23 = *(_QWORD *)(a2 + 32);
            v25 = *(_QWORD *)(v23 + 32);
            if ( *(_DWORD *)(v25 + 24) == (_DWORD)v22 || !(_DWORD)v22 )
            {
              v24 = (unsigned int)v22;
              v26 = v21 * *(unsigned int *)(v25 + 16);
            }
            else
            {
              v24 = (unsigned int)v22;
              v26 = v21 * *(unsigned int *)(*(_QWORD *)(v23 + (unsigned int)v22 + 32) + 16LL);
            }
            if ( *(_DWORD *)(v25 + 24) != (_DWORD)v22 && (_DWORD)v22 )
              v25 = *(_QWORD *)(v23 + v24 + 32);
          }
          v27 = v26 + 32;
          if ( *(_QWORD *)(v25 + 40) )
            v27 = v26 + 16;
          sub_DFF4E0(&v52, v23, v22, v27 + v24);
        }
      }
      sub_E04EA0(&v57, &v52, a1[4], v50);
      sub_DFF560(&v52);
      if ( !v59 )
        break;
      sub_A30FE0(a1[5][1] + 56LL * (unsigned int)v21, (int *)&v57);
      if ( v59 && v57 > 1 )
        sub_A2BBA0((int *)&v57);
      if ( **a1 == ++v21 )
        return v5;
    }
    return 0;
  }
  return v5;
}

