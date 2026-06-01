unsigned __int64 __fastcall sub_681FC0(void **a1, void **a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  void **v8; // r14
  void **v9; // r15
  _DWORD *v10; // rax
  unsigned int v11; // esi
  unsigned int v12; // ebp
  unsigned int v13; // edx
  unsigned int v14; // edi
  char v15; // dl
  unsigned int *v16; // rcx
  unsigned int v17; // edx
  bool v18; // cf
  char v19; // dl
  unsigned int *v20; // rcx
  unsigned int v21; // edx
  char v22; // bp
  unsigned int v23; // ecx
  unsigned int v24; // edi
  bool v25; // dl
  unsigned int v26; // edi
  unsigned int v27; // ecx
  bool v28; // dl
  char v29; // r14
  __int64 v30; // rbp
  void *v31; // r15
  __int64 v32; // rbp
  void **v33; // r12
  __int64 v34; // rbx
  void *v35; // rdi
  bool v36; // cf
  void **v37; // rbx
  __int64 v38; // r12
  __int64 v39; // rbp
  void *v40; // rdi
  _DWORD *v41; // rdx
  _DWORD *v42; // rcx
  _DWORD *v43; // rdx
  bool v44; // cf
  _DWORD *v45; // rdx
  _DWORD *v46; // rcx
  _DWORD *v47; // rdx
  _DWORD *v48; // rbx
  _DWORD *v49; // rbx
  void **v51; // rbx
  __int64 v52; // r15
  __int64 v53; // r14
  void *v54; // rdi
  void *ptr; // [rsp+8h] [rbp-150h]
  void **v56; // [rsp+10h] [rbp-148h]
  void *v57; // [rsp+10h] [rbp-148h]
  void **v58; // [rsp+18h] [rbp-140h]
  char v60; // [rsp+20h] [rbp-138h]
  void **v61; // [rsp+28h] [rbp-130h]
  void *v62; // [rsp+28h] [rbp-130h]
  void **v63; // [rsp+30h] [rbp-128h]
  __int64 v64; // [rsp+38h] [rbp-120h]
  __int64 v65; // [rsp+48h] [rbp-110h] BYREF
  void *v66; // [rsp+50h] [rbp-108h] BYREF
  __int128 v67; // [rsp+58h] [rbp-100h]
  void **v68; // [rsp+68h] [rbp-F0h]
  __int64 v69; // [rsp+70h] [rbp-E8h]
  void *v70; // [rsp+88h] [rbp-D0h]
  char v71; // [rsp+A9h] [rbp-AFh]
  void *v72; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v73; // [rsp+B8h] [rbp-A0h]
  void **v74; // [rsp+C8h] [rbp-90h]
  __int64 v75; // [rsp+D0h] [rbp-88h]
  void *v76; // [rsp+E8h] [rbp-70h]
  char v77; // [rsp+109h] [rbp-4Fh]
  unsigned __int64 v78; // [rsp+118h] [rbp-40h]

  v58 = a2;
  v4 = (char *)a2 - (char *)a1;
  v78 = __readfsqword(0x28u);
  if ( v4 <= 1536 )
    return v78 - __readfsqword(0x28u);
  v7 = v4;
  if ( !a3 )
    goto LABEL_54;
  do
  {
    v8 = v58;
    v9 = a1 + 12;
    --a3;
    sub_680100(
      a1,
      (unsigned __int64)(a1 + 12),
      (unsigned __int64)(&a1[4 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v7 >> 5)) >> 1)]
                       + 4 * ((0xAAAAAAAAAAAAAAABLL * (v7 >> 5)) & 0xFFFFFFFFFFFFFFFELL)),
      (unsigned int **)v58 - 12,
      a4);
    while ( 2 )
    {
      v10 = *a1;
      v11 = *(_DWORD *)*a1;
      v12 = v11 & 0xFFFFFFFE;
      while ( 2 )
      {
        v16 = (unsigned int *)*v9;
        v13 = *(_DWORD *)*v9;
        if ( v13 == -1 )
        {
          if ( v11 == -1 )
            goto LABEL_7;
          goto LABEL_21;
        }
        while ( (*(_DWORD *)(a4 + 12) & 8) != 0 )
        {
          if ( v11 == -1 )
            goto LABEL_17;
          v13 &= ~1u;
          v14 = *(_DWORD *)*a1 & 0xFFFFFFFE;
          if ( v12 == v13 )
            goto LABEL_7;
LABEL_14:
          if ( v13 < v14 )
          {
            v16 = (unsigned int *)v9[12];
            v9 += 12;
            v13 = *v16;
            if ( *v16 != -1 )
              continue;
          }
          goto LABEL_21;
        }
        if ( v11 != -1 )
        {
          v14 = *(_DWORD *)*a1;
          if ( v11 == v13 )
            goto LABEL_7;
          goto LABEL_14;
        }
        do
        {
LABEL_17:
          v16 = (unsigned int *)v9[12];
          v9 += 12;
          if ( *v16 == -1 )
            break;
          v16 = (unsigned int *)v9[12];
          v9 += 12;
        }
        while ( *v16 != -1 );
LABEL_7:
        v15 = *((_BYTE *)v9 + 89);
        if ( (v15 == 1) == (*((_BYTE *)a1 + 89) == 1) )
        {
          v23 = v16[1];
          v24 = v10[1];
          if ( v23 != v24 )
          {
            v25 = v24 < v23;
            goto LABEL_46;
          }
          if ( v15 == 1 )
          {
            v41 = v9[4];
            v42 = a1[4];
            if ( v41 != v42 )
            {
              if ( !v41 )
              {
LABEL_9:
                v9 += 12;
                continue;
              }
              if ( !v42 )
                goto LABEL_21;
            }
            v43 = v9[8];
            v44 = v43 < a1[8];
            if ( v43 == a1[8] )
            {
              if ( v43 )
              {
                v25 = *(_DWORD *)v9[7] < *(_DWORD *)a1[7];
LABEL_46:
                if ( !v25 )
                  goto LABEL_21;
                goto LABEL_9;
              }
              v44 = *((_DWORD *)v9 + 20) < *((_DWORD *)a1 + 20);
            }
          }
          else if ( v15 != 2 || (v48 = a1[4], v44 = v9[4] < v48, v9[4] == v48) )
          {
            v25 = v9 < a1;
            goto LABEL_46;
          }
          v25 = v44;
          goto LABEL_46;
        }
        break;
      }
      if ( v15 == 1 )
        goto LABEL_9;
LABEL_21:
      v8 -= 12;
      if ( v11 == -1 )
        v12 = -1;
LABEL_30:
      v20 = (unsigned int *)*v8;
      v21 = *(_DWORD *)*v8;
      if ( v11 != -1 )
      {
        while ( (*(_DWORD *)(a4 + 12) & 8) != 0 )
        {
          if ( v21 != -1 )
            goto LABEL_26;
          v20 = (unsigned int *)*(v8 - 12);
          v8 -= 12;
          v21 = *v20;
        }
        while ( v21 == -1 )
        {
          v20 = (unsigned int *)*(v8 - 12);
          v8 -= 12;
          v21 = *v20;
        }
        v18 = v11 < v21;
        if ( v11 == v21 )
          goto LABEL_27;
LABEL_42:
        if ( !v18 )
          goto LABEL_33;
        goto LABEL_29;
      }
      if ( v21 != -1 )
      {
        if ( (*(_BYTE *)(a4 + 12) & 8) == 0 )
          goto LABEL_33;
LABEL_26:
        v17 = v21 & 0xFFFFFFFE;
        v18 = v12 < v17;
        if ( v12 != v17 )
          goto LABEL_42;
      }
LABEL_27:
      v19 = *((_BYTE *)a1 + 89);
      if ( (v19 == 1) != (*((_BYTE *)v8 + 89) == 1) )
      {
        if ( v19 != 1 )
          goto LABEL_33;
        goto LABEL_29;
      }
      v26 = v10[1];
      v27 = v20[1];
      if ( v26 != v27 )
      {
        v28 = v27 < v26;
        goto LABEL_50;
      }
      if ( v19 != 1 )
      {
        if ( v19 != 2 || (v49 = v8[4], v36 = a1[4] < v49, a1[4] == v49) )
          v36 = a1 < v8;
LABEL_80:
        v28 = v36;
        goto LABEL_50;
      }
      v45 = a1[4];
      v46 = v8[4];
      if ( v45 != v46 )
      {
        if ( v45 )
        {
          if ( !v46 )
          {
LABEL_33:
            if ( v9 >= v8 )
              goto LABEL_52;
LABEL_34:
            v72 = nullptr;
            v77 = 0;
            v74 = nullptr;
            v73 = 0;
            sub_679080(&v72, v9);
            v22 = v77;
            ptr = v72;
            v56 = v74;
            sub_679080(v9, v8);
            sub_679080(v8, &v72);
            if ( v22 == 2 )
            {
              v37 = v56;
              if ( v56 )
              {
                if ( v75 )
                {
                  v62 = (void *)a4;
                  v38 = 0;
                  v39 = v75;
                  do
                  {
                    v40 = *v37;
                    if ( *v37 )
                    {
                      v37[1] = nullptr;
                      qfree(v40);
                    }
                    ++v38;
                    v37 += 5;
                  }
                  while ( v39 != v38 );
                  a4 = (__int64)v62;
                }
LABEL_103:
                qfree(v56);
              }
            }
            else if ( v22 == 1 )
            {
              if ( v76 )
                qfree(v76);
              if ( v56 )
                goto LABEL_103;
            }
            if ( ptr )
              qfree(ptr);
            v9 += 12;
            continue;
          }
          break;
        }
LABEL_29:
        v8 -= 12;
        goto LABEL_30;
      }
      break;
    }
    v47 = a1[8];
    v36 = v47 < v8[8];
    if ( v47 != v8[8] )
      goto LABEL_80;
    if ( !v47 )
    {
      v36 = *((_DWORD *)a1 + 20) < *((_DWORD *)v8 + 20);
      goto LABEL_80;
    }
    v28 = *(_DWORD *)a1[7] < *(_DWORD *)v8[7];
LABEL_50:
    if ( v28 )
      goto LABEL_29;
    if ( v9 < v8 )
      goto LABEL_34;
LABEL_52:
    sub_681FC0(v9, v58, a3, a4);
    v7 = (char *)v9 - (char *)a1;
    if ( (char *)v9 - (char *)a1 <= 1536 )
      return v78 - __readfsqword(0x28u);
    v58 = v9;
  }
  while ( a3 );
LABEL_54:
  v65 = a4;
  sub_681B80((__int64)a1, (__int64)v58, &v65);
  if ( (char *)v58 - (char *)a1 > 96 )
  {
    while ( 1 )
    {
      v58 -= 12;
      v71 = 0;
      v67 = 0;
      v66 = nullptr;
      v68 = nullptr;
      sub_679080(&v66, v58);
      v29 = v71;
      v57 = v66;
      v61 = v68;
      sub_679080(v58, a1);
      v72 = nullptr;
      v77 = 0;
      v74 = nullptr;
      v73 = 0;
      sub_679080(&v72, &v66);
      v30 = (char *)v58 - (char *)a1;
      v31 = v72;
      v63 = v74;
      v60 = v77;
      sub_681680((__int64)a1, 0, 0xAAAAAAAAAAAAAAABLL * (((char *)v58 - (char *)a1) >> 5), &v72, a4);
      if ( v60 == 2 )
        break;
      if ( v60 == 1 )
      {
        if ( v76 )
          qfree(v76);
        if ( v63 )
          goto LABEL_120;
      }
LABEL_57:
      if ( v31 )
        qfree(v31);
      if ( v29 != 2 )
      {
        if ( v29 != 1 )
          goto LABEL_61;
        if ( v70 )
          qfree(v70);
        if ( !v61 )
          goto LABEL_61;
        goto LABEL_124;
      }
      v51 = v61;
      if ( v61 )
      {
        v52 = v69;
        v53 = 0;
        if ( v69 )
        {
          do
          {
            v54 = *v51;
            if ( *v51 )
            {
              v51[1] = nullptr;
              qfree(v54);
            }
            ++v53;
            v51 += 5;
          }
          while ( v52 != v53 );
        }
LABEL_124:
        qfree(v61);
      }
LABEL_61:
      if ( v57 )
        qfree(v57);
      if ( v30 <= 96 )
        return v78 - __readfsqword(0x28u);
    }
    if ( !v63 )
      goto LABEL_57;
    if ( v75 )
    {
      v32 = 0;
      v64 = a4;
      v33 = v63;
      v34 = v75;
      do
      {
        v35 = *v33;
        if ( *v33 )
        {
          v33[1] = nullptr;
          qfree(v35);
        }
        ++v32;
        v33 += 5;
      }
      while ( v34 != v32 );
      v30 = (char *)v58 - (char *)a1;
      a4 = v64;
    }
LABEL_120:
    qfree(v63);
    goto LABEL_57;
  }
  return v78 - __readfsqword(0x28u);
}

