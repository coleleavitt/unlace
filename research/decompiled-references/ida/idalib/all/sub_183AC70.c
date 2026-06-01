void __fastcall sub_183AC70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r12d
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  char v19; // cl
  _BOOL8 v20; // rdx
  __int64 v21; // rsi
  char v22; // cl
  unsigned __int64 v23; // rsi
  _QWORD *v24; // r14
  __int64 v25; // rbp
  _BOOL8 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // rdi
  _QWORD *v29; // rax
  char v30; // dl
  _QWORD *v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  unsigned __int64 *v34; // rax
  __int64 *v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 *i; // rax
  __int64 v38; // rcx
  _BOOL8 v39; // rax
  _BOOL8 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r15

  if ( a3 && *(_DWORD *)(a1 + 8) != 3 )
  {
    v6 = *(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v7 = *(_QWORD *)v6;
    if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) != 26
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
    {
      sub_F63050(v7, a2, v7, a4);
      a2 = (unsigned int)a2;
    }
    v8 = sub_18B0530(*(_QWORD *)a1, a2);
    if ( v8 )
    {
      v11 = *(unsigned int *)(a1 + 8);
      if ( (_DWORD)v11 )
      {
        v12 = (*(_BYTE *)(v8 + 19) >> 1) & 0xF;
        v13 = (unsigned __int8)v12;
        if ( (_BYTE)v12 )
        {
          switch ( (char)v12 )
          {
            case 1:
              if ( (_DWORD)v11 == 5 )
                *(_DWORD *)(a1 + 8) = 1;
              return;
            case 3:
              goto LABEL_8;
            case 4:
            case 5:
            case 8:
              return;
            case 7:
              if ( *(_BYTE *)(a1 + 36) )
                goto LABEL_26;
              v16 = 4 * (*(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 32));
              v17 = *(unsigned int *)(a1 + 24);
              if ( v16 < 0x20 )
                v16 = 32;
              if ( v16 < (unsigned int)v17 )
              {
                sub_22364B0(a1 + 16);
              }
              else
              {
                memset(*(void **)(a1 + 16), -1, 8 * v17);
LABEL_26:
                *(_QWORD *)(a1 + 28) = 0;
              }
              *(_DWORD *)(a1 + 80) = 0;
              *(_DWORD *)(a1 + 8) = 0;
              break;
            default:
              *(_DWORD *)(a1 + 8) = 2;
              v18 = 8LL * *(unsigned __int16 *)(v8 + 22) + 48;
              v19 = BYTE3(*(_QWORD *)(v8 + 16));
              v20 = (v19 & 0x40) != 0;
              v21 = v8 + v18 + ((v19 >> 5) & 4) + 7;
              v22 = *(_BYTE *)(v8 + 19);
              v23 = v21 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v22 & 0x40) != 0 )
              {
                v28 = (v8 + v18 + ((v22 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                v39 = (*(_BYTE *)(v28 + 1) & 4) != 0;
                v40 = v39 + v20;
                v26 = v39 + 1;
                v24 = (_QWORD *)(v23 + 8 * v40);
                v27 = v28 + 8 * v26;
              }
              else
              {
                v24 = (_QWORD *)(v23 + 8 * v20);
                v25 = v8 + v18 + ((v22 >> 5) & 4) + 7;
                v26 = 0;
                v27 = v25 & 0xFFFFFFFFFFFFFFF8LL;
                v28 = v27;
              }
              if ( (((unsigned __int8)v22 >> 1) & 0xF) == 2 )
                v27 = v28 + 8 * ((*(_WORD *)v28 & 0x3FF) + v26);
              for ( ; (_QWORD *)v27 != v24; ++v24 )
              {
                v29 = sub_1703870(
                        a1 + 16,
                        *(_QWORD *)&byte_8[*v24 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                      | ((unsigned __int8)*(_QWORD *)&byte_8[*v24 & 0xFFFFFFFFFFFFFFF0LL] | *(_BYTE *)v24) & 7);
                v31 = v29;
                if ( *(_BYTE *)(a1 + 36) )
                  v32 = *(unsigned int *)(a1 + 28);
                else
                  v32 = *(unsigned int *)(a1 + 24);
                v33 = *(_QWORD *)(a1 + 16) + 8 * v32;
                if ( v29 != (_QWORD *)v33 && (*v29 == -2 || *v29 == -1) )
                {
                  do
                    ++v31;
                  while ( (_QWORD *)v33 != v31 && *v31 >= 0xFFFFFFFFFFFFFFFELL );
                }
                if ( v30 )
                {
                  v42 = *(unsigned int *)(a1 + 80);
                  v43 = *v24;
                  if ( v42 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 84) )
                  {
                    sub_2237220(a1 + 72, a1 + 88, v42 + 1, 8);
                    v42 = *(unsigned int *)(a1 + 80);
                  }
                  *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v42) = v43;
                  ++*(_DWORD *)(a1 + 80);
                }
              }
              return;
          }
        }
        else
        {
          if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
            goto LABEL_8;
          v34 = sub_B8C3D0(a3, a2, v11, v12, v9, v10);
          v35 = (__int64 *)*v34;
          v36 = *v34 + 8LL * *((unsigned int *)v34 + 2);
          if ( *v34 < v36 )
          {
            v41 = *v34;
            while ( *(_WORD *)(*(_QWORD *)v41 + 36LL) != 286 )
            {
              v41 += 8LL;
              if ( v36 == v41 )
                goto LABEL_8;
            }
            if ( v41 == v36 )
            {
LABEL_8:
              if ( !*(_BYTE *)(a1 + 36) )
              {
                v14 = 4 * (*(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 32));
                v15 = *(unsigned int *)(a1 + 24);
                if ( v14 < 0x20 )
                  v14 = 32;
                if ( v14 < (unsigned int)v15 )
                {
                  sub_22364B0(a1 + 16);
                  goto LABEL_14;
                }
                memset(*(void **)(a1 + 16), -1, 8 * v15);
              }
              *(_QWORD *)(a1 + 28) = 0;
LABEL_14:
              *(_DWORD *)(a1 + 80) = 0;
              *(_DWORD *)(a1 + 8) = v13;
            }
          }
          else
          {
            if ( v35 == (__int64 *)v36 )
              goto LABEL_8;
            if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) != 286 )
            {
              for ( i = (__int64 *)(v36 + 8); v35 != i; ++i )
              {
                v38 = *i;
                if ( *(_WORD *)(v38 + 36) == 286 )
                  return;
              }
              goto LABEL_8;
            }
          }
        }
      }
    }
  }
}
