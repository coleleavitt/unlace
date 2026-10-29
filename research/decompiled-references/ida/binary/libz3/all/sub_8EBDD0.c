__int64 __fastcall sub_8EBDD0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char **exception; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v9; // rdx
  __int64 **v10; // rbp
  unsigned int v11; // esi
  __int64 v12; // rax
  _QWORD *v13; // rbp
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 *v16; // r12
  __int64 *v17; // rbp
  __int64 v18; // r13
  unsigned int v19; // eax
  __int64 *v20; // r12
  __int64 *v21; // r15
  __int64 v22; // rbp
  unsigned int v23; // eax
  _QWORD *v25; // r13
  __int64 v26; // rsi
  unsigned int v27; // r12d
  unsigned int v28; // edx
  size_t v29; // rsi
  unsigned int v30; // r13d
  unsigned int *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rbp
  __int64 v37; // r12
  __int64 v38; // r13
  _QWORD *v39; // rax
  __int64 **v40; // r12
  __int64 *v41; // r15
  unsigned int v42; // eax
  char v43; // al
  __int64 v44; // rsi
  int v45; // ecx
  _QWORD **v46; // r8
  _QWORD **v47; // r13
  _QWORD **v48; // r14
  _QWORD *v49; // rbp
  unsigned int v50; // eax
  char v51; // al
  __int64 i; // rax
  int v53; // edi
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // [rsp+8h] [rbp-80h]
  __int64 v58; // [rsp+10h] [rbp-78h]
  unsigned int v59; // [rsp+10h] [rbp-78h]
  __int64 v60; // [rsp+10h] [rbp-78h]
  __int64 **v61; // [rsp+18h] [rbp-70h]
  __int64 v62; // [rsp+20h] [rbp-68h]
  unsigned int v63; // [rsp+28h] [rbp-60h]
  int v64; // [rsp+2Ch] [rbp-5Ch]
  __int64 v65[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a3 + 8);
  v57 = v5;
  if ( v6 == v5 )
    return 0;
  if ( ((*(_BYTE *)(v5 + 44) & 4) == 0 || (*(_BYTE *)(v6 + 44) & 4) == 0) && !(unsigned __int8)sub_8E77E0(a1, a2, a3) )
  {
    v9 = *(_QWORD *)(v57 + 56);
    if ( !v9 )
      return 0;
    v10 = *(__int64 ***)(v6 + 56);
    if ( !v10 )
      return 0;
    v11 = *(_DWORD *)(v9 - 4);
    v12 = *((unsigned int *)v10 - 1);
    if ( (unsigned int)v12 >= v11 )
    {
      if ( !a4 )
        return 0;
      v12 = v11;
      v26 = v6;
      v10 = *(__int64 ***)(v57 + 56);
      v6 = v57;
      v57 = v26;
    }
    else if ( !a4 )
    {
      return 0;
    }
    if ( (unsigned int)v12 > 2 )
    {
      v13 = *(_QWORD **)(a1 + 8824);
      if ( v13 )
      {
        v14 = *((_DWORD *)v13 - 1);
        if ( a4 < v14 )
          goto LABEL_12;
        v27 = a4 + 1;
        if ( v14 >= a4 + 1 )
        {
          *((_DWORD *)v13 - 1) = v27;
          goto LABEL_12;
        }
        v59 = *((_DWORD *)v13 - 1);
      }
      else
      {
        v27 = a4 + 1;
        if ( a4 == -1 )
          goto LABEL_12;
        v56 = (_QWORD *)sub_186B270(0x18u);
        v59 = 0;
        v13 = v56 + 1;
        *v56 = 2;
        *(_QWORD *)(a1 + 8824) = v56 + 1;
      }
      while ( 1 )
      {
        v32 = *((_DWORD *)v13 - 2);
        if ( v32 >= v27 )
          break;
        v28 = (3 * v32 + 1) >> 1;
        v29 = 8 * v28 + 8;
        v30 = v28;
        if ( 8 * v32 + 8 >= (unsigned int)v29 || v32 >= v28 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v65, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v65);
          sub_233E40((__int64)v65);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v13 - 1, v29);
        v13 = v31 + 2;
        *v31 = v30;
        *(_QWORD *)(a1 + 8824) = v31 + 2;
      }
      v33 = v59;
      *((_DWORD *)v13 - 1) = v27;
      v34 = 8LL * v27;
      v35 = 8LL * v59;
      if ( v35 != v34 )
      {
        memset(&v13[v59], 0, v34 - v35);
        v35 = 8LL * v59;
        v33 = v59;
      }
      if ( v59 < v27 )
      {
        v36 = v35;
        v37 = 8 * (v33 + v27 - 1 - v59 + 1);
        do
        {
          v38 = sub_186B270(0x70u);
          sub_967FC0(v38, 0, 0);
          v39 = *(_QWORD **)(a1 + 8824);
          *(_QWORD *)((char *)v39 + v36) = v38;
          v36 += 8;
        }
        while ( v37 != v36 );
        v13 = v39;
      }
LABEL_12:
      v15 = v13[a4];
      *(__m128 *)(v15 + 40) = _mm_loadh_ps((const double *)(v57 + 8));
      v58 = v15;
      sub_968080(v15);
      v16 = *(__int64 **)(v6 + 56);
      if ( v16 )
      {
        v17 = &v16[*((unsigned int *)v16 - 1)];
        while ( v17 != v16 )
        {
          while ( 1 )
          {
            v18 = *v16;
            v19 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
            if ( v19 > *(_DWORD *)(a1 + 184) )
              v19 = *(_DWORD *)(a1 + 184);
            if ( (!v19
               || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 56LL))(
                    *(_QWORD *)(a1 + 7488),
                    *(_QWORD *)v18))
              && (*(_BYTE *)(v18 + 44) & 0x10) == 0
              && v18 == *(_QWORD *)(v18 + 24) )
            {
              break;
            }
            if ( v17 == ++v16 )
              goto LABEL_23;
          }
          ++v16;
          sub_968200(v58, v18);
        }
      }
LABEL_23:
      if ( *(_DWORD *)(v58 + 100) )
      {
        v20 = *(__int64 **)(v57 + 56);
        if ( v20 )
        {
          v21 = &v20[*((unsigned int *)v20 - 1)];
          if ( v21 != v20 )
          {
            while ( 1 )
            {
              v22 = *v20;
              v23 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
              if ( v23 > *(_DWORD *)(a1 + 184) )
                v23 = *(_DWORD *)(a1 + 184);
              if ( (!v23
                 || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 56LL))(
                      *(_QWORD *)(a1 + 7488),
                      *(_QWORD *)v22))
                && (*(_BYTE *)(v22 + 44) & 0x10) == 0
                && v22 == *(_QWORD *)(v22 + 24) )
              {
                v25 = (_QWORD *)sub_9686D0(v58, v22);
                if ( v25 )
                  break;
              }
LABEL_32:
              if ( v21 == ++v20 )
                return 0;
            }
            while ( *(_QWORD *)(v22 + 8) == *(_QWORD *)(*v25 + 8LL)
                 || !(unsigned __int8)sub_8EBDD0(a1, *v25, v22, a4 - 1) )
            {
              v25 = (_QWORD *)v25[1];
              if ( !v25 )
                goto LABEL_32;
            }
            return 1;
          }
        }
      }
      return 0;
    }
    if ( &v10[v12] == v10 )
      return 0;
    v62 = v6;
    v40 = &v10[v12];
    v63 = a4;
    while ( 1 )
    {
      v41 = *v10;
      v42 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
      if ( v42 > *(_DWORD *)(a1 + 184) )
        v42 = *(_DWORD *)(a1 + 184);
      if ( !v42
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 7488) + 56LL))(
             *(_QWORD *)(a1 + 7488),
             *v41) )
      {
        v43 = *((_BYTE *)v41 + 44);
        if ( (v43 & 0x10) == 0 && (__int64 *)v41[3] == v41 )
        {
          v44 = *v41;
          v45 = 0;
          if ( (v43 & 8) == 0 )
            v45 = *(_DWORD *)(v44 + 24);
          v46 = *(_QWORD ***)(v57 + 56);
          if ( v46 )
          {
            v47 = &v46[*((unsigned int *)v46 - 1)];
            if ( v47 != v46 )
              break;
          }
        }
      }
LABEL_62:
      if ( v40 == ++v10 )
        return 0;
    }
    v64 = v45;
    v48 = *(_QWORD ***)(v57 + 56);
    v61 = v10;
    v60 = *(_QWORD *)(v44 + 16);
    while ( 1 )
    {
      v49 = *v48;
      v50 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
      if ( v50 > *(_DWORD *)(a1 + 184) )
        v50 = *(_DWORD *)(a1 + 184);
      if ( !v50
        || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 56LL))(
             *(_QWORD *)(a1 + 7488),
             *v49) )
      {
        v51 = *((_BYTE *)v49 + 44);
        if ( (v51 & 0x10) == 0 && v49 == (_QWORD *)v49[3] && v49[1] != v41[1] && v60 == *(_QWORD *)(*v49 + 16LL) )
        {
          if ( (v51 & 8) != 0 )
          {
            if ( !v64 )
              goto LABEL_80;
          }
          else if ( v64 == *(_DWORD *)(*v49 + 24LL) )
          {
            if ( !v64 )
              goto LABEL_80;
            for ( i = 0; i != v64; ++i )
            {
              v53 = i;
              v54 = *(_QWORD *)(v41[i + 14] + 8);
              v55 = *(_QWORD *)(v49[i + 14] + 8LL);
              if ( v55 != v54 )
              {
                if ( v54 == v62 )
                {
                  if ( v55 != v57 )
                    goto LABEL_91;
                }
                else if ( v54 != v57 || v55 != v62 )
                {
                  goto LABEL_91;
                }
              }
            }
            ++v53;
LABEL_91:
            if ( v64 == v53 )
            {
LABEL_80:
              if ( (unsigned __int8)sub_8EBDD0(a1, v41, v49, v63 - 1) )
                return 1;
            }
          }
        }
      }
      if ( v47 == ++v48 )
      {
        v10 = v61;
        goto LABEL_62;
      }
    }
  }
  return 1;
}

