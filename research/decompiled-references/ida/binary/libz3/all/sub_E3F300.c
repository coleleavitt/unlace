__int64 __fastcall sub_E3F300(std::ios_base *a1, __int64 *a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // r12
  _OWORD *v8; // rbx
  __int64 v9; // rdi
  int v10; // r8d
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r13
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  unsigned int v23; // eax
  __int64 *v24; // rdi
  int v25; // esi
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  _QWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  _QWORD *v37; // rcx
  __int64 result; // rax
  __int64 *v39; // rbx
  unsigned __int64 v40; // rbp
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 *v43; // rbx
  unsigned __int64 v44; // rbp
  __int64 v45; // rsi
  unsigned int v46; // r8d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rsi
  _QWORD *v50; // r15
  __int64 v51; // rsi
  _QWORD *v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rdx
  __int64 v55; // rdx
  int v56; // esi
  unsigned int v57; // ecx
  size_t v58; // rsi
  unsigned int v59; // r14d
  unsigned int *v60; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rdx
  char **v64; // r15
  __int64 v65; // rdx
  char **exception; // r15
  __int64 v67; // rdx
  unsigned int v68; // [rsp+8h] [rbp-70h]
  unsigned __int64 v69; // [rsp+8h] [rbp-70h]
  unsigned int v70; // [rsp+8h] [rbp-70h]
  __int64 v71; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v72; // [rsp+18h] [rbp-60h]
  __int64 v73[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = (*(__int64 (__fastcall **)(std::ios_base *))(*(_QWORD *)a1 + 72LL))(a1);
  v72 = nullptr;
  v71 = v6;
  v7 = v6;
  v8 = (_OWORD *)sub_186B270(0x40u);
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  (*(void (__fastcall **)(std::ios_base *))(*(_QWORD *)a1 + 24LL))(a1);
  v9 = a2[1];
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 - 4);
      if ( !v10 )
        break;
      v11 = *(_QWORD *)(v9 + 8LL * (unsigned int)(v10 - 1));
      v12 = v72;
      if ( v72 )
      {
        v13 = *((unsigned int *)v72 - 1);
        if ( (_DWORD)v13 )
        {
          v14 = &v72[v13];
          while ( v11 != *v12 )
          {
            if ( ++v12 == v14 )
              goto LABEL_41;
          }
          break;
        }
      }
LABEL_41:
      *(_DWORD *)(v9 - 4) = v10 - 1;
      if ( v11 )
      {
        v42 = *a2;
        v22 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v22 )
        {
          sub_15D7BC0(v42, v11);
          v9 = a2[1];
          if ( !v9 )
            goto LABEL_44;
        }
      }
    }
    if ( !a3 )
      goto LABEL_31;
    if ( !v10 )
      goto LABEL_45;
    v15 = *(_QWORD *)(v9 + 8LL * (unsigned int)(v10 - 1));
    v16 = sub_15EC2C0(v7, v15);
    v17 = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v18 = (_QWORD *)a2[1];
    v19 = (unsigned int)(*((_DWORD *)v18 - 1) - 1);
    v20 = v18[v19];
    *((_DWORD *)v18 - 1) = v19;
    if ( !v20 )
    {
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      goto LABEL_17;
    }
    v21 = *a2;
    v22 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v22 )
    {
      sub_15D7BC0(v21, v20);
      v18 = (_QWORD *)a2[1];
      if ( !v17 )
      {
LABEL_16:
        if ( !v18 )
        {
          v62 = (_QWORD *)sub_186B270(0x18u);
          *v62 = 2;
          v25 = 1;
          v18 = v62 + 1;
          a2[1] = (__int64)(v62 + 1);
          v24 = v62 + 1;
LABEL_19:
          *v24 = v17;
          *((_DWORD *)v18 - 1) = v25;
          v26 = sub_E60CB0(a1, v25, (int)v18);
          v29 = a2[1];
          v30 = v26;
          v31 = (unsigned int)(*(_DWORD *)(v29 - 4) - 1);
          v32 = *(_QWORD *)(v29 + 8 * v31);
          *(_DWORD *)(v29 - 4) = v31;
          if ( v32 )
          {
            v28 = *a2;
            v22 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v22 )
            {
              v70 = v30;
              sub_15D7BC0(v28, v32);
              v30 = v70;
            }
          }
          if ( (_DWORD)v30 != -1 )
          {
            if ( v15 )
              ++*(_DWORD *)(v15 + 8);
            v33 = (_QWORD *)a2[1];
            if ( v33 )
            {
              v34 = *((_DWORD *)v33 - 1);
              if ( v34 == *((_DWORD *)v33 - 2) )
              {
                v57 = (3 * v34 + 1) >> 1;
                v58 = 8 * v57 + 8;
                v59 = v57;
                if ( 8 * v34 + 8 >= (unsigned int)v58 || v34 >= v57 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_181416(v73, "Overflow encountered when expanding vector", v67);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v73);
                  sub_233E40((__int64)v73);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v60 = (unsigned int *)sub_186B300(v33 - 1, v58);
                v61 = v60[1];
                v33 = v60 + 2;
                *v60 = v59;
                a2[1] = (__int64)(v60 + 2);
                LODWORD(v60) = v61;
                v37 = &v33[v61];
                v36 = (_DWORD)v60 + 1;
              }
              else
              {
                v35 = v34;
                v36 = v34 + 1;
                v37 = &v33[v35];
              }
            }
            else
            {
              v63 = (_QWORD *)sub_186B270(0x18u);
              *v63 = 2;
              v36 = 1;
              v33 = v63 + 1;
              a2[1] = (__int64)v33;
              v37 = v33;
            }
            *v37 = v15;
            *((_DWORD *)v33 - 1) = v36;
            if ( v17 )
            {
              v22 = (*(_DWORD *)(v17 + 8))-- == 1;
              if ( v22 )
                sub_15D7BC0(v7, v17);
            }
            goto LABEL_31;
          }
          v50 = v72;
          if ( v72 )
          {
            v30 = (unsigned __int64)&v72[*((unsigned int *)v72 - 1)];
            if ( (unsigned __int64)v72 >= v30 )
              goto LABEL_67;
            do
            {
              v51 = *v50;
              if ( *v50 )
              {
                v22 = (*(_DWORD *)(v51 + 8))-- == 1;
                if ( v22 )
                {
                  v69 = v30;
                  sub_15D7BC0(v71, v51);
                  v30 = v69;
                }
              }
              ++v50;
            }
            while ( (unsigned __int64)v50 < v30 );
            v50 = v72;
            if ( v72 )
LABEL_67:
              *((_DWORD *)v50 - 1) = 0;
          }
          (*(void (__fastcall **)(std::ios_base *, __int64 *, unsigned __int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(
            a1,
            &v71,
            v30,
            v27,
            v28);
          v52 = v72;
          if ( !v72 )
            goto LABEL_76;
          v53 = *((unsigned int *)v72 - 1);
          if ( !(_DWORD)v53 )
            goto LABEL_76;
          v54 = &v72[v53];
          while ( v17 != *v52 )
          {
            if ( v54 == ++v52 )
              goto LABEL_76;
          }
          v55 = a2[1];
          v56 = v55 ? *(_DWORD *)(v55 - 4) : 0;
          if ( (unsigned int)sub_E60CB0(a1, v56, v55) == -1 )
LABEL_76:
            sub_E3F300(a1, a2, 1);
          if ( v17 )
          {
            v22 = (*(_DWORD *)(v17 + 8))-- == 1;
            if ( v22 )
              sub_15D7BC0(v7, v17);
          }
          goto LABEL_45;
        }
LABEL_17:
        v23 = *((_DWORD *)v18 - 1);
        if ( v23 == *((_DWORD *)v18 - 2) )
        {
          v46 = (3 * v23 + 1) >> 1;
          v47 = 8 * v46 + 8;
          if ( 8 * v23 + 8 >= (unsigned int)v47 || v23 >= v46 )
          {
            v64 = (char **)__cxa_allocate_exception(0x28u);
            sub_181416(v73, "Overflow encountered when expanding vector", v65);
            *v64 = (char *)off_1C63128;
            sub_2333C0(v64 + 1, v73);
            sub_233E40((__int64)v73);
            __cxa_throw(v64, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v68 = (3 * v23 + 1) >> 1;
          v48 = (unsigned int *)sub_186B300(v18 - 1, v47);
          v49 = v48[1];
          v18 = v48 + 2;
          a2[1] = (__int64)(v48 + 2);
          v24 = (__int64 *)&v48[2 * v49 + 2];
          *v48 = v68;
          v25 = v49 + 1;
        }
        else
        {
          v24 = &v18[v23];
          v25 = v23 + 1;
        }
        goto LABEL_19;
      }
    }
    else if ( !v17 )
    {
      goto LABEL_17;
    }
    ++*(_DWORD *)(v17 + 8);
    goto LABEL_16;
  }
LABEL_44:
  if ( !a3 )
  {
LABEL_31:
    result = sub_186B220(v8);
    v39 = v72;
    if ( v72 )
    {
      result = *((unsigned int *)v72 - 1);
      v40 = (unsigned __int64)&v72[result];
      if ( (unsigned __int64)v72 >= v40 )
        return sub_186B220(v39 - 1);
      do
      {
        while ( 1 )
        {
          v41 = *v39;
          if ( *v39 )
          {
            v22 = (*(_DWORD *)(v41 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( (unsigned __int64)++v39 >= v40 )
            goto LABEL_38;
        }
        result = sub_15D7BC0(v71, v41);
        ++v39;
      }
      while ( (unsigned __int64)v39 < v40 );
LABEL_38:
      v39 = v72;
      if ( v72 )
        return sub_186B220(v39 - 1);
    }
    return result;
  }
LABEL_45:
  result = sub_186B220(v8);
  v43 = v72;
  if ( v72 )
  {
    result = *((unsigned int *)v72 - 1);
    v44 = (unsigned __int64)&v72[result];
    if ( (unsigned __int64)v72 >= v44 )
      return sub_186B220(v43 - 1);
    do
    {
      while ( 1 )
      {
        v45 = *v43;
        if ( *v43 )
        {
          v22 = (*(_DWORD *)(v45 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( (unsigned __int64)++v43 >= v44 )
          goto LABEL_52;
      }
      result = sub_15D7BC0(v71, v45);
      ++v43;
    }
    while ( (unsigned __int64)v43 < v44 );
LABEL_52:
    v43 = v72;
    if ( v72 )
      return sub_186B220(v43 - 1);
  }
  return result;
}

