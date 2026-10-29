__int64 __fastcall sub_5A9540(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r12
  _QWORD *v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // rbp
  unsigned int v12; // edx
  size_t v13; // rsi
  unsigned int v14; // r15d
  unsigned int *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r15
  unsigned int v19; // edx
  size_t v20; // rsi
  unsigned int v21; // r15d
  unsigned int *v22; // rax
  unsigned int v23; // eax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _DWORD *v26; // rax
  _DWORD *v27; // rdx
  __int64 v29; // rax
  int v30; // r9d
  int v31; // ecx
  __int64 result; // rax
  void (***v33)(void); // rdi
  __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  bool v37; // zf
  __int64 *v38; // rbx
  unsigned __int64 v39; // rbp
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rdx
  int v43; // ecx
  int v44; // r13d
  int v45; // r13d
  __int64 v46; // r15
  unsigned int *v47; // r12
  __int64 v48; // rax
  int v49; // ebp
  __int64 v50; // rdx
  unsigned int v51; // edx
  __int64 v52; // rax
  void (***v53)(void); // rdi
  __int64 v54; // rbp
  char **exception; // r12
  char **v56; // r12
  int v57; // [rsp+0h] [rbp-B8h]
  __int64 v58; // [rsp+8h] [rbp-B0h]
  __int64 v60; // [rsp+10h] [rbp-A8h]
  int v61; // [rsp+18h] [rbp-A0h]
  unsigned int v62; // [rsp+1Ch] [rbp-9Ch]
  __int64 v63; // [rsp+20h] [rbp-98h]
  __int64 *v64; // [rsp+28h] [rbp-90h]
  _DWORD **v65; // [rsp+30h] [rbp-88h]
  __int64 v67; // [rsp+48h] [rbp-70h]
  __int64 v68; // [rsp+50h] [rbp-68h] BYREF
  int v69[2]; // [rsp+58h] [rbp-60h]
  int v70[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v71; // [rsp+68h] [rbp-50h]

  *(_QWORD *)a1 = &off_1C522D0;
  v4 = *(__int64 **)(*(_QWORD *)(a2[1] + 24LL) + 8LL);
  v67 = *(_QWORD *)(a2[1] + 24LL);
  v5 = *v4;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v4 + 13;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 48) = v5;
  if ( a3 )
    ++a3[2];
  *(_QWORD *)(a1 + 112) = v5;
  *(_OWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  v65 = (_DWORD **)(a1 + 56);
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  v64 = (__int64 *)sub_62B3A0(v4 + 82, a3);
  v6 = a2[2];
  if ( v6 )
  {
    v7 = *(unsigned int *)(v6 - 4);
    if ( (_DWORD)v7 )
    {
      v63 = v7;
      v8 = 0;
      v58 = a1 + 112;
      do
      {
        v61 = v8;
        v11 = (unsigned int)v8 >> 5;
        if ( *(_DWORD *)(a2[7] + 4 * v8) == -1 )
        {
          v9 = *(_QWORD **)(a1 + 64);
          if ( !v9 )
          {
            v10 = v11 + 1;
            v25 = (_QWORD *)sub_186B270(0x10u);
            v9 = v25 + 1;
            v62 = 0;
            *(_QWORD *)(a1 + 64) = v25 + 1;
            *v25 = 2;
LABEL_16:
            while ( 1 )
            {
              v16 = *((_DWORD *)v9 - 2);
              if ( v16 >= v10 )
                break;
              v12 = (3 * v16 + 1) >> 1;
              v13 = 4 * v12 + 8;
              v14 = v12;
              if ( 4 * v16 + 8 >= (unsigned int)v13 || v16 >= v12 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v70, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v70);
                sub_233E40((__int64)v70);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v15 = (unsigned int *)sub_186B300(v9 - 1, v13);
              v9 = v15 + 2;
              *v15 = v14;
              *(_QWORD *)(a1 + 64) = v15 + 2;
            }
LABEL_17:
            *((_DWORD *)v9 - 1) = v10;
            v17 = 4LL * v10;
            v18 = 4LL * v62;
            if ( v18 != v17 )
              memset((char *)v9 + v18, 0, v17 - v18);
            goto LABEL_8;
          }
          v10 = v11 + 1;
          v62 = *((_DWORD *)v9 - 1);
          if ( (unsigned int)v11 >= v62 )
            goto LABEL_16;
        }
        else
        {
          v9 = *(_QWORD **)(a1 + 56);
          if ( !v9 )
          {
            v10 = v11 + 1;
            v24 = (_QWORD *)sub_186B270(0x10u);
            v9 = v24 + 1;
            v62 = 0;
            *(_QWORD *)(a1 + 56) = v24 + 1;
            *v24 = 2;
LABEL_22:
            while ( 1 )
            {
              v23 = *((_DWORD *)v9 - 2);
              if ( v23 >= v10 )
                break;
              v19 = (3 * v23 + 1) >> 1;
              v20 = 4 * v19 + 8;
              v21 = v19;
              if ( 4 * v23 + 8 >= (unsigned int)v20 || v23 >= v19 )
              {
                v56 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v70, "Overflow encountered when expanding vector");
                *v56 = (char *)off_1C63128;
                sub_2333C0(v56 + 1, v70);
                sub_233E40((__int64)v70);
                __cxa_throw(v56, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v22 = (unsigned int *)sub_186B300(v9 - 1, v20);
              v9 = v22 + 2;
              *v22 = v21;
              *(_QWORD *)(a1 + 56) = v22 + 2;
            }
            goto LABEL_17;
          }
          v10 = v11 + 1;
          v62 = *((_DWORD *)v9 - 1);
          if ( (unsigned int)v11 >= v62 )
            goto LABEL_22;
        }
LABEL_8:
        ++v8;
        *((_DWORD *)v9 + v11) |= 1 << v61;
      }
      while ( v8 != v63 );
    }
  }
  sub_52E800(v65, v64);
  sub_52E800((_DWORD **)(a1 + 64), v64);
  sub_647690(a2 + 7, v65, a1 + 72);
  sub_647690(a2 + 10, a1 + 64, a1 + 80);
  v26 = *(_DWORD **)(a1 + 64);
  if ( v26 )
  {
    v27 = &v26[*(v26 - 1)];
    while ( v27 != v26 )
    {
      if ( *v26++ )
      {
        sub_4D72E0(a2 + 10, a2 + 2, (__int64 *)(a1 + 112));
        result = *(_QWORD *)(a1 + 56);
        if ( result )
        {
          v42 = result + 4LL * *(unsigned int *)(result - 4);
          while ( result != v42 )
          {
            v43 = *(_DWORD *)result;
            result += 4;
            if ( v43 )
            {
              result = a2[4];
              if ( result )
              {
                v44 = *(_DWORD *)(result - 4);
                LODWORD(v68) = 0;
                v45 = v44 - 1;
                if ( !v45 )
                  return result;
              }
              else
              {
                LODWORD(v68) = 0;
                v45 = -1;
              }
              v46 = 0;
              v47 = nullptr;
              do
              {
                while ( 1 )
                {
                  v48 = *(_QWORD *)(a1 + 72);
                  v49 = v46;
                  v50 = (unsigned int)v46 >> 5;
                  if ( !v48
                    || (unsigned int)v50 >= *(_DWORD *)(v48 - 4)
                    || (*(_DWORD *)(v48 + 4 * v50) & (1 << v46)) == 0 )
                  {
                    break;
                  }
                  result = (__int64)sub_5A21E0((unsigned int **)(a1 + 96), (unsigned int *)(a2[6] + 4 * v46++));
                  LODWORD(v68) = v49 + 1;
                  if ( v46 == v45 )
                    goto LABEL_60;
                }
                *(_QWORD *)v70 = v47;
                result = (__int64)sub_5A21E0((unsigned int **)v70, (unsigned int *)&v68);
                ++v46;
                v47 = *(unsigned int **)v70;
                LODWORD(v68) = v49 + 1;
              }
              while ( v46 != v45 );
LABEL_60:
              if ( v47 )
              {
                v51 = *(v47 - 1);
                if ( v51 )
                {
                  v52 = sub_4C5900(v67, a2[13], v51, v47);
                  v53 = *(void (****)(void))(a1 + 88);
                  v54 = v52;
                  if ( (void (***)(void))v52 != v53 )
                  {
                    sub_4CFE00(v53);
                    *(_QWORD *)(a1 + 88) = v54;
                  }
                }
                return sub_186B220(v47 - 2);
              }
              return result;
            }
          }
        }
        return result;
      }
    }
  }
  v29 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v69 = 0;
  v68 = v29;
  sub_4D72E0(a2 + 7, a2 + 2, &v68);
  if ( *(_QWORD *)v69 )
    v31 = *(_DWORD *)(*(_QWORD *)v69 - 4LL);
  else
    v31 = 0;
  sub_157BE40(
    (int)v70,
    *(_QWORD *)(a1 + 16),
    (int)a3,
    v31,
    v69[0],
    v30,
    v57,
    v58,
    (int)a2,
    v61,
    v63,
    (int)v64,
    (__int64)v65,
    a3);
  result = sub_4C4D50(v67, *(_QWORD *)(v60 + 104), *(__int64 *)v70);
  v33 = *(void (****)(void))(a1 + 24);
  v34 = result;
  if ( (void (***)(void))result != v33 )
  {
    result = sub_568170(v33);
    *(_QWORD *)(a1 + 24) = v34;
  }
  v35 = *(_QWORD *)v70;
  if ( *(_QWORD *)v70 )
  {
    v36 = v71;
    v37 = (*(_DWORD *)(*(_QWORD *)v70 + 8LL))-- == 1;
    if ( v37 )
      result = sub_15D7BC0(v36, v35);
  }
  v38 = *(__int64 **)v69;
  if ( *(_QWORD *)v69 )
  {
    result = *(unsigned int *)(*(_QWORD *)v69 - 4LL);
    v39 = *(_QWORD *)v69 + 8 * result;
    if ( *(_QWORD *)v69 >= v39 )
      return sub_186B220(v38 - 1);
    do
    {
      while ( 1 )
      {
        v40 = *v38;
        if ( *v38 )
        {
          v41 = v68;
          v37 = (*(_DWORD *)(v40 + 8))-- == 1;
          if ( v37 )
            break;
        }
        if ( (unsigned __int64)++v38 >= v39 )
          goto LABEL_44;
      }
      result = sub_15D7BC0(v41, v40);
      ++v38;
    }
    while ( (unsigned __int64)v38 < v39 );
LABEL_44:
    v38 = *(__int64 **)v69;
    if ( *(_QWORD *)v69 )
      return sub_186B220(v38 - 1);
  }
  return result;
}

