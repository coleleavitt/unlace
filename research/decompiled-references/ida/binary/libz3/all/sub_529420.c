void __fastcall sub_529420(__int64 a1, _QWORD *a2, __m128 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  char **exception; // rbx
  _QWORD *v8; // r13
  __int64 v9; // rdx
  __int64 **v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // r14
  __int64 *v15; // r12
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // ebp
  __int64 *v19; // r13
  __int64 v20; // r14
  unsigned int v21; // r15d
  __int64 v22; // rax
  int v23; // r8d
  _QWORD *v24; // rsi
  unsigned int v25; // ecx
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  _QWORD *v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  char *v32; // rdi
  unsigned int v33; // r11d
  char *v34; // r9
  __int64 v35; // r11
  char *v36; // r10
  char *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbp
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 *v46; // rcx
  __int64 v47; // rdi
  unsigned int v48; // r12d
  unsigned int v49; // ecx
  unsigned int *v50; // rax
  _QWORD *v51; // rax
  __int64 v54; // [rsp+10h] [rbp-88h]
  _QWORD *v55; // [rsp+18h] [rbp-80h]
  __int64 v56; // [rsp+20h] [rbp-78h]
  _QWORD *v57; // [rsp+28h] [rbp-70h]
  __int64 v58[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = (_QWORD *)*a2;
  if ( *a2 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( v8 != &v8[v9] )
    {
      v57 = &v8[v9];
      do
      {
        while ( 1 )
        {
          v54 = *v8;
          v12 = (__int64 **)sub_63BA90(*(_QWORD *)(a1 + 8), *v8);
          v13 = *(_QWORD *)(a1 + 8);
          v14 = *v12;
          if ( *v12 )
          {
            v15 = &v14[*((unsigned int *)v14 - 1)];
            v16 = sub_63BB50(v13, v54);
            v17 = v54;
            v18 = v16;
            if ( v15 != v14 )
            {
              v56 = a6;
              v55 = v8;
              v19 = v14;
              do
              {
                while ( 1 )
                {
                  v20 = *v19;
                  v21 = 0;
                  if ( *(_DWORD *)(*v19 + 68) )
                    break;
LABEL_22:
                  ++v19;
                  sub_528610((_QWORD *)a1, v20, a5, 0xFFFFFFFF, 0, (__int64)a7, a3);
                  if ( v19 == v15 )
                    goto LABEL_12;
                }
                while ( (unsigned int)sub_63BB50(
                                        *(_QWORD *)(a1 + 8),
                                        *(_QWORD *)((*(_QWORD *)(v20 + 8LL * v21 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16)) < v18 )
                {
                  if ( ++v21 >= *(_DWORD *)(v20 + 68) )
                    goto LABEL_22;
                }
                ++v19;
              }
              while ( v19 != v15 );
LABEL_12:
              v17 = v54;
              v8 = v55;
              a6 = v56;
            }
          }
          else
          {
            sub_63BB50(v13, v54);
            v17 = v54;
          }
          v22 = *(unsigned int *)(a6 + 8);
          v23 = *(_DWORD *)(v17 + 12);
          v24 = *(_QWORD **)a6;
          v25 = v22 - 1;
          v22 *= 16;
          v26 = (_QWORD *)(*(_QWORD *)a6 + v22);
          v27 = 16LL * (v23 & v25);
          v28 = (_QWORD *)(*(_QWORD *)a6 + v27);
          if ( v27 == v22 )
            break;
          v29 = (_QWORD *)(*(_QWORD *)a6 + v27);
          while ( 1 )
          {
            v30 = *v29;
            if ( *v29 > 1u )
              break;
            if ( !v30 )
              goto LABEL_20;
LABEL_17:
            v29 += 2;
            if ( v26 == v29 )
              goto LABEL_41;
          }
          if ( *(_DWORD *)(v30 + 12) != v23 || v17 != v30 )
            goto LABEL_17;
LABEL_25:
          v31 = *(unsigned int *)(a1 + 32);
          v32 = *(char **)(a1 + 24);
          v33 = v31 - 1;
          v31 *= 16;
          v34 = &v32[v31];
          v35 = 16LL * (v23 & v33);
          v36 = &v32[v35];
          v37 = &v32[v35];
          if ( v35 == v31 )
          {
LABEL_33:
            while ( v36 != v32 )
            {
              v39 = *(_QWORD *)v32;
              if ( *(_QWORD *)v32 > 1u )
              {
                if ( *(_DWORD *)(v39 + 12) == v23 && v17 == v39 )
                {
                  v37 = v32;
                  goto LABEL_52;
                }
              }
              else if ( !v39 )
              {
                break;
              }
              v32 += 16;
            }
LABEL_62:
            BUG();
          }
          while ( 1 )
          {
            while ( 1 )
            {
              v38 = *(_QWORD *)v37;
              if ( *(_QWORD *)v37 > 1u )
                break;
              if ( !v38 )
                goto LABEL_62;
              v37 += 16;
              if ( v34 == v37 )
                goto LABEL_33;
            }
            if ( *(_DWORD *)(v38 + 12) == v23 && v17 == v38 )
              break;
            v37 += 16;
            if ( v34 == v37 )
              goto LABEL_33;
          }
LABEL_52:
          v41 = sub_4DABC0(*((_DWORD *)v37 + 2), *((_DWORD *)v29 + 2));
          v42 = (_QWORD *)*a7;
          if ( *a7 )
          {
            v43 = *((_DWORD *)v42 - 1);
            if ( v43 == *((_DWORD *)v42 - 2) )
            {
              v48 = (3 * v43 + 1) >> 1;
              v49 = 8 * v48 + 8;
              if ( 8 * v43 + 8 >= v49 || v43 >= v48 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v58, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v58);
                sub_233E40((__int64)v58);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v50 = (unsigned int *)sub_186B300(v42 - 1, v49);
              v42 = v50 + 2;
              *v50 = v48;
              *a7 = v50 + 2;
              LODWORD(v50) = v50[1];
              v46 = &v42[(unsigned int)v50];
              v45 = (_DWORD)v50 + 1;
            }
            else
            {
              v44 = v43;
              v45 = v43 + 1;
              v46 = &v42[v44];
            }
          }
          else
          {
            v51 = (_QWORD *)sub_186B270(0x18u);
            *v51 = 2;
            v42 = v51 + 1;
            *a7 = v51 + 1;
            v46 = v51 + 1;
            v45 = 1;
          }
          *v46 = v41;
          *((_DWORD *)v42 - 1) = v45;
          v47 = a7[1];
          if ( v47 )
          {
            ++v8;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 16LL))(v47, v41);
            if ( v57 == v8 )
              return;
          }
          else
          {
LABEL_20:
            if ( v57 == ++v8 )
              return;
          }
        }
LABEL_41:
        if ( v24 == v28 )
          goto LABEL_20;
        while ( 1 )
        {
          v40 = *v24;
          if ( *v24 <= 1u )
            break;
          if ( *(_DWORD *)(v40 + 12) == v23 && v17 == v40 )
          {
            v29 = v24;
            goto LABEL_25;
          }
LABEL_45:
          v24 += 2;
          if ( v28 == v24 )
            goto LABEL_20;
        }
        if ( v40 )
          goto LABEL_45;
        ++v8;
      }
      while ( v57 != v8 );
    }
  }
}

