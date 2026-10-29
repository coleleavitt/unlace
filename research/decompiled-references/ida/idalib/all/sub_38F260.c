__int64 __fastcall sub_38F260(_QWORD *a1, double a2, double a3, double a4)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  char v7; // r14
  const char *v8; // rcx
  unsigned __int8 (*v9)(__int64, _QWORD, const char *, ...); // r8
  __int64 first_seg; // rbx
  int v11; // r13d
  const char *v12; // r15
  unsigned __int8 (*v13)(_QWORD, _QWORD, const char *, ...); // r11
  int segm_base; // eax
  unsigned __int8 v15; // al
  __int64 v16; // rsi
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  __int64 next_seg; // rbx
  void *v22; // rbx
  int v23; // [rsp+0h] [rbp-1E0h]
  __int64 v24; // [rsp+8h] [rbp-1D8h]
  __int64 (*v25)(__int64, _QWORD, const char *, ...); // [rsp+10h] [rbp-1D0h]
  __int64 v26; // [rsp+28h] [rbp-1B8h]
  char v27; // [rsp+37h] [rbp-1A9h]
  __int64 v28; // [rsp+38h] [rbp-1A8h]
  int v29; // [rsp+44h] [rbp-19Ch]
  unsigned __int64 segm_para; // [rsp+48h] [rbp-198h]
  __int64 v31; // [rsp+50h] [rbp-190h]
  int v32; // [rsp+58h] [rbp-188h]
  void *v33; // [rsp+60h] [rbp-180h] BYREF
  __int128 v34; // [rsp+68h] [rbp-178h]
  void *ptr; // [rsp+80h] [rbp-160h] BYREF
  __int128 v36; // [rsp+88h] [rbp-158h]
  _BYTE v37[8]; // [rsp+180h] [rbp-60h] BYREF
  unsigned int v38; // [rsp+188h] [rbp-58h]
  unsigned __int64 v39; // [rsp+1A8h] [rbp-38h]

  v4 = a1[2];
  v39 = __readfsqword(0x28u);
  v29 = 2 * *(_DWORD *)(v4 + 1512);
  v23 = getinf(5);
  if ( v23 == 4 )
  {
    if ( (a1[5] & 1) == 0 )
    {
      v27 = 1;
      v31 = -1;
      first_seg = get_first_seg();
      if ( first_seg )
      {
        v28 = -1;
        v7 = 0;
        segm_para = -1;
        goto LABEL_6;
      }
LABEL_50:
      getinf(12);
LABEL_35:
      v16 = a1[1];
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const char *))(*(_QWORD *)*a1 + 32LL))(
             *a1,
             v16,
             "\n\n  Address         Publics by Value\n\n") )
      {
        callui(25, v16, v17, (int)&callui, v18, v19);
      }
      return 0xFFFFFFFFLL;
    }
    v6 = *a1;
    v7 = 0;
    v31 = -1;
    v8 = "\n Start         Length Name               Class\n";
    v27 = 1;
    v28 = -1;
    segm_para = -1;
    v9 = *(unsigned __int8 (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
    goto LABEL_4;
  }
  next_seg = get_first_seg();
  if ( next_seg )
  {
    while ( (unsigned __int8)is_spec_segm(*(unsigned __int8 *)(next_seg + 184)) || !*(_BYTE *)(next_seg + 43) )
    {
      next_seg = get_next_seg(*(_QWORD *)next_seg);
      if ( !next_seg )
        goto LABEL_41;
    }
    v27 = 0;
    segm_para = (unsigned __int64)getinf(19) >> 4;
    v28 = getinf(19);
  }
  else
  {
LABEL_41:
    v27 = 1;
    v28 = -1;
    segm_para = -1;
  }
  if ( v23 != 11 )
  {
    if ( (a1[5] & 1) == 0 )
    {
      v31 = -1;
      v7 = 0;
      goto LABEL_5;
    }
    v31 = -1;
    v6 = *a1;
    v9 = *(unsigned __int8 (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
    goto LABEL_45;
  }
  netnode_check(&ptr, "$ PE header", 0, 0);
  v31 = (__int64)ptr;
  v22 = ptr;
  if ( netnode_valobj(ptr, &ptr, 248) <= 0 || netnode_supval(v22, 1, 0, 0, 83) < 0 )
  {
    if ( (a1[5] & 1) == 0 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v6 = *a1;
    v9 = *(unsigned __int8 (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
LABEL_45:
    v7 = 0;
    v8 = "\n Start  Stop   Length Name               Class\n";
    if ( v27 )
      goto LABEL_4;
    goto LABEL_46;
  }
  segm_para = netnode_altval(v22, -2, 65);
  if ( (a1[5] & 1) == 0 )
  {
    v27 = 0;
    v7 = 1;
    goto LABEL_5;
  }
  v6 = *a1;
  v27 = 1;
  v9 = *(unsigned __int8 (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
LABEL_46:
  v7 = v27;
  v8 = "\n Start         Length     Name                   Class";
  v27 = 0;
LABEL_4:
  if ( !v9(v6, a1[1], "%s\n", v8) )
    return 0xFFFFFFFFLL;
LABEL_5:
  first_seg = get_first_seg();
  if ( !first_seg )
  {
LABEL_34:
    if ( segm_para != -1 )
      goto LABEL_35;
    goto LABEL_50;
  }
LABEL_6:
  v32 = 2;
  while ( 1 )
  {
    v11 = v32 - 1;
    if ( !v7 )
      break;
    if ( netnode_supval(v31, v11, v37, 40, 83) <= 0 )
      goto LABEL_34;
    if ( (a1[5] & 1) != 0
      && !(*(unsigned __int8 (**)(_QWORD, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL))(
            *a1,
            a1[1],
            " %04X:%0*a 0%0*aH %-22.22s %s\n",
            v32,
            v29,
            a2,
            0,
            a3,
            (const char *)(unsigned int)v29,
            (const char *)v38) )
    {
      return 0xFFFFFFFFLL;
    }
LABEL_10:
    ++v32;
    first_seg = get_next_seg(*(_QWORD *)first_seg);
    if ( !first_seg )
      goto LABEL_34;
  }
  if ( (unsigned __int8)is_spec_segm(*(unsigned __int8 *)(first_seg + 184)) )
    goto LABEL_10;
  if ( segm_para == -1 )
  {
    segm_para = get_segm_para(first_seg);
    v28 = 16 * segm_para;
  }
  if ( (a1[5] & 1) == 0 )
    goto LABEL_10;
  v12 = nullptr;
  if ( *(_BYTE *)(first_seg + 184) != 7 )
    v12 = (const char *)(*(_QWORD *)(first_seg + 8) - *(_QWORD *)first_seg);
  a2 = 0.0;
  v33 = nullptr;
  ptr = nullptr;
  v34 = 0;
  v36 = 0;
  get_segm_name(&v33, first_seg, 0);
  get_segm_class(&ptr, first_seg);
  v13 = *(unsigned __int8 (**)(_QWORD, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
  if ( v23 == 4 )
  {
    v24 = *a1;
    v25 = *(__int64 (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
    v26 = *(_QWORD *)first_seg;
    segm_base = get_segm_base(first_seg);
    v15 = v25(
            v24,
            a1[1],
            " %04X:%0*a    %0*aH  %-18.18s %s\n",
            v11,
            v29 >> 1,
            0.0,
            (int)v26 - segm_base,
            a3,
            (const char *)(unsigned int)(v29 >> 1),
            v12);
  }
  else
  {
    if ( v27 )
    {
      if ( !v13(
              *a1,
              a1[1],
              " %0*aH %0*aH %0*aH %-18.18s %s\n",
              5,
              0.0,
              *(_DWORD *)first_seg - v28,
              a3,
              5,
              a4,
              (const char *)(*(_QWORD *)(first_seg + 8) + ~v28),
              &byte_5) )
        goto LABEL_28;
      goto LABEL_21;
    }
    v15 = v13(
            *a1,
            a1[1],
            " %04X:%0*a 0%0*aH %-22.22s %s\n",
            *(_QWORD *)(first_seg + 48),
            v29,
            0.0,
            0,
            a3,
            (const char *)(unsigned int)v29,
            v12);
  }
  if ( v15 )
  {
LABEL_21:
    if ( ptr )
    {
      *(_QWORD *)&v36 = 0;
      qfree(ptr);
    }
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    goto LABEL_10;
  }
LABEL_28:
  if ( ptr )
  {
    *(_QWORD *)&v36 = 0;
    qfree(ptr);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  return 0xFFFFFFFFLL;
}
