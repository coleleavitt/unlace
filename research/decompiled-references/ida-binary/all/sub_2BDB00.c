__int64 __fastcall sub_2BDB00(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 *v12; // r14
  char v14; // bl
  __int64 (*v15)(void); // rax
  __int64 v16; // rax
  int v17; // ebp
  __int64 v18; // r15
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 v25; // r8
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  int v31; // ebp
  __int64 (__fastcall *v32)(__int64); // rax
  int v33; // eax
  __int64 v34; // rax
  int v35; // r10d
  int v36; // ebp
  __int64 v37; // rdx
  int *v38; // rcx
  int *v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  char v48; // [rsp+0h] [rbp-48h]
  unsigned __int8 v49; // [rsp+8h] [rbp-40h]
  unsigned __int8 v50; // [rsp+8h] [rbp-40h]
  int v51; // [rsp+8h] [rbp-40h]
  unsigned __int8 v52; // [rsp+8h] [rbp-40h]
  unsigned __int8 v53; // [rsp+Fh] [rbp-39h]

  v12 = (__int64 *)a2;
  v14 = a4;
  v49 = a4;
  v15 = *(__int64 (**)(void))(*a1 + 504LL);
  if ( (char *)v15 == (char *)sub_2B36E0 )
  {
    v16 = sub_1EA6A0(a1[2] + 384LL, a2, (__int64)sub_2B36E0, a4, *(double *)a5.m128_u64);
    a2 = (__int64)a1;
    v17 = *(_DWORD *)(v16 + 32);
    v18 = v16;
    v19 = sub_1EB540((_QWORD *)a1[2], (__int64)a1);
    v25 = v49;
    if ( v17 != v19 )
    {
      sub_169700(
        (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
        (__int64)a1,
        v20,
        v21,
        v49,
        v22,
        a5,
        a6,
        a7,
        a8,
        v23,
        v24,
        a11,
        a12,
        v48);
      v25 = v49;
    }
    v26 = *(int *)(v18 + 24);
  }
  else
  {
    v47 = v15();
    v25 = v49;
    v26 = v47;
  }
  if ( (int)v26 >= 0 )
  {
    if ( v14 )
    {
      a2 = (unsigned int)v26;
      v52 = v25;
      v44 = sub_29A200(a3, v26, 0);
      v25 = v52;
      LODWORD(v26) = v44;
    }
    else
    {
      LODWORD(v26) = *(_DWORD *)(*(_QWORD *)(a3 + 80) + 4 * v26) & 0x7FFFFFFF;
    }
  }
  v27 = a1[25];
  v28 = a1[24];
  v29 = v28;
  v30 = 20 * v27;
  if ( 20 * v27 )
  {
    do
    {
      if ( *(_BYTE *)v29 )
      {
        if ( !a3
          || ((v31 = *(_DWORD *)(v29 + 4),
               v32 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 56LL),
               v32 != interactive_graph_t__::vfunc_7)
            ? (v50 = v25,
               v33 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64 (__fastcall *)(__int64)))v32)(
                       a3,
                       a2,
                       v30,
                       v28,
                       v25,
                       interactive_graph_t__::vfunc_7),
               v25 = v50)
            : (v33 = *(_DWORD *)(a3 + 184)),
              v31 < v33) )
        {
          v34 = *(int *)(v29 + 4);
          v35 = *(_DWORD *)(v29 + 4);
          if ( (_BYTE)v25 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a3 + 104) + v34) & 1) != 0 )
            {
              v42 = v12[1];
              if ( v12[2] < (unsigned __int64)(v42 + 1) )
              {
                a2 = *v12;
                v53 = v25;
                v51 = *(_DWORD *)(v29 + 4);
                v43 = qvector_reserve(v12, *v12, v42 + 1, 4);
                v42 = v12[1];
                v25 = v53;
                *v12 = v43;
                v35 = v51;
              }
              else
              {
                v43 = *v12;
              }
              *(_DWORD *)(v43 + 4 * v42) = v35;
              ++v12[1];
              v28 = a1[24];
              v27 = a1[25];
              goto LABEL_12;
            }
          }
          else
          {
            v36 = *(_DWORD *)(*(_QWORD *)(a3 + 80) + 4 * v34) & 0x7FFFFFFF;
            if ( (_DWORD)v34 != v36 )
            {
              a2 = *v12;
              v37 = v12[1];
              v38 = (int *)(*v12 + 4 * v37);
              if ( (int *)*v12 == v38 )
                goto LABEL_25;
              v39 = (int *)*v12;
              while ( v36 != *v39 )
              {
                if ( v38 == ++v39 )
                  goto LABEL_25;
              }
              if ( v39 == v38 )
              {
LABEL_25:
                v40 = v37 + 1;
                if ( v12[2] < v40 )
                {
                  v45 = qvector_reserve(v12, a2, v40, 4);
                  v46 = v12[1];
                  v25 = 0;
                  *v12 = v45;
                  *(_DWORD *)(v45 + 4 * v46) = v36;
                }
                else
                {
                  *v38 = v36;
                }
                ++v12[1];
              }
            }
          }
        }
        v28 = a1[24];
        v27 = a1[25];
      }
LABEL_12:
      v29 += 20;
      v30 = v28 + 20 * v27;
    }
    while ( v29 != v30 );
  }
  return (unsigned int)v26;
}
