__int64 __fastcall sub_77B180(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // r10d
  __int64 v12; // r12
  int v13; // eax
  size_t v14; // r15
  char *v15; // rbx
  int v16; // esi
  __int64 v17; // rax
  char *v18; // rdi
  char *v19; // rax
  __int64 v20; // rbx
  _OWORD *v21; // rax
  unsigned int v22; // r10d
  _OWORD *v23; // r9
  char *v24; // rax
  char *v25; // r11
  _OWORD *v26; // rbp
  __int64 v27; // rdx
  _QWORD *v28; // rsi
  _QWORD *v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r15
  unsigned int v35; // ebp
  __int64 v36; // r12
  __int64 *v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 *v40; // rsi
  __int64 *i; // rax
  __int64 v42; // rax
  __int64 *v43; // rsi
  int v44; // edx
  __int64 *v45; // r9
  __int64 v46; // rdx
  __int64 *v47; // r10
  __int64 *k; // rax
  __int64 v49; // rdx
  __int64 *j; // rax
  _DWORD *v51; // rbx
  __int64 result; // rax
  int v54; // [rsp+0h] [rbp-88h]
  __int64 v55; // [rsp+0h] [rbp-88h]
  __int64 v56; // [rsp+8h] [rbp-80h]
  _OWORD *v57; // [rsp+10h] [rbp-78h]
  __int64 v58; // [rsp+18h] [rbp-70h]
  unsigned int v59; // [rsp+20h] [rbp-68h]
  int v60; // [rsp+28h] [rbp-60h]
  __int64 v61; // [rsp+30h] [rbp-58h]
  __int64 v63; // [rsp+40h] [rbp-48h]

  v63 = sub_186B270(0xA0u);
  sub_1373200(v63, a1[4]);
  v6 = (char *)sub_186B270(0x40u);
  *(_OWORD *)v6 = 0;
  *((_OWORD *)v6 + 1) = 0;
  *((_OWORD *)v6 + 2) = 0;
  *((_OWORD *)v6 + 3) = 0;
  v7 = a1[7];
  if ( v7 )
  {
    v2 = *(unsigned int *)(v7 - 4);
    if ( (_DWORD)v2 )
    {
      v3 = 8 * v2;
      v54 = 0;
      v5 = 0;
      v8 = 8;
      v61 = 8 * v2;
      v58 = 0;
      while ( 1 )
      {
        v4 = *(_QWORD *)(v7 + v58);
        v9 = *(unsigned int *)(v4 + 24);
        if ( (_DWORD)v9 )
          break;
LABEL_25:
        v58 += 8;
        if ( v58 == v61 )
          goto LABEL_57;
        v7 = a1[7];
      }
      v10 = v4;
      v56 = v4 + 8 * v9;
      while ( 1 )
      {
        v11 = 2 * v8;
        v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 16LL);
        if ( 3 * (int)v8 >= (unsigned int)(4 * (v5 + v54)) )
        {
          v13 = v8 - 1;
          v14 = 8LL * (unsigned int)v8;
          v15 = &v6[v14];
          goto LABEL_8;
        }
        v20 = v11;
        v14 = 8LL * v11;
        v21 = (_OWORD *)sub_186B270(v14);
        v22 = 2 * v8;
        v23 = v21;
        if ( 2 * (_DWORD)v8 )
          break;
        v25 = &v6[8 * v8];
        v15 = (char *)v21;
        v13 = -1;
        if ( v25 != v6 )
          goto LABEL_34;
LABEL_42:
        if ( v6 )
        {
          v59 = v22;
          v60 = v13;
          v57 = v23;
          sub_186B220(v6);
          v22 = v59;
          v13 = v60;
          v23 = v57;
        }
        v6 = (char *)v23;
        v8 = v22;
        v5 = 0;
LABEL_8:
        v16 = *(_DWORD *)(v12 + 12);
        v17 = 8LL * (v16 & (unsigned int)v13);
        v18 = &v6[v17];
        if ( v17 == v14 )
        {
          v3 = 0;
LABEL_16:
          if ( v18 != v6 )
          {
            v19 = v6;
            do
            {
              while ( 1 )
              {
                v2 = *(_QWORD *)v19;
                if ( *(_QWORD *)v19 <= 1u )
                  break;
                if ( *(_DWORD *)(v2 + 12) == v16 && v12 == v2 )
                  goto LABEL_51;
                v19 += 8;
                if ( v18 == v19 )
                  goto LABEL_24;
              }
              if ( !v2 )
                goto LABEL_27;
              v3 = (__int64)v19;
              v19 += 8;
            }
            while ( v18 != v19 );
          }
LABEL_24:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v19 = &v6[v17];
        v3 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v2 = *(_QWORD *)v19;
            if ( *(_QWORD *)v19 <= 1u )
              break;
            if ( *(_DWORD *)(v2 + 12) == v16 && v12 == v2 )
            {
LABEL_51:
              *(_QWORD *)v19 = v12;
              goto LABEL_30;
            }
            v19 += 8;
            if ( v19 == v15 )
              goto LABEL_16;
          }
          if ( !v2 )
            break;
          v3 = (__int64)v19;
          v19 += 8;
          if ( v19 == v15 )
            goto LABEL_16;
        }
LABEL_27:
        if ( v3 )
          v5 = (unsigned int)(v5 - 1);
        else
          v3 = (__int64)v19;
        *(_QWORD *)v3 = v12;
        ++v54;
LABEL_30:
        v10 += 8;
        if ( v56 == v10 )
          goto LABEL_25;
      }
      v24 = (char *)memset(v21, 0, 8 * v20);
      v22 = 2 * v8;
      v25 = &v6[8 * v8];
      v23 = v24;
      v15 = &v24[v14];
      v13 = 2 * v8 - 1;
LABEL_34:
      v26 = v6;
      do
      {
        while ( *(_QWORD *)v26 <= 1u )
        {
          v26 = (_OWORD *)((char *)v26 + 8);
          if ( v26 == (_OWORD *)v25 )
            goto LABEL_42;
        }
        v27 = 8LL * (*(_DWORD *)(*(_QWORD *)v26 + 12LL) & (unsigned int)v13);
        v28 = (_QWORD *)((char *)v23 + v27);
        if ( v14 == v27 )
        {
LABEL_45:
          if ( v23 == (_OWORD *)v28 )
          {
LABEL_50:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v29 = v23;
          while ( *v29 )
          {
            if ( v28 == ++v29 )
              goto LABEL_50;
          }
        }
        else
        {
          v29 = (_QWORD *)((char *)v23 + v27);
          while ( *v29 )
          {
            if ( ++v29 == (_QWORD *)v15 )
              goto LABEL_45;
          }
        }
        v30 = *(_QWORD *)v26;
        v26 = (_OWORD *)((char *)v26 + 8);
        *v29 = v30;
      }
      while ( v26 != (_OWORD *)v25 );
      goto LABEL_42;
    }
  }
  LODWORD(v8) = 8;
LABEL_57:
  v31 = *a2;
  v32 = *(_QWORD *)(*a2 + 80);
  if ( v32 )
  {
    v2 = *(unsigned int *)(v32 - 4);
    if ( (_DWORD)v2 )
    {
      v33 = (unsigned int)v8;
      v34 = 8 * v2;
      v35 = v8 - 1;
      v36 = 0;
      v4 = 8 * v33;
      v37 = (__int64 *)&v6[v4];
      while ( 1 )
      {
        v38 = *(_QWORD *)(v32 + v36);
        v3 = *(unsigned int *)(v38 + 12);
        v39 = 8LL * (v35 & *(_DWORD *)(v38 + 12));
        v40 = (__int64 *)&v6[v39];
        if ( v39 != v4 )
        {
          for ( i = (__int64 *)&v6[v39]; v37 != i; ++i )
          {
            v2 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v2 + 12) == (_DWORD)v3 && v38 == v2 )
                goto LABEL_75;
            }
            else if ( !v2 )
            {
              goto LABEL_67;
            }
          }
        }
        if ( v40 != (__int64 *)v6 )
        {
          for ( j = (__int64 *)v6; v40 != j; ++j )
          {
            v2 = *j;
            if ( (unsigned __int64)*j > 1 )
            {
              if ( *(_DWORD *)(v2 + 12) == (_DWORD)v3 && v38 == v2 )
                goto LABEL_75;
            }
            else if ( !v2 )
            {
              break;
            }
          }
        }
LABEL_67:
        v42 = *(unsigned int *)(v31 + 32);
        v43 = *(__int64 **)(v31 + 24);
        v44 = v42 - 1;
        v42 *= 24;
        v45 = (__int64 *)((char *)v43 + v42);
        v46 = 24LL * ((unsigned int)v3 & v44);
        v47 = &v43[(unsigned __int64)v46 / 8];
        if ( v46 != v42 )
        {
          for ( k = &v43[(unsigned __int64)v46 / 8]; v45 != k; k += 3 )
          {
            v49 = *k;
            if ( (unsigned __int64)*k > 1 )
            {
              if ( *(_DWORD *)(v49 + 12) == (_DWORD)v3 && v38 == v49 )
                goto LABEL_86;
            }
            else if ( !v49 )
            {
              goto LABEL_74;
            }
          }
        }
        if ( v43 == v47 )
        {
LABEL_95:
          v49 = 0;
        }
        else
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v49 = *v43;
              if ( (unsigned __int64)*v43 > 1 )
                break;
              if ( !v49 )
                goto LABEL_74;
              v43 += 3;
              if ( v47 == v43 )
                goto LABEL_95;
            }
            if ( *(_DWORD *)(v49 + 12) == (_DWORD)v3 && v38 == v49 )
              break;
            v43 += 3;
            if ( v47 == v43 )
              goto LABEL_95;
          }
          k = v43;
LABEL_86:
          v49 = k[2];
        }
LABEL_74:
        v55 = v4;
        sub_135F9B0(v63, v38, v49);
        v4 = v55;
LABEL_75:
        v36 += 8;
        if ( v36 == v34 )
          break;
        v32 = *(_QWORD *)(v31 + 80);
      }
    }
  }
  sub_13734A0(v63, v31, v2, v3, v4, v5);
  sub_13775E0(v63, v31);
  sub_77A780(a1, *a2, v63);
  ++*(_DWORD *)(v63 + 16);
  v51 = (_DWORD *)*a2;
  if ( *a2 )
  {
    if ( v51[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v51)(v51);
      sub_186B220(v51);
    }
  }
  result = (__int64)a2;
  *a2 = v63;
  if ( v6 )
    return sub_186B220(v6);
  return result;
}

