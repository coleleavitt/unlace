__int64 __fastcall sub_53A1A0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r15d
  int v7; // r12d
  _DWORD *v10; // rax
  __int16 v12; // ax
  int v13; // r9d
  _DWORD *v14; // rax
  void **v15; // r9
  void *v16; // rbx
  void *v17; // r12
  int v18; // eax
  __int64 v19; // rbp
  void *v20; // r13
  int v21; // eax
  void *v22; // rdi
  void *v23; // r15
  void *v24; // rbx
  int v25; // eax
  void *v26; // r12
  void *v27; // rbp
  int v28; // eax
  void *v29; // rdi
  __int64 v30; // r15
  int v31; // eax
  int v32; // r9d
  void *v33; // rbx
  int v34; // edx
  char v35; // al
  char v36; // al
  char v37; // al
  char v38; // al
  int v39; // eax
  unsigned int v40; // r9d
  int v41; // r9d
  unsigned int v42; // eax
  void *v43; // r14
  int v44; // eax
  int v45; // r9d
  void *v46; // rbx
  int *v47; // [rsp+0h] [rbp-C8h]
  void *v48; // [rsp+8h] [rbp-C0h]
  void **v49; // [rsp+8h] [rbp-C0h]
  void *v50; // [rsp+8h] [rbp-C0h]
  int v51[2]; // [rsp+18h] [rbp-B0h]
  char v52; // [rsp+2Fh] [rbp-99h] BYREF
  int v53[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v54; // [rsp+38h] [rbp-90h]
  _QWORD v55[2]; // [rsp+40h] [rbp-88h] BYREF
  int v56; // [rsp+50h] [rbp-78h] BYREF
  char v57; // [rsp+54h] [rbp-74h]
  __int64 v58; // [rsp+58h] [rbp-70h]
  int v59; // [rsp+60h] [rbp-68h] BYREF
  char v60; // [rsp+64h] [rbp-64h]
  __int64 v61; // [rsp+68h] [rbp-60h]
  int v62[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v63; // [rsp+78h] [rbp-50h]
  __int64 v64; // [rsp+80h] [rbp-48h] BYREF
  __int64 v65; // [rsp+88h] [rbp-40h]

  v5 = 0;
  v7 = a1;
  v10 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v10 && *v10 == 5 && v10[1] == 1 )
  {
    v12 = *(_WORD *)(a2 + 4);
    if ( v12 == 1 )
    {
      v17 = qword_1C7F2C0;
      v18 = *(_DWORD *)a5;
      v19 = *a3 + 32LL * *(unsigned int *)(a2 + 16);
      if ( *(_DWORD *)a5 )
      {
        if ( *(_DWORD *)v19 )
        {
          if ( (*(_BYTE *)(v19 + 20) & 1) != 0
            || *(_DWORD *)(v19 + 16) != 1
            || (*(_BYTE *)(a5 + 20) & 1) != 0
            || *(_DWORD *)(a5 + 16) != 1 )
          {
            sub_1851D20(
              qword_1C7F2C0,
              *a3 + 32LL * *(unsigned int *)(a2 + 16),
              a5,
              *a3 + 32LL * *(unsigned int *)(a2 + 16));
          }
          else
          {
            sub_1831A80(
              qword_1C7F2C0,
              *a3 + 32LL * *(unsigned int *)(a2 + 16),
              a5,
              *a3 + 32LL * *(unsigned int *)(a2 + 16));
            sub_182CBA0(v17, v19 + 16);
            *(_BYTE *)(v19 + 20) &= ~1u;
            *(_DWORD *)(v19 + 16) = 1;
          }
        }
        else
        {
          if ( (*(_BYTE *)(a5 + 4) & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, *a3 + 32LL * *(unsigned int *)(a2 + 16), a5);
          }
          else
          {
            *(_BYTE *)(v19 + 4) &= ~1u;
            *(_DWORD *)v19 = v18;
          }
          if ( (*(_BYTE *)(a5 + 20) & 1) != 0 )
          {
            sub_182C690(v17, v19 + 16, a5 + 16);
          }
          else
          {
            v28 = *(_DWORD *)(a5 + 16);
            *(_BYTE *)(v19 + 20) &= ~1u;
            *(_DWORD *)(v19 + 16) = v28;
          }
        }
      }
      else
      {
        v35 = *(_BYTE *)(v19 + 4);
        if ( (v35 & 1) != 0 )
          sub_182C690(qword_1C7F2C0, *a3 + 32LL * *(unsigned int *)(a2 + 16), *a3 + 32LL * *(unsigned int *)(a2 + 16));
        else
          *(_BYTE *)(v19 + 4) = v35 & 0xFE;
        v36 = *(_BYTE *)(v19 + 20);
        if ( (v36 & 1) != 0 )
          sub_182C690(v17, v19 + 16, v19 + 16);
        else
          *(_BYTE *)(v19 + 20) = v36 & 0xFE;
      }
      return 1;
    }
    else if ( !v12 )
    {
      *(_QWORD *)v53 = 0;
      v48 = (void *)(a1 + 48);
      v54 = 0;
      v55[0] = 1;
      v55[1] = 0;
      v47 = v53;
      v5 = sub_1666AE0(a1 + 48, a2, v53, &v52);
      if ( (_BYTE)v5 )
      {
        *(_QWORD *)v62 = 0;
        v63 = 0;
        v64 = 1;
        v20 = qword_1C7F2C0;
        v65 = 0;
        if ( (*(_BYTE *)(a5 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, v62, a5);
        else
          v62[0] = *(_DWORD *)a5;
        if ( (*(_BYTE *)(a5 + 20) & 1) != 0 )
        {
          sub_182C690(v20, &v64, a5 + 16);
        }
        else
        {
          v21 = *(_DWORD *)(a5 + 16);
          BYTE4(v64) &= ~1u;
          LODWORD(v64) = v21;
        }
        v22 = qword_1C7F2C0;
        if ( (v64 & 0x100000000LL) != 0 || (_DWORD)v64 != 1 || (v55[0] & 0x100000000LL) != 0 || LODWORD(v55[0]) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v62, v53);
        }
        else
        {
          sub_1831650(qword_1C7F2C0, v62, v53);
          sub_182CBA0(v22, &v64);
          BYTE4(v64) &= ~1u;
          LODWORD(v64) = 1;
        }
        v57 &= 0xFCu;
        v23 = qword_1C7F2C0;
        v60 &= 0xFCu;
        v56 = 0;
        v58 = 0;
        v59 = 1;
        v61 = 0;
        if ( (v62[1] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v56, v62);
        else
          v56 = v62[0];
        if ( (v64 & 0x100000000LL) != 0 )
        {
          sub_182C690(v23, &v59, &v64);
        }
        else
        {
          v60 &= ~1u;
          v59 = v64;
        }
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v62);
        sub_182CBA0(v24, &v64);
        v25 = v56;
        v26 = qword_1C7F2C0;
        if ( v56 )
        {
          if ( *(_DWORD *)a4 )
          {
            if ( (*(_BYTE *)(a4 + 20) & 1) != 0 || *(_DWORD *)(a4 + 16) != 1 || (v60 & 1) != 0 || v59 != 1 )
            {
              sub_1851D20(qword_1C7F2C0, a4, &v56, a4);
            }
            else
            {
              sub_1831A80(qword_1C7F2C0, a4, &v56, a4);
              sub_182CBA0(v26, a4 + 16);
              *(_BYTE *)(a4 + 20) &= ~1u;
              *(_DWORD *)(a4 + 16) = 1;
            }
          }
          else
          {
            if ( (v57 & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, a4, &v56);
            }
            else
            {
              *(_BYTE *)(a4 + 4) &= ~1u;
              *(_DWORD *)a4 = v25;
            }
            if ( (v60 & 1) != 0 )
            {
              sub_182C690(v26, a4 + 16, &v59);
            }
            else
            {
              v39 = v59;
              *(_BYTE *)(a4 + 20) &= ~1u;
              *(_DWORD *)(a4 + 16) = v39;
            }
          }
        }
        else
        {
          v37 = *(_BYTE *)(a4 + 4);
          if ( (v37 & 1) != 0 )
            sub_182C690(qword_1C7F2C0, a4, a4);
          else
            *(_BYTE *)(a4 + 4) = v37 & 0xFE;
          v38 = *(_BYTE *)(a4 + 20);
          if ( (v38 & 1) != 0 )
            sub_182C690(v26, a4 + 16, a4 + 16);
          else
            *(_BYTE *)(a4 + 20) = v38 & 0xFE;
        }
        v27 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v56);
        sub_182CBA0(v27, &v59);
        v15 = &qword_1C7F2C0;
      }
      else
      {
        if ( *(_WORD *)(a2 + 4) )
          goto LABEL_12;
        v14 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
        if ( !v14 )
          goto LABEL_12;
        if ( *v14 != 5 )
          goto LABEL_11;
        v34 = v14[1];
        if ( v34 != 6 )
        {
          if ( v34 == 7 )
          {
            if ( *(_DWORD *)(a2 + 24) == 2 )
            {
              v42 = sub_53A1A0(a1, *(_QWORD *)(a2 + 32), (int)a3, a4, a5, v13, (int)v53, *(void **)(a2 + 40));
              v15 = &qword_1C7F2C0;
              v5 = v42;
              if ( (_BYTE)v42 )
              {
                LOBYTE(v62[1]) &= 0xFCu;
                v43 = qword_1C7F2C0;
                BYTE4(v64) &= 0xFCu;
                v62[0] = 0;
                v63 = 0;
                LODWORD(v64) = 1;
                v65 = 0;
                if ( (*(_BYTE *)(a5 + 4) & 1) != 0 )
                  sub_182C690(qword_1C7F2C0, v62, a5);
                else
                  v62[0] = *(_DWORD *)a5;
                if ( (*(_BYTE *)(a5 + 20) & 1) != 0 )
                {
                  sub_182C690(v43, &v64, a5 + 16);
                }
                else
                {
                  v44 = *(_DWORD *)(a5 + 16);
                  BYTE4(v64) &= ~1u;
                  LODWORD(v64) = v44;
                }
                sub_1831620(qword_1C7F2C0, v62);
                v5 = sub_53A1A0(a1, (int)v50, (int)a3, a4, (int)v62, v45, (int)v47, v50);
                v46 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v62);
                sub_182CBA0(v46, &v64);
                v15 = &qword_1C7F2C0;
              }
              goto LABEL_13;
            }
          }
          else if ( v14[1] == 9 )
          {
            if ( *(_DWORD *)(a2 + 24) != 2 )
            {
LABEL_83:
              if ( *(_DWORD *)(a2 + 24) != 2 )
                goto LABEL_44;
              *(_QWORD *)v51 = *(_QWORD *)(a2 + 32);
              if ( !(unsigned __int8)sub_1666AE0(v48, *(_QWORD *)(a2 + 40), v53, v62) )
              {
                if ( *(_WORD *)(a2 + 4) )
                  goto LABEL_12;
                v14 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
                if ( !v14 || *v14 != 5 )
                  goto LABEL_12;
                goto LABEL_44;
              }
LABEL_93:
              sub_3EBE30((__int64)v62, a5, (__int64)v53);
              v5 = sub_53A1A0(a1, v51[0], (int)a3, a4, (int)v62, v41, (int)v53, v48);
              sub_25A130((char *)v62);
              v15 = &qword_1C7F2C0;
              goto LABEL_13;
            }
            *(_QWORD *)v51 = *(_QWORD *)(a2 + 40);
            if ( (unsigned __int8)sub_1666AE0(v48, *(_QWORD *)(a2 + 32), v53, &v56) )
              goto LABEL_93;
            if ( *(_WORD *)(a2 + 4) )
              goto LABEL_12;
            v14 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
            if ( !v14 )
              goto LABEL_12;
LABEL_11:
            if ( *v14 != 5 )
            {
LABEL_12:
              v15 = &qword_1C7F2C0;
LABEL_13:
              v16 = *v15;
              sub_182CBA0(*v15, v47);
              sub_182CBA0(v16, v55);
              return v5;
            }
            if ( v14[1] != 9 )
            {
LABEL_44:
              if ( v14[1] == 8 )
              {
                v15 = &qword_1C7F2C0;
                if ( *(_DWORD *)(a2 + 24) == 1 )
                {
                  LOBYTE(v62[1]) &= 0xFCu;
                  v29 = qword_1C7F2C0;
                  BYTE4(v64) &= 0xFCu;
                  v30 = *(_QWORD *)(a2 + 32);
                  v62[0] = 0;
                  v63 = 0;
                  LODWORD(v64) = 1;
                  v65 = 0;
                  if ( (*(_BYTE *)(a5 + 4) & 1) != 0 )
                    sub_182C690(qword_1C7F2C0, v62, a5);
                  else
                    v62[0] = *(_DWORD *)a5;
                  if ( (*(_BYTE *)(a5 + 20) & 1) != 0 )
                  {
                    sub_182C690(v29, &v64, a5 + 16);
                  }
                  else
                  {
                    v31 = *(_DWORD *)(a5 + 16);
                    BYTE4(v64) &= ~1u;
                    LODWORD(v64) = v31;
                  }
                  sub_1831620(qword_1C7F2C0, v62);
                  v5 = sub_53A1A0(v7, v30, (int)a3, a4, (int)v62, v32, (int)v53, &qword_1C7F2C0);
                  v33 = *v49;
                  sub_182CBA0(*v49, v62);
                  sub_182CBA0(v33, &v64);
                  v15 = v49;
                }
                goto LABEL_13;
              }
              goto LABEL_12;
            }
            goto LABEL_83;
          }
          if ( *v14 != 5 )
            goto LABEL_12;
          goto LABEL_44;
        }
        v40 = 0;
        if ( *(_DWORD *)(a2 + 24) )
        {
          do
          {
            LODWORD(v48) = v40;
            if ( !(unsigned __int8)sub_53A1A0(a1, *(_QWORD *)(a2 + 8LL * v40 + 32), (int)a3, a4, a5, v40, (int)v47, v48) )
              goto LABEL_12;
            v40 = (_DWORD)v48 + 1;
          }
          while ( (unsigned int)((_DWORD)v48 + 1) < *(_DWORD *)(a2 + 24) );
        }
        v15 = &qword_1C7F2C0;
      }
      v5 = 1;
      goto LABEL_13;
    }
  }
  return v5;
}

