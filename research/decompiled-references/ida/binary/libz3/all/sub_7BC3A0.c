unsigned __int64 __fastcall sub_7BC3A0(_QWORD *a1)
{
  char **exception; // rbp
  __int64 v2; // rdx
  char **v3; // rbp
  __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int *v11; // r8
  unsigned int *v12; // r13
  unsigned int *j; // rbx
  _DWORD *v14; // rcx
  unsigned int v15; // r14d
  unsigned int v16; // edi
  __int64 v17; // r8
  _BYTE *v18; // rax
  unsigned int v19; // r12d
  _QWORD *v20; // rdx
  __int64 v21; // rax
  unsigned int *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned int v27; // r12d
  __int64 (__fastcall *v28)(); // r8
  __int64 (__fastcall *v29)(_QWORD); // rcx
  __int64 v30; // rcx
  unsigned int v31; // esi
  _QWORD *v33; // rax
  __int64 v34; // rax
  unsigned int v35; // edx
  unsigned int v36; // ebx
  size_t v37; // rsi
  unsigned int *v38; // rax
  char *v39; // rdx
  char *v40; // rax
  unsigned int v41; // ecx
  size_t v42; // rsi
  unsigned int v43; // r12d
  unsigned int *v44; // rax
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+8h] [rbp-70h]
  __int64 v49; // [rsp+8h] [rbp-70h]
  unsigned int *v50; // [rsp+10h] [rbp-68h]
  unsigned __int64 i; // [rsp+18h] [rbp-60h]
  __int64 v52[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = a1[103];
  for ( i = -(__int64)*((unsigned int *)a1 + 202); v7; v7 = a1[103] )
  {
    v8 = *(_DWORD *)(v7 - 4);
    if ( !v8 )
      break;
    v9 = v8 - 1;
    v10 = *(_DWORD *)(v7 + 4LL * v9);
    *(_DWORD *)(v7 - 4) = v9;
    *(_BYTE *)(a1[102] + v10) = 0;
  }
  v11 = (unsigned int *)a1[100];
  if ( v11 )
  {
    v12 = &v11[*(v11 - 1)];
    if ( v12 != v11 )
    {
      for ( j = (unsigned int *)a1[100]; v12 != j; ++j )
      {
        while ( 1 )
        {
          v14 = (_DWORD *)a1[102];
          v15 = *j;
          if ( !v14 )
          {
            v19 = v15 + 1;
            if ( v15 == -1 )
            {
LABEL_29:
              v17 = v15;
              goto LABEL_30;
            }
            v34 = sub_186B270(0xAu);
            v35 = 2;
            v16 = 0;
            v14 = (_DWORD *)(v34 + 8);
            *(_QWORD *)v34 = 2;
            a1[102] = v34 + 8;
            if ( v19 <= 2 )
            {
              *(_DWORD *)(v34 + 4) = v19;
              v17 = v15;
              v40 = (char *)(v34 + 8);
              v39 = (char *)v14 + v19;
              goto LABEL_40;
            }
            goto LABEL_35;
          }
          v16 = *(v14 - 1);
          if ( v15 < v16 )
            break;
          v19 = v15 + 1;
          if ( v16 >= v15 + 1 )
            goto LABEL_29;
          v35 = *(v14 - 2);
          if ( v35 >= v19 )
          {
            *(v14 - 1) = v19;
            v17 = v15;
            v40 = (char *)v14 + v16;
            v39 = (char *)v14 + v19;
LABEL_40:
            v48 = v17;
            memset(v40, 0, v39 - v40);
            v14 = (_DWORD *)a1[102];
            v17 = v48;
            goto LABEL_30;
          }
LABEL_35:
          v50 = j;
          do
          {
            v36 = (3 * v35 + 1) >> 1;
            v37 = v36 + 8;
            if ( v35 + 8 >= (unsigned int)v37 || v35 >= v36 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v52, "Overflow encountered when expanding vector", v2);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v52);
              sub_233E40((__int64)v52);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v38 = (unsigned int *)sub_186B300(v14 - 2, v37);
            v35 = v36;
            v14 = v38 + 2;
            *v38 = v36;
            a1[102] = v38 + 2;
          }
          while ( v36 < v19 );
          v17 = v15;
          v38[1] = v19;
          j = v50;
          v39 = (char *)v14 + v19;
          v40 = (char *)v14 + v16;
          if ( v19 != v16 )
            goto LABEL_40;
LABEL_30:
          if ( *((_BYTE *)v14 + v17) )
            goto LABEL_15;
          *((_BYTE *)v14 + v17) = 1;
          v20 = (_QWORD *)a1[103];
          if ( v20 )
          {
LABEL_12:
            v21 = *((unsigned int *)v20 - 1);
            if ( (_DWORD)v21 == *((_DWORD *)v20 - 2) )
            {
              v41 = (unsigned int)(3 * v21 + 1) >> 1;
              v42 = 4 * v41 + 8;
              v43 = v41;
              if ( 4 * (int)v21 + 8 >= (unsigned int)v42 || (unsigned int)v21 >= v41 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_113C8C(v52, "Overflow encountered when expanding vector", v4);
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v52);
                sub_233E40((__int64)v52);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v49 = v17;
              v44 = (unsigned int *)sub_186B300(v20 - 1, v42);
              v17 = v49;
              v20 = v44 + 2;
              *v44 = v43;
              v45 = v44[1];
              a1[103] = v20;
              v22 = (unsigned int *)v20 + v45;
            }
            else
            {
              v22 = (unsigned int *)v20 + v21;
            }
            goto LABEL_14;
          }
LABEL_32:
          v47 = v17;
          v33 = (_QWORD *)sub_186B270(0x10u);
          v17 = v47;
          v20 = v33 + 1;
          *v33 = 2;
          a1[103] = v33 + 1;
          v22 = (unsigned int *)(v33 + 1);
LABEL_14:
          *v22 = v15;
          ++*((_DWORD *)v20 - 1);
LABEL_15:
          v23 = a1[99];
          if ( !v23 || v15 >= *(_DWORD *)(v23 - 4) )
            goto LABEL_26;
          v24 = *(_QWORD *)(v23 + 8 * v17);
          v25 = -v24;
          if ( v24 > 0 )
            v25 = v24;
          v26 = ((unsigned __int64)v24 >> 63) + 2 * v15;
          v27 = v25;
          *((_BYTE *)a1 + 996) |= v25 > 0xFFFFFFFFLL;
          v5 = (v26 << 32) | (unsigned int)v5;
          if ( !(_DWORD)v25 )
            goto LABEL_26;
          v28 = *(__int64 (__fastcall **)())(*a1 + 544LL);
          if ( v28 == sub_7C5AC0 )
          {
            v29 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
            if ( v29 == sub_7C55E0 )
            {
              v30 = a1[20];
              if ( v30 )
              {
                v31 = *(_DWORD *)(*(_QWORD *)(v30 + 880) + 4LL * ((unsigned int)v26 >> 1));
                if ( v31 >= *(_DWORD *)(v30 + 888) && (((unsigned __int8)v31 ^ (unsigned __int8)v26) & 1) != 0 )
                  goto LABEL_26;
LABEL_25:
                i += v27;
                goto LABEL_26;
              }
              v46 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * (unsigned int)v26);
            }
            else
            {
              v46 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v29)(a1, HIDWORD(v5));
            }
            if ( v46 != -1 )
              goto LABEL_25;
            if ( v12 == ++j )
              return i >> 63;
          }
          else
          {
            if ( !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD))v28)(a1, HIDWORD(v5)) )
              goto LABEL_25;
            if ( v12 == ++j )
              return i >> 63;
          }
        }
        v17 = v15;
        v18 = (char *)v14 + v15;
        if ( !*v18 )
        {
          v19 = v15 + 1;
          if ( v16 >= v15 + 1 )
          {
            *v18 = 1;
            v20 = (_QWORD *)a1[103];
            if ( v20 )
              goto LABEL_12;
            goto LABEL_32;
          }
          v35 = *(v14 - 2);
          if ( v35 >= v19 )
          {
            *(v14 - 1) = v19;
            v40 = (char *)v14 + v16;
            v39 = (char *)v14 + v19;
            goto LABEL_40;
          }
          goto LABEL_35;
        }
LABEL_26:
        ;
      }
    }
  }
  return i >> 63;
}

