/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FB58
// Address: 0x000000000007FB58

//----- (000000000007FB58) ----------------------------------------------------
__int64 __fastcall sub_7FB58(__int64 a1, pthread_mutex_t *a2, _BYTE *a3)
{
  char v5; // w25
  int v6; // w24
  int v7; // w28
  unsigned int v8; // w22
  int v9; // w29
  _BYTE *v10; // x9
  int v11; // w10
  int v12; // w11
  char *v13; // x8
  __int64 v14; // x1
  char v15; // w28
  __int64 v16; // x21
  int v17; // w10
  __int64 v18; // x1
  int v19; // w28
  __int64 v20; // x21
  char v21; // w28
  __int64 v22; // x1
  __int64 v23; // x21
  __int64 v24; // x1
  __int64 v25; // x21
  _BYTE *v26; // x8
  char *v27; // x8
  char *v28; // x0
  char *v29; // x8
  __int128 v30; // q0
  __int64 v31; // x10
  unsigned int v32; // w0
  void *align; // x0
  char *v34; // x8
  char *v35; // x0
  char *v36; // x8
  __int128 v37; // q0
  __int64 v38; // x10
  __int64 v40; // x8
  pthread_mutex_t ptr; // [xsp+10h] [xbp-80h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = 0;
  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(&ptr, 0, 24);
  *a3 = 1;
  while ( 1 )
  {
LABEL_3:
    v8 = sub_7F024(a1);
    if ( v8 )
    {
      if ( v8 == 34 )
      {
        if ( (v5 & 1) != 0 )
          v32 = 38;
        else
          v32 = 0;
        v8 = set_qerrno(v32);
      }
      align = (void *)ptr.__align;
      if ( !ptr.__align )
        return v8;
LABEL_78:
      *(&ptr.__align + 1) = 0;
      qfree(align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
      return v8;
    }
    if ( (v5 & 1) == 0 )
      break;
    v9 = v7;
LABEL_7:
    v10 = (_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL);
    while ( 2 )
    {
      LOBYTE(v11) = *(v10 - 1);
      v12 = 0;
      switch ( (char)v11 )
      {
        case 0:
          goto LABEL_52;
        case 9:
        case 10:
        case 32:
          if ( (v9 & 1) != 0 )
          {
            *(_QWORD *)(a1 + 8) = v10++;
            v9 = 1;
            continue;
          }
          v12 = 1;
LABEL_12:
          v13 = v10 - 1;
          v9 = v12;
          goto LABEL_13;
        case 34:
          v13 = v10 - 1;
          while ( 2 )
          {
            if ( (_BYTE)v11 )
            {
              *(_QWORD *)(a1 + 8) = v13 + 1;
              v18 = ptr.__align;
              v19 = (unsigned __int8)*v13;
              if ( *(&ptr.__align + 1) )
                v20 = *(&ptr.__align + 1) - 1;
              else
                v20 = 0;
              if ( *(&ptr.__align + 2) < (unsigned __int64)(v20 + 2) )
              {
                v18 = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v20 + 2, 1u);
                ptr.__align = v18;
              }
              *(&ptr.__align + 1) = v20 + 2;
              *(_BYTE *)(v18 + v20) = v19;
              *(_BYTE *)(ptr.__align + v20 + 1) = 0;
              v13 = *(char **)(a1 + 8);
              if ( v19 == 92 )
              {
                v21 = *v13;
                if ( *v13 )
                {
                  v22 = ptr.__align;
                  if ( *(&ptr.__align + 1) )
                    v23 = *(&ptr.__align + 1) - 1;
                  else
                    v23 = 0;
                  if ( *(&ptr.__align + 2) < (unsigned __int64)(v23 + 2) )
                  {
                    v22 = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v23 + 2, 1u);
                    ptr.__align = v22;
                  }
                  *(&ptr.__align + 1) = v23 + 2;
                  *(_BYTE *)(v22 + v23) = v21;
                  *(_BYTE *)(ptr.__align + v23 + 1) = 0;
                  v13 = (char *)(*(_QWORD *)(a1 + 8) + 1LL);
                  *(_QWORD *)(a1 + 8) = v13;
                  goto LABEL_42;
                }
                v11 = 0;
              }
              else
              {
LABEL_42:
                v11 = (unsigned __int8)*v13;
              }
              if ( v11 == 34 )
                goto LABEL_13;
              continue;
            }
            break;
          }
LABEL_52:
          v24 = ptr.__align;
          if ( *(&ptr.__align + 1) )
            v25 = *(&ptr.__align + 1) - 1;
          else
            v25 = 0;
          if ( *(&ptr.__align + 2) < (unsigned __int64)(v25 + 2) )
          {
            v24 = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v25 + 2, 1u);
            ptr.__align = v24;
          }
          *(&ptr.__align + 1) = v25 + 2;
          *(_BYTE *)(v24 + v25) = 32;
          v7 = 1;
          *(_BYTE *)(ptr.__align + v25 + 1) = 0;
          goto LABEL_3;
        case 40:
          if ( (*(_BYTE *)(a1 + 676) & 2) != 0 && *v10 == 42 )
          {
            v7 = v9;
            goto LABEL_3;
          }
          v13 = v10 - 1;
          ++v6;
          goto LABEL_13;
        case 41:
          if ( !v6 )
          {
            v34 = (char *)*(&a2->__align + 1);
            if ( *(&a2->__align + 2) >= (unsigned __int64)(v34 + 1) )
            {
              v35 = (char *)a2->__align;
            }
            else
            {
              v35 = (char *)qvector_reserve(a2, (void *)a2->__align, (unsigned __int64)(v34 + 1), 0x18u);
              v34 = (char *)*(&a2->__align + 1);
              a2->__align = (__int64)v35;
            }
            v36 = &v35[24 * (_QWORD)v34];
            *((_QWORD *)v36 + 1) = 0;
            *((_QWORD *)v36 + 2) = 0;
            *(_QWORD *)v36 = 0;
            v8 = 0;
            ++*(&a2->__align + 1);
            v37 = *(_OWORD *)v36;
            v38 = *((_QWORD *)v36 + 2);
            *(_OWORD *)v36 = *(_OWORD *)&ptr.__lock;
            *((_QWORD *)v36 + 2) = *(&ptr.__align + 2);
            *(_OWORD *)&ptr.__lock = v37;
            *(&ptr.__align + 2) = v38;
            v40 = *(_QWORD *)(a1 + 8) + 1LL;
            goto LABEL_77;
          }
          v13 = v10 - 1;
          --v6;
          goto LABEL_13;
        case 44:
          if ( v6 )
          {
            v13 = v10 - 1;
LABEL_13:
            *(_QWORD *)(a1 + 8) = v13 + 1;
            v14 = ptr.__align;
            v15 = *v13;
            if ( *(&ptr.__align + 1) )
              v16 = *(&ptr.__align + 1) - 1;
            else
              v16 = 0;
            if ( *(&ptr.__align + 2) < (unsigned __int64)(v16 + 2) )
            {
              v14 = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v16 + 2, 1u);
              ptr.__align = v14;
            }
            *(&ptr.__align + 1) = v16 + 2;
            *(_BYTE *)(v14 + v16) = v15;
            *(_BYTE *)(ptr.__align + v16 + 1) = 0;
            goto LABEL_7;
          }
          v27 = (char *)*(&a2->__align + 1);
          if ( *(&a2->__align + 2) >= (unsigned __int64)(v27 + 1) )
          {
            v28 = (char *)a2->__align;
          }
          else
          {
            v28 = (char *)qvector_reserve(a2, (void *)a2->__align, (unsigned __int64)(v27 + 1), 0x18u);
            v27 = (char *)*(&a2->__align + 1);
            a2->__align = (__int64)v28;
          }
          v29 = &v28[24 * (_QWORD)v27];
          *((_QWORD *)v29 + 1) = 0;
          *((_QWORD *)v29 + 2) = 0;
          *(_QWORD *)v29 = 0;
          v7 = v9;
          ++*(&a2->__align + 1);
          v30 = *(_OWORD *)v29;
          v31 = *((_QWORD *)v29 + 2);
          *(_OWORD *)v29 = *(_OWORD *)&ptr.__lock;
          *((_QWORD *)v29 + 2) = *(&ptr.__align + 2);
          *(_OWORD *)&ptr.__lock = v30;
          *(&ptr.__align + 2) = v31;
          ++*(_QWORD *)(a1 + 8);
          break;
        case 47:
          v17 = *(_DWORD *)(a1 + 676);
          if ( (v17 & 1) != 0 && *v10 == 42 )
          {
            v7 = v9;
            goto LABEL_3;
          }
          v13 = v10 - 1;
          if ( (v17 & 4) != 0 )
          {
            v7 = v9;
            v9 = 0;
            if ( *v10 == 47 )
              goto LABEL_3;
          }
          else
          {
            v9 = 0;
          }
          goto LABEL_13;
        case 59:
          v13 = v10 - 1;
          v7 = v9;
          v9 = 0;
          if ( (*(_BYTE *)(a1 + 676) & 8) != 0 )
            goto LABEL_3;
          goto LABEL_13;
        default:
          goto LABEL_12;
      }
      break;
    }
  }
  v26 = *(_BYTE **)(a1 + 8);
  if ( *v26 != 40 )
  {
    v8 = 0;
    *a3 = 0;
    align = (void *)ptr.__align;
    if ( !ptr.__align )
      return v8;
    goto LABEL_78;
  }
  *(_QWORD *)(a1 + 8) = v26 + 1;
  v5 = 1;
  if ( v26[1] != 41 )
    goto LABEL_3;
  v40 = (__int64)(v26 + 2);
  v8 = 0;
LABEL_77:
  *(_QWORD *)(a1 + 8) = v40;
  align = (void *)ptr.__align;
  if ( ptr.__align )
    goto LABEL_78;
  return v8;
}
