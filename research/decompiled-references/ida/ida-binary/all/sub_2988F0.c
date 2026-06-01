unsigned __int64 __fastcall sub_2988F0(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 (__fastcall *v6)(__int64); // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, int); // rax
  __int64 v10; // r9
  __int64 i; // r13
  unsigned int *v12; // rax
  __int64 (__fastcall *v13)(__int64, int, int); // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 (__fastcall *v19)(__int64, int); // rax
  __int64 v20; // r9
  __int64 j; // r13
  int *v22; // rax
  __int64 (__fastcall *v23)(__int64, int, int); // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // r8d
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  int v33; // r8d
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rax
  int v36; // eax
  __int64 v37; // [rsp+10h] [rbp-58h]
  __int64 v38; // [rsp+10h] [rbp-58h]
  __int64 v39; // [rsp+10h] [rbp-58h]
  __int64 v40; // [rsp+10h] [rbp-58h]
  unsigned int v41; // [rsp+10h] [rbp-58h]
  int v42; // [rsp+10h] [rbp-58h]
  __int64 v43; // [rsp+18h] [rbp-50h]
  __int64 v44; // [rsp+18h] [rbp-50h]
  unsigned __int64 v45; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( a3 >= 0 )
  {
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    v7 = v6 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : ((__int64 (*)(void))v6)();
    if ( a3 < v7 )
    {
      v8 = *(_QWORD *)a1;
      v9 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 104LL);
      if ( v9 == interactive_graph_t__::vfunc_13 )
      {
        v10 = *(int *)(*(_QWORD *)(a1 + 200) + 24LL * a3 + 8);
      }
      else
      {
        v36 = v9(a1, a3);
        v8 = *(_QWORD *)a1;
        v10 = v36;
      }
      if ( (int)v10 > 0 )
      {
        for ( i = 0; i != v10; ++i )
        {
          v13 = *(__int64 (__fastcall **)(__int64, int, int))(v8 + 120);
          if ( v13 == interactive_graph_t__::vfunc_15 )
          {
            v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 24LL * a3) + 4 * i);
          }
          else
          {
            v38 = v10;
            v18 = v13(a1, a3, i);
            v10 = v38;
            v29 = v18;
          }
          v31 = a2[1];
          v30 = *a2;
          v45 = __PAIR64__(a3, v29);
          v14 = a2[2];
          v15 = v31 + 1;
          if ( (unsigned __int64)&v45 < v30 || (unsigned __int64)&v45 >= v30 + 8 * v14 )
          {
            if ( v14 < v15 )
            {
              v37 = v10;
              v17 = qvector_reserve(a2, v30, v31 + 1, 8);
              v10 = v37;
              *a2 = v17;
              v30 = v17;
              v31 = a2[1];
            }
            *(_QWORD *)(v30 + 8 * v31) = v45;
          }
          else
          {
            if ( v14 < v15 )
            {
              v43 = v10;
              v41 = v29;
              v28 = qvector_reserve(a2, v30, v31 + 1, 8);
              v10 = v43;
              v29 = v41;
              *a2 = v28;
              v30 = v28;
              v31 = a2[1];
            }
            v12 = (unsigned int *)(v30 + 8 * v31);
            *v12 = v29;
            v12[1] = a3;
          }
          ++a2[1];
          v8 = *(_QWORD *)a1;
        }
      }
      v19 = *(__int64 (__fastcall **)(__int64, int))(v8 + 96);
      if ( v19 == interactive_graph_t__::vfunc_12 )
        v20 = *(int *)(*(_QWORD *)(a1 + 176) + 24LL * a3 + 8);
      else
        v20 = (int)v19(a1, a3);
      if ( (int)v20 > 0 )
      {
        for ( j = 0; j != v20; ++j )
        {
          v23 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
          if ( v23 == interactive_graph_t__::vfunc_14 )
          {
            v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL * a3) + 4 * j);
          }
          else
          {
            v40 = v20;
            v27 = v23(a1, a3, j);
            v20 = v40;
            v33 = v27;
          }
          v35 = a2[1];
          v34 = *a2;
          v45 = __PAIR64__(v33, a3);
          v24 = a2[2];
          v25 = v35 + 1;
          if ( (unsigned __int64)&v45 < v34 || (unsigned __int64)&v45 >= v34 + 8 * v24 )
          {
            if ( v24 < v25 )
            {
              v39 = v20;
              v26 = qvector_reserve(a2, v34, v35 + 1, 8);
              v20 = v39;
              *a2 = v26;
              v34 = v26;
              v35 = a2[1];
            }
            *(_QWORD *)(v34 + 8 * v35) = v45;
          }
          else
          {
            if ( v24 < v25 )
            {
              v44 = v20;
              v42 = v33;
              v32 = qvector_reserve(a2, v34, v35 + 1, 8);
              v20 = v44;
              v33 = v42;
              *a2 = v32;
              v34 = v32;
              v35 = a2[1];
            }
            v22 = (int *)(v34 + 8 * v35);
            *v22 = a3;
            v22[1] = v33;
          }
          ++a2[1];
        }
      }
    }
  }
  return v46 - __readfsqword(0x28u);
}
