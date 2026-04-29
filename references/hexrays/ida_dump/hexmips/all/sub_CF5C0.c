__int64 __fastcall sub_CF5C0(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, int a5)
{
  char v9; // al
  __int64 v10; // r12
  __int64 v11; // r10
  unsigned int v12; // r9d
  int *v13; // rdi
  int v14; // ecx
  __int64 v15; // r14
  int v16; // r8d
  _DWORD *v17; // r10
  int v18; // edx
  _DWORD *v19; // rsi
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  _DWORD *v23; // rdx
  _DWORD *v24; // rcx
  _DWORD *i; // rax
  _DWORD *v26; // rax
  _DWORD *j; // rdx
  unsigned int v28; // ebx
  int *v30; // rcx
  int v31; // eax
  int v32; // r8d
  int v33; // esi
  int v34; // ecx
  _DWORD *v35; // r14
  _DWORD *v36; // rdx
  _DWORD *v37; // rax
  _DWORD *v38; // r11
  _DWORD *v39; // rdi
  _DWORD *v40; // rdx
  char v41; // r14
  int v42; // eax
  __int64 v43; // r10
  __int64 v44; // rsi
  int *v45; // rdx
  int v46; // eax
  __int64 v47; // [rsp+0h] [rbp-78h]
  int v48; // [rsp+0h] [rbp-78h]
  char v49; // [rsp+0h] [rbp-78h]
  int v50; // [rsp+0h] [rbp-78h]
  __int64 v51; // [rsp+8h] [rbp-70h]
  int v52; // [rsp+8h] [rbp-70h]
  int v53; // [rsp+8h] [rbp-70h]
  int v54; // [rsp+10h] [rbp-68h]
  int v55; // [rsp+10h] [rbp-68h]
  __int64 v56; // [rsp+10h] [rbp-68h]
  __int64 v57; // [rsp+18h] [rbp-60h]
  int *v58; // [rsp+20h] [rbp-58h] BYREF
  __int128 v59; // [rsp+28h] [rbp-50h]
  unsigned __int64 v60; // [rsp+38h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v59 = 0;
  v58 = nullptr;
  v9 = sub_CE9A0(a2, (__int64 *)&v58, a3, a4, 0);
  v10 = (__int64)v58;
  if ( !v9 )
  {
    v28 = -1;
    goto LABEL_24;
  }
  LODWORD(v11) = v59;
  v12 = *(_DWORD *)(a2 + 72) - 208;
  if ( (int)v59 <= 0 )
    goto LABEL_63;
  v47 = v59;
  v13 = v58;
  v14 = -1;
  v15 = (__int64)&v58[(unsigned int)(v59 - 1) + 1];
  v16 = -1;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = *(_DWORD **)(a2 + 88);
        v18 = *v13;
        v19 = &v17[*(_QWORD *)(a2 + 96)];
        if ( v17 == v19 )
          break;
        v20 = *(_DWORD **)(a2 + 88);
        while ( v18 != *v20 )
        {
          if ( v19 == ++v20 )
            goto LABEL_46;
        }
        if ( v19 == v20 )
          break;
        v21 = v20 - v17;
        LODWORD(v22) = v21;
        if ( (_DWORD)v21 == -1 )
          break;
        if ( *(_DWORD *)a2 != 3 )
          LODWORD(v21) = -1;
LABEL_12:
        if ( v14 != -1 && (_DWORD)v22 != v14 + 1 )
          goto LABEL_14;
        v23 = *(_DWORD **)(a1 + 48);
        v30 = &v23[(int)v22];
        if ( *v30 != -1 )
          goto LABEL_15;
        *v30 = a5;
        v14 = v22;
        if ( (_DWORD)v21 != -1 )
          goto LABEL_53;
        if ( (int *)v15 == ++v13 )
          goto LABEL_30;
      }
LABEL_46:
      v43 = *(_QWORD *)(a2 + 112);
      v44 = v43 + 4LL * *(_QWORD *)(a2 + 120);
      if ( v43 == v44 )
        break;
      v21 = *(_QWORD *)(a2 + 112);
      while ( v18 != *(_DWORD *)v21 )
      {
        v21 += 4;
        if ( v44 == v21 )
          goto LABEL_58;
      }
      if ( v44 == v21 )
        break;
      v22 = (v21 - v43) >> 2;
      LODWORD(v21) = v22;
      if ( (_DWORD)v22 == -1 )
        break;
      if ( *(_DWORD *)a2 == 3 )
        goto LABEL_12;
LABEL_53:
      if ( v16 != -1 && (_DWORD)v21 != v16 + 1 || (v45 = (int *)(*(_QWORD *)(a1 + 72) + 4LL * (int)v21), *v45 != -1) )
      {
LABEL_14:
        v23 = *(_DWORD **)(a1 + 48);
LABEL_15:
        v24 = &v23[*(_QWORD *)(a1 + 56)];
        for ( i = v23; v24 != i; ++i )
        {
          if ( a5 == *i )
            *i = -1;
        }
        v26 = *(_DWORD **)(a1 + 72);
        for ( j = &v26[*(_QWORD *)(a1 + 80)]; j != v26; ++v26 )
        {
          if ( a5 == *v26 )
            *v26 = -1;
        }
        v28 = 1;
        goto LABEL_24;
      }
      ++v13;
      *v45 = a5;
      v16 = v21;
      if ( (int *)v15 == v13 )
        goto LABEL_30;
    }
LABEL_58:
    if ( v12 > 0x2F )
      goto LABEL_14;
    ++v13;
    ++*(_DWORD *)(a1 + 140);
  }
  while ( (int *)v15 != v13 );
LABEL_30:
  v11 = v47;
  v48 = v14;
  if ( v14 != -1 )
  {
    v54 = v16;
    if ( v16 != -1 )
    {
      v51 = v11;
      v31 = sub_60760((_QWORD *)(a1 + 16), 0);
      v11 = v51;
      v32 = v54;
      v33 = v31;
      v34 = v48;
      while ( v33 != *(_DWORD *)(a1 + 24) )
      {
        v35 = *(_DWORD **)(a1 + 48);
        v36 = &v35[*(_QWORD *)(a1 + 56)];
        v37 = v35;
        if ( v35 == v36 )
          goto LABEL_62;
        while ( v33 != *v37 )
        {
          if ( v36 == ++v37 )
            goto LABEL_62;
        }
        if ( v36 == v37 )
          goto LABEL_62;
        v38 = *(_DWORD **)(a1 + 72);
        v39 = &v38[*(_QWORD *)(a1 + 80)];
        v40 = v38;
        if ( v38 == v39 )
          goto LABEL_62;
        while ( v33 != *v40 )
        {
          if ( v39 == ++v40 )
            goto LABEL_62;
        }
        if ( v39 == v40 )
        {
LABEL_62:
          v56 = v11;
          v53 = v32;
          v50 = v34;
          v46 = sub_60760((_QWORD *)(a1 + 16), v33 + 1);
          v34 = v50;
          v32 = v53;
          v33 = v46;
          v11 = v56;
        }
        else
        {
          v57 = v11;
          v55 = v34;
          v52 = v32;
          v49 = v34 > (int)(v37 - v35);
          v41 = v32 > (int)(v40 - v38);
          v42 = sub_60760((_QWORD *)(a1 + 16), v33 + 1);
          v32 = v52;
          v33 = v42;
          v34 = v55;
          v11 = v57;
          if ( v49 != v41 )
            goto LABEL_14;
        }
      }
    }
  }
LABEL_63:
  *(_DWORD *)(a1 + 136) += v11;
  if ( ((*(_DWORD *)a3 - 2) & 0xFFFFFFFD) == 0 )
    sub_5FF90((__int64 *)(a1 + 16), a5);
  v28 = 0;
LABEL_24:
  if ( v10 )
    qfree(v10);
  return v28;
}
