__int64 __fastcall sub_B4D80(_QWORD *a1, __int64 a2, __int64 a3, int *a4, int *a5, unsigned __int8 a6, char a7)
{
  int v12; // eax
  __int64 v13; // r10
  _DWORD *v14; // r15
  char v15; // al
  __int64 v16; // r8
  int *v17; // rcx
  _DWORD *v18; // rdx
  int v19; // eax
  int v20; // edx
  unsigned int v21; // edi
  int v22; // ecx
  int v23; // r9d
  int v24; // ebp
  int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // r13
  char v40; // al
  __int64 v41; // [rsp+8h] [rbp-90h]
  __int64 v42; // [rsp+8h] [rbp-90h]
  __int64 v43; // [rsp+8h] [rbp-90h]
  __int64 v44; // [rsp+8h] [rbp-90h]
  __int64 v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+10h] [rbp-88h]
  __int64 v47; // [rsp+10h] [rbp-88h]
  __int64 v48; // [rsp+10h] [rbp-88h]
  _DWORD *v49; // [rsp+10h] [rbp-88h]
  int v50; // [rsp+10h] [rbp-88h]
  _DWORD *v51; // [rsp+18h] [rbp-80h]
  int *v52; // [rsp+18h] [rbp-80h]
  int *v53; // [rsp+20h] [rbp-78h]
  __int64 v54; // [rsp+20h] [rbp-78h]
  unsigned __int8 v55; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int8 v56; // [rsp+2Ch] [rbp-6Ch]
  __int64 v57; // [rsp+38h] [rbp-60h] BYREF
  __int64 v58; // [rsp+40h] [rbp-58h] BYREF
  __int64 v59; // [rsp+48h] [rbp-50h]
  unsigned __int64 v60; // [rsp+58h] [rbp-40h]

  v12 = *a5;
  v60 = __readfsqword(0x28u);
  if ( (unsigned int)(v12 - 1) <= 1 || v12 == 4 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 1504LL);
    if ( a6 )
    {
LABEL_15:
      v15 = *((_BYTE *)a5 + 64);
      v14 = a4 + 16;
      v16 = (__int64)(a5 + 16);
      v17 = a5;
      v18 = a4;
      goto LABEL_16;
    }
    if ( *a4 == 2 )
    {
      v14 = a4 + 12;
      if ( v12 == 2 )
        goto LABEL_14;
    }
    else
    {
      if ( *((_BYTE *)a4 + 32) == 4 )
      {
        v18 = *((_DWORD **)a4 + 5);
        if ( *v18 != 2 )
          return 0;
        v14 = v18 + 12;
        if ( v12 == 2 )
        {
          v15 = *((_BYTE *)a5 + 48);
          v16 = (__int64)(a5 + 12);
          v17 = a5;
          goto LABEL_16;
        }
        goto LABEL_52;
      }
      v14 = a4 + 8;
      if ( v12 == 2 )
      {
LABEL_14:
        v15 = *((_BYTE *)a5 + 48);
        v16 = (__int64)(a5 + 12);
        v17 = a5;
        v18 = a4;
        goto LABEL_16;
      }
    }
LABEL_8:
    v15 = *((_BYTE *)a5 + 32);
    if ( v15 != 4 )
    {
LABEL_9:
      v16 = (__int64)(a5 + 8);
      v17 = a5;
      v18 = a4;
      goto LABEL_16;
    }
    goto LABEL_33;
  }
  if ( !a7 || (unsigned int)(v12 - 8) > 1 )
    return 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 1504LL);
  if ( a6 )
    goto LABEL_15;
  if ( *a4 != 2 )
  {
    v14 = a4 + 8;
    if ( *((_BYTE *)a4 + 32) != 4 )
      goto LABEL_8;
    v18 = *((_DWORD **)a4 + 5);
    if ( *v18 != 2 )
      return 0;
    v14 = v18 + 12;
LABEL_52:
    v15 = *((_BYTE *)a5 + 32);
    v16 = (__int64)(a5 + 8);
    v17 = a5;
    if ( v15 == 4 )
    {
      v17 = *((int **)a5 + 5);
      if ( *v17 != 2 )
        return 0;
      v15 = *((_BYTE *)v17 + 48);
      v16 = (__int64)(v17 + 12);
    }
    goto LABEL_16;
  }
  v15 = *((_BYTE *)a5 + 32);
  v14 = a4 + 12;
  if ( v15 != 4 )
    goto LABEL_9;
LABEL_33:
  v17 = *((int **)a5 + 5);
  if ( *v17 != 2 )
    return 0;
  v15 = *((_BYTE *)v17 + 48);
  v16 = (__int64)(v17 + 12);
  v18 = a4;
LABEL_16:
  if ( v15 == 1 )
  {
    v55 = a6;
    v53 = v17;
    v51 = v18;
    v47 = v16;
    v42 = v13;
    if ( (unsigned __int8)sub_118110(v13, *(unsigned int *)(v16 + 8)) )
      return 0;
    v13 = v42;
    v16 = v47;
    v18 = v51;
    v17 = v53;
    a6 = v55;
  }
  if ( *(_BYTE *)v14 == 1 )
  {
    v56 = a6;
    v54 = v16;
    v52 = v17;
    v49 = v18;
    v44 = v13;
    if ( (unsigned __int8)sub_118110(v13, (unsigned int)v14[2]) )
      return 0;
    v13 = v44;
    v18 = v49;
    v17 = v52;
    v16 = v54;
    a6 = v56;
  }
  v19 = *v17;
  if ( *(_BYTE *)v16 != 2 )
  {
    v20 = *v18;
    if ( v20 == v19 )
      goto LABEL_41;
    if ( v20 != 4 )
    {
      v21 = v20 - 8;
      if ( v19 == 4 )
      {
        if ( v21 <= 1 )
          goto LABEL_41;
        v22 = a6;
        if ( v20 == a6 + 1 )
          goto LABEL_41;
      }
      else
      {
        v22 = a6;
        v23 = a6 + 1;
        if ( v21 <= 1 )
        {
          if ( v23 != v19 )
            goto LABEL_24;
LABEL_41:
          if ( a3 )
            goto LABEL_42;
          if ( *(_BYTE *)v16 == 4 )
            goto LABEL_62;
          goto LABEL_71;
        }
        if ( v23 == v20 && (unsigned int)(v19 - 8) <= 1 )
          goto LABEL_41;
      }
LABEL_24:
      v24 = *a4;
      v25 = 2 - v22;
      if ( v24 != 2 - v22 )
      {
        v26 = v16;
        v16 = (__int64)v14;
        v14 = (_DWORD *)v26;
      }
      v46 = v16;
      v41 = v13;
      v58 = 0;
      v59 = 0;
      if ( (unsigned __int8)sub_11E200(&v58, v14)
        && *(_BYTE *)v59 == 10
        && (unsigned __int8)sub_120A10(*(_QWORD *)(v59 + 8), v41, v46, 1) )
      {
        v27 = v58 - (v24 == v25);
        *a1 = v27;
        return v27 >= 0;
      }
      return 0;
    }
    if ( (unsigned int)(v19 - 8) <= 1 )
      goto LABEL_41;
    if ( v19 != 4 )
    {
LABEL_57:
      v22 = a6;
      if ( a6 + 1 == v19 )
        goto LABEL_41;
      goto LABEL_24;
    }
    goto LABEL_80;
  }
  if ( v19 == 2 )
  {
    v38 = *v18;
    if ( v38 != 2 )
    {
      if ( v38 == 4 )
        goto LABEL_57;
      if ( (unsigned int)(v38 - 8) > 1 )
      {
LABEL_80:
        v22 = a6;
        goto LABEL_24;
      }
      v22 = a6;
      if ( !a6 )
        goto LABEL_24;
    }
  }
  else
  {
    if ( *v18 != 2 )
    {
      *a1 = 0;
      return 1;
    }
    v22 = a6;
    if ( v19 == 4 )
    {
      if ( a6 != 1 )
        goto LABEL_24;
    }
    else if ( a6 != 1 || (unsigned int)(v19 - 8) > 1 )
    {
      goto LABEL_24;
    }
  }
  if ( a3 )
  {
LABEL_42:
    v29 = v16;
    v48 = v13;
    v43 = v16;
    v30 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 800LL);
    v31 = sub_1F6950(v30, v16);
    if ( v31 )
    {
      v32 = *(int *)(v31 + 16);
      if ( (_DWORD)v32 == *(_DWORD *)(a3 + 16) )
      {
        v33 = *(_QWORD *)v31;
        if ( *(_QWORD *)(*(_QWORD *)v31 + 440LL) < v32 )
          sub_B3000(v30, v29, v32, v33, v43);
        v34 = 13 * v32;
        v35 = *(_QWORD *)(v33 + 432);
        v57 = *(_QWORD *)(v31 + 8);
        v36 = v35 + 8 * v34;
        if ( (unsigned __int8)sub_1C0340(v36, *(_QWORD *)(v48 + 96), &v57, *(int *)(v43 + 4), *(int *)(v36 + 88)) )
        {
          v58 = *(_QWORD *)(a3 + 8);
          if ( (unsigned __int8)sub_1C0340(v36, *(_QWORD *)(v48 + 96), &v58, (int)v14[1], *(int *)(v36 + 88)) )
          {
            v37 = v57 - v58;
            *a1 = v57 - v58;
            return v37 >= 0;
          }
        }
      }
    }
    return 0;
  }
LABEL_71:
  v39 = *(_QWORD *)(v13 + 96);
  v50 = v13;
  v45 = v16;
  v40 = sub_118090(v16, v39, 0);
  v16 = v45;
  LODWORD(v13) = v50;
  if ( v40 != *(_BYTE *)(v39 + 145) )
    return 0;
LABEL_62:
  if ( !(unsigned __int8)sub_12B3B0(v13, (_DWORD)a1, a2, (_DWORD)a4, (_DWORD)v14, (_DWORD)a5, v16) )
    return 0;
  return *a1 >= 0LL;
}
