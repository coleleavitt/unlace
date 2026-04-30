void __fastcall sub_2A18C0(int *a1, int *a2, _QWORD *a3)
{
  int *v3; // rbp
  __int64 v5; // r8
  int v6; // r13d
  __int64 (__fastcall *v7)(__int64, int); // rax
  __int64 v8; // rax
  int v9; // r9d
  int v10; // r12d
  __int64 (__fastcall *v11)(__int64, int); // rax
  __int64 v12; // rax
  int v13; // r14d
  int v14; // eax
  int *v15; // r13
  __int64 v16; // r12
  __int64 (__fastcall *v17)(__int64, int); // rax
  __int64 v18; // rax
  int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // r14d
  __int64 (__fastcall *v23)(__int64, int); // rax
  __int64 v24; // rax
  int v25; // r8d
  int v26; // r9d
  __int64 (__fastcall *v27)(__int64, int); // rax
  int v28; // eax
  int v29; // r12d
  int v30; // eax
  __int64 (__fastcall *v31)(__int64, int); // rax
  int v32; // eax
  __int64 (__fastcall *v33)(__int64, int); // rax
  int v34; // eax
  __int64 (__fastcall *v35)(__int64, int); // rax
  int v36; // [rsp+4h] [rbp-54h]
  int v37; // [rsp+4h] [rbp-54h]
  int v38; // [rsp+18h] [rbp-40h]
  int v39; // [rsp+18h] [rbp-40h]
  int v40; // [rsp+18h] [rbp-40h]
  int v41; // [rsp+18h] [rbp-40h]
  int v42; // [rsp+1Ch] [rbp-3Ch]
  int v43; // [rsp+1Ch] [rbp-3Ch]

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    if ( a2 != a1 + 1 )
    {
      while ( 1 )
      {
        v5 = *v3;
        v6 = *a1;
        v7 = *(__int64 (__fastcall **)(__int64, int))(*a3 + 96LL);
        if ( v7 == interactive_graph_t__::vfunc_12 )
          break;
        v37 = *v3;
        v32 = v7((__int64)a3, v5);
        v5 = v37;
        v9 = v32;
        v33 = *(__int64 (__fastcall **)(__int64, int))(*a3 + 96LL);
        if ( v33 == interactive_graph_t__::vfunc_12 )
        {
          v8 = a3[22];
          goto LABEL_5;
        }
        v41 = v9;
        v34 = v33((__int64)a3, v6);
        v9 = v41;
        v5 = v37;
        v10 = v34;
LABEL_6:
        if ( v10 > v9 )
          goto LABEL_28;
        if ( v10 < v9 )
          goto LABEL_12;
        v11 = *(__int64 (__fastcall **)(__int64, int))(*a3 + 104LL);
        if ( v11 == interactive_graph_t__::vfunc_13 )
        {
          v12 = a3[25];
          v13 = v9 + *(_DWORD *)(v12 + 24 * v5 + 8);
LABEL_10:
          v14 = *(_DWORD *)(v12 + 24LL * v6 + 8);
          goto LABEL_11;
        }
        v13 = v11((__int64)a3, v5) + v9;
        v35 = *(__int64 (__fastcall **)(__int64, int))(*a3 + 104LL);
        if ( v35 == interactive_graph_t__::vfunc_13 )
        {
          v12 = a3[25];
          goto LABEL_10;
        }
        v14 = v35((__int64)a3, v6);
LABEL_11:
        if ( v14 + v10 <= v13 )
        {
LABEL_12:
          v15 = v3;
          v36 = *v3;
          v16 = 24LL * *v3;
          while ( 1 )
          {
            v22 = *(v15 - 1);
            v23 = *(__int64 (__fastcall **)(__int64, int))(*a3 + 96LL);
            if ( v23 == interactive_graph_t__::vfunc_12 )
              break;
            v25 = v23((__int64)a3, v36);
            v27 = *(__int64 (__fastcall **)(__int64, int))(*a3 + 96LL);
            if ( v27 == interactive_graph_t__::vfunc_12 )
            {
              v24 = a3[22];
              goto LABEL_20;
            }
            v38 = v25;
            v28 = v27((__int64)a3, v22);
            v25 = v38;
            v26 = v28;
LABEL_21:
            if ( v26 > v25 )
              goto LABEL_17;
            if ( v26 < v25 )
            {
LABEL_23:
              *v15 = v36;
              goto LABEL_24;
            }
            v17 = *(__int64 (__fastcall **)(__int64, int))(*a3 + 104LL);
            if ( v17 == interactive_graph_t__::vfunc_13 )
            {
              v18 = a3[25];
              v19 = *(_DWORD *)(v18 + v16 + 8) + v25;
LABEL_15:
              v20 = *(_DWORD *)(v18 + 24LL * v22 + 8);
              goto LABEL_16;
            }
            v42 = v26;
            v39 = v25;
            v30 = v17((__int64)a3, v36);
            v26 = v42;
            v19 = v30 + v39;
            v31 = *(__int64 (__fastcall **)(__int64, int))(*a3 + 104LL);
            if ( v31 == interactive_graph_t__::vfunc_13 )
            {
              v18 = a3[25];
              goto LABEL_15;
            }
            v43 = v19;
            v40 = v26;
            v20 = v31((__int64)a3, v22);
            v19 = v43;
            v26 = v40;
LABEL_16:
            if ( v20 + v26 <= v19 )
              goto LABEL_23;
LABEL_17:
            v21 = *--v15;
            v15[1] = v21;
          }
          v24 = a3[22];
          v25 = *(_DWORD *)(v24 + v16 + 8);
LABEL_20:
          v26 = *(_DWORD *)(v24 + 24LL * v22 + 8);
          goto LABEL_21;
        }
LABEL_28:
        v29 = *v3;
        if ( (char *)v3 - (char *)a1 <= 4 )
        {
          if ( (char *)v3 - (char *)a1 == 4 )
            *v3 = *a1;
        }
        else
        {
          memmove(a1 + 1, a1, (char *)v3 - (char *)a1);
        }
        *a1 = v29;
LABEL_24:
        if ( a2 == ++v3 )
          return;
      }
      v8 = a3[22];
      v9 = *(_DWORD *)(v8 + 24LL * (int)v5 + 8);
LABEL_5:
      v10 = *(_DWORD *)(v8 + 24LL * v6 + 8);
      goto LABEL_6;
    }
  }
}
