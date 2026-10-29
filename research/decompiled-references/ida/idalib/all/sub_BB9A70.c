void __fastcall sub_BB9A70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // r12
  const char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r13
  _QWORD *v22; // rcx
  const char *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  char *v26; // r15
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rdi
  int v31; // edx
  unsigned __int64 v32; // rax
  int v33; // r15d
  int v34; // edx
  __int64 v35; // r14
  __int64 v36; // r12
  unsigned __int64 *v37; // rax
  __int64 *v38; // rdx
  __int64 *v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rbp
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // [rsp+8h] [rbp-50h]
  int v49; // [rsp+8h] [rbp-50h]
  _QWORD v50[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_BB2B80(a1, *(const char **)(a2 + 48), a3, a4, a5, a6);
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 56);
    if ( (v9 & 4) != 0 )
    {
      v34 = *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 16);
      if ( v34 )
      {
        v35 = 0;
        v36 = 8LL * (unsigned int)(v34 - 1);
        while ( 1 )
        {
          sub_BB7B60(a1, *(_QWORD *)(*(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 24) + v35), 0);
          if ( v36 == v35 )
            break;
          v9 = *(_QWORD *)(v8 + 56);
          v35 += 8;
        }
      }
    }
  }
  sub_BB7960(a1, a2);
  v14 = *(_QWORD *)(a2 + 48);
  if ( (*(_BYTE *)(v14 + 29) & 1) == 0 )
    goto LABEL_4;
  v37 = sub_B8C3D0(v14, a2, v10, v11, v12, v13);
  v38 = (__int64 *)*v37;
  v11 = *v37 + 8LL * *((unsigned int *)v37 + 2);
  if ( *v37 >= v11 )
  {
    if ( v38 == (__int64 *)v11 )
      goto LABEL_4;
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 295 )
    {
      v39 = (__int64 *)(v11 + 8);
      do
      {
        v11 = (unsigned __int64)v39;
        if ( v38 == v39 )
          goto LABEL_4;
        v40 = *v39++;
      }
      while ( *(_WORD *)(v40 + 36) != 295 );
    }
LABEL_43:
    sub_995540(*(_QWORD *)a1, "#pragma omp end declare target\n");
    goto LABEL_4;
  }
  v41 = *v37;
  while ( *(_WORD *)(*(_QWORD *)v41 + 36LL) != 295 )
  {
    v41 += 8LL;
    if ( v11 == v41 )
      goto LABEL_4;
  }
  if ( v11 != v41 )
    goto LABEL_43;
LABEL_4:
  if ( *(_BYTE *)(a1 + 36) )
  {
    v15 = *(_QWORD *)(a2 + 48);
    if ( (*(_BYTE *)(v15 + 28) & 0x7F) != 0x27 )
    {
      v16 = (const char *)v50;
      if ( !(unsigned __int8)sub_B7D390(*(_QWORD *)(a2 + 48), (__int64)v50, 0, v11) || v50[0] == v15 )
      {
        v17 = sub_BC39F0(a2);
        v18 = *(_QWORD *)(v17 + 16) + 8LL * *(unsigned int *)(v17 + 24);
        v21 = *(_QWORD *)(sub_BC39F0(a2) + 16);
        if ( v18 != v21 )
        {
          while ( 1 )
          {
            v26 = *(char **)((*(_QWORD *)(*(_QWORD *)v21 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112);
            v27 = *((_QWORD *)v26 + 13);
            v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v27 & 1) == 0 )
            {
              v22 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v27 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              {
                v23 = (const char *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v27 & 2) == 0 )
                  goto LABEL_12;
                v42 = v22[2295];
                v43 = (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFBLL;
                if ( v42 )
                {
                  v44 = v22[294];
                  v22[304] += 24LL;
                  v45 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  v16 = (const char *)(v45 + 24);
                  if ( v22[295] >= v45 + 24 && v44 )
                  {
                    v22[294] = v16;
                    v46 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v16 = (const char *)&qword_18;
                    v46 = sub_986170((__int64)(v22 + 294), 24, 24, 3, v19, v20);
                    v45 = v46 & 0xFFFFFFFFFFFFFFFBLL;
                  }
                  *(_QWORD *)v46 = v42;
                  v43 = v45 | 4;
                  *(_DWORD *)(v46 + 8) = 0;
                  *(_QWORD *)(v46 + 16) = v26;
                }
                v28 = v43 & 0xFFFFFFFFFFFFFFFELL;
                v27 = v28 | 1;
                *((_QWORD *)v26 + 13) = v28 | 1;
              }
            }
            v29 = v27 & 0xFFFFFFFFFFFFFFF8LL;
            v23 = (const char *)v29;
            if ( v28 && (v28 & 4) != 0 && (v23 = nullptr, v29) )
            {
              v30 = *(_QWORD *)v29;
              v31 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
              if ( *(_DWORD *)(v29 + 8) != v31 )
              {
                *(_DWORD *)(v29 + 8) = v31;
                v16 = v26;
                v48 = v29;
                (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v30 + 152LL))(v30, v26);
                v29 = v48;
              }
              v23 = *(const char **)(v29 + 16);
              if ( (unsigned int)sub_B77D20((__int64)v23) != 1 )
                goto LABEL_13;
LABEL_21:
              v32 = *(_QWORD *)(v15 + 80);
              if ( ((*(_BYTE *)(v15 + 82) & 0x40) == 0 || (v32 & 0x2000000) != 0) && (v32 & 0x2000000) == 0 )
              {
                v24 = *(unsigned __int8 *)(v15 + 83);
                if ( (v24 & 8) != 0 || (*(_BYTE *)(v15 + 128) & 1) == 0 && !*(_QWORD *)(v15 + 128) )
                {
                  v24 &= 0x40u;
                  if ( !(_DWORD)v24 )
                  {
                    v47 = HIDWORD(v32);
                    if ( (v47 & 0x20) == 0 && (v47 & 0x40) == 0 && !sub_B8CF80(v15, (__int64)v16, v24, v25, v19, v20) )
                      sub_995540(*(_QWORD *)a1, ";\n");
                  }
                }
              }
              v33 = 0;
              v49 = *(_DWORD *)(a1 + 32);
              if ( v49 )
              {
                do
                {
                  ++v33;
                  sub_995540(*(_QWORD *)a1, "  ");
                }
                while ( v49 != v33 );
              }
              v21 += 8;
              sub_BB2B80(a1, v23, v24, v25, v19, v20);
              v16 = v23;
              sub_BB57B0(a1, (__int64)v23);
              if ( v18 == v21 )
                return;
            }
            else
            {
LABEL_12:
              if ( (unsigned int)sub_B77D20((__int64)v23) == 1 )
                goto LABEL_21;
LABEL_13:
              v21 += 8;
              if ( v18 == v21 )
                return;
            }
          }
        }
      }
    }
  }
}
