unsigned __int64 __fastcall sub_2968E0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 (__fastcall *v4)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v5)(__int64); // rax
  int v6; // eax
  int *v7; // rax
  __int64 (__fastcall *v8)(__int64, int); // rax
  __int64 (__fastcall *v9)(__int64, int, int); // rax
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbp
  int v15; // ebp
  int v16; // ebx
  __int64 v17; // r12
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r14
  __int64 (__fastcall *v20)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v21)(__int64); // rax
  _DWORD *v22; // rax
  __int64 *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v29; // rax
  void *v30; // rax
  int v31; // [rsp+4h] [rbp-D4h]
  unsigned int v32; // [rsp+8h] [rbp-D0h]
  int v33; // [rsp+Ch] [rbp-CCh]
  __int64 v34; // [rsp+10h] [rbp-C8h]
  int v35; // [rsp+1Ch] [rbp-BCh]
  int v37; // [rsp+28h] [rbp-B0h]
  int v38; // [rsp+2Ch] [rbp-ACh]
  unsigned __int64 v39; // [rsp+30h] [rbp-A8h]
  __int64 v40; // [rsp+40h] [rbp-98h]
  int v41; // [rsp+48h] [rbp-90h]
  int v42; // [rsp+4Ch] [rbp-8Ch]
  int v43; // [rsp+50h] [rbp-88h]
  int v44; // [rsp+60h] [rbp-78h]
  _QWORD *v45; // [rsp+68h] [rbp-70h]
  _QWORD v46[2]; // [rsp+70h] [rbp-68h] BYREF
  void *v47; // [rsp+80h] [rbp-58h]
  __int128 v48; // [rsp+88h] [rbp-50h]
  unsigned __int64 v49; // [rsp+98h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v43 = 1;
  v39 = 0;
  if ( a2[1] )
  {
    while ( 1 )
    {
      v45 = (_QWORD *)(*a2 + 32 * v39);
      if ( v45[1] )
        break;
LABEL_44:
      ++v39;
      ++v43;
      if ( v39 >= a2[1] )
        return v49 - __readfsqword(0x28u);
    }
    v40 = 0;
    while ( 1 )
    {
      v38 = *(_DWORD *)(*v45 + 4 * v40);
      v4 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
      if ( v4 == interactive_graph_t__::vfunc_19 )
      {
        v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
        if ( v5 == interactive_graph_t__::vfunc_7 )
          v6 = *(_DWORD *)(a1 + 184);
        else
          v6 = v5(a1);
        if ( v38 >= v6 )
          sub_16B930((__int64)"nrect(%d) failed", v38);
        v7 = (int *)(*(_QWORD *)(a1 + 224) + 16LL * v38);
      }
      else
      {
        v7 = (int *)v4(a1, v38);
      }
      v35 = *v7;
      v44 = v7[1];
      v42 = v7[3];
      v8 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
      v41 = v8 == interactive_graph_t__::vfunc_12 ? *(_DWORD *)(*(_QWORD *)(a1 + 176) + 24LL * v38 + 8) : v8(a1, v38);
      if ( v41 > 0 )
        break;
LABEL_43:
      if ( (unsigned __int64)++v40 >= v45[1] )
        goto LABEL_44;
    }
    v37 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
        LODWORD(v34) = v9 == interactive_graph_t__::vfunc_14
                     ? *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL * v38) + 4LL * v37)
                     : v9(a1, v38, v37);
        v33 = *(_DWORD *)(*a3 + 4LL * (int)v34);
        if ( v33 - v39 > 1 )
          break;
        ++v37;
LABEL_14:
        if ( v41 <= v37 )
          goto LABEL_43;
      }
      v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
      v11 = (v34 << 32) | (unsigned int)v38;
      if ( v10 == interactive_graph_t__::vfunc_20 )
        v12 = interactive_graph_t__::vfunc_20(a1, v11);
      else
        v12 = v10(a1, v11);
      v46[0] = *(_QWORD *)v12;
      v13 = *(_QWORD *)(v12 + 8);
      v48 = 0;
      v14 = *(_QWORD *)(v12 + 24);
      v46[1] = v13;
      v47 = nullptr;
      if ( v14 )
      {
        v30 = (void *)qalloc_or_throw(8 * v14);
        *((_QWORD *)&v48 + 1) = v14;
        v47 = v30;
        memcpy(v30, *(const void **)(v12 + 16), 8 * v14);
        *(_QWORD *)&v48 = v14;
      }
      v15 = v38;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 216LL))(
        a1,
        (unsigned int)v38,
        (unsigned int)v34);
      v16 = v42 + 30;
      if ( v33 <= v43 )
      {
        v15 = v38;
      }
      else
      {
        v17 = 32LL * v43;
        v31 = v43;
        do
        {
          v32 = v15;
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 192LL))(a1, 0);
          v20 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
          if ( v20 == interactive_graph_t__::vfunc_19 )
          {
            v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
            if ( v21 == interactive_graph_t__::vfunc_7 )
            {
              if ( v15 >= *(_DWORD *)(a1 + 184) )
                goto LABEL_39;
            }
            else if ( v15 >= (int)v21(a1) )
            {
LABEL_39:
              sub_16B930((__int64)"nrect(%d) failed", v15);
            }
            v22 = (_DWORD *)(*(_QWORD *)(a1 + 224) + 16LL * v15);
          }
          else
          {
            v22 = (_DWORD *)v20(a1, v15);
          }
          v22[1] = v16;
          *v22 = v35;
          v22[2] = v35 + 5;
          v22[3] = v16 + *(_DWORD *)(v17 + *a2 + 28) - *(_DWORD *)(v17 + *a2 + 24);
          v23 = (__int64 *)(v17 + *a2);
          v24 = v23[1];
          v25 = *v23;
          if ( v23[2] < (unsigned __int64)(v24 + 1) )
          {
            v26 = qvector_reserve(v23, v25, v24 + 1, 4);
            *v23 = v26;
            v25 = v26;
            v24 = v23[1];
          }
          *(_DWORD *)(v25 + 4 * v24) = v15;
          ++v23[1];
          v18 = a3[1];
          v19 = v15 + 1;
          if ( v18 < v19 )
          {
            v27 = *a3;
            if ( a3[2] < v19 )
            {
              v29 = qvector_reserve(a3, v27, v15 + 1, 4);
              *a3 = v29;
              v18 = a3[1];
              v27 = v29;
            }
            memset((void *)(v27 + 4 * v18), 0, 4 * (v19 - v18));
            a3[1] = v19;
          }
          else if ( v19 != v18 )
          {
            a3[1] = v19;
          }
          *(_DWORD *)(*a3 + 4LL * v15) = v31;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)a1 + 208LL))(
            a1,
            v32,
            (unsigned int)v15,
            v46);
          ++v31;
          v17 += 32;
          v16 += v42 + 30 - v44;
        }
        while ( v33 > v31 );
      }
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)a1 + 208LL))(
        a1,
        (unsigned int)v15,
        (unsigned int)v34,
        v46);
      if ( !v47 )
        goto LABEL_14;
      *(_QWORD *)&v48 = 0;
      qfree(v47, (const char *)(unsigned int)v15);
      if ( v41 <= v37 )
        goto LABEL_43;
    }
  }
  return v49 - __readfsqword(0x28u);
}
