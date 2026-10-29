__int64 __fastcall sub_C1A330(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // r15d
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // r13
  bool v16; // al
  void *v17; // rax
  void *v18; // rax
  char v19; // bl
  unsigned int v22; // edx
  void *v23; // rbx
  int v24; // ecx
  char v25; // dl
  unsigned int v26; // eax
  int v27; // eax
  int v28; // eax
  char *v29; // rbx
  unsigned __int8 **v30; // rax
  __int64 v31; // rdx
  __int64 v32; // [rsp+0h] [rbp-78h]
  char v33; // [rsp+0h] [rbp-78h]
  void *v34; // [rsp+8h] [rbp-70h]
  unsigned int v35; // [rsp+8h] [rbp-70h]
  __int64 v36; // [rsp+8h] [rbp-70h]
  __int64 v37; // [rsp+10h] [rbp-68h]
  int v38; // [rsp+10h] [rbp-68h]
  int v39; // [rsp+1Ch] [rbp-5Ch]
  void *v40; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v41; // [rsp+28h] [rbp-50h]
  char v42; // [rsp+2Ch] [rbp-4Ch]
  void *v43; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-40h]
  char v45; // [rsp+3Ch] [rbp-3Ch]

  v9 = sub_C00A40(a2, a2, a3, a4, a5);
  v10 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(unsigned __int8 *)(v11 + 16);
  if ( (_BYTE)v12 == 13 )
  {
    if ( ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) != 0x1B3 )
    {
LABEL_3:
      if ( (*(_BYTE *)(v10 + 17) & 4) != 0 || !(unsigned __int8)sub_F58240(v10) )
      {
        sub_E33C80(a1, v9, 108, 0);
        return 0;
      }
      v13 = sub_AAE980(*(_QWORD *)(a1 + 16), a4);
      v14 = *(_DWORD *)(a5 + 8);
      v15 = v13;
      if ( v14 > 0x40 )
        goto LABEL_6;
      goto LABEL_22;
    }
  }
  else if ( (unsigned int)(v12 - 25) > 1 )
  {
    goto LABEL_3;
  }
  v14 = *(_DWORD *)(a5 + 8);
  v15 = 1;
  if ( v14 > 0x40 )
  {
LABEL_6:
    v16 = v14 == (unsigned int)sub_2206780(a5);
    goto LABEL_7;
  }
LABEL_22:
  v16 = *(_QWORD *)a5 == 0;
LABEL_7:
  if ( !v16 )
  {
    v32 = *(_QWORD *)(a3 + 16);
    if ( *(_BYTE *)(a5 + 12) )
      sub_2206D90(&v43, a5, 64);
    else
      sub_2206DE0(&v43, a5, 64);
    v17 = v43;
    if ( v44 > 0x40 )
    {
      v34 = *(void **)v43;
      operator delete[](v43);
      v17 = v34;
    }
    *(_QWORD *)(a3 + 16) = v32 + (_QWORD)v17 * v15;
    if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
      goto LABEL_17;
    v33 = *(_BYTE *)(a3 + 128) & 1;
    if ( v33 )
    {
      v30 = (unsigned __int8 **)sub_E33C90(a1, a2, 2461, 0);
      if ( v30 )
        sub_C11320(v30, 4);
      *(_BYTE *)(a3 + 24) |= 1u;
      *(_DWORD *)(a3 + 56) = 0;
      goto LABEL_17;
    }
    v41 = *(_DWORD *)(a5 + 8);
    if ( v41 > 0x40 )
    {
      sub_2205510(&v40);
      v19 = *(_BYTE *)(a5 + 12);
      v22 = v41;
      v42 = v19;
      if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
        goto LABEL_47;
      if ( v41 > 0x40 )
      {
        v35 = v41;
        if ( (unsigned int)sub_2206780(&v40) == v35 )
          goto LABEL_28;
        goto LABEL_30;
      }
    }
    else
    {
      v18 = *(void **)a5;
      v19 = *(_BYTE *)(a5 + 12);
      v40 = v18;
      v42 = v19;
    }
    if ( !v40 )
    {
LABEL_17:
      *(_BYTE *)(a3 + 128) &= ~1u;
      return 1;
    }
LABEL_30:
    if ( v19 )
      sub_2206D90(&v43, &v40, 64);
    else
      sub_2206DE0(&v43, &v40, 64);
    v23 = v43;
    if ( v44 > 0x40 )
    {
      v23 = *(void **)v43;
      operator delete[](v43);
    }
    v24 = *(_DWORD *)(a3 + 56);
    v25 = *(_BYTE *)(a3 + 24);
    if ( v24 == 1 && (v25 & 4) != 0 )
    {
      sub_E33C90(a1, a2, 2494, 0);
      *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * *(unsigned int *)(a3 + 56) - 8) += v23;
      v22 = v41;
    }
    else
    {
      v26 = *(_DWORD *)(a3 + 24) >> 4;
      if ( v26 == v24 && (v25 & 8) != 0 )
      {
        v33 = 1;
        v36 = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * v26 - 8);
        v37 = *(_QWORD *)(a3 + 32);
      }
      else
      {
        v37 = 1;
        v36 = (v25 & 2) != 0;
      }
      v45 = 0;
      v44 = 64;
      v43 = (void *)-v36;
      v27 = sub_98E2D0((__int64 *)&v40, (__int64 *)&v43);
      if ( v44 > 0x40 && v43 )
      {
        v39 = v27;
        operator delete[](v43);
        v27 = v39;
      }
      if ( v27 < 0 )
        goto LABEL_53;
      v44 = 64;
      v43 = (void *)(v37 - v36);
      v45 = 0;
      v28 = sub_98E2D0((__int64 *)&v40, (__int64 *)&v43);
      if ( v44 > 0x40 && v43 )
      {
        v38 = v28;
        operator delete[](v43);
        v28 = v38;
      }
      if ( v28 > 0 )
      {
LABEL_53:
        v31 = v41 + 1;
        if ( (unsigned int)v31 < 0x41 )
          v31 = 65;
        sub_C16810((__int64)&v43, (__int64)&v40, v31);
        if ( v41 > 0x40 && v40 )
          operator delete[](v40);
        v40 = v43;
        v41 = v44;
        v42 = v45;
        sub_2205A20(&v40, v36);
        if ( *(_DWORD *)(a3 + 56) == *(_DWORD *)(a3 + 24) >> 4 && (*(_BYTE *)(a3 + 24) & 8) != 0 )
        {
          v43 = (void *)sub_E33C90(a1, a2, 2381, 0);
          if ( v43 )
          {
            sub_C1A2B0((unsigned __int8 ***)&v43, (__int64)&v40);
            if ( v43 )
            {
              sub_C11320((unsigned __int8 **)v43, 0);
              if ( v43 )
                sub_AE9DF0((unsigned __int8 **)v43, (unsigned int)*(_QWORD *)(a3 + 32), 3u);
            }
          }
        }
        else
        {
          v43 = (void *)sub_E33C90(a1, a2, 2381, 0);
          if ( v43 )
          {
            sub_C1A2B0((unsigned __int8 ***)&v43, (__int64)&v40);
            if ( v43 )
              sub_C11320((unsigned __int8 **)v43, 1);
          }
        }
        *(_BYTE *)(a3 + 24) |= 1u;
        v22 = v41;
        *(_DWORD *)(a3 + 56) = 0;
      }
      else
      {
        v29 = (char *)v23 + v36;
        if ( v33 )
        {
          *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * *(unsigned int *)(a3 + 56) - 8) = v29;
          v22 = v41;
        }
        else
        {
          v22 = v41;
          *(_BYTE *)(a3 + 24) = (2 * (v29 != nullptr)) | *(_BYTE *)(a3 + 24) & 0xFD;
        }
      }
    }
LABEL_47:
    if ( v22 <= 0x40 )
      goto LABEL_17;
LABEL_28:
    if ( v40 )
      operator delete[](v40);
    goto LABEL_17;
  }
  return 1;
}
