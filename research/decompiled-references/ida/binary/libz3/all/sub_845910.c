__int64 __fastcall sub_845910(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // r12
  __int64 v5; // rax
  int v6; // edi
  __int64 *v7; // rcx
  unsigned int v8; // edx
  __int64 result; // rax
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // r8
  int v13; // r8d
  int v14; // r9d
  char v15; // r12
  __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 *v18; // rdx
  unsigned int v19; // r13d
  __int64 v20; // rax
  __int64 *v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // r14
  __int64 *v25; // rax
  bool v26; // dl
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // r14
  __int64 v30; // r14
  int v31; // r8d
  int v32; // r9d
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 *v38; // r14
  unsigned __int64 v39; // r12
  __int64 v40; // rsi
  bool v41; // zf
  unsigned int v42; // edx
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // esi
  __int64 *v47; // r15
  __int64 v48; // rsi
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // r14
  int v52; // [rsp-8h] [rbp-C8h]
  int v53; // [rsp+0h] [rbp-C0h]
  int v54; // [rsp+0h] [rbp-C0h]
  int v55; // [rsp+8h] [rbp-B8h]
  __int64 v56; // [rsp+10h] [rbp-B0h]
  int v57; // [rsp+10h] [rbp-B0h]
  __int64 v58; // [rsp+10h] [rbp-B0h]
  __int64 v59; // [rsp+18h] [rbp-A8h]
  int v60; // [rsp+18h] [rbp-A8h]
  __int64 v61; // [rsp+18h] [rbp-A8h]
  int v62; // [rsp+20h] [rbp-A0h]
  int v63; // [rsp+20h] [rbp-A0h]
  int v64; // [rsp+24h] [rbp-9Ch]
  unsigned int v65; // [rsp+24h] [rbp-9Ch]
  char v66; // [rsp+28h] [rbp-98h]
  int v68; // [rsp+30h] [rbp-90h]
  __int64 v69; // [rsp+30h] [rbp-90h]
  int v71[2]; // [rsp+38h] [rbp-88h]
  int v72; // [rsp+38h] [rbp-88h]
  int v73; // [rsp+40h] [rbp-80h]
  int v74; // [rsp+40h] [rbp-80h]
  int v75; // [rsp+48h] [rbp-78h]
  void *v76; // [rsp+48h] [rbp-78h]
  int v77; // [rsp+58h] [rbp-68h]
  __m128i v78; // [rsp+60h] [rbp-60h] BYREF
  __int64 v79; // [rsp+70h] [rbp-50h] BYREF
  int v80; // [rsp+78h] [rbp-48h]
  int v81; // [rsp+80h] [rbp-40h]
  int v82; // [rsp+88h] [rbp-38h]
  int v83; // [rsp+90h] [rbp-30h]
  int v84; // [rsp+98h] [rbp-28h]
  int v85; // [rsp+A0h] [rbp-20h]
  void *v86; // [rsp+A8h] [rbp-18h]
  int v87; // [rsp+B0h] [rbp-10h]
  __int64 v88; // [rsp+B8h] [rbp-8h]

  v5 = *(unsigned int *)(a2 + 56);
  v6 = *(_DWORD *)(a3 + 12);
  v7 = *(__int64 **)(a2 + 48);
  v8 = v5 - 1;
  result = 16 * v5;
  v10 = (char *)v7 + result;
  v11 = 16LL * (v6 & v8);
  v12 = (__int64 *)((char *)v7 + v11);
  if ( v11 == result )
  {
LABEL_24:
    if ( v7 != v12 )
    {
      while ( 1 )
      {
        result = *v7;
        if ( (unsigned __int64)*v7 > 1 )
        {
          if ( *(_DWORD *)(result + 12) == v6 && a3 == result )
          {
            result = (__int64)v7;
            goto LABEL_10;
          }
        }
        else if ( !result )
        {
          return result;
        }
        v7 += 2;
        if ( v12 == v7 )
          return result;
      }
    }
    return result;
  }
  result = (__int64)v7 + v11;
  while ( 1 )
  {
    v11 = *(_QWORD *)result;
    if ( *(_QWORD *)result > 1u )
      break;
    if ( !v11 )
      return result;
LABEL_5:
    result += 16;
    if ( v10 == (char *)result )
      goto LABEL_24;
  }
  if ( *(_DWORD *)(v11 + 12) != v6 || a3 != v11 )
    goto LABEL_5;
LABEL_10:
  result = *(_QWORD *)(result + 8);
  v59 = result;
  if ( result )
  {
    result = sub_1347A80(result, v10, v11, v7, v12);
    v15 = result;
    if ( !(_BYTE)result )
    {
      v56 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(a3 + 32) )
      {
        sub_8442F0(&v78, a1, a2, a3, 0);
        v16 = v78.m128i_i64[0];
        v17 = (_QWORD *)sub_186B270(0x18u);
        v18 = v17 + 1;
        *v17 = 2;
        v19 = 0;
        v20 = 1;
        v21 = v18;
        while ( 1 )
        {
          *v18 = v16;
          ++v19;
          *((_DWORD *)v21 - 1) = v20;
          if ( v19 >= *(_DWORD *)(a3 + 32) )
            break;
          while ( 1 )
          {
            sub_8442F0(&v78, a1, a2, a3, v19);
            v16 = v78.m128i_i64[0];
            v22 = *((_DWORD *)v21 - 1);
            if ( v22 == *((_DWORD *)v21 - 2) )
              break;
            v23 = v22;
            v20 = v22 + 1;
            ++v19;
            v21[v23] = v78.m128i_i64[0];
            *((_DWORD *)v21 - 1) = v20;
            if ( v19 >= *(_DWORD *)(a3 + 32) )
              goto LABEL_17;
          }
          v42 = (3 * v22 + 1) >> 1;
          v43 = 8 * v42 + 8;
          if ( 8 * v22 + 8 >= (unsigned int)v43 || v22 >= v42 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v79, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v79);
            sub_233E40((__int64)&v79);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = (3 * v22 + 1) >> 1;
          v44 = (unsigned int *)sub_186B300(v21 - 1, v43);
          v21 = (__int64 *)(v44 + 2);
          *v44 = v65;
          LODWORD(v44) = v44[1];
          v18 = &v21[(unsigned int)v44];
          v20 = (unsigned int)((_DWORD)v44 + 1);
        }
LABEL_17:
        if ( *(_QWORD *)(v59 + 24) || (v45 = *(_QWORD *)(v59 + 16)) == 0 )
        {
LABEL_18:
          v24 = (unsigned __int64)&v21[v20];
          if ( (__int64 *)v24 != v21 )
          {
            v25 = v21;
            do
            {
              v26 = *(_WORD *)(*v25++ + 4) != 1;
              v15 |= v26;
            }
            while ( (__int64 *)v24 != v25 );
            if ( v15 )
            {
              v27 = a1;
              v28 = sub_186B270(0x38u);
              sub_13478B0(v28, *(_QWORD *)(a1 + 24), *(unsigned int *)(a3 + 32));
              v29 = *(_QWORD *)(a3 + 40);
              *(_QWORD *)v71 = *(_QWORD *)(a1 + 24);
              v64 = *(_DWORD *)(a3 + 32);
              sub_180C5A0(&v79, "aux");
              v30 = sub_15E3D10(
                      v71[0],
                      (int)a3 + 16,
                      (int)&v79,
                      v64,
                      (int)a3 + 48,
                      v29,
                      1,
                      v52,
                      v53,
                      (int)a3 + 48,
                      v56,
                      v59,
                      v62,
                      (int)&v79,
                      a2,
                      v71[0],
                      v73,
                      v75,
                      v56,
                      v77,
                      v78.m128i_i32[0],
                      v78.m128i_i32[2],
                      v79,
                      v80,
                      v81,
                      v82,
                      v83,
                      v84,
                      v85,
                      v86,
                      v87,
                      v88);
              v33 = sub_15DC610(
                      *(_QWORD *)(v27 + 24),
                      v30,
                      *((_DWORD *)v21 - 1),
                      (int)v21,
                      v31,
                      v32,
                      v54,
                      v55,
                      v57,
                      v60,
                      v63,
                      v66,
                      v68,
                      v72,
                      v74,
                      v76);
              sub_1349280(v28, v33, v34, v35, v36, v37);
              sub_135F4C0(v69, a3, v28);
              sub_135F980(v69, v30, v61);
              v38 = v21;
              v39 = (unsigned __int64)&v21[*((unsigned int *)v21 - 1)];
              if ( (unsigned __int64)v21 < v39 )
              {
                do
                {
                  v40 = *v38;
                  if ( *v38 )
                  {
                    v41 = (*(_DWORD *)(v40 + 8))-- == 1;
                    if ( v41 )
                      sub_15D7BC0(v58, v40);
                  }
                  ++v38;
                }
                while ( (unsigned __int64)v38 < v39 );
              }
            }
            else if ( (unsigned __int64)v21 < v24 )
            {
              v47 = v21;
              do
              {
                v48 = *v47;
                if ( *v47 )
                {
                  v41 = (*(_DWORD *)(v48 + 8))-- == 1;
                  if ( v41 )
                    sub_15D7BC0(v56, v48);
                }
                ++v47;
              }
              while ( (unsigned __int64)v47 < v24 );
            }
          }
          return sub_186B220(v21 - 1);
        }
        else
        {
          v46 = *(_DWORD *)(v45 - 4);
          if ( !v46 )
            goto LABEL_41;
LABEL_52:
          v49 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
          v50 = 214013 * *(_DWORD *)(v49 + 2356) + 2531011;
          *(_DWORD *)(v49 + 2356) = v50;
          v51 = (HIWORD(v50) & 0x7FFFu) % v46;
          sub_1349280(v59, *(_QWORD *)(*(_QWORD *)(v45 + 8 * v51) + 8LL), (HIWORD(v50) & 0x7FFFu) % v46, v45, v13, v14);
          result = sub_1347B80(v59, (unsigned int)v51);
          if ( v21 )
          {
LABEL_41:
            v20 = *((unsigned int *)v21 - 1);
            goto LABEL_18;
          }
        }
      }
      else
      {
        result = v59;
        v21 = *(__int64 **)(v59 + 24);
        if ( !v21 )
        {
          v45 = *(_QWORD *)(v59 + 16);
          if ( v45 )
          {
            v46 = *(_DWORD *)(v45 - 4);
            if ( v46 )
              goto LABEL_52;
          }
        }
      }
    }
  }
  return result;
}

