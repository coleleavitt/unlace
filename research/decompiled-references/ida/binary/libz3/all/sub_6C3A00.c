__int64 __fastcall sub_6C3A00(__int64 a1, unsigned __int8 a2, _QWORD *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r12
  void *v12; // r13
  int v13; // eax
  void *v14; // r13
  void *v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r12
  void *v28; // r13
  int v29; // eax
  void *v30; // r13
  void *v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  unsigned __int8 v39; // [rsp+27h] [rbp-E1h]
  void *v40; // [rsp+28h] [rbp-E0h]
  void *v41; // [rsp+28h] [rbp-E0h]
  __int64 v43; // [rsp+50h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-B8h]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  __int64 v48; // [rsp+68h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-98h] BYREF
  __int64 v50; // [rsp+78h] [rbp-90h]
  __int64 v51; // [rsp+80h] [rbp-88h] BYREF
  __int64 v52; // [rsp+88h] [rbp-80h]
  __int64 v53; // [rsp+90h] [rbp-78h] BYREF
  __int64 v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-60h]
  int v57; // [rsp+B0h] [rbp-58h] BYREF
  char v58; // [rsp+B4h] [rbp-54h]
  __int64 v59; // [rsp+B8h] [rbp-50h]
  int v60; // [rsp+C0h] [rbp-48h] BYREF
  char v61; // [rsp+C4h] [rbp-44h]
  __int64 v62; // [rsp+C8h] [rbp-40h]

  if ( a2 )
  {
    v8 = a3[9];
    if ( v8 )
    {
      v9 = *(unsigned int *)(v8 - 4);
      v53 = 0;
      v54 = 0;
      v55 = 1;
      v56 = 0;
      if ( (_DWORD)v9 )
      {
        v43 = v9;
        v10 = 0;
        v39 = 0;
        v48 = a1 + 48;
        while ( 1 )
        {
          v20 = *(_QWORD *)(a1 + 8);
          v49 = 0;
          v50 = v20;
          sub_1361190(a4, *(_QWORD *)(a3[21] + 8 * v10), &v49);
          v21 = v49;
          if ( v49 == *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL) )
            break;
          if ( v49 && (v22 = v50, v19 = *(_DWORD *)(v49 + 8) == 1, --*(_DWORD *)(v49 + 8), v19) )
          {
            sub_15D7BC0(v22, v21);
            if ( v43 == ++v10 )
              goto LABEL_33;
          }
          else
          {
LABEL_28:
            if ( v43 == ++v10 )
              goto LABEL_33;
          }
        }
        sub_1361190(a4, *(_QWORD *)(a3[9] + 8 * v10), &v49);
        if ( !(unsigned __int8)sub_1666AE0(v48, v49, &v53, &v57) )
        {
          sub_1872CE0("");
          sub_1873130(114, 2000);
        }
        v58 &= 0xFCu;
        v11 = a3[16] + 32 * v10;
        v61 &= 0xFCu;
        v57 = 0;
        v12 = qword_1C7F2C0;
        v59 = 0;
        v60 = 1;
        v62 = 0;
        if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v57, v11);
        else
          v57 = *(_DWORD *)v11;
        if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
        {
          sub_182C690(v12, &v60, v11 + 16);
        }
        else
        {
          v13 = *(_DWORD *)(v11 + 16);
          v61 &= ~1u;
          v60 = v13;
        }
        sub_1831690(qword_1C7F2C0, &v57);
        v40 = qword_1C7F2C0;
        if ( (_DWORD)v53 && ((v58 & 1) != 0 || v57 != 1 || (v61 & 1) != 0 || v60 != 1) )
        {
          sub_1831650(qword_1C7F2C0, &v53, &v60);
          sub_1831650(v40, &v55, &v57);
          if ( (int)v55 < 0 )
          {
            sub_1831620(v40, &v53);
            sub_1831620(v40, &v55);
          }
          v51 = 0;
          v52 = 0;
          sub_1832C70(v40, &v53, &v55, &v51);
          if ( (v51 & 0x100000000LL) == 0 && (_DWORD)v51 == 1 )
          {
            sub_182CBA0(v40, &v51);
          }
          else
          {
            sub_1833EB0(v40, &v53, &v51, &v53);
            sub_1833EB0(v40, &v55, &v51, &v55);
            sub_182CBA0(v40, &v51);
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v53, (int *)&v53);
        }
        v14 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v57);
        sub_182CBA0(v14, &v60);
        v15 = qword_1C7F2C0;
        if ( v39 )
        {
          if ( (v55 & 0x100000000LL) != 0
            || (_DWORD)v55 != 1
            || (*(_BYTE *)(a5 + 20) & 1) != 0
            || *(_DWORD *)(a5 + 16) != 1 )
          {
            LOBYTE(v16) = sub_1848D40(qword_1C7F2C0, &v53, a5);
          }
          else if ( (v53 & 0x100000000LL) != 0 || (*(_BYTE *)(a5 + 4) & 1) != 0 )
          {
            v16 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v53, a5) >> 31;
          }
          else
          {
            LOBYTE(v16) = (int)v53 < *(_DWORD *)a5;
          }
          if ( (_BYTE)v16 )
          {
            sub_27B950((__int64)qword_1C7F2C0, a5, (int *)&v53);
            *a6 = v10;
          }
        }
        else
        {
          *a6 = v10;
          sub_27B950((__int64)v15, a5, (int *)&v53);
        }
        v17 = v49;
        if ( v49 )
        {
          v18 = v50;
          v19 = (*(_DWORD *)(v49 + 8))-- == 1;
          if ( v19 )
            sub_15D7BC0(v18, v17);
        }
        v39 = a2;
        goto LABEL_28;
      }
      goto LABEL_83;
    }
    goto LABEL_82;
  }
  v24 = a3[11];
  if ( !v24 )
  {
LABEL_82:
    v53 = 0;
    v54 = 0;
    v55 = 1;
    v56 = 0;
    goto LABEL_83;
  }
  v25 = *(unsigned int *)(v24 - 4);
  v53 = 0;
  v54 = 0;
  v55 = 1;
  v56 = 0;
  if ( !(_DWORD)v25 )
  {
LABEL_83:
    v39 = 0;
    sub_25A130((char *)&v53);
    return v39;
  }
  v44 = v25;
  v26 = 0;
  v39 = 0;
  v47 = a1 + 48;
  do
  {
    v35 = *(_QWORD *)(a1 + 8);
    v49 = 0;
    v50 = v35;
    sub_1361190(a4, *(_QWORD *)(a3[23] + 8 * v26), &v49);
    v36 = v49;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL) == v49 )
    {
      sub_1361190(a4, *(_QWORD *)(a3[11] + 8 * v26), &v49);
      if ( !(unsigned __int8)sub_1666AE0(v47, v49, &v53, &v57) )
      {
        sub_1872CE0("");
        sub_1873130(114, 2000);
      }
      v58 &= 0xFCu;
      v27 = a3[17] + 32 * v26;
      v61 &= 0xFCu;
      v57 = 0;
      v28 = qword_1C7F2C0;
      v59 = 0;
      v60 = 1;
      v62 = 0;
      if ( (*(_BYTE *)(v27 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v57, v27);
      else
        v57 = *(_DWORD *)v27;
      if ( (*(_BYTE *)(v27 + 20) & 1) != 0 )
      {
        sub_182C690(v28, &v60, v27 + 16);
      }
      else
      {
        v29 = *(_DWORD *)(v27 + 16);
        v61 &= ~1u;
        v60 = v29;
      }
      sub_1831690(qword_1C7F2C0, &v57);
      v41 = qword_1C7F2C0;
      if ( (_DWORD)v53 && ((v58 & 1) != 0 || v57 != 1 || (v61 & 1) != 0 || v60 != 1) )
      {
        sub_1831650(qword_1C7F2C0, &v53, &v60);
        sub_1831650(v41, &v55, &v57);
        if ( (int)v55 < 0 )
        {
          sub_1831620(v41, &v53);
          sub_1831620(v41, &v55);
        }
        v51 = 0;
        v52 = 0;
        sub_1832C70(v41, &v53, &v55, &v51);
        if ( (v51 & 0x100000000LL) == 0 && (_DWORD)v51 == 1 )
        {
          sub_182CBA0(v41, &v51);
        }
        else
        {
          sub_1833EB0(v41, &v53, &v51, &v53);
          sub_1833EB0(v41, &v55, &v51, &v55);
          sub_182CBA0(v41, &v51);
        }
      }
      else
      {
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v53, (int *)&v53);
      }
      v30 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v57);
      sub_182CBA0(v30, &v60);
      v31 = qword_1C7F2C0;
      if ( v39 )
      {
        if ( (*(_BYTE *)(a5 + 20) & 1) != 0
          || *(_DWORD *)(a5 + 16) != 1
          || (v55 & 0x100000000LL) != 0
          || (_DWORD)v55 != 1 )
        {
          LOBYTE(v32) = sub_1848D40(qword_1C7F2C0, a5, &v53);
        }
        else if ( (*(_BYTE *)(a5 + 4) & 1) != 0 || (v53 & 0x100000000LL) != 0 )
        {
          v32 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a5, &v53) >> 31;
        }
        else
        {
          LOBYTE(v32) = *(_DWORD *)a5 < (int)v53;
        }
        if ( (_BYTE)v32 )
        {
          sub_27B950((__int64)qword_1C7F2C0, a5, (int *)&v53);
          *a6 = v26;
        }
      }
      else
      {
        *a6 = v26;
        sub_27B950((__int64)v31, a5, (int *)&v53);
      }
      v33 = v49;
      if ( v49 )
      {
        v34 = v50;
        v19 = (*(_DWORD *)(v49 + 8))-- == 1;
        if ( v19 )
          sub_15D7BC0(v34, v33);
      }
      v39 = 1;
    }
    else if ( v49 )
    {
      v37 = v50;
      v19 = (*(_DWORD *)(v49 + 8))-- == 1;
      if ( v19 )
        sub_15D7BC0(v37, v36);
    }
    ++v26;
  }
  while ( v44 != v26 );
LABEL_33:
  sub_25A130((char *)&v53);
  return v39;
}

