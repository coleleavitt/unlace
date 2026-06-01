__int64 __fastcall sub_38A570(_QWORD *a1, double a2, double a3, double a4)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  char v7; // r14
  const char *v8; // rcx
  unsigned __int8 (*v9)(__int64, _QWORD, const char *, ...); // r8
  unsigned int *first_seg; // rbx
  const char *v11; // r12
  unsigned __int8 (*v12)(_QWORD, _QWORD, const char *, ...); // r11
  int segm_base; // eax
  unsigned __int8 v14; // al
  __int64 v15; // rsi
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  unsigned int *next_seg; // rbx
  unsigned int v21; // ebx
  int v22; // [rsp+0h] [rbp-1D0h]
  __int64 v23; // [rsp+8h] [rbp-1C8h]
  __int64 (*v24)(__int64, _QWORD, const char *, ...); // [rsp+10h] [rbp-1C0h]
  unsigned int v25; // [rsp+2Ch] [rbp-1A4h]
  char v26; // [rsp+37h] [rbp-199h]
  int v27; // [rsp+3Ch] [rbp-194h]
  int v28; // [rsp+40h] [rbp-190h]
  unsigned int segm_para; // [rsp+44h] [rbp-18Ch]
  unsigned int v30; // [rsp+48h] [rbp-188h]
  int v31; // [rsp+4Ch] [rbp-184h]
  void *v32; // [rsp+50h] [rbp-180h] BYREF
  __int128 v33; // [rsp+58h] [rbp-178h]
  void *ptr; // [rsp+70h] [rbp-160h] BYREF
  __int128 v35; // [rsp+78h] [rbp-158h]
  _BYTE v36[8]; // [rsp+170h] [rbp-60h] BYREF
  unsigned int v37; // [rsp+178h] [rbp-58h]
  unsigned __int64 v38; // [rsp+198h] [rbp-38h]

  v4 = a1[2];
  v38 = __readfsqword(0x28u);
  v28 = 2 * *(_DWORD *)(v4 + 1328);
  v22 = getinf(5);
  if ( v22 == 4 )
  {
    if ( (a1[4] & 1) == 0 )
    {
      v26 = 1;
      v30 = -1;
      first_seg = (unsigned int *)get_first_seg();
      if ( first_seg )
      {
        v27 = -1;
        v7 = 0;
        segm_para = -1;
        goto LABEL_6;
      }
LABEL_50:
      getinf(12);
LABEL_35:
      v15 = a1[1];
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const char *))(*(_QWORD *)*a1 + 32LL))(
             *a1,
             v15,
             "\n\n  Address         Publics by Value\n\n") )
      {
        callui(25, v15, v16, (int)&callui, v17, v18);
      }
      return 0xFFFFFFFFLL;
    }
    v6 = *a1;
    v7 = 0;
    v30 = -1;
    v8 = "\n Start         Length Name               Class\n";
    v26 = 1;
    v27 = -1;
    segm_para = -1;
    v9 = *(unsigned __int8 (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
    goto LABEL_4;
  }
  next_seg = (unsigned int *)get_first_seg();
  if ( next_seg )
  {
    while ( (unsigned __int8)is_spec_segm(*((unsigned __int8 *)next_seg + 96)) || !*((_BYTE *)next_seg + 23) )
    {
      next_seg = (unsigned int *)get_next_seg(*next_seg);
      if ( !next_seg )
        goto LABEL_41;
    }
    v26 = 0;
    segm_para = (unsigned int)getinf(19) >> 4;
    v27 = getinf(19);
  }
  else
  {
LABEL_41:
    v26 = 1;
    v27 = -1;
    segm_para = -1;
  }
  if ( v22 != 11 )
  {
    if ( (a1[4] & 1) == 0 )
    {
      v30 = -1;
      v7 = 0;
      goto LABEL_5;
    }
    v30 = -1;
    v6 = *a1;
    v9 = *(unsigned __int8 (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
    goto LABEL_45;
  }
  netnode_check(&ptr, "$ PE header", 0, 0);
  v30 = (unsigned int)ptr;
  v21 = (unsigned int)ptr;
  if ( netnode_valobj((unsigned int)ptr, &ptr, 248) <= 0 || netnode_supval(v21, 1, 0, 0, 83) < 0 )
  {
    if ( (a1[4] & 1) == 0 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v6 = *a1;
    v9 = *(unsigned __int8 (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
LABEL_45:
    v7 = 0;
    v8 = "\n Start  Stop   Length Name               Class\n";
    if ( v26 )
      goto LABEL_4;
    goto LABEL_46;
  }
  segm_para = netnode_altval(v21, 4294967294LL, 65);
  if ( (a1[4] & 1) == 0 )
  {
    v26 = 0;
    v7 = 1;
    goto LABEL_5;
  }
  v6 = *a1;
  v26 = 1;
  v9 = *(unsigned __int8 (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
LABEL_46:
  v7 = v26;
  v8 = "\n Start         Length     Name                   Class";
  v26 = 0;
LABEL_4:
  if ( !v9(v6, a1[1], "%s\n", v8) )
    return 0xFFFFFFFFLL;
LABEL_5:
  first_seg = (unsigned int *)get_first_seg();
  if ( !first_seg )
  {
LABEL_34:
    if ( segm_para != -1 )
      goto LABEL_35;
    goto LABEL_50;
  }
LABEL_6:
  v31 = 2;
  while ( v7 )
  {
    if ( netnode_supval(v30, (unsigned int)(v31 - 1), v36, 40, 83) <= 0 )
      goto LABEL_34;
    if ( (a1[4] & 1) != 0
      && !(*(unsigned __int8 (**)(_QWORD, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL))(
            *a1,
            a1[1],
            " %04X:%0*a 0%0*aH %-22.22s %s\n",
            v31,
            v28,
            a2,
            0,
            a3,
            (const char *)(unsigned int)v28,
            (const char *)v37) )
    {
      return 0xFFFFFFFFLL;
    }
LABEL_10:
    ++v31;
    first_seg = (unsigned int *)get_next_seg(*first_seg);
    if ( !first_seg )
      goto LABEL_34;
  }
  if ( (unsigned __int8)is_spec_segm(*((unsigned __int8 *)first_seg + 96)) )
    goto LABEL_10;
  if ( segm_para == -1 )
  {
    segm_para = get_segm_para(first_seg);
    v27 = 16 * segm_para;
  }
  if ( (a1[4] & 1) == 0 )
    goto LABEL_10;
  v11 = nullptr;
  if ( *((_BYTE *)first_seg + 96) != 7 )
    v11 = (const char *)(first_seg[1] - *first_seg);
  a2 = 0.0;
  v32 = nullptr;
  ptr = nullptr;
  v33 = 0;
  v35 = 0;
  get_segm_name(&v32, first_seg, 0);
  get_segm_class(&ptr, first_seg);
  v12 = *(unsigned __int8 (**)(_QWORD, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
  if ( v22 == 4 )
  {
    v23 = *a1;
    v24 = *(__int64 (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
    v25 = *first_seg;
    segm_base = get_segm_base(first_seg);
    v14 = v24(
            v23,
            a1[1],
            " %04X:%0*a    %0*aH  %-18.18s %s\n",
            v31 - 1,
            v28 >> 1,
            0.0,
            v25 - segm_base,
            a3,
            (const char *)(unsigned int)(v28 >> 1),
            v11);
  }
  else
  {
    if ( v26 )
    {
      if ( !v12(
              *a1,
              a1[1],
              " %0*aH %0*aH %0*aH %-18.18s %s\n",
              5,
              0.0,
              *first_seg - v27,
              a3,
              5,
              a4,
              (const char *)(first_seg[1] + ~v27),
              &byte_5) )
        goto LABEL_28;
      goto LABEL_21;
    }
    v14 = v12(
            *a1,
            a1[1],
            " %04X:%0*a 0%0*aH %-22.22s %s\n",
            first_seg[7],
            v28,
            0.0,
            0,
            a3,
            (const char *)(unsigned int)v28,
            v11);
  }
  if ( v14 )
  {
LABEL_21:
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr);
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
    goto LABEL_10;
  }
LABEL_28:
  if ( ptr )
  {
    *(_QWORD *)&v35 = 0;
    qfree(ptr);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  return 0xFFFFFFFFLL;
}

