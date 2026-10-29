__int64 __fastcall sub_A4B00(unsigned int a1, __int64 a2)
{
  void *v3; // rax
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // r12
  unsigned __int64 v24; // r14
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r12d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // ebp
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // r12
  const void *v49; // rbp
  void *v50; // rax
  const void *v51; // r13
  void *v52; // rdi
  const void *v53; // rbp
  void *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  char v57; // [rsp+0h] [rbp-38h]
  char v58; // [rsp+0h] [rbp-38h]
  char v59; // [rsp+0h] [rbp-38h]
  char v60; // [rsp+0h] [rbp-38h]
  char v61; // [rsp+0h] [rbp-38h]
  char v62; // [rsp+0h] [rbp-38h]
  char v63; // [rsp+0h] [rbp-38h]
  char v64; // [rsp+0h] [rbp-38h]

  v3 = &unk_250EF0;
  if ( a1 < 16 * ((unsigned __int64)(qword_250ED8 == 0) + ((qword_250ED8 - qword_250EB8) >> 3) - 1)
          + ((qword_250EB0 - qword_250EA0) >> 5)
          + ((qword_250EC0 - qword_250EC8) >> 5) )
  {
    v3 = (void *)sub_A0380((__int64)&unk_250EF0 - 144, a1);
    if ( !v3 )
      v3 = &unk_250EF0;
  }
  if ( *((_DWORD *)v3 + 2) != 6 )
    return 0;
  v5 = *((_QWORD *)v3 + 3);
  if ( !v5 )
    return 0;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v5 + 8);
  v6 = *(_DWORD *)(v5 + 16) & 0xFFFFFFF;
  set_debug_event_code();
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 + 4);
  *(_DWORD *)a2 = *(_DWORD *)v5;
  switch ( *(_DWORD *)(v5 + 16) & 0xFFFFFFF )
  {
    case 1:
    case 8:
      v13 = sub_9E070(v5, v6, v7, v8, v9, v10, v57);
      v18 = sub_9E070(a2, v6, v14, v15, v16, v17, v58);
      v23 = (_QWORD *)v18;
      if ( v13 != v18 )
      {
        v24 = *(_QWORD *)(v13 + 8);
        if ( v24 > 1 )
        {
          v51 = *(const void **)v13;
          v52 = *(void **)v18;
          if ( *(_QWORD *)(v18 + 16) < v24 )
          {
            v55 = qvector_reserve();
            *v23 = v55;
            v52 = (void *)v55;
          }
          v23[1] = v24;
          LODWORD(v6) = (_DWORD)v51;
          memmove(v52, v51, v24 - 1);
          *(_BYTE *)(*v23 + v24 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v18 + 8) = 0;
        }
      }
      v25 = *(_DWORD *)(sub_9E070(v5, v6, v19, v20, v21, v22, v59) + 24);
      *(_DWORD *)(sub_9E070(a2, v6, v26, v27, v28, v29, v60) + 24) = v25;
      v34 = *(_DWORD *)(sub_9E070(v5, v6, v30, v31, v32, v33, v61) + 28);
      *(_DWORD *)(sub_9E070(a2, v6, v35, v36, v37, v38, v62) + 28) = v34;
      v43 = *(_DWORD *)(sub_9E070(v5, v6, v39, v40, v41, v42, v63) + 32);
      *(_DWORD *)(sub_9E070(a2, v6, v44, v45, v46, v47, v64) + 32) = v43;
      goto LABEL_13;
    case 2:
    case 4:
      if ( (((*(_DWORD *)(a2 + 16) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_38;
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(v5 + 20);
      goto LABEL_13;
    case 3:
    case 9:
      v11 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
      if ( (unsigned int)(v11 - 9) > 1 && v11 != 3 )
        goto LABEL_37;
      if ( v5 != a2 )
      {
        v12 = *(_QWORD *)(v5 + 28);
        if ( v12 > 1 )
        {
          v53 = *(const void **)(v5 + 20);
          v54 = *(void **)(a2 + 20);
          if ( *(_QWORD *)(a2 + 36) < v12 )
          {
            v56 = qvector_reserve();
            *(_QWORD *)(a2 + 20) = v56;
            v54 = (void *)v56;
          }
          *(_QWORD *)(a2 + 28) = v12;
          memmove(v54, v53, v12 - 1);
          *(_BYTE *)(*(_QWORD *)(a2 + 20) + v12 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 28) = 0;
        }
      }
      goto LABEL_13;
    case 7:
      if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 7
        && (*(_DWORD *)(a2 + 20) = *(_DWORD *)(v5 + 20), (*(_DWORD *)(v5 + 16) & 0xFFFFFFF) == 7)
        && (*(_BYTE *)(a2 + 24) = *(_BYTE *)(v5 + 24), (*(_DWORD *)(v5 + 16) & 0xFFFFFFF) == 7)
        && (*(_DWORD *)(a2 + 28) = *(_DWORD *)(v5 + 28), (*(_DWORD *)(v5 + 16) & 0xFFFFFFF) == 7) )
      {
        if ( a2 + 36 != v5 + 36 )
        {
          v48 = *(_QWORD *)(v5 + 44);
          if ( v48 > 1 )
          {
            v49 = *(const void **)(v5 + 36);
            v50 = *(void **)(a2 + 36);
            if ( *(_QWORD *)(a2 + 52) < v48 )
            {
              v50 = (void *)qvector_reserve();
              *(_QWORD *)(a2 + 36) = v50;
            }
            *(_QWORD *)(a2 + 44) = v48;
            memmove(v50, v49, v48 - 1);
            *(_BYTE *)(*(_QWORD *)(a2 + 36) + v48 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a2 + 44) = 0;
          }
        }
LABEL_13:
        result = 1;
      }
      else
      {
        sub_9BA10();
LABEL_37:
        sub_9B9F0();
LABEL_38:
        sub_9B9D0();
        result = sub_A4E70(a2, v6);
      }
      break;
    default:
      return 0;
  }
  return result;
}

