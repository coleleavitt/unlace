__int64 __fastcall sub_213900(unsigned int a1, __int64 a2, double a3)
{
  void *v4; // rax
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // r12
  unsigned __int64 v26; // r14
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rdx
  unsigned __int64 v52; // r12
  const void *v53; // rbp
  void *v54; // rax
  const void *v55; // r13
  void *v56; // rdi
  const void *v57; // rbp
  void *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rax
  char v61; // [rsp+0h] [rbp-38h]
  char v62; // [rsp+0h] [rbp-38h]
  char v63; // [rsp+0h] [rbp-38h]
  char v64; // [rsp+0h] [rbp-38h]
  char v65; // [rsp+0h] [rbp-38h]
  char v66; // [rsp+0h] [rbp-38h]
  char v67; // [rsp+0h] [rbp-38h]
  char v68; // [rsp+0h] [rbp-38h]

  v4 = &unk_8CBB30;
  if ( a1 < 16 * ((unsigned __int64)(qword_8CBB18 == 0) + ((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
          + ((qword_8CBAF0 - qword_8CBAE0) >> 5)
          + ((qword_8CBB00 - qword_8CBB08) >> 5) )
  {
    v4 = (void *)sub_20EF70((__int64)&unk_8CBB30 - 144, a1);
    if ( !v4 )
      v4 = &unk_8CBB30;
  }
  if ( *((_DWORD *)v4 + 2) != 6 )
    return 0;
  v6 = *((_QWORD *)v4 + 3);
  if ( !v6 )
    return 0;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v6 + 8);
  v7 = *(_DWORD *)(v6 + 20) & 0xFFFFFFF;
  set_debug_event_code(a2, v7);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v6 + 4);
  *(_DWORD *)a2 = *(_DWORD *)v6;
  switch ( *(_DWORD *)(v6 + 20) & 0xFFFFFFF )
  {
    case 1:
    case 8:
      v15 = sub_20CE70(v6, v7, v8, v9, a3, v10, v11, v61);
      v20 = (__int64 *)sub_20CE70(a2, v7, v16, v17, a3, v18, v19, v62);
      v25 = v20;
      if ( (__int64 *)v15 != v20 )
      {
        v26 = *(_QWORD *)(v15 + 8);
        if ( v26 > 1 )
        {
          v55 = *(const void **)v15;
          v56 = (void *)*v20;
          if ( v20[2] < v26 )
          {
            v59 = qvector_reserve(v20, *v20, v26, 1);
            *v25 = v59;
            v56 = (void *)v59;
          }
          v25[1] = v26;
          v7 = (__int64)v55;
          memmove(v56, v55, v26 - 1);
          *(_BYTE *)(*v25 + v26 - 1) = 0;
        }
        else
        {
          v20[1] = 0;
        }
      }
      v27 = *(_QWORD *)(sub_20CE70(v6, v7, v21, v22, a3, v23, v24, v63) + 24);
      *(_QWORD *)(sub_20CE70(a2, v7, v28, v29, a3, v30, v31, v64) + 24) = v27;
      v36 = *(_QWORD *)(sub_20CE70(v6, v7, v32, v33, a3, v34, v35, v65) + 32);
      *(_QWORD *)(sub_20CE70(a2, v7, v37, v38, a3, v39, v40, v66) + 32) = v36;
      v45 = *(_QWORD *)(sub_20CE70(v6, v7, v41, v42, a3, v43, v44, v67) + 40);
      *(_QWORD *)(sub_20CE70(a2, v7, v46, v47, a3, v48, v49, v68) + 40) = v45;
      goto LABEL_13;
    case 2:
    case 4:
      v50 = *(unsigned int *)(v6 + 24);
      if ( (((*(_DWORD *)(a2 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_38;
      *(_DWORD *)(a2 + 24) = v50;
      goto LABEL_13;
    case 3:
    case 9:
      v12 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
      v13 = (unsigned int)(v12 - 9);
      if ( (unsigned int)v13 > 1 && v12 != 3 )
        goto LABEL_37;
      if ( v6 != a2 )
      {
        v14 = *(_QWORD *)(v6 + 32);
        if ( v14 > 1 )
        {
          v57 = *(const void **)(v6 + 24);
          v58 = *(void **)(a2 + 24);
          if ( *(_QWORD *)(a2 + 40) < v14 )
          {
            v60 = qvector_reserve(a2 + 24, *(_QWORD *)(a2 + 24), v14, 1);
            *(_QWORD *)(a2 + 24) = v60;
            v58 = (void *)v60;
          }
          *(_QWORD *)(a2 + 32) = v14;
          memmove(v58, v57, v14 - 1);
          *(_BYTE *)(*(_QWORD *)(a2 + 24) + v14 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 32) = 0;
        }
      }
      goto LABEL_13;
    case 7:
      v51 = *(unsigned int *)(v6 + 24);
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7
        && (*(_DWORD *)(a2 + 24) = v51, (*(_DWORD *)(v6 + 20) & 0xFFFFFFF) == 7)
        && (*(_BYTE *)(a2 + 28) = *(_BYTE *)(v6 + 28), (*(_DWORD *)(v6 + 20) & 0xFFFFFFF) == 7)
        && (*(_QWORD *)(a2 + 32) = *(_QWORD *)(v6 + 32), (*(_DWORD *)(v6 + 20) & 0xFFFFFFF) == 7) )
      {
        if ( a2 + 40 != v6 + 40 )
        {
          v52 = *(_QWORD *)(v6 + 48);
          if ( v52 > 1 )
          {
            v53 = *(const void **)(v6 + 40);
            v54 = *(void **)(a2 + 40);
            if ( *(_QWORD *)(a2 + 56) < v52 )
            {
              v54 = (void *)qvector_reserve(a2 + 40, *(_QWORD *)(a2 + 40), v52, 1);
              *(_QWORD *)(a2 + 40) = v54;
            }
            *(_QWORD *)(a2 + 48) = v52;
            memmove(v54, v53, v52 - 1);
            *(_BYTE *)(*(_QWORD *)(a2 + 40) + v52 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a2 + 48) = 0;
          }
        }
LABEL_13:
        result = 1;
      }
      else
      {
        sub_20AAD0(a3, a2, v7, v51, v9);
LABEL_37:
        sub_20AAB0(a3, a2, v7, v13, v9);
LABEL_38:
        sub_20AA90(a3, a2, v7, v50, v9);
        result = sub_213C70();
      }
      break;
    default:
      return 0;
  }
  return result;
}
