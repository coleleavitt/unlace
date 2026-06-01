__int64 __fastcall sub_2892A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 *v3; // rbx
  __int64 *v4; // r15
  __int64 v5; // r13
  int v6; // r14d
  int v7; // eax
  unsigned int v8; // eax
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 i; // rax
  __int64 v12; // r14
  __int64 *v13; // r12
  _QWORD *v14; // rdi
  int v15; // r13d
  __int64 j; // rax
  __int64 v17; // rbp
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 *v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // r14
  _QWORD *v24; // r12
  __int64 v25; // r13
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  int v29; // edi
  int v30; // edi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 *v39; // rax
  int v40; // ecx
  __int64 v41; // rcx
  int v42; // esi
  bool v43; // al
  __int64 *v44; // r12
  __int64 v45; // rdi
  __int64 v46; // rax
  int v47; // ecx
  int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  _QWORD *v60; // [rsp+8h] [rbp-80h]
  __int64 v61; // [rsp+8h] [rbp-80h]
  int v62; // [rsp+14h] [rbp-74h]
  unsigned int v63; // [rsp+18h] [rbp-70h]
  char v64; // [rsp+1Fh] [rbp-69h]
  __int64 v65; // [rsp+20h] [rbp-68h] BYREF
  __int64 v66; // [rsp+28h] [rbp-60h]
  __int64 v67; // [rsp+30h] [rbp-58h]
  __int64 v68; // [rsp+38h] [rbp-50h]
  unsigned __int64 v69; // [rsp+48h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v2 = 0;
  if ( *(_DWORD *)(a2 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_383060(50616);
LABEL_74:
    BUG();
  }
  v3 = *(__int64 **)(a2 + 24);
  v4 = (__int64 *)*v3;
  if ( (__int64 *)*v3 == v3 )
    return 0;
  v64 = 0;
  v63 = 0;
  while ( 2 )
  {
    switch ( *((_DWORD *)v4 + 6) )
    {
      case 'G':
        v60 = (_QWORD *)v4[5];
        v62 = *((_DWORD *)v4 + 7);
        v22 = *(unsigned int *)(*v60 + 28LL);
        if ( v62 == -1 )
        {
          *(_DWORD *)(*v60 + 28LL) = -1;
          v62 = v22;
        }
        else
        {
          if ( (_DWORD)v22 != -1 )
            goto LABEL_17;
          *((_DWORD *)v4 + 7) = -1;
        }
        if ( v62 == -2 )
          goto LABEL_17;
        v23 = (__int64)v4;
        v24 = v60;
        if ( (_QWORD *)*v24 != v24 )
        {
          do
          {
            v25 = v23;
            v65 = -1;
            v66 = -4294967226LL;
            v67 = 0xFFFFFFFFLL;
            v68 = 0;
            v23 = qalloc_or_throw(48, a2, v2, v22);
            *(_QWORD *)(v23 + 16) = -1;
            *(_DWORD *)(v23 + 24) = 70;
            *(_QWORD *)(v23 + 28) = -1;
            sub_25AA70(v23 + 16, (__int64)&v65);
            *(_QWORD *)v23 = v25;
            v26 = *(__int64 **)(v25 + 8);
            *(_QWORD *)(v23 + 8) = v26;
            *v26 = v23;
            *(_QWORD *)(v25 + 8) = v23;
            ++v3[2];
            sub_255050((__int64)&v65);
            v27 = v24[1];
            v28 = *(_QWORD *)(v23 + 16);
            *(_QWORD *)(v23 + 16) = *(_QWORD *)(v27 + 16);
            v29 = *(_DWORD *)(v27 + 24);
            *(_QWORD *)(v27 + 16) = v28;
            LODWORD(v28) = *(_DWORD *)(v23 + 24);
            *(_DWORD *)(v23 + 24) = v29;
            v30 = *(_DWORD *)(v27 + 28);
            *(_DWORD *)(v27 + 24) = v28;
            LODWORD(v28) = *(_DWORD *)(v23 + 28);
            *(_DWORD *)(v23 + 28) = v30;
            v31 = *(_QWORD *)(v27 + 40);
            *(_DWORD *)(v27 + 28) = v28;
            a2 = *(_QWORD *)(v23 + 40);
            *(_QWORD *)(v23 + 40) = v31;
            *(_QWORD *)(v27 + 40) = a2;
            v24 = (_QWORD *)v24[1];
          }
          while ( v24 != (_QWORD *)*v60 );
        }
        *(_DWORD *)(v23 + 28) = v62;
        v32 = *v4;
        *(_QWORD *)v4[1] = *v4;
        a2 = v4[1];
        *(_QWORD *)(v32 + 8) = a2;
        sub_255050((__int64)(v4 + 2));
        v33 = (__int64)v4;
        v4 = (__int64 *)v23;
        qfree(v33);
        --v3[2];
        ++v63;
        goto LABEL_18;
      case 'H':
      case 'I':
      case 'M':
      case 'P':
      case 'T':
        v5 = v4[5];
        v6 = *((_DWORD *)v4 + 7);
        v7 = *(_DWORD *)(v5 + 12);
        if ( v6 == -1 )
        {
          *(_DWORD *)(v5 + 12) = -1;
          v6 = v7;
        }
        else
        {
          if ( v7 != -1 )
            goto LABEL_17;
          *((_DWORD *)v4 + 7) = -1;
        }
        if ( v6 == -2 )
          goto LABEL_17;
        v8 = *(_DWORD *)(v5 + 8);
        if ( v8 == 48 )
        {
          a2 = *(_QWORD *)(v5 + 24);
          if ( *(_DWORD *)(a2 + 8) == 1 )
          {
            v46 = *(_QWORD *)v5;
            *(_QWORD *)v5 = *(_QWORD *)a2;
            v47 = *(_DWORD *)(a2 + 8);
            *(_QWORD *)a2 = v46;
            LODWORD(v46) = *(_DWORD *)(v5 + 8);
            *(_DWORD *)(v5 + 8) = v47;
            v48 = *(_DWORD *)(a2 + 12);
            *(_DWORD *)(a2 + 8) = v46;
            LODWORD(v46) = *(_DWORD *)(v5 + 12);
            *(_DWORD *)(v5 + 12) = v48;
            v49 = *(_QWORD *)(a2 + 24);
            *(_DWORD *)(a2 + 12) = v46;
            v50 = *(_QWORD *)(v5 + 24);
            *(_QWORD *)(v5 + 24) = v49;
            v51 = *(_QWORD *)(a2 + 32);
            *(_QWORD *)(a2 + 24) = v50;
            v52 = *(_QWORD *)(v5 + 32);
            *(_QWORD *)(v5 + 32) = v51;
            v53 = *(_QWORD *)(a2 + 40);
            *(_QWORD *)(a2 + 32) = v52;
            v54 = *(_QWORD *)(v5 + 40);
            *(_QWORD *)(v5 + 40) = v53;
            v55 = *(_QWORD *)(a2 + 48);
            *(_QWORD *)(a2 + 40) = v54;
            v56 = *(_QWORD *)(v5 + 48);
            *(_QWORD *)(v5 + 48) = v55;
            LODWORD(v55) = *(_DWORD *)(a2 + 56);
            *(_QWORD *)(a2 + 48) = v56;
            LODWORD(v56) = *(_DWORD *)(v5 + 56);
            *(_DWORD *)(v5 + 56) = v55;
            *(_DWORD *)(a2 + 56) = v56;
            LODWORD(v56) = *(_DWORD *)(v5 + 12);
            *(_DWORD *)(v5 + 12) = *(_DWORD *)(a2 + 12);
            *(_DWORD *)(a2 + 12) = v56;
            *(_QWORD *)(a2 + 24) = *(_QWORD *)(v5 + 32);
            v9 = *(_QWORD **)(v5 + 24);
            *(_QWORD *)(v5 + 32) = a2;
            v10 = (unsigned int)(*((_DWORD *)v4 + 6) - 72);
            if ( (unsigned int)v10 > 0xC )
            {
LABEL_64:
              if ( !under_debugger )
                sub_383060(50617);
              goto LABEL_74;
            }
LABEL_14:
            switch ( v10 )
            {
              case 0LL:
              case 8LL:
              case 12LL:
                v4[2] = *(_QWORD *)a2;
                goto LABEL_45;
              case 1LL:
                v4[2] = sub_2418B0(a2);
                goto LABEL_45;
              case 5LL:
LABEL_45:
                sub_255850((__int64 *)v5, a2);
                v65 = -1;
                v66 = -4294967226LL;
                v67 = 0xFFFFFFFFLL;
                v68 = 0;
                v36 = qalloc_or_throw(48, a2, v34, v35);
                *(_QWORD *)(v36 + 16) = -1;
                *(_DWORD *)(v36 + 24) = 70;
                a2 = (__int64)&v65;
                *(_QWORD *)(v36 + 28) = -1;
                v61 = v36;
                sub_25AA70(v36 + 16, (__int64)&v65);
                *(_QWORD *)v61 = v4;
                v37 = (__int64 *)v4[1];
                *(_QWORD *)(v61 + 8) = v37;
                *v37 = v61;
                v4[1] = v61;
                ++v3[2];
                sub_255050((__int64)&v65);
                ++v63;
                *(_QWORD *)(v61 + 16) = *v9;
                v4 = (__int64 *)v61;
                *(_DWORD *)(v61 + 24) = 72;
                *(_QWORD *)(v61 + 40) = v9;
                *(_DWORD *)(v61 + 28) = v6;
                goto LABEL_18;
              default:
                goto LABEL_64;
            }
          }
          goto LABEL_16;
        }
        if ( v8 > 0x30 )
        {
          if ( v8 != 66 )
            goto LABEL_16;
          if ( *((_DWORD *)v4 + 6) != 72 )
          {
            if ( !under_debugger )
              sub_383060(50618);
            goto LABEL_74;
          }
          v39 = *(__int64 **)(v5 + 24);
          v40 = *((_DWORD *)v39 + 3);
          if ( v6 == -1 )
          {
            *((_DWORD *)v39 + 3) = -1;
            if ( v40 == -2 )
              goto LABEL_16;
            v6 = v40;
          }
          else if ( v40 != -1 )
          {
            goto LABEL_16;
          }
          v41 = *v39;
          *v39 = v4[2];
          v42 = *((_DWORD *)v4 + 6);
          v4[2] = v41;
          LODWORD(v41) = *((_DWORD *)v39 + 2);
          *((_DWORD *)v39 + 2) = v42;
          a2 = *((unsigned int *)v4 + 7);
          *((_DWORD *)v4 + 6) = v41;
          LODWORD(v41) = *((_DWORD *)v39 + 3);
          *((_DWORD *)v39 + 3) = a2;
          *((_DWORD *)v4 + 7) = v41;
          v4[5] = v39[3];
          *((_DWORD *)v39 + 2) = 70;
          v39[3] = 0;
          if ( v5 )
          {
            sub_255630(v5);
            clear_tinfo_t();
            j__qfree(v5);
          }
          ++v63;
          v43 = *((_DWORD *)v4 + 6) == 82;
          *((_DWORD *)v4 + 7) = v6;
          v64 |= v43;
        }
        else
        {
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              a2 = *(_QWORD *)(v5 + 32);
              v9 = *(_QWORD **)(v5 + 24);
              v10 = (unsigned int)(*((_DWORD *)v4 + 6) - 72);
              goto LABEL_14;
            }
LABEL_16:
            *((_DWORD *)v4 + 7) = v6;
LABEL_17:
            v4 = (__int64 *)*v4;
            goto LABEL_18;
          }
          if ( v6 != -1 || *((_DWORD *)v4 + 6) != 72 )
            goto LABEL_16;
          v44 = (__int64 *)*v4;
          *(_QWORD *)v4[1] = *v4;
          v44[1] = v4[1];
          sub_255050((__int64)(v4 + 2));
          v45 = (__int64)v4;
          v4 = v44;
          qfree(v45);
          --v3[2];
        }
LABEL_18:
        if ( v3 != v4 )
          continue;
        if ( v64 )
        {
          for ( i = *v3; v3 != (__int64 *)i; i = v12 )
          {
            v12 = *(_QWORD *)i;
            if ( *(_DWORD *)(i + 24) == 82 )
            {
              v13 = *(__int64 **)(i + 40);
              if ( v3 != (__int64 *)v12 )
              {
                while ( *(_DWORD *)(v12 + 24) == 82 && *(_DWORD *)(v12 + 28) == -1 )
                {
                  v14 = *(_QWORD **)(v12 + 40);
                  v15 = 0;
                  for ( j = 0; (unsigned __int64)v15 < v14[1]; j = v15 )
                  {
                    v17 = *(_QWORD *)(*v14 + 8 * j);
                    v18 = v13[1];
                    v19 = (_QWORD *)(*v13 + 8 * v18);
                    if ( (_QWORD *)*v13 == v19 )
                      goto LABEL_66;
                    v20 = (_QWORD *)*v13;
                    while ( v17 != *v20 )
                    {
                      if ( v19 == ++v20 )
                        goto LABEL_66;
                    }
                    if ( v20 == v19 )
                    {
LABEL_66:
                      v57 = v18 + 1;
                      if ( v13[2] < v57 )
                      {
                        v58 = qvector_reserve((__int64)v13, *v13, v57, 8);
                        v59 = v13[1];
                        *v13 = v58;
                        v19 = (_QWORD *)(v58 + 8 * v59);
                      }
                      *v19 = v17;
                      ++v13[1];
                      v14 = *(_QWORD **)(v12 + 40);
                    }
                    ++v15;
                  }
                  v21 = *(__int64 **)v12;
                  **(_QWORD **)(v12 + 8) = *(_QWORD *)v12;
                  v21[1] = *(_QWORD *)(v12 + 8);
                  sub_255050(v12 + 16);
                  qfree(v12);
                  --v3[2];
                  if ( v3 == v21 )
                  {
                    v12 = (__int64)v3;
                    break;
                  }
                  v12 = (__int64)v21;
                }
              }
            }
          }
        }
        return v63;
      case 'R':
        v64 = 1;
        goto LABEL_17;
      default:
        goto LABEL_17;
    }
  }
}
