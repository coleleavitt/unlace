__int64 __fastcall sub_178FD70(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // r12
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // r15
  int v14; // eax
  unsigned __int64 v15; // rdi
  __int64 *v16; // rdx
  unsigned __int8 v17; // cl
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // r13
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edi
  int v28; // eax
  unsigned int v29; // esi
  int v30; // eax
  unsigned int v31; // ecx
  bool v32; // zf
  char v33; // r8
  char v34; // r8
  __int64 v35; // rax
  _QWORD *v36; // rsi
  __int64 v37; // r9
  _QWORD *v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  __int64 v44; // [rsp+10h] [rbp-68h]
  char v46; // [rsp+24h] [rbp-54h]
  char v47; // [rsp+25h] [rbp-53h]
  char v48; // [rsp+26h] [rbp-52h]
  char v49; // [rsp+27h] [rbp-51h]
  __int64 v50; // [rsp+28h] [rbp-50h]
  __int64 v51; // [rsp+30h] [rbp-48h]
  unsigned __int64 v52; // [rsp+38h] [rbp-40h]

  v7 = a3;
  result = sub_15F2610(*a1, 0, a3, a4, a5, a6);
  v44 = result;
  if ( result && v7 )
  {
    v9 = result;
    v10 = 0;
    result = 0;
    v50 = v9 + 1912;
    while ( 1 )
    {
      v11 = *(_QWORD *)(a2 + 8 * result);
      v12 = 8 * result;
      if ( (*(_WORD *)v11 & 0x1FF) != 0x47 )
        goto LABEL_38;
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_BYTE *)(v13 + 28) & 0x7F;
      if ( (unsigned int)(v14 - 40) > 6 )
        goto LABEL_38;
      v46 = v14 != 46 && v14 != 40;
      if ( v46 )
        goto LABEL_38;
      v15 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
        v15 = *(_QWORD *)(v15 + 8);
      if ( !v15 )
        goto LABEL_38;
      v17 = *(_BYTE *)(sub_B8EAA0(v15) + 8) & 0x7F;
      if ( v17 <= 0x12u )
        break;
      if ( ((v17 + 94) & 0x7Fu) <= 5 )
      {
LABEL_12:
        if ( (*(_BYTE *)(v13 + 28) & 0x7F) != 0x2B && *(char *)(v13 + 97) < 0 )
        {
          v18 = *(_QWORD *)a4;
          v19 = *(unsigned int *)(a4 + 8);
          v20 = 5 * v19;
          v21 = *(_QWORD *)a4 + 168 * v19;
          if ( v21 != *(_QWORD *)a4 )
          {
            v47 = 0;
            v22 = (__int64 *)v21;
            v49 = 0;
            v48 = 0;
            v51 = a2;
            v52 = v7;
            v23 = *(__int64 **)a4;
            do
            {
              v24 = *v23;
              if ( *v23 )
              {
                if ( (unsigned int)sub_B76070(*v23, v20, (__int64)v16, v18) > v10 )
                {
                  v27 = (int)a1;
                  v20 = v24;
                  v28 = sub_178DFB0((__int64)a1, v24, v16, v18, v25, v26);
                  if ( v28 != 4 && v28 != 1 )
                  {
                    v29 = v28 - 2;
                    LOBYTE(v29) = (unsigned int)(v28 - 2) <= 1;
                    LOBYTE(v27) = v28 == 0;
                    LOBYTE(v28) = v28 == 3;
                    v30 = v27 | v28;
                    v31 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 120) + v12)
                                                                                             + 48LL)
                                                                                 & 0xFFFFFFFFFFFFFFF0LL)
                                                                     + 8LL)
                                                         & 0xFFFFFFFFFFFFFFF0LL)
                                             + 16LL)
                        - 43;
                    v32 = v31 == 1;
                    LOBYTE(v31) = v31 > 1;
                    LOBYTE(v27) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 120) + v12)
                                                                                           + 48LL)
                                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                                   + 8LL)
                                                       & 0xFFFFFFFFFFFFFFF0LL)
                                           + 16LL) == 43
                               || v32;
                    v33 = v31;
                    v18 = v30 & v31;
                    v49 |= v18;
                    v34 = v29 & v33;
                    v47 |= v27 & v30;
                    v20 = v27 & v29;
                    v46 |= v34;
                    v48 |= v20;
                  }
                }
              }
              v23 += 21;
            }
            while ( v22 != v23 );
            a2 = v51;
            v7 = v52;
            if ( v46 && v47 )
            {
              v35 = v44;
              if ( *(_BYTE *)(v44 + 1932) )
                goto LABEL_25;
LABEL_31:
              v39 = (_QWORD *)sub_2236760(v50, v13);
              v36 = *(_QWORD **)(v44 + 1912);
              if ( !*(_BYTE *)(v44 + 1932) )
              {
                v40 = &v36[*(unsigned int *)(v44 + 1920)];
LABEL_33:
                if ( v40 != v39 && *v39 >= 0xFFFFFFFFFFFFFFFELL )
                {
                  v41 = v39 + 1;
                  do
                  {
                    v42 = v41;
                    if ( v40 == v41 )
                      break;
                    ++v41;
                  }
                  while ( *v42 >= 0xFFFFFFFFFFFFFFFELL );
                }
                goto LABEL_38;
              }
LABEL_48:
              v40 = &v36[*(unsigned int *)(v44 + 1924)];
              goto LABEL_33;
            }
            if ( v48 && v49 )
            {
              v35 = v44;
              if ( !*(_BYTE *)(v44 + 1932) )
                goto LABEL_31;
LABEL_25:
              v36 = *(_QWORD **)(v35 + 1912);
              v37 = *(unsigned int *)(v35 + 1924);
              v38 = &v36[v37];
              if ( v36 != v38 )
              {
                v39 = *(_QWORD **)(v35 + 1912);
                if ( v13 == *v36 )
                  goto LABEL_48;
                while ( v38 != ++v39 )
                {
                  if ( v13 == *v39 )
                    goto LABEL_48;
                }
              }
              if ( (unsigned int)v37 >= *(_DWORD *)(v44 + 1920) )
                goto LABEL_31;
              *(_DWORD *)(v44 + 1924) = v37 + 1;
              *v38 = v13;
              v36 = *(_QWORD **)(v44 + 1912);
              v39 = &v36[v37];
              goto LABEL_48;
            }
          }
        }
LABEL_38:
        result = ++v10;
        if ( v10 >= v7 )
          return result;
      }
      else
      {
        result = ++v10;
        if ( v10 >= v7 )
          return result;
      }
    }
    if ( ((1LL << v17) & 0x40182) == 0 )
      goto LABEL_38;
    goto LABEL_12;
  }
  return result;
}
