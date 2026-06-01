__int64 __fastcall sub_2E5260(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 i; // rcx
  int v15; // edx
  _QWORD *v16; // rax
  _QWORD *v17; // r13
  __int64 v18; // r15
  void *v19; // r14
  int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r14
  __int64 v24; // r15
  void *v25; // rdi
  int v26; // edx
  _QWORD *v27; // r15
  char v28; // dl
  void *v29; // rbp
  int v30; // edx
  _QWORD *v31; // rax
  _QWORD *v32; // r13
  void *v33; // r14
  int v34; // eax
  _QWORD *v35; // rax
  _QWORD *v36; // r14
  void *v37; // rdi
  int v38; // edx
  unsigned __int64 v39; // rsi
  void *v40; // rbx
  __int64 result; // rax
  char *v42; // rbx
  void *v43; // rbp
  __int64 v44; // rdx
  char **v45; // [rsp+0h] [rbp-70h]
  __int64 v46; // [rsp+8h] [rbp-68h]
  __int64 v47; // [rsp+8h] [rbp-68h]
  __int64 v48; // [rsp+8h] [rbp-68h]
  __int64 v49; // [rsp+8h] [rbp-68h]
  void *ptr[2]; // [rsp+18h] [rbp-58h] BYREF
  char v51; // [rsp+28h] [rbp-48h]

  v5 = *a2;
  v6 = *(unsigned int *)(a1 + 80);
  v45 = (char **)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 72);
  v51 = 0;
  *(_OWORD *)ptr = 0;
  if ( v5 )
  {
    if ( (v5 & 7) == 1 )
      v8 = v5 >> 3;
    else
      LODWORD(v8) = *(_DWORD *)(v5 - 8);
  }
  else
  {
    LODWORD(v8) = -1640531495;
  }
  v9 = v6 - 1;
  v10 = 40 * v6;
  v11 = v7 + v10;
  v12 = 40LL * ((unsigned int)v8 & v9);
  v13 = v7 + v12;
  if ( v12 != v10 )
  {
    for ( i = v7 + v12; v11 != i; i += 40 )
    {
      v15 = *(_DWORD *)(i + 4);
      if ( v15 == 2 )
      {
        if ( (_DWORD)v8 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v5 )
        {
LABEL_11:
          if ( *(_QWORD *)(i + 16) )
          {
            v46 = i;
            v16 = (_QWORD *)sub_186B270(0x20u);
            i = v46;
            v17 = v16;
            v18 = *(_QWORD *)(v46 + 16);
            *v16 = 0;
            v16[1] = 0;
            v16[2] = 1;
            v16[3] = 0;
            v19 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v18 + 4) & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, v16, v18);
              i = v46;
            }
            else
            {
              *(_DWORD *)v16 = *(_DWORD *)v18;
            }
            if ( (*(_BYTE *)(v18 + 20) & 1) != 0 )
            {
              v48 = i;
              sub_182C690(v19, v17 + 2, v18 + 16);
              i = v48;
            }
            else
            {
              v20 = *(_DWORD *)(v18 + 16);
              *((_BYTE *)v17 + 20) &= ~1u;
              *((_DWORD *)v17 + 4) = v20;
            }
            ptr[0] = v17;
          }
          if ( *(_QWORD *)(i + 24) )
          {
            v47 = i;
            v21 = (_QWORD *)sub_186B270(0x20u);
            v22 = v47;
            v23 = v21;
            v24 = *(_QWORD *)(v47 + 24);
            v25 = qword_1C7F2C0;
            *v21 = 0;
            v21[1] = 0;
            v21[2] = 1;
            v21[3] = 0;
            if ( (*(_BYTE *)(v24 + 4) & 1) != 0 )
            {
              sub_182C690(v25, v21, v24);
              v22 = v47;
            }
            else
            {
              *(_DWORD *)v21 = *(_DWORD *)v24;
            }
            if ( (*(_BYTE *)(v24 + 20) & 1) != 0 )
            {
              v44 = v24 + 16;
              v27 = v23 + 2;
              v49 = v22;
              sub_182C690(v25, v23 + 2, v44);
              ptr[1] = v23;
              v28 = *(_BYTE *)(v49 + 32);
            }
            else
            {
              v26 = *(_DWORD *)(v24 + 16);
              *((_BYTE *)v23 + 20) &= ~1u;
              v27 = v23 + 2;
              ptr[1] = v23;
              *((_DWORD *)v23 + 4) = v26;
              v28 = *(_BYTE *)(v22 + 32);
            }
            v29 = qword_1C7F2C0;
            v51 = v28;
            sub_182CBA0(qword_1C7F2C0, v23);
            sub_182CBA0(v29, v27);
            sub_186B220(v23);
          }
          else
          {
            v51 = *(_BYTE *)(i + 32);
          }
          goto LABEL_37;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_32;
      }
    }
  }
  for ( ; v13 != v7; v7 += 40 )
  {
    v30 = *(_DWORD *)(v7 + 4);
    if ( v30 == 2 )
    {
      if ( (_DWORD)v8 == *(_DWORD *)v7 && v5 == *(_QWORD *)(v7 + 8) )
      {
        i = v7;
        goto LABEL_11;
      }
    }
    else if ( !v30 )
    {
      break;
    }
  }
LABEL_32:
  v31 = (_QWORD *)sub_186B270(0x20u);
  *v31 = 0;
  v32 = v31;
  v31[1] = 0;
  v31[2] = 1;
  v31[3] = 0;
  v33 = qword_1C7F2C0;
  if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v31, &qword_1C7F2A0);
  else
    *(_DWORD *)v31 = qword_1C7F2A0;
  if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
  {
    sub_182C690(v33, v32 + 2, &qword_1C7F2B0);
  }
  else
  {
    v34 = qword_1C7F2B0;
    *((_BYTE *)v32 + 20) &= ~1u;
    *((_DWORD *)v32 + 4) = v34;
  }
  ptr[0] = v32;
LABEL_37:
  ptr[1] = nullptr;
  v35 = (_QWORD *)sub_186B270(0x20u);
  *v35 = 0;
  v36 = v35;
  v35[1] = 0;
  v35[2] = 1;
  v37 = qword_1C7F2C0;
  v35[3] = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    sub_182C690(v37, v35, a3);
  else
    *(_DWORD *)v35 = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(v37, v36 + 2, a3 + 16);
  }
  else
  {
    v38 = *(_DWORD *)(a3 + 16);
    *((_BYTE *)v36 + 20) &= ~1u;
    *((_DWORD *)v36 + 4) = v38;
  }
  v39 = *a2;
  ptr[1] = v36;
  sub_2DC5E0(v45, v39, (__int64)ptr);
  v40 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v36);
  sub_182CBA0(v40, v36 + 2);
  result = sub_186B220(v36);
  v42 = (char *)ptr[0];
  if ( ptr[0] )
  {
    v43 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, ptr[0]);
    sub_182CBA0(v43, v42 + 16);
    return sub_186B220(v42);
  }
  return result;
}

