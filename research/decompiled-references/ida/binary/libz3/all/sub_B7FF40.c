__int64 __fastcall sub_B7FF40(int *a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  int *v5; // r12
  _QWORD *v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // r13
  void *v12; // r12
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // r13
  int v17; // eax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // rax
  void *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  void *v25; // r15
  _QWORD *v26; // rax
  unsigned int v27; // r10d
  size_t v28; // rdi
  __int64 v29; // rax
  _DWORD *v30; // r14
  unsigned int v31; // r8d
  _DWORD *v32; // r11
  __int64 v33; // rax
  _QWORD *v34; // rdx
  _DWORD *v35; // rdi
  _DWORD *i; // rax
  int v37; // ecx
  char v38; // r9
  __int64 v39; // rcx
  char v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rax
  _DWORD *v43; // r15
  _DWORD *v44; // rbp
  _QWORD *v45; // r14
  void *v46; // r12
  _DWORD *v47; // rsi
  char **exception; // rbp
  _QWORD *v49; // [rsp+10h] [rbp-B8h]
  __int64 v50; // [rsp+18h] [rbp-B0h]
  unsigned int v51; // [rsp+20h] [rbp-A8h]
  _DWORD *v52; // [rsp+28h] [rbp-A0h]
  unsigned int v53; // [rsp+28h] [rbp-A0h]
  int *v54; // [rsp+30h] [rbp-98h]
  _DWORD *v55; // [rsp+30h] [rbp-98h]
  _QWORD *v56; // [rsp+38h] [rbp-90h]
  __int64 v57[4]; // [rsp+40h] [rbp-88h] BYREF
  int v58; // [rsp+60h] [rbp-68h]
  int v59; // [rsp+68h] [rbp-60h] BYREF
  char v60; // [rsp+6Ch] [rbp-5Ch]
  __int64 v61; // [rsp+70h] [rbp-58h]
  int v62; // [rsp+78h] [rbp-50h] BYREF
  char v63; // [rsp+7Ch] [rbp-4Ch]
  __int64 v64; // [rsp+80h] [rbp-48h]

  v5 = a1;
  v6 = a3;
  v7 = *a3;
  if ( *a3 )
  {
    v8 = *(unsigned int *)(v7 - 4);
    if ( (_DWORD)v8 )
    {
      v49 = v6;
      v9 = v7 + 40 * v8;
      v10 = v7;
      v11 = a4;
      do
      {
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v10 + 8);
        v13 = v10 + 24;
        v10 += 40;
        sub_182CBA0(v12, v13);
      }
      while ( v10 != v9 );
      v6 = v49;
      a4 = v11;
      v5 = a1;
      v7 = *v49;
    }
    *(_DWORD *)(v7 - 4) = 0;
  }
  result = sub_27B950((__int64)qword_1C7F2C0, a4, v5 + 386);
  v15 = *a2;
  if ( *a2 )
  {
    result = v15 + 40LL * *(unsigned int *)(v15 - 4);
    v50 = result;
    if ( result != v15 )
    {
      v16 = *a2;
      do
      {
        v24 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)v5 + 392LL))(v5, *(_QWORD *)v16);
        v60 &= 0xFCu;
        v25 = qword_1C7F2C0;
        v63 &= 0xFCu;
        v58 = v24;
        v59 = 0;
        v61 = 0;
        v62 = 1;
        v64 = 0;
        if ( (*(_BYTE *)(v16 + 12) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v59, v16 + 8);
          if ( (*(_BYTE *)(v16 + 28) & 1) == 0 )
          {
LABEL_11:
            v17 = *(_DWORD *)(v16 + 24);
            v18 = (_QWORD *)*v6;
            v63 &= ~1u;
            v62 = v17;
            if ( v18 )
              goto LABEL_12;
            goto LABEL_18;
          }
        }
        else
        {
          v59 = *(_DWORD *)(v16 + 8);
          if ( (*(_BYTE *)(v16 + 28) & 1) == 0 )
            goto LABEL_11;
        }
        sub_182C690(v25, &v62, v16 + 24);
        v18 = (_QWORD *)*v6;
        if ( *v6 )
        {
LABEL_12:
          v19 = *((unsigned int *)v18 - 1);
          if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
          {
            v27 = (unsigned int)(3 * v19 + 1) >> 1;
            v28 = 40 * v27 + 8;
            if ( 40 * (int)v19 + 8 >= (unsigned int)v28 || (unsigned int)v19 >= v27 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_B75C60(v57, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v57);
              sub_233E40((__int64)v57);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v51 = (unsigned int)(3 * v19 + 1) >> 1;
            v29 = sub_186B270(v28);
            v30 = (_DWORD *)*v6;
            v31 = v51;
            v32 = (_DWORD *)v29;
            v18 = (_QWORD *)(v29 + 8);
            if ( *v6 )
            {
              v33 = (unsigned int)*(v30 - 1);
              v34 = v18;
              v32[1] = v33;
              v35 = &v30[10 * v33];
              for ( i = v30; v35 != i; *(v34 - 1) = v41 )
              {
                v37 = *i;
                i += 10;
                v34 += 5;
                *((_DWORD *)v34 - 10) = v37;
                v38 = *((_BYTE *)i - 28);
                *((_DWORD *)v34 - 8) = *(i - 8);
                *((_BYTE *)v34 - 28) = v38 & 3 | *((_BYTE *)v34 - 28) & 0xFC;
                v39 = *((_QWORD *)i - 3);
                *((_QWORD *)i - 3) = 0;
                *(v34 - 3) = v39;
                v40 = *((_BYTE *)i - 12);
                *((_DWORD *)v34 - 4) = *(i - 4);
                *((_BYTE *)v34 - 12) = v40 & 3 | *((_BYTE *)v34 - 12) & 0xFC;
                v41 = *((_QWORD *)i - 1);
                *((_QWORD *)i - 1) = 0;
              }
              v42 = (unsigned int)*(v30 - 1);
              if ( (_DWORD)v42 )
              {
                v52 = v32;
                v43 = &v30[10 * v42];
                v54 = v5;
                v56 = v6;
                v44 = v30;
                v45 = v18;
                do
                {
                  v46 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v44 + 2);
                  v47 = v44 + 6;
                  v44 += 10;
                  sub_182CBA0(v46, v47);
                }
                while ( v44 != v43 );
                v6 = v56;
                v18 = v45;
                v31 = v51;
                v32 = v52;
                v5 = v54;
                v30 = (_DWORD *)*v56;
              }
              v55 = v32;
              v53 = v31;
              sub_186B220(v30 - 2);
              v32 = v55;
              v31 = v53;
              v20 = &v18[5 * (unsigned int)v55[1]];
            }
            else
            {
              *(_DWORD *)(v29 + 4) = 0;
              v20 = (_QWORD *)(v29 + 8);
            }
            *v6 = v18;
            *v32 = v31;
          }
          else
          {
            v20 = &v18[5 * v19];
          }
          goto LABEL_14;
        }
LABEL_18:
        v26 = (_QWORD *)sub_186B270(0x58u);
        v18 = v26 + 1;
        *v26 = 2;
        *v6 = v26 + 1;
        v20 = v26 + 1;
LABEL_14:
        v21 = qword_1C7F2C0;
        v16 += 40;
        *(_DWORD *)v20 = v58;
        *((_DWORD *)v20 + 2) = v59;
        *((_BYTE *)v20 + 12) = v60 & 3 | *((_BYTE *)v20 + 12) & 0xFC;
        v22 = v61;
        v61 = 0;
        v20[2] = v22;
        *((_DWORD *)v20 + 6) = v62;
        *((_BYTE *)v20 + 28) = v63 & 3 | *((_BYTE *)v20 + 28) & 0xFC;
        v23 = v64;
        v64 = 0;
        v20[4] = v23;
        ++*((_DWORD *)v18 - 1);
        sub_182CBA0(v21, &v59);
        result = sub_182CBA0(v21, &v62);
      }
      while ( v50 != v16 );
    }
  }
  return result;
}

