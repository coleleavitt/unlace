__int64 __fastcall sub_888AD0(__int64 a1, unsigned int a2, __int64 a3, int *a4)
{
  int v5; // r14d
  bool v7; // al
  void *v8; // r15
  bool v9; // al
  int v10; // eax
  int v11; // r15d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // r15d
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r13
  int v20; // eax
  void *v21; // r14
  bool v22; // al
  bool v23; // al
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  bool v27; // al
  __int64 result; // rax
  __int64 v29; // rbx
  _DWORD *v30; // rax
  unsigned int v31; // eax
  _QWORD *v32; // rbx
  __int64 v33; // r14
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // r14
  void *v37; // r15
  __int64 v38; // rsi
  char *v39; // rdi
  int v40; // edx
  __int64 v41; // rsi
  char *v42; // rcx
  __int64 v43; // rax
  unsigned int *v44; // rax
  unsigned int *v45; // r13
  unsigned int *v46; // r12
  unsigned int v47; // edx
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // r8
  int v51; // r9d
  unsigned int v52; // r14d
  unsigned int v53; // r14d
  __int64 v54; // rax
  _QWORD *v55; // rdx
  _QWORD *v56; // rdx
  int v57; // eax
  __int64 v58; // rbx
  unsigned __int8 v59; // si
  _DWORD *v60; // rax
  unsigned int v61; // eax
  unsigned int v62; // esi
  unsigned __int64 *v63; // [rsp+8h] [rbp-90h]
  _QWORD *v64; // [rsp+10h] [rbp-88h]
  __int64 v66; // [rsp+28h] [rbp-70h]
  __int64 v67; // [rsp+28h] [rbp-70h]
  __int64 v68; // [rsp+30h] [rbp-68h] BYREF
  __int64 v69; // [rsp+38h] [rbp-60h]
  __int64 v70; // [rsp+40h] [rbp-58h] BYREF
  __int64 v71; // [rsp+48h] [rbp-50h]
  __int64 v72; // [rsp+50h] [rbp-48h]

  v5 = *a4;
  v64 = *(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * a2);
  if ( !*a4 )
  {
    v29 = *(_QWORD *)(a1 + 496);
    v30 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * a2)) + 24);
    if ( v30 && *v30 == 5 )
      LOBYTE(v5) = v30[1] == 1;
    v31 = sub_8552F0(a1, v5);
    v24 = sub_FF9E10(v29, v31);
    goto LABEL_49;
  }
  v7 = (a4[1] & 1) == 0;
  if ( v5 == 1 && (a4[1] & 1) == 0 )
  {
    v9 = (a4[5] & 1) == 0;
    if ( (a4[5] & 1) == 0 && a4[4] == 1 )
    {
      v58 = *(_QWORD *)(a1 + 496);
      v59 = 0;
      v60 = *(_DWORD **)(sub_15D1F10(*v64) + 24);
      if ( v60 && *v60 == 5 )
        v59 = v60[1] == 1;
      v61 = sub_8552C0(a1, v59);
      v24 = sub_FF9E10(v58, v61);
      goto LABEL_49;
    }
    v68 = 0;
    v69 = 0;
    v70 = 1;
    v8 = qword_1C7F2C0;
    v71 = 0;
    v72 = 0;
  }
  else
  {
    v68 = 0;
    v69 = 0;
    v70 = 1;
    v8 = qword_1C7F2C0;
    v71 = 0;
    v72 = 0;
    if ( !v7 )
    {
      sub_182C690(qword_1C7F2C0, &v68, a4);
      if ( (a4[5] & 1) == 0 )
        goto LABEL_7;
LABEL_25:
      sub_182C690(v8, &v70, a4 + 4);
      goto LABEL_8;
    }
    v9 = (a4[5] & 1) == 0;
  }
  LODWORD(v68) = v5;
  if ( !v9 )
    goto LABEL_25;
LABEL_7:
  v10 = a4[4];
  BYTE4(v70) &= ~1u;
  LODWORD(v70) = v10;
LABEL_8:
  v11 = sub_182DB30(&v68);
  v12 = 3 * sub_182DB30(&v70);
  v13 = *(unsigned int *)(a1 + 896);
  v14 = *(_QWORD *)(a1 + 888);
  v15 = v12 + v11;
  v16 = v13 - 1;
  v13 *= 48;
  v17 = v14 + v13;
  v18 = 48LL * (v15 & v16);
  v19 = v14 + v18;
  if ( v18 == v13 )
    goto LABEL_28;
  v14 += v18;
  while ( 1 )
  {
    v20 = *(_DWORD *)(v14 + 4);
    v21 = qword_1C7F2C0;
    if ( v20 != 2 )
    {
      if ( !v20 )
        goto LABEL_44;
      goto LABEL_11;
    }
    if ( *(_DWORD *)v14 == v15 )
    {
      if ( (*(_BYTE *)(v14 + 12) & 1) != 0 || (v68 & 0x100000000LL) != 0 )
      {
        v66 = v17;
        v25 = sub_182C7B0(qword_1C7F2C0, v14 + 8, &v68);
        v17 = v66;
        v22 = v25 == 0;
      }
      else
      {
        v22 = *(_DWORD *)(v14 + 8) == (_DWORD)v68;
      }
      if ( v22 )
      {
        if ( (*(_BYTE *)(v14 + 28) & 1) != 0 || (v70 & 0x100000000LL) != 0 )
        {
          v67 = v17;
          v57 = sub_182C7B0(v21, v14 + 24, &v70);
          v17 = v67;
          v23 = v57 == 0;
        }
        else
        {
          v23 = *(_DWORD *)(v14 + 24) == (_DWORD)v70;
        }
        if ( v23 )
          break;
      }
    }
LABEL_11:
    v14 += 48;
    if ( v17 == v14 )
    {
      v14 = *(_QWORD *)(a1 + 888);
LABEL_28:
      v21 = qword_1C7F2C0;
      if ( v19 == v14 )
      {
LABEL_44:
        sub_182CBA0(v21, &v68);
        return sub_182CBA0(v21, &v70);
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = *(_DWORD *)(v14 + 4);
          if ( v26 != 2 )
          {
            if ( !v26 )
              goto LABEL_44;
            goto LABEL_31;
          }
          if ( *(_DWORD *)v14 == v15 )
            break;
LABEL_31:
          v14 += 48;
          if ( v19 == v14 )
            goto LABEL_44;
        }
        if ( (*(_BYTE *)(v14 + 12) & 1) == 0 && (v68 & 0x100000000LL) == 0 )
          break;
        if ( !(unsigned int)sub_182C7B0(v21, v14 + 8, &v68) )
          goto LABEL_37;
        v14 += 48;
        v21 = qword_1C7F2C0;
        if ( v19 == v14 )
          goto LABEL_44;
      }
      if ( *(_DWORD *)(v14 + 8) != (_DWORD)v68 )
        goto LABEL_31;
LABEL_37:
      if ( (*(_BYTE *)(v14 + 28) & 1) != 0 || (v70 & 0x100000000LL) != 0 )
        v27 = (unsigned int)sub_182C7B0(v21, v14 + 24, &v70) == 0;
      else
        v27 = *(_DWORD *)(v14 + 24) == (_DWORD)v70;
      v21 = qword_1C7F2C0;
      if ( v27 )
        goto LABEL_23;
      goto LABEL_31;
    }
  }
  v21 = qword_1C7F2C0;
LABEL_23:
  sub_182CBA0(v21, &v68);
  sub_182CBA0(v21, &v70);
  v24 = *(_DWORD *)(v14 + 40);
LABEL_49:
  v32 = *(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * v24);
  v33 = sub_15D1F10(*v64);
  result = sub_15D1F10(*v32);
  if ( v33 == result )
  {
    result = v64[8];
    if ( v32[8] != result )
    {
      sub_829BD0((_QWORD *)a1);
      v34 = *(_QWORD *)(a1 + 720);
      v63 = (unsigned __int64 *)(a1 + 720);
      if ( v34 )
      {
        v35 = *(unsigned int *)(v34 - 4);
        if ( (_DWORD)v35 )
        {
          v36 = v34 + 40 * v35;
          do
          {
            v37 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v34 + 8);
            v38 = v34 + 24;
            v34 += 40;
            sub_182CBA0(v37, v38);
          }
          while ( v34 != v36 );
          v34 = *(_QWORD *)(a1 + 720);
        }
        *(_DWORD *)(v34 - 4) = 0;
      }
      if ( *(_DWORD *)(a1 + 740) || *(_DWORD *)(a1 + 744) )
      {
        v39 = *(char **)(a1 + 728);
        v40 = 0;
        v41 = *(unsigned int *)(a1 + 736);
        v42 = &v39[12 * v41];
        v43 = *(_QWORD *)(a1 + 728);
        if ( v39 != v42 )
        {
          do
          {
            while ( *(_DWORD *)(v43 + 4) )
            {
              *(_DWORD *)(v43 + 4) = 0;
              v43 += 12;
              if ( v42 == (char *)v43 )
                goto LABEL_70;
            }
            v43 += 12;
            ++v40;
          }
          while ( v42 != (char *)v43 );
LABEL_70:
          if ( (unsigned int)v41 > 0x10 && 3 * (int)v41 < (unsigned int)(4 * v40) )
          {
            if ( !v39 )
            {
              *(_QWORD *)(a1 + 728) = 0;
              v62 = (unsigned int)v41 >> 1;
              *(_DWORD *)(a1 + 736) = v62;
              v53 = v62;
              v54 = sub_186B270(12LL * v62);
              goto LABEL_75;
            }
            sub_186B220(v39);
            v52 = *(_DWORD *)(a1 + 736);
            *(_QWORD *)(a1 + 728) = 0;
            v53 = v52 >> 1;
            *(_DWORD *)(a1 + 736) = v53;
            v54 = sub_186B270(12LL * v53);
            if ( v53 )
            {
              if ( v53 == 1 )
              {
                v56 = (_QWORD *)v54;
LABEL_79:
                *v56 = 0;
              }
              else
              {
LABEL_75:
                v55 = (_QWORD *)v54;
                do
                {
                  *v55 = 0;
                  v55 += 3;
                  *(_QWORD *)((char *)v55 - 12) = 0;
                }
                while ( v55 != (_QWORD *)(v54 + 24LL * (v53 >> 1)) );
                if ( (v53 & 1) != 0 )
                {
                  v56 = (_QWORD *)(v54 + 12LL * (v53 & 0x7FFFFFFE));
                  goto LABEL_79;
                }
              }
            }
            *(_QWORD *)(a1 + 728) = v54;
          }
        }
        *(_QWORD *)(a1 + 740) = 0;
      }
      v44 = *(unsigned int **)sub_1005490(*(_QWORD *)(a1 + 496), a3);
      if ( v44 )
      {
        v45 = &v44[*(v44 - 1)];
        if ( v45 != v44 )
        {
          v46 = v44;
          do
          {
            v47 = *v46++;
            sub_835A50(a1, &qword_1C7F280, v47);
          }
          while ( v45 != v46 );
        }
      }
      ++*(_DWORD *)(a1 + 420);
      v48 = sub_880D40(a1, v63, (__int64)v64, (__int64)v32);
      v49 = sub_7E5C30(a1, (const void **)(a1 + 752), (__int64 *)(a1 + 776), (__int64)v64, (__int64)v32, v48);
      return sub_7CA650(*(_QWORD *)(a1 + 80), (__int64)v64, (__int64)v32, (__int64)(v49 - 1), v50, v51);
    }
  }
  return result;
}

