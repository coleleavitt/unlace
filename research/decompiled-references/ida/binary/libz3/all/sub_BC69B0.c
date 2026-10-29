__int64 __fastcall sub_BC69B0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 *v4; // rax
  int v6; // edx
  unsigned int v7; // r15d
  unsigned int **v10; // rcx
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int *v19; // rax
  __int64 *v20; // rdx
  _QWORD *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // esi
  __int64 *v31; // rdx
  int v32; // esi
  _DWORD *v33; // rax
  int v34; // r12d
  _DWORD *v35; // rbx
  __int64 v36; // rdx
  int v37; // esi
  __int64 v38; // rax
  int v39; // esi
  _DWORD *v40; // rax
  int v41; // r12d
  _DWORD *v42; // rbx
  unsigned int *v43; // r12
  __int64 v44; // rax
  int v45; // eax
  bool v46; // al
  unsigned int v47; // edx
  __int64 v48; // rax
  unsigned int v49; // edx
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  bool v53; // al
  __int64 v54; // rax
  unsigned int v55; // eax
  __int64 v56; // rdx
  int v57; // edx
  __int64 j; // rax
  __int64 i; // rax
  int *v60; // [rsp+8h] [rbp-F8h]
  unsigned int k; // [rsp+10h] [rbp-F0h]
  unsigned int m; // [rsp+10h] [rbp-F0h]
  unsigned int v63; // [rsp+10h] [rbp-F0h]
  unsigned int v64; // [rsp+10h] [rbp-F0h]
  unsigned int *v65; // [rsp+18h] [rbp-E8h]
  unsigned int *v66; // [rsp+20h] [rbp-E0h]
  unsigned int *v67; // [rsp+20h] [rbp-E0h]
  unsigned int *v68; // [rsp+28h] [rbp-D8h]
  __int64 v69; // [rsp+30h] [rbp-D0h]
  int *v70; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+68h] [rbp-98h]
  __int64 v73; // [rsp+70h] [rbp-90h]
  __int64 v74; // [rsp+78h] [rbp-88h]
  __int64 v75; // [rsp+80h] [rbp-80h] BYREF
  __int64 v76; // [rsp+88h] [rbp-78h]
  __int64 v77; // [rsp+90h] [rbp-70h]
  __int64 v78; // [rsp+98h] [rbp-68h]
  __int64 v79[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v80[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v81; // [rsp+C0h] [rbp-40h]
  _DWORD *v82; // [rsp+C8h] [rbp-38h]

  v4 = *(__int64 **)(a2 + 8);
  if ( !v4 )
    return 0;
  v6 = *((_DWORD *)v4 - 1);
  if ( !v6 )
    return 0;
  v10 = *(unsigned int ***)(a3 + 8);
  if ( !v10 )
    return 0;
  v12 = *((_DWORD *)v10 - 1);
  if ( !v12 || v6 == 1 && v12 == 1 )
    return 0;
  v13 = *v4;
  v69 = *(_QWORD *)(a1 + 24);
  v66 = (unsigned int *)v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v68 = *v10;
  if ( *v10 )
    ++(*v10)[2];
  v70 = nullptr;
  v7 = sub_BB5690(a1, v13, (__int64)v68, &v70);
  v60 = v70;
  v14 = *(_QWORD *)(a2 + 8);
  if ( (_BYTE)v7 )
  {
    v36 = *(_QWORD *)(a1 + 24);
    v76 = 0;
    v72 = 0;
    v71 = v36;
    v75 = v36;
    if ( v14 )
      v37 = *(_DWORD *)(v14 - 4) - 1;
    else
      v37 = -1;
    sub_3A6490((__int64)&v71, v37, (__int64 *)(v14 + 8));
    v38 = *(_QWORD *)(a3 + 8);
    if ( v38 )
      v39 = *(_DWORD *)(v38 - 4) - 1;
    else
      v39 = -1;
    sub_3A6490((__int64)&v75, v39, (__int64 *)(v38 + 8));
    v40 = sub_BB22C0(a1, a4, &v70);
    v41 = *(_DWORD *)(a1 + 564);
    v42 = v40;
    *(_DWORD *)(a1 + 564) = v41 + 1;
    sub_BD02A0(v79, &v71, &v75);
    v81 = v41;
    v82 = v42;
    sub_BD1D40(a1 + 240, v79);
    sub_2334C0(v80);
    sub_2334C0(v79);
    v43 = v66;
    sub_BC5010(a1, v42, &v70, v66, v68, 1);
    sub_2334C0(&v75);
    sub_2334C0(&v71);
    v67 = v68;
    v65 = v43;
    goto LABEL_43;
  }
  v15 = 0x7FFFFFFF8LL;
  if ( v14 )
    v15 = 8LL * (unsigned int)(*(_DWORD *)(v14 - 4) - 1);
  v16 = *(unsigned int **)(v14 + v15);
  v65 = v16;
  if ( v16 )
    ++v16[2];
  sub_BB0560((__int64)v66, v69);
  v17 = 0x7FFFFFFF8LL;
  v18 = *(_QWORD *)(a3 + 8);
  if ( v18 )
    v17 = 8LL * (unsigned int)(*(_DWORD *)(v18 - 4) - 1);
  v19 = *(unsigned int **)(v18 + v17);
  v67 = v19;
  if ( v19 )
    ++v19[2];
  sub_BB0560((__int64)v68, v69);
  v7 = sub_BB5690(a1, (__int64)v65, (__int64)v67, &v70);
  v20 = *(__int64 **)(a2 + 8);
  v60 = v70;
  if ( (_BYTE)v7 )
  {
    v29 = *(_QWORD *)(a1 + 24);
    v76 = 0;
    v72 = 0;
    v71 = v29;
    v75 = v29;
    if ( v20 )
      v30 = *((_DWORD *)v20 - 1) - 1;
    else
      v30 = -1;
    sub_3A6490((__int64)&v71, v30, v20);
    v31 = *(__int64 **)(a3 + 8);
    if ( v31 )
      v32 = *((_DWORD *)v31 - 1) - 1;
    else
      v32 = -1;
    sub_3A6490((__int64)&v75, v32, v31);
    v33 = sub_BB22C0(a1, a4, &v70);
    v34 = *(_DWORD *)(a1 + 564);
    v35 = v33;
    *(_DWORD *)(a1 + 564) = v34 + 1;
    sub_BD02A0(v79, &v71, &v75);
    v81 = v34;
    v82 = v35;
    sub_BD1D40(a1 + 240, v79);
    sub_2334C0(v80);
    sub_2334C0(v79);
    sub_BC5010(a1, v35, &v70, v65, v67, 1);
    sub_2334C0(&v75);
    sub_2334C0(&v71);
    goto LABEL_43;
  }
  v71 = 0;
  v72 = 0;
  v73 = 1;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 1;
  v78 = 0;
  v79[0] = 0;
  v79[1] = 0;
  v80[0] = 1;
  v80[1] = 0;
  if ( !v20 )
  {
    v21 = *(_QWORD **)(a3 + 8);
    if ( !v21 )
      goto LABEL_42;
    goto LABEL_27;
  }
  if ( *((_DWORD *)v20 - 1) <= 1u )
  {
    v21 = *(_QWORD **)(a3 + 8);
    if ( !v21 )
      goto LABEL_31;
    goto LABEL_27;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 416LL))(a1, *v20, &v71)
    || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 416LL))(a1, **(_QWORD **)(a3 + 8))
    || sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v71, (__int64)&v75) )
  {
    goto LABEL_26;
  }
  v64 = 1;
  for ( i = *(_QWORD *)(a3 + 8); i; ++v64 )
  {
    if ( v64 >= *(_DWORD *)(i - 4) )
      break;
    if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v75, (__int64)&v71) )
      break;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 416LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL * v64),
            v79) )
      break;
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v75, (__int64)v79, (__int64)&v75);
    i = *(_QWORD *)(a3 + 8);
  }
  if ( !sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v71, (__int64)&v75) )
    goto LABEL_26;
  v21 = *(_QWORD **)(a3 + 8);
  if ( !v21 )
  {
LABEL_55:
    v20 = *(__int64 **)(a2 + 8);
    if ( !v20 )
      goto LABEL_42;
    goto LABEL_31;
  }
  if ( v64 < *((_DWORD *)v21 - 1) )
  {
    if ( (unsigned __int8)sub_BC6030(a1, 1u, v64, 1, a2, a3, a4) )
      goto LABEL_83;
LABEL_26:
    v21 = *(_QWORD **)(a3 + 8);
    if ( !v21 )
      goto LABEL_55;
  }
LABEL_27:
  if ( *((_DWORD *)v21 - 1) <= 1u )
    goto LABEL_55;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 416LL))(a1, *v21, &v71)
    || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 416LL))(
          a1,
          **(_QWORD **)(a2 + 8),
          &v75)
    || !sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v75, (__int64)&v71) )
  {
    goto LABEL_30;
  }
  v63 = 1;
  for ( j = *(_QWORD *)(a2 + 8); j; ++v63 )
  {
    if ( v63 >= *(_DWORD *)(j - 4) )
      break;
    if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v75, (__int64)&v71) )
      break;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 416LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL * v63),
            v79) )
      break;
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v75, (__int64)v79, (__int64)&v75);
    j = *(_QWORD *)(a2 + 8);
  }
  if ( !sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v71, (__int64)&v75) )
    goto LABEL_30;
  v20 = *(__int64 **)(a2 + 8);
  if ( !v20 )
    goto LABEL_36;
  if ( v63 < *((_DWORD *)v20 - 1) )
  {
    if ( (unsigned __int8)sub_BC6030(a1, v63, 1u, 1, a2, a3, a4) )
    {
LABEL_83:
      v7 = 1;
      goto LABEL_42;
    }
LABEL_30:
    v20 = *(__int64 **)(a2 + 8);
    if ( !v20 )
      goto LABEL_36;
  }
LABEL_31:
  v22 = *((_DWORD *)v20 - 1);
  if ( v22 > 1
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 416LL))(a1, v20[v22 - 1], &v71) )
  {
    v23 = *(_QWORD *)(a3 + 8);
    v24 = 0x7FFFFFFF8LL;
    if ( v23 )
      v24 = 8LL * (unsigned int)(*(_DWORD *)(v23 - 4) - 1);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 416LL))(
           a1,
           *(_QWORD *)(v23 + v24),
           &v75)
      && !sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v71, (__int64)&v75) )
    {
      v44 = *(_QWORD *)(a3 + 8);
      v45 = v44 ? *(_DWORD *)(v44 - 4) : 0;
      for ( k = v45 - 1;
            k
         && sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v75, (__int64)&v71)
         && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 416LL))(
              a1,
              *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL * (k - 1)),
              v79);
            --k )
      {
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v75, (__int64)v79, (__int64)&v75);
      }
      v46 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v71, (__int64)&v75);
      if ( k )
      {
        if ( v46 )
        {
          v25 = *(_QWORD *)(a3 + 8);
          if ( !v25 )
            goto LABEL_42;
          v47 = *(_DWORD *)(v25 - 4);
          if ( k >= v47 )
            goto LABEL_37;
          v48 = *(_QWORD *)(a2 + 8);
          v49 = v47 - k;
          if ( v48 )
            v50 = *(_DWORD *)(v48 - 4);
          else
            v50 = 0;
          if ( (unsigned __int8)sub_BC6030(a1, v50 - 1, v49, 0, a2, a3, a4) )
            goto LABEL_83;
        }
      }
    }
  }
LABEL_36:
  v25 = *(_QWORD *)(a3 + 8);
  if ( v25 )
  {
LABEL_37:
    v26 = *(_DWORD *)(v25 - 4);
    if ( v26 > 1
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 416LL))(
           a1,
           *(_QWORD *)(v25 + 8LL * (v26 - 1)),
           &v71) )
    {
      v27 = *(_QWORD *)(a2 + 8);
      v28 = 0x7FFFFFFF8LL;
      if ( v27 )
        v28 = 8LL * (unsigned int)(*(_DWORD *)(v27 - 4) - 1);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 416LL))(
             a1,
             *(_QWORD *)(v27 + v28),
             &v75)
        && sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v75, (__int64)&v71) )
      {
        v51 = *(_QWORD *)(a2 + 8);
        v52 = v51 ? *(_DWORD *)(v51 - 4) : 0;
        for ( m = v52 - 1;
              m
           && sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v75, (__int64)&v71)
           && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 416LL))(
                a1,
                *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL * (m - 1)),
                v79);
              --m )
        {
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v75, (__int64)v79, (__int64)&v75);
        }
        v53 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v71, (__int64)&v75);
        if ( m )
        {
          if ( v53 )
          {
            v54 = *(_QWORD *)(a2 + 8);
            if ( v54 )
            {
              v55 = *(_DWORD *)(v54 - 4);
              if ( m < v55 )
              {
                v56 = *(_QWORD *)(a3 + 8);
                if ( v56 )
                  v57 = *(_DWORD *)(v56 - 4);
                else
                  v57 = 0;
                v7 = sub_BC6030(a1, v55 - m, v57 - 1, 0, a2, a3, a4);
              }
            }
          }
        }
      }
    }
  }
LABEL_42:
  sub_25A130((char *)v79);
  sub_25A130((char *)&v75);
  sub_25A130((char *)&v71);
LABEL_43:
  sub_BB0560((__int64)v67, v69);
  sub_BB0560((__int64)v65, v69);
  if ( v60 )
    sub_186B220(v60 - 2);
  return v7;
}

