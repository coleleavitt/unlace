void *__fastcall sub_11325F0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  void *v11; // rdi
  const char **v13; // rax
  size_t v14; // rdx
  const char *v15; // r12
  unsigned __int8 *v16; // rbx
  __int64 v17; // r12
  unsigned __int8 *v18; // rdx
  __int64 v19; // rax
  const char **v20; // rax
  size_t v21; // rsi
  const char *v22; // rbp
  unsigned int v23; // ecx
  __int64 v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // r15
  __int64 v31; // rbp
  void *v32; // rdi
  int v33; // esi
  int v34; // edi
  unsigned int v35; // r8d
  unsigned int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // r15
  __int64 v42; // rbp
  void *v43; // rdi
  void *v44[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+10h] [rbp-B8h] BYREF
  void *v46; // [rsp+20h] [rbp-A8h] BYREF
  signed __int64 v47; // [rsp+28h] [rbp-A0h]
  _BYTE v48[16]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int8 *v49; // [rsp+40h] [rbp-88h] BYREF
  __int64 v50; // [rsp+48h] [rbp-80h]

  v5 = sub_10DCD30(a3, 0x3DBu);
  v6 = sub_10DCD30(a3, 0x3CEu);
  v10 = v6;
  if ( v5 && v6 )
  {
    if ( !a2 )
      return nullptr;
    sub_FC70B0((__int64)&v49, *a2, 0, 323);
    sub_21B5FF0(v44, v5, a3);
    sub_AEC220(&v49, (_BYTE *)v44[0], (signed __int64)v44[1]);
    sub_21B5FF0(&v46, v10, a3);
    sub_AEC220(&v49, v46, v47);
    if ( v46 != v48 )
      operator delete(v46);
    v11 = v44[0];
    if ( v44[0] == &v45 )
    {
LABEL_8:
      sub_AEA040((__int64)&v49);
      return nullptr;
    }
LABEL_7:
    operator delete(v11);
    goto LABEL_8;
  }
  if ( v6 )
  {
    v13 = *(const char ***)(v6 + 48);
    v14 = 0;
    *(_OWORD *)v44 = 0;
    v15 = *v13;
    if ( *v13 )
      v14 = j__strlen(*v13);
    if ( (unsigned __int8)sub_22578D0(v44, v15, v14, v7, v8, v9) )
    {
      if ( !a2 )
        return nullptr;
      sub_FC70B0((__int64)&v49, *a2, 0, 400);
      sub_21B5FF0(&v46, v10, a3);
      sub_AEC220(&v49, v46, v47);
      v16 = v49;
      v17 = **(_QWORD **)(v10 + 48);
      if ( v49 )
      {
LABEL_16:
        v16[*v16 + 1] = 1;
        v18 = v49;
        v19 = *v49;
        *v49 = v19 + 1;
        *(_QWORD *)&v18[8 * v19 + 16] = v17;
        v11 = v46;
        if ( v46 == v48 )
          goto LABEL_8;
        goto LABEL_7;
      }
      v37 = v50;
      v38 = *(_DWORD *)(v50 + 14976);
      if ( v38 )
      {
        v39 = (unsigned int)(v38 - 1);
        *(_DWORD *)(v50 + 14976) = v39;
        v16 = *(unsigned __int8 **)(v37 + 8 * v39 + 14848);
        v40 = *((unsigned int *)v16 + 134);
        *v16 = 0;
        v41 = *((_QWORD *)v16 + 66);
        *((_DWORD *)v16 + 106) = 0;
        v42 = v41 + (v40 << 6);
        while ( v41 != v42 )
        {
          while ( 1 )
          {
            v42 -= 64;
            v43 = *(void **)(v42 + 24);
            if ( v43 == (void *)(v42 + 40) )
              break;
            operator delete(v43);
            if ( v41 == v42 )
              goto LABEL_35;
          }
        }
LABEL_35:
        *((_DWORD *)v16 + 134) = 0;
LABEL_36:
        v49 = v16;
        goto LABEL_16;
      }
      goto LABEL_49;
    }
    return v44[0];
  }
  else
  {
    if ( !v5 )
      return nullptr;
    v20 = *(const char ***)(v5 + 48);
    v21 = 0;
    v22 = *v20;
    if ( *v20 )
      v21 = j__strlen(*v20);
    if ( (unsigned __int8)sub_2247970(v22, v21, 10, &v49) || v49 != (unsigned __int8 *)(unsigned int)v49 )
    {
      if ( !a2 )
        return nullptr;
      sub_FC70B0((__int64)&v49, *a2, 0, 400);
      sub_21B5FF0(&v46, v5, a3);
      sub_AEC220(&v49, v46, v47);
      v16 = v49;
      v17 = **(_QWORD **)(v5 + 48);
      if ( v49 )
        goto LABEL_16;
      v26 = v50;
      v27 = *(_DWORD *)(v50 + 14976);
      if ( v27 )
      {
        v28 = (unsigned int)(v27 - 1);
        *(_DWORD *)(v50 + 14976) = v28;
        v16 = *(unsigned __int8 **)(v26 + 8 * v28 + 14848);
        v29 = *((unsigned int *)v16 + 134);
        *v16 = 0;
        v30 = *((_QWORD *)v16 + 66);
        *((_DWORD *)v16 + 106) = 0;
        v31 = v30 + (v29 << 6);
        while ( v30 != v31 )
        {
          while ( 1 )
          {
            v31 -= 64;
            v32 = *(void **)(v31 + 24);
            if ( v32 == (void *)(v31 + 40) )
              break;
            operator delete(v32);
            if ( v30 == v31 )
              goto LABEL_35;
          }
        }
        goto LABEL_35;
      }
LABEL_49:
      v16 = (unsigned __int8 *)operator new(0x3A0u);
      *v16 = 0;
      *((_QWORD *)v16 + 12) = v16 + 112;
      *((_QWORD *)v16 + 16) = v16 + 144;
      *((_QWORD *)v16 + 20) = v16 + 176;
      *((_QWORD *)v16 + 24) = v16 + 208;
      *((_QWORD *)v16 + 28) = v16 + 240;
      *((_QWORD *)v16 + 32) = v16 + 272;
      *((_QWORD *)v16 + 36) = v16 + 304;
      *((_QWORD *)v16 + 40) = v16 + 336;
      *((_QWORD *)v16 + 44) = v16 + 368;
      *((_QWORD *)v16 + 48) = v16 + 400;
      *((_QWORD *)v16 + 52) = v16 + 432;
      *((_QWORD *)v16 + 13) = 0;
      v16[112] = 0;
      *((_QWORD *)v16 + 17) = 0;
      v16[144] = 0;
      *((_QWORD *)v16 + 21) = 0;
      v16[176] = 0;
      *((_QWORD *)v16 + 25) = 0;
      v16[208] = 0;
      *((_QWORD *)v16 + 29) = 0;
      v16[240] = 0;
      *((_QWORD *)v16 + 33) = 0;
      v16[272] = 0;
      *((_QWORD *)v16 + 37) = 0;
      v16[304] = 0;
      *((_QWORD *)v16 + 41) = 0;
      v16[336] = 0;
      *((_QWORD *)v16 + 45) = 0;
      v16[368] = 0;
      *((_QWORD *)v16 + 49) = 0;
      v16[400] = 0;
      *((_QWORD *)v16 + 53) = 0x800000000LL;
      *((_QWORD *)v16 + 66) = v16 + 544;
      *((_QWORD *)v16 + 67) = 0x600000000LL;
      goto LABEL_36;
    }
    v23 = (unsigned int)v49;
    if ( (unsigned __int64)v49 <= 0x63 )
    {
      v24 = 0;
      v25 = 0;
    }
    else if ( (unsigned int)v49 > 0x270F )
    {
      if ( (_DWORD)v49 == 10000 )
      {
        v35 = 10000;
      }
      else
      {
        v33 = 0;
        v34 = 1;
        while ( 1 )
        {
          v35 = v23 / 0xA;
          v36 = v34 * (v23 % 0xA);
          v34 *= 10;
          v33 += v36;
          if ( v23 <= 0x186A9 )
            break;
          v23 /= 0xAu;
        }
      }
      v24 = 1;
      v23 = v35 / 0x64;
      v25 = (v35 % 0x64) & 0x7FFFFFFF;
    }
    else
    {
      v24 = 1;
      v23 = (unsigned int)v49 / 0x64;
      v25 = ((unsigned int)v49 % 0x64) & 0x7FFFFFFF;
    }
    return (void *)((v24 << 63) | ((unsigned __int64)(v25 & 0x7FFFFFFF) << 32) | v23);
  }
}
