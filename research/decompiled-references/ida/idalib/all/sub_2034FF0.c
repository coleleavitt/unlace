_BYTE *__fastcall sub_2034FF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  char v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE *result; // rax
  __int64 *v11; // r12
  __int64 *v12; // r14
  __int64 v13; // r13
  unsigned int *v14; // rax
  unsigned int *v15; // r13
  unsigned int *v16; // rbp
  unsigned int v17; // r12d
  __int64 v18; // rax
  _BYTE *v19; // rax
  __int64 v20; // r15
  __int64 *v21; // r13
  __int64 *v22; // r15
  size_t v23; // rax
  __int64 v24; // r12
  size_t v25; // rdx
  char *v26; // rsi
  unsigned int v27; // ebp
  __int64 v28; // rax
  _BYTE *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // ecx
  __int64 *v34; // rsi
  __int64 v35; // r8
  unsigned __int64 v36; // r13
  _BYTE *v37; // rax
  _BYTE *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // r13d
  __int64 v42; // rax
  char *v43; // rsi
  __int64 v44; // rax
  size_t v45; // rdx
  unsigned __int8 *v46; // rbp
  _BYTE *v47; // rax
  int v48; // esi
  int v49; // r9d
  __int64 v50; // r8
  __int64 v51; // rax
  _BYTE *v52; // rdx
  size_t i; // [rsp+8h] [rbp-50h]
  size_t v54; // [rsp+8h] [rbp-50h]
  __m128 v55[4]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a3;
  v6 = *(_BYTE *)(a2 + 8);
  switch ( v6 )
  {
    case 0:
      return (_BYTE *)sub_995540(a3, "half");
    case 1:
      return (_BYTE *)sub_995540(a3, "bfloat");
    case 2:
      return (_BYTE *)sub_995540(a3, "float");
    case 3:
      return (_BYTE *)sub_995540(a3, "double");
    case 4:
      return (_BYTE *)sub_995540(a3, "x86_fp80");
    case 5:
      return (_BYTE *)sub_995540(a3, "fp128");
    case 6:
      return (_BYTE *)sub_995540(a3, "ppc_fp128");
    case 7:
      return (_BYTE *)sub_995540(a3, "void");
    case 8:
      return (_BYTE *)sub_995540(a3, "label");
    case 9:
      return (_BYTE *)sub_995540(a3, "metadata");
    case 10:
      return (_BYTE *)sub_995540(a3, "x86_amx");
    case 11:
      return (_BYTE *)sub_995540(a3, "token");
    case 12:
      v19 = *(_BYTE **)(a3 + 32);
      if ( *(_QWORD *)(a3 + 24) <= (unsigned __int64)v19 )
      {
        v5 = sub_227BA10(a3, 105);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v19 + 1;
        *v19 = 105;
      }
      return (_BYTE *)sub_227B910(v5, *(_DWORD *)(a2 + 8) >> 8);
    case 13:
      sub_2034FF0(a1, **(_QWORD **)(a2 + 16), a3);
      sub_995540(v5, " (");
      v20 = *(_QWORD *)(a2 + 16);
      v21 = (__int64 *)(v20 + 8LL * *(unsigned int *)(a2 + 12));
      if ( v21 == (__int64 *)(v20 + 8) )
      {
        if ( !(*(_DWORD *)(a2 + 8) >> 8) )
          goto LABEL_56;
        i = 0;
        v43 = nullptr;
      }
      else
      {
        v22 = (__int64 *)(v20 + 16);
        v23 = j__strlen(", ");
        v24 = *(v22 - 1);
        v25 = 0;
        v26 = nullptr;
        for ( i = v23; ; v25 = i )
        {
          sub_9954E0(v5, v26, v25);
          sub_2034FF0(a1, v24, v5);
          if ( v21 == v22 )
            break;
          v24 = *v22;
          v26 = ", ";
          ++v22;
        }
        v43 = ", ";
        if ( !(*(_DWORD *)(a2 + 8) >> 8) )
        {
LABEL_56:
          result = *(_BYTE **)(v5 + 32);
          if ( (unsigned __int64)result >= *(_QWORD *)(v5 + 24) )
            return (_BYTE *)sub_227BA10(v5, 41);
          *(_QWORD *)(v5 + 32) = result + 1;
          *result = 41;
          return result;
        }
      }
      v44 = sub_9954E0(v5, v43, i);
      sub_995540(v44, "...");
      goto LABEL_56;
    case 14:
      result = (_BYTE *)sub_995540(a3, "ptr");
      v27 = *(_DWORD *)(a2 + 8) >> 8;
      if ( v27 )
      {
        v28 = sub_995540(v5, " addrspace(");
        result = (_BYTE *)sub_227B910(v28, v27);
        v29 = *((_BYTE **)result + 4);
        if ( (unsigned __int64)v29 >= *((_QWORD *)result + 3) )
        {
          return (_BYTE *)sub_227BA10(result, 41);
        }
        else
        {
          *((_QWORD *)result + 4) = v29 + 1;
          *v29 = 41;
        }
      }
      return result;
    case 15:
      if ( (*(_BYTE *)(a2 + 9) & 4) != 0 )
        return (_BYTE *)sub_2035730(a1, a2, a3);
      sub_20C3250(a2);
      if ( !v30 )
      {
        sub_2034DD0(a1);
        v31 = *(unsigned int *)(a1 + 152);
        v32 = *(_QWORD *)(a1 + 136);
        if ( (_DWORD)v31 )
        {
          v33 = (v31 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          v34 = (__int64 *)(v32 + 16LL * v33);
          v35 = *v34;
          if ( a2 == *v34 )
          {
LABEL_36:
            sub_2033570(v55, v34, (_QWORD *)(16 * v31 + v32), a1 + 136, 1);
            v36 = v55[0].m128_u64[0];
            goto LABEL_37;
          }
          v48 = 1;
          if ( v35 != -4096 )
          {
            do
            {
              v49 = v48 + 1;
              v33 = (v31 - 1) & (v48 + v33);
              v34 = (__int64 *)(v32 + 16LL * v33);
              v50 = *v34;
              if ( a2 == *v34 )
                goto LABEL_36;
              v48 = v49;
            }
            while ( v50 != -4096 );
          }
        }
        v36 = sub_20335E0(a1 + 136);
LABEL_37:
        if ( v36 == sub_20335E0(a1 + 136) )
        {
          v51 = sub_995540(v5, "%\"type ");
          result = (_BYTE *)sub_227B9B0(v51, a2);
          v52 = *((_BYTE **)result + 4);
          if ( (unsigned __int64)v52 >= *((_QWORD *)result + 3) )
          {
            return (_BYTE *)sub_227BA10(result, 34);
          }
          else
          {
            *((_QWORD *)result + 4) = v52 + 1;
            *v52 = 34;
          }
        }
        else
        {
          v37 = *(_BYTE **)(v5 + 32);
          if ( (unsigned __int64)v37 >= *(_QWORD *)(v5 + 24) )
          {
            v5 = sub_227BA10(v5, 37);
          }
          else
          {
            *(_QWORD *)(v5 + 32) = v37 + 1;
            *v37 = 37;
          }
          return (_BYTE *)sub_227B910(v5, *(unsigned int *)(v36 + 8));
        }
        return result;
      }
      v46 = (unsigned __int8 *)sub_20C3250(a2);
      v47 = *(_BYTE **)(v5 + 32);
      if ( (unsigned __int64)v47 >= *(_QWORD *)(v5 + 24) )
      {
        v54 = v45;
        sub_227BA10(v5, 37);
        v45 = v54;
      }
      else
      {
        *(_QWORD *)(v5 + 32) = v47 + 1;
        *v47 = 37;
      }
      return sub_20323F0(v5, v46, v45);
    case 16:
      v38 = *(_BYTE **)(a3 + 32);
      if ( (unsigned __int64)v38 >= *(_QWORD *)(a3 + 24) )
      {
        v39 = sub_227BA10(a3, 91);
      }
      else
      {
        v39 = a3;
        *(_QWORD *)(a3 + 32) = v38 + 1;
        *v38 = 91;
      }
      v40 = sub_227B910(v39, *(_QWORD *)(a2 + 32));
      sub_995540(v40, " x ");
      sub_2034FF0(a1, *(_QWORD *)(a2 + 24), v5);
      result = *(_BYTE **)(v5 + 32);
      if ( (unsigned __int64)result >= *(_QWORD *)(v5 + 24) )
        return (_BYTE *)sub_227BA10(v5, 93);
      *(_QWORD *)(v5 + 32) = result + 1;
      *result = 93;
      return result;
    case 17:
    case 18:
      v41 = *(_DWORD *)(a2 + 32);
      sub_995540(a3, "<");
      if ( v6 == 18 )
        sub_995540(v5, "vscale x ");
      v42 = sub_227B910(v5, v41);
      sub_995540(v42, " x ");
      sub_2034FF0(a1, *(_QWORD *)(a2 + 24), v5);
      result = *(_BYTE **)(v5 + 32);
      if ( (unsigned __int64)result >= *(_QWORD *)(v5 + 24) )
        return (_BYTE *)sub_227BA10(v5, 62);
      *(_QWORD *)(v5 + 32) = result + 1;
      *result = 62;
      return result;
    case 19:
      v7 = sub_995540(a3, "typedptr(");
      sub_2035BA0(*(_QWORD *)(a2 + 24), v7, 0);
      v8 = sub_995540(v7, ", ");
      v9 = sub_227B910(v8, *(_DWORD *)(a2 + 8) >> 8);
      return (_BYTE *)sub_995540(v9, ")");
    case 20:
      sub_995540(a3, "target(\"");
      sub_22449A0(*(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), v5);
      sub_995540(v5, "\"");
      v11 = *(__int64 **)(a2 + 16);
      v12 = &v11[*(unsigned int *)(a2 + 12)];
      while ( v12 != v11 )
      {
        v13 = *v11++;
        sub_995540(v5, ", ");
        sub_2035BA0(v13, v5, 1);
      }
      v14 = *(unsigned int **)(a2 + 40);
      v15 = &v14[*(_DWORD *)(a2 + 8) >> 8];
      if ( v15 != v14 )
      {
        v16 = *(unsigned int **)(a2 + 40);
        do
        {
          v17 = *v16++;
          v18 = sub_995540(v5, ", ");
          sub_227B910(v18, v17);
        }
        while ( v15 != v16 );
      }
      return (_BYTE *)sub_995540(v5, ")");
  }
}
