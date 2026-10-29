__int64 __fastcall sub_88F150(__int64 a1, _DWORD **a2, _QWORD *a3)
{
  char **v3; // r12
  char **exception; // r12
  __int64 v5; // r12
  _DWORD *v6; // rbx
  unsigned int v7; // r14d
  _DWORD *v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 result; // rax
  _DWORD *v12; // rsi
  unsigned int v13; // edx
  unsigned int v14; // r13d
  unsigned int v15; // ebp
  unsigned int v16; // edx
  size_t v17; // rsi
  unsigned int v18; // r15d
  unsigned int *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // ebp
  __int64 v24; // rax
  unsigned int v25; // ebp
  unsigned int v26; // esi
  unsigned int v27; // r15d
  unsigned int v28; // r13d
  _DWORD *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r13d
  __int64 v32; // rax
  __int64 v33; // rdx
  _DWORD *v34; // rax
  unsigned int v35; // eax
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  _DWORD *v41; // rsi
  unsigned int v42; // ecx
  int v43; // edx
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // r14d
  unsigned int v51; // eax
  __int64 v52; // rsi
  unsigned int v53; // ecx
  unsigned int v54; // r8d
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  int *v58; // rax
  int *v59; // rdx
  int v60; // ecx
  _QWORD *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r8
  _QWORD *v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rdx
  int v67; // eax
  __int64 *v68; // rdx
  __int64 v69; // rdx
  _DWORD *v70; // rax
  unsigned int v71; // r14d
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rdx
  _QWORD *v75; // rax
  _DWORD *ptr; // [rsp+8h] [rbp-B0h]
  unsigned int v77; // [rsp+10h] [rbp-A8h]
  int v78[2]; // [rsp+18h] [rbp-A0h]
  _QWORD *v79; // [rsp+18h] [rbp-A0h]
  char v82; // [rsp+33h] [rbp-85h]
  unsigned int v83; // [rsp+34h] [rbp-84h]
  __int64 v84; // [rsp+38h] [rbp-80h]
  __int64 v85; // [rsp+38h] [rbp-80h]
  __int64 v86[11]; // [rsp+60h] [rbp-58h] BYREF

  v5 = a1;
  if ( !*(_BYTE *)(a1 + 160) )
  {
    v40 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 160) = 1;
    *(_QWORD *)(a1 + 144) = v40;
  }
  v6 = nullptr;
  v7 = 0;
  v8 = (_DWORD *)*a3;
  if ( *a3 )
  {
    if ( *(v8 - 1) )
    {
      do
      {
        a1 = (unsigned int)v8[6 * v7 + 4];
        v9 = v8[6 * v7 + 4];
        do
        {
          v10 = v9;
          v9 = *(_DWORD *)(*(_QWORD *)(v5 + 88) + 4LL * v9);
        }
        while ( v9 != v10 );
        if ( (_DWORD)a1 != v9 )
          goto LABEL_8;
        v14 = v7 >> 5;
        if ( v6 )
        {
          v15 = v14 + 1;
          v77 = *(v6 - 1);
          if ( v14 < v77 )
            goto LABEL_18;
        }
        else
        {
          v15 = v14 + 1;
          v39 = (_QWORD *)sub_186B270((size_t)&word_10);
          *v39 = 2;
          v77 = 0;
          v6 = v39 + 1;
        }
        while ( 1 )
        {
          v20 = *(v6 - 2);
          if ( v20 >= v15 )
            break;
          v16 = (3 * v20 + 1) >> 1;
          v17 = 4 * v16 + 8;
          v18 = v16;
          if ( 4 * v20 + 8 >= (unsigned int)v17 || v20 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v86, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v86);
            sub_233E40((__int64)v86);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = (unsigned int *)sub_186B300(v6 - 2, v17);
          *v19 = v18;
          v6 = v19 + 2;
        }
        *(v6 - 1) = v15;
        v21 = 4LL * v15;
        v22 = 4LL * v77;
        v8 = (_DWORD *)*a3;
        a1 = (__int64)&v6[(unsigned __int64)v22 / 4];
        if ( v22 != v21 )
        {
          ptr = (_DWORD *)*a3;
          memset((void *)a1, 0, v21 - v22);
          v8 = ptr;
        }
LABEL_18:
        v6[v14] |= 1 << v7;
        if ( !v8 )
          break;
LABEL_8:
        ++v7;
      }
      while ( v7 < *(v8 - 1) );
    }
    result = (__int64)a2;
    v12 = *a2;
    if ( !*a2 )
      goto LABEL_12;
LABEL_10:
    v13 = *(v12 - 1);
    result = 32 * v13;
    v83 = result;
    if ( (_DWORD)result && v13 )
    {
      v23 = *v12 & 1;
      if ( v23 )
      {
        v25 = 0;
        goto LABEL_37;
      }
      result = (__int64)v12;
      while ( 1 )
      {
        a1 = *(unsigned int *)result;
        if ( (_DWORD)a1 )
          break;
        v23 += 32;
        result += 4;
        if ( v23 == 32 * v13 )
          goto LABEL_12;
      }
      result = v83;
      if ( v23 != v83 )
      {
        v24 = v23 >> 5;
        if ( (unsigned int)v24 < v13 )
          v25 = ((v12[v24] & 1) == 0) + v23;
        else
          v25 = v23 + 1;
        a1 = 1;
        while ( 1 )
        {
          result = v25 >> 5;
          if ( (unsigned int)result < v13 && (v12[result] & (1 << (v25 & 0x1F))) != 0 )
            break;
          if ( (v25 & 0x1F) == 0 )
            break;
          if ( ++v25 == v83 )
            goto LABEL_12;
        }
        result = v83;
        if ( v25 == v83 )
          goto LABEL_12;
        do
        {
LABEL_37:
          if ( !v6 )
            goto LABEL_84;
          v26 = *(v6 - 1);
          if ( !v26 )
            goto LABEL_84;
          v27 = 32 * v26;
          v28 = *v6 & 1;
          if ( v28 )
          {
            v31 = 0;
          }
          else
          {
            v29 = v6;
            if ( !v27 )
              goto LABEL_84;
            while ( !*v29 )
            {
              v28 += 32;
              ++v29;
              if ( v28 == v27 )
                goto LABEL_84;
            }
            if ( v27 == v28 )
              goto LABEL_84;
            v30 = v28 >> 5;
            if ( (unsigned int)v30 < v26 )
              v31 = ((v6[v30] & 1) == 0) + v28;
            else
              v31 = v28 + 1;
            while ( 1 )
            {
              v32 = v31 >> 5;
              if ( (unsigned int)v32 < v26 && (v6[v32] & (1 << (v31 & 0x1F))) != 0 )
                break;
              if ( (v31 & 0x1F) == 0 )
                break;
              if ( ++v31 == v27 )
                goto LABEL_84;
            }
          }
          a1 = 24LL * v25;
          if ( v27 == v31 )
            goto LABEL_84;
          v82 = 0;
          while ( 1 )
          {
            if ( v31 == v25 )
              goto LABEL_59;
            if ( v31 >= v25 )
            {
              if ( !v82 )
                goto LABEL_106;
              v33 = v31 >> 5;
              v34 = *a2;
              if ( !*a2 || (unsigned int)v33 >= *(v34 - 1) )
                goto LABEL_59;
              goto LABEL_57;
            }
            v33 = v31 >> 5;
            v34 = *a2;
            if ( !*a2 || (unsigned int)v33 >= *(v34 - 1) )
              break;
            a1 = (unsigned int)(1 << v31);
            if ( (v34[v33] & (1 << v31)) == 0 )
            {
              if ( !v82 )
                goto LABEL_106;
LABEL_57:
              a1 = (unsigned int)(1 << v31);
              if ( (v34[v33] & (1 << v31)) != 0 )
                goto LABEL_106;
LABEL_58:
              v82 = 1;
            }
LABEL_59:
            if ( ++v31 == v27 )
              goto LABEL_108;
            do
            {
LABEL_60:
              v35 = v31 >> 5;
              if ( v31 >> 5 < v26 )
              {
                a1 = v35;
                if ( (v6[v35] & (1 << (v31 & 0x1F))) != 0 )
                  goto LABEL_62;
              }
              if ( (v31 & 0x1F) == 0 )
              {
                if ( v35 < v26 )
                {
                  a1 = v35;
                  goto LABEL_62;
                }
                while ( 1 )
                {
                  if ( v27 == v31 )
                    goto LABEL_84;
                  v36 = v6[v35];
LABEL_68:
                  if ( v36 )
                    break;
                  ++v35;
                  v31 += 32;
                }
                if ( v27 == v31 )
                  goto LABEL_84;
                v37 = v31 >> 5;
                if ( (unsigned int)v37 < v26 && (v6[v37] & (1 << v31)) != 0 )
                  goto LABEL_73;
                while ( 1 )
                {
                  if ( v27 == ++v31 )
                    goto LABEL_84;
LABEL_73:
                  v38 = v31 >> 5;
                  if ( (unsigned int)v38 < v26 && (v6[v38] & (1 << (v31 & 0x1F))) != 0 || (v31 & 0x1F) == 0 )
                    goto LABEL_75;
                }
              }
              ++v31;
            }
            while ( v27 != v31 );
            v35 = v27 >> 5;
            if ( v27 >> 5 >= v26 )
              goto LABEL_84;
LABEL_109:
            a1 = v35;
LABEL_62:
            v36 = v6[a1];
            a1 = (unsigned int)(1 << v31);
            if ( (v36 & (unsigned int)a1) == 0 )
            {
              if ( v27 == v31 )
                goto LABEL_84;
              goto LABEL_68;
            }
LABEL_75:
            if ( v27 == v31 )
              goto LABEL_84;
          }
          if ( v82 )
            goto LABEL_59;
LABEL_106:
          v44 = *(__int64 **)(v5 + 8);
          v45 = *v44;
          ++*(_DWORD *)(v5 + 168);
          (*(void (__fastcall **)(__int64 *))(v45 + 192))(v44);
          v46 = *(_QWORD *)(v5 + 8);
          *(_QWORD *)v78 = *(_QWORD *)v5;
          sub_15E1B70(*(_QWORD *)v5);
          v47 = sub_15E1A70(v78[0]);
          sub_E5EBF0(v46, v47);
          v48 = sub_E60CB0(*(std::ios_base **)(v5 + 8), 0, 0);
          a1 = *(_QWORD *)(v5 + 8);
          LODWORD(v46) = v48;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 200LL))(a1, 1);
          if ( (_DWORD)v46 == -1 )
          {
            v49 = *(_QWORD *)(v5 + 88);
            v50 = *(_DWORD *)(*a3 + 24LL * v31 + 16);
            v51 = *(_DWORD *)(*a3 + 24LL * v25 + 16);
            do
            {
              v52 = v51;
              v53 = v51;
              v51 = *(_DWORD *)(v49 + 4LL * v51);
            }
            while ( v53 != v51 );
            do
            {
              a1 = v50;
              v54 = v50;
              v50 = *(_DWORD *)(v49 + 4LL * v50);
            }
            while ( v54 != v50 );
            if ( v53 != v50 )
            {
              v55 = *(_QWORD *)(v5 + 96);
              if ( *(_DWORD *)(v55 + 4 * a1) >= *(_DWORD *)(v55 + 4 * v52) )
              {
                v50 = v51;
                v51 = v54;
              }
              *(_DWORD *)(v49 + 4LL * v50) = v51;
              v56 = 4LL * v51;
              *(_DWORD *)(v55 + v56) += *(_DWORD *)(v55 + 4LL * v50);
              v57 = *(_QWORD *)(v5 + 104);
              v58 = (int *)(v57 + v56);
              v59 = (int *)(v57 + 4LL * v50);
              v60 = *v59;
              *v59 = *v58;
              v61 = *(_QWORD **)(v5 + 80);
              *v58 = v60;
              a1 = (__int64)(v61 + 2);
              v79 = v61;
              v62 = sub_180C100(v61 + 2, 24);
              v63 = v62;
              *(_QWORD *)v62 = off_1C4F500;
              v64 = (_QWORD *)*v79;
              *(_QWORD *)(v62 + 8) = v5 + 72;
              *(_DWORD *)(v62 + 16) = v50;
              if ( v64 )
              {
                v65 = *((_DWORD *)v64 - 1);
                if ( v65 == *((_DWORD *)v64 - 2) )
                {
                  v71 = (3 * v65 + 1) >> 1;
                  v72 = 8 * v71 + 8;
                  if ( 8 * v65 + 8 >= (unsigned int)v72 || v65 >= v71 )
                  {
                    v3 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v86, "Overflow encountered when expanding vector");
                    *v3 = (char *)off_1C63128;
                    sub_2333C0(v3 + 1, v86);
                    sub_233E40((__int64)v86);
                    __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  a1 = (__int64)(v64 - 1);
                  v84 = v63;
                  v73 = (unsigned int *)sub_186B300(v64 - 1, v72);
                  v64 = v73 + 2;
                  v63 = v84;
                  *v79 = v73 + 2;
                  v74 = v73[1];
                  *v73 = v71;
                  LODWORD(v73) = v74;
                  v68 = &v64[v74];
                  v67 = (_DWORD)v73 + 1;
                }
                else
                {
                  v66 = v65;
                  v67 = v65 + 1;
                  v68 = &v64[v66];
                }
              }
              else
              {
                a1 = 24;
                v85 = v62;
                v75 = (_QWORD *)sub_186B270(0x18u);
                v63 = v85;
                *v75 = 2;
                v64 = v75 + 1;
                v67 = 1;
                *v79 = v64;
                v68 = v64;
              }
              *v68 = v63;
              *((_DWORD *)v64 - 1) = v67;
            }
            v26 = *(v6 - 1);
            v69 = v31 >> 5;
            v70 = *a2;
            if ( *a2 && (unsigned int)v69 < *(v70 - 1) )
            {
              a1 = (unsigned int)(1 << v31);
              v82 |= (v70[v69] & (1 << v31)) == 0;
              goto LABEL_59;
            }
            goto LABEL_58;
          }
          ++v31;
          v26 = *(v6 - 1);
          if ( v31 != v27 )
            goto LABEL_60;
LABEL_108:
          v35 = v31 >> 5;
          if ( v31 >> 5 < v26 )
            goto LABEL_109;
LABEL_84:
          result = (__int64)a2;
          ++v25;
          v41 = *a2;
          if ( v25 == v83 )
          {
            if ( !v41 )
              break;
            result = v25 >> 5;
            if ( (unsigned int)result >= *(v41 - 1) )
              break;
LABEL_119:
            v43 = v41[(unsigned int)result];
            a1 = (unsigned int)(1 << v25);
            if ( (v43 & (unsigned int)a1) == 0 )
            {
              v42 = v83;
              if ( v25 != v83 )
                goto LABEL_93;
              break;
            }
          }
          else
          {
            if ( v41 )
            {
              do
              {
                result = v25 >> 5;
                if ( (unsigned int)result < *(v41 - 1)
                  && (a1 = (unsigned int)result, (v41[(unsigned int)result] & (1 << (v25 & 0x1F))) != 0)
                  || (v25 & 0x1F) == 0 )
                {
                  if ( (unsigned int)result < *(v41 - 1) )
                    goto LABEL_119;
                  goto LABEL_89;
                }
                ++v25;
              }
              while ( v83 != v25 );
              result = v83 >> 5;
              if ( (unsigned int)result < *(v41 - 1) )
                goto LABEL_119;
LABEL_89:
              v42 = v83;
              if ( v25 != v83 )
                goto LABEL_92;
              break;
            }
            do
            {
              if ( (v25 & 0x1F) == 0 )
                break;
              ++v25;
            }
            while ( v25 != v83 );
            v42 = v83;
            result = v25 >> 5;
            if ( v25 == v83 )
              break;
            v43 = *(_DWORD *)(4LL * (unsigned int)result);
LABEL_93:
            while ( !v43 )
            {
              v25 += 32;
              result = (unsigned int)(result + 1);
              if ( v25 == v42 )
                goto LABEL_12;
LABEL_92:
              v43 = v41[(unsigned int)result];
            }
            result = v83;
            if ( v25 == v83 )
              break;
            result = v25 >> 5;
            if ( v41 )
            {
              if ( (unsigned int)result < *(v41 - 1) )
              {
                if ( (v41[result] & (1 << v25)) == 0 )
                {
                  result = v83;
                  if ( ++v25 == v83 )
                    break;
                }
              }
              else if ( v83 == ++v25 )
              {
                break;
              }
              a1 = (unsigned int)*(v41 - 1);
              while ( 1 )
              {
                result = v25 >> 5;
                if ( (unsigned int)result < (unsigned int)a1 && (v41[result] & (1 << (v25 & 0x1F))) != 0 )
                  break;
                if ( (v25 & 0x1F) == 0 )
                  break;
                if ( v83 == ++v25 )
                  goto LABEL_12;
              }
            }
            else
            {
              if ( v83 == ++v25 )
                break;
              result = v83;
              while ( (v25 & 0x1F) != 0 )
              {
                if ( v83 == ++v25 )
                  goto LABEL_12;
              }
            }
          }
          result = v83;
        }
        while ( v25 != v83 );
      }
    }
LABEL_12:
    if ( !*(_BYTE *)(v5 + 160) )
      goto LABEL_13;
    goto LABEL_80;
  }
  result = (__int64)a2;
  v12 = *a2;
  if ( *a2 )
    goto LABEL_10;
  if ( !*(_BYTE *)(a1 + 160) )
    return result;
LABEL_80:
  result = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1) - *(_QWORD *)(v5 + 144);
  *(_BYTE *)(v5 + 160) = 0;
  *(_QWORD *)(v5 + 152) += result;
LABEL_13:
  if ( v6 )
    return sub_186B220(v6 - 2);
  return result;
}

