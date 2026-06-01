unsigned __int64 __fastcall sub_163160(__int64 a1, __int64 a2, __int64 a3, int *a4, char a5, char a6)
{
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // r10
  _QWORD *v15; // r13
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r14
  _QWORD *v19; // r15
  const char *v20; // rsi
  const char *v21; // rdi
  char v22; // r15
  __int64 v23; // r13
  int v24; // ebx
  int v25; // r14d
  int v26; // eax
  bool v27; // cl
  int v28; // r13d
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rbx
  int v33; // eax
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  _DWORD *v40; // r14
  __int64 v41; // rsi
  __int64 v42; // r13
  __int64 v43; // rsi
  __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  struct _Unwind_Exception *v57; // rbx
  __int64 v59; // [rsp+0h] [rbp-98h]
  bool v60; // [rsp+0h] [rbp-98h]
  const char *v61; // [rsp+8h] [rbp-90h]
  int v62; // [rsp+8h] [rbp-90h]
  int v63; // [rsp+8h] [rbp-90h]
  const char *v64; // [rsp+10h] [rbp-88h]
  __int64 *v65; // [rsp+18h] [rbp-80h]
  __int64 v66; // [rsp+20h] [rbp-78h]
  char v67; // [rsp+2Eh] [rbp-6Ah]
  bool v68; // [rsp+2Fh] [rbp-69h]
  __int64 v69; // [rsp+30h] [rbp-68h] BYREF
  int v70; // [rsp+38h] [rbp-60h]
  _DWORD *v71; // [rsp+40h] [rbp-58h] BYREF
  __int128 v72; // [rsp+48h] [rbp-50h]
  unsigned __int64 v73; // [rsp+58h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a2 + 16);
  v64 = s1;
  v61 = s1;
  if ( v10 )
  {
    v61 = *(const char **)(a2 + 8);
    v64 = &v61[v10 - 1];
  }
  v11 = sub_90BB0(a2, a3, a1);
  v65 = *(__int64 **)a2;
  if ( (a6 & 1) == 0 )
  {
    v66 = -1;
    goto LABEL_47;
  }
  if ( *((_BYTE *)a4 + 4) )
  {
    v35 = *(_QWORD *)(v11 + 104);
    v36 = *(_QWORD *)(v11 + 96);
    if ( *(_QWORD *)(v11 + 112) < (unsigned __int64)(v35 + 1) )
    {
      v48 = qvector_reserve();
      v35 = *(_QWORD *)(v11 + 104);
      *(_QWORD *)(v11 + 96) = v48;
      v36 = v48;
    }
    v37 = v36 + 16 * v35;
    *(_QWORD *)v37 = -1;
    *(_DWORD *)(v37 + 8) = -1;
    *(_BYTE *)(v37 + 12) = 0;
    ++*(_QWORD *)(v11 + 104);
    v38 = *a4;
    *(_QWORD *)v37 = 0x7FFFFFFFFFFFFFFFLL;
    *(_DWORD *)(v37 + 8) = v38;
    *(_BYTE *)(v37 + 12) = 1;
  }
  v12 = v11;
  v72 = 0;
  v71 = nullptr;
  sub_907C0(v11, (__int64 *)&v71, a2 + 8, 19, 0);
  v66 = -1;
  if ( (_QWORD)v72 )
  {
    v39 = *(_QWORD *)(v11 + 80);
    v40 = v71;
    v41 = *(_QWORD *)(v11 + 72);
    v66 = v39;
    if ( *(_QWORD *)(v11 + 88) < (unsigned __int64)(v39 + 1) )
    {
      v12 = v11 + 72;
      v49 = qvector_reserve();
      *(_QWORD *)(v11 + 72) = v49;
      v39 = *(_QWORD *)(v11 + 80);
      v41 = v49;
    }
    v42 = v41 + 16 * v39;
    *(_QWORD *)v42 = -1;
    *(_DWORD *)(v42 + 8) = -1;
    *(_BYTE *)(v42 + 12) = 0;
    ++*(_QWORD *)(v11 + 80);
    *(_DWORD *)v42 = *v40;
    *(_QWORD *)(v42 + 4) = (unsigned int)v40[1];
    *(_BYTE *)(v42 + 12) = 1;
    v43 = *(_QWORD *)(a1 + 480);
    if ( !v43 )
      goto LABEL_116;
    v44 = *v65;
    if ( *(int *)(a1 + 908) <= 740 )
      v45 = (*(__int64 (__fastcall **)(__int64 *))(v44 + 40))(v65);
    else
      v45 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v44 + 160))(v65, v43, *(_QWORD *)(a1 + 760));
    if ( v45 )
    {
      v46 = *(_DWORD *)(v42 + 8);
    }
    else
    {
      if ( a5 )
      {
        v47 = sub_8FB80(a1, 0xAu);
        *(_DWORD *)(v42 + 8) = v47;
        *(_BYTE *)(v42 + 12) = 1;
      }
      else
      {
        v47 = *(_DWORD *)(v42 + 8);
      }
      if ( v47 )
        goto LABEL_6;
      v46 = sub_8FB80(a1, 9u);
      *(_DWORD *)(v42 + 8) = v46;
      *(_BYTE *)(v42 + 12) = 1;
    }
    if ( !v46 )
    {
      *(_DWORD *)(v42 + 8) = sub_8FB80(a1, *(_BYTE *)(a2 + 32));
      *(_BYTE *)(v42 + 12) = 1;
    }
  }
LABEL_6:
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree();
    if ( (a6 & 2) == 0 )
      goto LABEL_27;
    goto LABEL_8;
  }
LABEL_47:
  if ( (a6 & 2) == 0 )
  {
    if ( (a6 & 0x20) == 0 )
      return v73 - __readfsqword(0x28u);
    goto LABEL_28;
  }
LABEL_8:
  v13 = *(_QWORD *)(a1 + 600);
  if ( v13 )
  {
    v14 = *(_QWORD **)(a1 + 592);
    v15 = &v14[10 * v13];
    if ( v14 != v15 )
    {
      v16 = *(_QWORD *)(a1 + 592);
      do
      {
        v17 = v16;
        if ( (*(_BYTE *)(v16 + 72) & 4) == 0 )
        {
          v68 = v16 != 0;
          goto LABEL_14;
        }
        v16 += 80;
      }
      while ( v15 != (_QWORD *)v16 );
      v68 = 0;
      v17 = 0;
LABEL_14:
      v67 = 0;
      v18 = v17;
      v19 = *(_QWORD **)(a1 + 592);
      do
      {
        while ( 1 )
        {
          if ( (_QWORD *)v18 != v19 && v19[2] > 1u )
          {
            sub_162EB0(a1, (__int64)v19, (_QWORD *)a2, (_QWORD *)v11, v61, (unsigned __int64)v64, 0);
            if ( v18 )
              break;
          }
          v19 += 10;
          if ( v15 == v19 )
            goto LABEL_24;
        }
        v20 = s1;
        if ( v19[5] )
          v20 = (const char *)v19[4];
        v21 = s1;
        if ( *(_QWORD *)(v18 + 40) )
          v21 = *(const char **)(v18 + 32);
        v19 += 10;
        v67 |= strcmp(v21, v20) == 0;
      }
      while ( v15 != v19 );
LABEL_24:
      if ( v67 != 1 && v68 )
        sub_162EB0(a1, v18, (_QWORD *)a2, (_QWORD *)v11, v61, (unsigned __int64)v64, 0);
    }
  }
LABEL_27:
  if ( (a6 & 0x20) == 0 )
    return v73 - __readfsqword(0x28u);
LABEL_28:
  if ( !*(_QWORD *)(a1 + 280) )
    return v73 - __readfsqword(0x28u);
  v69 = 0;
  v70 = 0;
  v71 = nullptr;
  LODWORD(v72) = 0;
  v22 = sub_161A40(a1, (__int64)&v69, (__int64)&v71, nullptr);
  if ( !v22 )
    return v73 - __readfsqword(0x28u);
  v23 = v69;
  v24 = v70;
  v59 = (__int64)v71;
  v25 = v72;
  if ( !*(_BYTE *)(a1 + 772) )
  {
    v12 = a1;
    v62 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 184LL))(a1, v69, v65);
    v26 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 184LL))(a1, v59, v65);
    v27 = 0;
    if ( v62 != -1 )
    {
      if ( v26 == -1 )
      {
        v25 = 0x7FFFFFFF;
      }
      else if ( v25 < v24 )
      {
        v27 = v24 == 0x7FFFFFFF;
        goto LABEL_35;
      }
      goto LABEL_69;
    }
    if ( v26 != -1 )
    {
      if ( v25 < 0 )
      {
        v28 = -v25;
        if ( v66 == -1 )
        {
          v29 = *(_QWORD *)(v11 + 80);
          v30 = v29 + 1;
LABEL_42:
          v31 = *(_QWORD *)(v11 + 72);
          if ( *(_QWORD *)(v11 + 88) < v30 )
          {
            v51 = qvector_reserve();
            v29 = *(_QWORD *)(v11 + 80);
            *(_QWORD *)(v11 + 72) = v51;
            v31 = v51;
          }
          v32 = v31 + 16 * v29;
          *(_QWORD *)v32 = -1;
          *(_DWORD *)(v32 + 8) = -1;
          *(_BYTE *)(v32 + 12) = 0;
          ++*(_QWORD *)(v11 + 80);
          *(_DWORD *)v32 = v25;
          *(_DWORD *)(v32 + 4) = v28;
          *(_DWORD *)(v32 + 8) = -1;
          *(_BYTE *)(v32 + 12) = 0;
          v33 = sub_8FB80(a1, 2u);
          *(_BYTE *)(v32 + 12) = 1;
          *(_DWORD *)(v32 + 8) = v33;
          return v73 - __readfsqword(0x28u);
        }
        v24 = 0;
      }
      else
      {
        if ( !v25 )
          return v73 - __readfsqword(0x28u);
        v27 = v25 == 0x7FFFFFFF;
        if ( v66 == -1 )
        {
          v29 = *(_QWORD *)(v11 + 80);
          v24 = v25;
          v28 = v25;
          v25 = -1;
          v30 = v29 + 1;
          goto LABEL_39;
        }
        v28 = v25;
        v24 = v25;
        v25 = 0;
      }
      goto LABEL_72;
    }
    if ( *(_QWORD *)(a1 + 480) )
    {
      v63 = *(__int16 *)(a1 + 468);
      if ( *(int *)(a1 + 908) <= 740 )
        v55 = l_compare();
      else
        v55 = l_compare2();
      if ( v55 )
      {
        if ( v55 <= 0 )
          return v73 - __readfsqword(0x28u);
      }
      else if ( v63 <= v24 )
      {
        return v73 - __readfsqword(0x28u);
      }
      if ( *(int *)(a1 + 908) <= 740 )
        v56 = l_compare();
      else
        v56 = l_compare2();
      if ( v56 )
      {
        if ( v56 > 0 )
          return v73 - __readfsqword(0x28u);
        if ( v66 != -1 )
        {
          v27 = v22;
          v28 = 0x7FFFFFFF;
          v25 = 0;
          v24 = 0x7FFFFFFF;
          goto LABEL_72;
        }
      }
      else
      {
        if ( v25 < v63 )
          return v73 - __readfsqword(0x28u);
        if ( v66 != -1 )
        {
          v27 = v22;
          v25 = 0;
          v28 = 0x7FFFFFFF;
          v24 = 0x7FFFFFFF;
          goto LABEL_72;
        }
      }
      v29 = *(_QWORD *)(v11 + 80);
      v27 = v22;
      v24 = 0x7FFFFFFF;
      v28 = 0x7FFFFFFF;
      v30 = v29 + 1;
      goto LABEL_38;
    }
    sub_158B30(a1);
LABEL_116:
    v57 = (struct _Unwind_Exception *)sub_158B30(v12);
    if ( v71 )
    {
      *(_QWORD *)&v72 = 0;
      qfree();
    }
    _Unwind_Resume(v57);
  }
  if ( *(int *)(a1 + 908) <= 740 )
    v52 = l_compare();
  else
    v52 = l_compare2();
  if ( v52 >= 0 && (*(int *)(a1 + 908) <= 740 ? (v54 = l_compare()) : (v54 = l_compare2()), v54 < 0)
    || (*(unsigned int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 184LL))(a1, v23, v65) != -1
    || (*(unsigned int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 184LL))(a1, v59, v65) != -1 )
  {
    if ( v25 > v24 )
    {
LABEL_70:
      v50 = v24;
      v24 = v25;
      v27 = v25 == 0x7FFFFFFF;
      v25 = v50;
LABEL_35:
      v28 = v24 - v25;
      if ( v66 == -1 )
      {
        v29 = *(_QWORD *)(v11 + 80);
        v30 = v29 + 1;
        goto LABEL_37;
      }
LABEL_72:
      v60 = v27;
      memmove(
        (void *)(*(_QWORD *)(v11 + 72) + 16 * v66),
        (const void *)(*(_QWORD *)(v11 + 72) + 16 * v66 + 16),
        16 * (*(_QWORD *)(v11 + 80) - v66) - 16);
      v30 = *(_QWORD *)(v11 + 80);
      v27 = v60;
      v29 = v30 - 1;
      *(_QWORD *)(v11 + 80) = v30 - 1;
LABEL_37:
      if ( v25 )
      {
LABEL_39:
        if ( *(_DWORD *)(v11 + 144) < v24 && v27 )
          v28 = 0x7FFFFFFF;
        goto LABEL_42;
      }
LABEL_38:
      v25 = -1;
      goto LABEL_39;
    }
    v53 = v24;
    v24 = v25;
    v25 = v53;
LABEL_69:
    if ( v25 <= v24 )
      return v73 - __readfsqword(0x28u);
    goto LABEL_70;
  }
  return v73 - __readfsqword(0x28u);
}

