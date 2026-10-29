/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84C30
// Address: 0x0000000000084C30

//----- (0000000000084C30) ----------------------------------------------------
__int64 __fastcall sub_84C30(__int64 a1, __int64 a2, _BYTE *a3, double a4, __m128 a5)
{
  __int64 v5; // rbx
  __int128 v7; // xmm0
  char *v8; // rbp
  unsigned int v9; // eax
  int v10; // r12d
  char *v11; // rax
  char v12; // dl
  int v13; // esi
  char *v14; // rcx
  __int64 v15; // r13
  char v16; // r15
  char *v17; // rbx
  void *v18; // rax
  int v19; // edx
  char v20; // r15
  char *v21; // r13
  void *v22; // rax
  char v23; // r15
  char *v24; // rbp
  void *v25; // rax
  void *v26; // rax
  _BYTE *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned int v33; // edi
  __int64 v34; // rcx
  char *v35; // rax
  __int64 v36; // rcx
  __int128 v37; // xmm0
  unsigned __int64 v38; // rdx
  unsigned int v40; // [rsp+8h] [rbp-70h]
  int v41; // [rsp+Ch] [rbp-6Ch]
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v45; // [rsp+30h] [rbp-48h]
  unsigned __int64 v46; // [rsp+40h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  *(_QWORD *)&v7 = 0;
  *(_OWORD *)ptr = 0;
  v45 = 0;
  *a3 = 1;
  v41 = 0;
  LOBYTE(v40) = 1;
  LODWORD(v8) = 0;
  while ( 1 )
  {
LABEL_3:
    v9 = sub_83F30(a1, *(double *)&v7, a5);
    if ( v9 )
    {
      if ( v9 == 34 )
      {
        v33 = 38;
        if ( (v40 & 1) != 0 )
          v33 = 0;
        v40 = set_qerrno(v33);
      }
      else
      {
        v40 = v9;
      }
      goto LABEL_71;
    }
    if ( (v40 & 1) != 0 )
      break;
    v10 = (int)v8;
    v11 = *(char **)(a1 + 8);
    while ( 2 )
    {
      v12 = *v11++;
      v13 = 0;
      switch ( v12 )
      {
        case 0:
          goto LABEL_48;
        case 9:
        case 10:
        case 32:
          if ( (v10 & 1) != 0 )
          {
            *(_QWORD *)(a1 + 8) = v11;
            continue;
          }
          LOBYTE(v13) = 1;
LABEL_10:
          v14 = v11 - 1;
          v10 = v13;
          goto LABEL_11;
        case 34:
          v14 = v11 - 1;
          while ( 2 )
          {
            if ( v12 )
            {
              *(_QWORD *)(a1 + 8) = v14 + 1;
              v20 = *v14;
              v21 = (char *)ptr[1];
              if ( ptr[1] )
                v21 = (char *)ptr[1] - 1;
              v22 = ptr[0];
              if ( v45 < (unsigned __int64)(v21 + 2) )
              {
                v22 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)(v21 + 2), 1u);
                ptr[0] = v22;
              }
              ptr[1] = v21 + 2;
              v21[(_QWORD)v22] = v20;
              *((_BYTE *)ptr[0] + (unsigned __int64)v21 + 1) = 0;
              v14 = *(char **)(a1 + 8);
              if ( v20 == 92 )
              {
                v23 = *v14;
                if ( *v14 )
                {
                  v24 = (char *)ptr[1] - 1;
                  if ( !ptr[1] )
                    v24 = nullptr;
                  v25 = ptr[0];
                  if ( v45 < (unsigned __int64)(v24 + 2) )
                  {
                    v25 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)(v24 + 2), 1u);
                    ptr[0] = v25;
                  }
                  ptr[1] = v24 + 2;
                  v24[(_QWORD)v25] = v23;
                  *((_BYTE *)ptr[0] + (unsigned __int64)v24 + 1) = 0;
                  v14 = (char *)(*(_QWORD *)(a1 + 8) + 1LL);
                  *(_QWORD *)(a1 + 8) = v14;
                  goto LABEL_38;
                }
                v12 = 0;
              }
              else
              {
LABEL_38:
                v12 = *v14;
              }
              if ( v12 == 34 )
                goto LABEL_11;
              continue;
            }
            break;
          }
LABEL_48:
          v8 = (char *)ptr[1] - 1;
          if ( !ptr[1] )
            v8 = nullptr;
          v26 = ptr[0];
          if ( v45 < (unsigned __int64)(v8 + 2) )
          {
            v26 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)(v8 + 2), 1u);
            ptr[0] = v26;
          }
          ptr[1] = v8 + 2;
          v8[(_QWORD)v26] = 32;
          *((_BYTE *)ptr[0] + (unsigned __int64)v8 + 1) = 0;
          LOBYTE(v8) = 1;
          goto LABEL_3;
        case 40:
          if ( (*(_BYTE *)(a1 + 508) & 2) != 0 && *v11 == 42 )
          {
            LODWORD(v8) = v10;
            goto LABEL_3;
          }
          ++v41;
          v14 = v11 - 1;
          goto LABEL_11;
        case 41:
          if ( !v41 )
          {
            v34 = *(_QWORD *)(a2 + 8);
            if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v34 + 1) )
            {
              v35 = *(char **)a2;
            }
            else
            {
              v35 = (char *)qvector_reserve(a2, *(char **)a2, v34 + 1, 0x18u);
              *(_QWORD *)a2 = v35;
              v34 = *(_QWORD *)(a2 + 8);
            }
            v36 = 3 * v34;
            *(_OWORD *)&v35[8 * v36] = 0;
            *(_QWORD *)&v35[8 * v36 + 16] = 0;
            ++*(_QWORD *)(a2 + 8);
            v37 = *(_OWORD *)&v35[8 * v36];
            v38 = *(_QWORD *)&v35[8 * v36 + 16];
            *(void **)&v35[8 * v36] = ptr[0];
            *(void **)&v35[8 * v36 + 8] = ptr[1];
            *(_QWORD *)&v35[8 * v36 + 16] = v45;
            *(_OWORD *)ptr = v37;
            v45 = v38;
            ++*(_QWORD *)(a1 + 8);
LABEL_70:
            v40 = 0;
            goto LABEL_71;
          }
          --v41;
          v14 = v11 - 1;
          goto LABEL_11;
        case 44:
          if ( v41 )
          {
            v14 = v11 - 1;
LABEL_11:
            v15 = v5;
            *(_QWORD *)(a1 + 8) = v14 + 1;
            v16 = *v14;
            v17 = (char *)ptr[1];
            if ( ptr[1] )
              v17 = (char *)ptr[1] - 1;
            v18 = ptr[0];
            if ( v45 < (unsigned __int64)(v17 + 2) )
            {
              v18 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)(v17 + 2), 1u);
              ptr[0] = v18;
            }
            ptr[1] = v17 + 2;
            v17[(_QWORD)v18] = v16;
            *((_BYTE *)ptr[0] + (unsigned __int64)v17 + 1) = 0;
            v5 = v15;
            v11 = *(char **)(a1 + 8);
            continue;
          }
          v28 = a2;
          v29 = *(_QWORD *)(a2 + 8);
          if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v29 + 1) )
          {
            v30 = *(_QWORD **)a2;
          }
          else
          {
            v30 = qvector_reserve(a2, *(char **)a2, v29 + 1, 0x18u);
            v28 = a2;
            *(_QWORD *)a2 = v30;
            v29 = *(_QWORD *)(a2 + 8);
          }
          v31 = 3 * v29;
          *(_OWORD *)&v30[v31] = 0;
          v30[v31 + 2] = 0;
          ++*(_QWORD *)(v28 + 8);
          v7 = *(_OWORD *)&v30[v31];
          v32 = v30[v31 + 2];
          v30[v31] = ptr[0];
          v30[v31 + 1] = ptr[1];
          v30[v31 + 2] = v45;
          *(_OWORD *)ptr = v7;
          v45 = v32;
          ++*(_QWORD *)(a1 + 8);
          LODWORD(v8) = v10;
          break;
        case 47:
          v19 = *(_DWORD *)(a1 + 508);
          if ( (v19 & 1) != 0 && *v11 == 42 )
          {
            LODWORD(v8) = v10;
            goto LABEL_3;
          }
          v14 = v11 - 1;
          if ( (v19 & 4) != 0 )
          {
            LODWORD(v8) = v10;
            v10 = 0;
            if ( *v11 == 47 )
              goto LABEL_3;
          }
          else
          {
            v10 = 0;
          }
          goto LABEL_11;
        case 59:
          LODWORD(v8) = v10;
          v14 = v11 - 1;
          v10 = 0;
          if ( (*(_BYTE *)(a1 + 508) & 8) != 0 )
            goto LABEL_3;
          goto LABEL_11;
        default:
          goto LABEL_10;
      }
      break;
    }
  }
  v27 = *(_BYTE **)(a1 + 8);
  if ( *v27 != 40 )
  {
    *a3 = 0;
    goto LABEL_70;
  }
  *(_QWORD *)(a1 + 8) = v27 + 1;
  v40 = 0;
  if ( v27[1] != 41 )
    goto LABEL_3;
  *(_QWORD *)(a1 + 8) = v27 + 2;
LABEL_71:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v45 = 0;
  }
  return v40;
}
// 84CFF: variable 'v5' is possibly undefined
