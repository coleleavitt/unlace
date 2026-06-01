__int64 __fastcall sub_2976C0(__int64 a1, __int64 *a2, int a3, char a4, signed int a5, double a6)
{
  __int64 (__fastcall *v7)(__int64, unsigned int); // rax
  __int64 (*v8)(void); // rax
  int v9; // eax
  unsigned int *v10; // r8
  unsigned int v11; // r12d
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r12
  __int64 *v15; // rbp
  __int64 v16; // rax
  signed int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // eax
  int v21; // r10d
  __int64 (__fastcall *v22)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v23)(__int64); // rax
  signed int v24; // eax
  _DWORD *v25; // rax
  unsigned int v27; // eax
  __int64 *v28; // rax
  signed int v29; // ebx
  unsigned int v30; // ebp
  __int64 v31; // r13
  int v32; // r15d
  __int64 *v33; // r14
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rsi
  signed int v40; // eax
  signed int v41; // edx
  __int64 v42; // rax
  __int64 *v43; // rcx
  __int64 (__fastcall *v44)(__int64, unsigned int); // r9
  __int64 (__fastcall *v45)(__int64); // rax
  signed int v46; // eax
  _DWORD *v47; // rax
  int v48; // eax
  unsigned int *v49; // [rsp+0h] [rbp-68h]
  unsigned int v50; // [rsp+0h] [rbp-68h]
  __int64 *v51; // [rsp+0h] [rbp-68h]
  __int64 *v52; // [rsp+0h] [rbp-68h]
  int v53; // [rsp+0h] [rbp-68h]
  int v54; // [rsp+0h] [rbp-68h]
  unsigned int v56; // [rsp+Ch] [rbp-5Ch]
  int v58; // [rsp+14h] [rbp-54h]
  unsigned int v59; // [rsp+18h] [rbp-50h]
  int v61; // [rsp+20h] [rbp-48h]
  unsigned int *v62; // [rsp+28h] [rbp-40h]

  v59 = *(_DWORD *)(*a2 + 4LL * a3);
  v7 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
  if ( v7 == interactive_graph_t__::vfunc_19 )
  {
    v8 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
    if ( (char *)v8 == (char *)interactive_graph_t__::vfunc_7 )
      v9 = *(_DWORD *)(a1 + 184);
    else
      v9 = v8();
    if ( (int)v59 >= v9 )
      sub_16B930((__int64)"nrect(%d) failed", v59);
    v10 = (unsigned int *)(*(_QWORD *)(a1 + 224) + 16LL * (int)v59);
  }
  else
  {
    v10 = (unsigned int *)v7(a1, v59);
  }
  v11 = *v10;
  v12 = *(_QWORD *)a1;
  v49 = v10;
  if ( a4 )
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v12 + 104))(a1, v59);
  else
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v12 + 96))(a1, v59);
  if ( v13 > 0 )
  {
    v56 = 0;
    v14 = a1;
    v15 = a2;
    v58 = 0;
    v62 = v49;
    v61 = v13;
    while ( 1 )
    {
      v16 = *(_QWORD *)v14;
      if ( a4 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v16 + 120))(v14, v59, v56);
        if ( a5 <= v17 && (int)v59 < a5 )
          goto LABEL_13;
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 96LL))(v14, (unsigned int)v17);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v16 + 112))(v14, v59, v56);
        if ( a5 <= v17 && (int)v59 < a5 )
        {
LABEL_13:
          v18 = *(_QWORD *)v14;
          v19 = (unsigned int)v17;
          if ( a4 )
          {
            while ( 1 )
            {
              v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v18 + 120))(v14, v19, 0);
              v19 = v20;
              if ( a5 > (int)v20 )
                break;
              v18 = *(_QWORD *)v14;
            }
          }
          else
          {
            while ( 1 )
            {
              v27 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v18 + 112))(v14, v19, 0);
              v19 = v27;
              if ( a5 > (int)v27 )
                break;
              v18 = *(_QWORD *)v14;
            }
          }
          v17 = v19;
          v21 = 1;
          goto LABEL_18;
        }
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 104LL))(v14, (unsigned int)v17);
      }
LABEL_18:
      v22 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v14 + 152LL);
      if ( v22 == interactive_graph_t__::vfunc_19 )
      {
        v23 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL);
        if ( v23 == interactive_graph_t__::vfunc_7 )
        {
          v24 = *(_DWORD *)(v14 + 184);
        }
        else
        {
          v54 = v21;
          v24 = v23(v14);
          v21 = v54;
        }
        if ( v17 >= v24 )
          sub_16B930((__int64)"nrect(%d) failed", v17);
        v25 = (_DWORD *)(*(_QWORD *)(v14 + 224) + 16LL * v17);
      }
      else
      {
        v53 = v21;
        v25 = (_DWORD *)v22(v14, v17);
        v21 = v53;
      }
      v58 += (*v25 + v25[2]) / 2;
      if ( v21 > 1 )
      {
        v28 = v15;
        v50 = v17;
        v29 = 0;
        v30 = 0;
        v31 = 0x7FFFFFFF;
        v32 = v21;
        v33 = v28;
        while ( 1 )
        {
          v34 = *(_QWORD *)v14;
          if ( a4 )
          {
            v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v34 + 112))(v14, v50, v30);
            v37 = *v33;
            v38 = v33[1];
            v39 = *v33 + 4 * v38;
            if ( *v33 == v39 )
              break;
          }
          else
          {
            v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v34 + 120))(v14, v50, v30);
            v37 = *v33;
            v38 = v33[1];
            v39 = *v33 + 4 * v38;
            if ( *v33 == v39 )
              break;
          }
          v38 = v37;
          while ( *(_DWORD *)v38 != v35 )
          {
            v38 += 4;
            if ( v39 == v38 )
              goto LABEL_57;
          }
          v38 -= v37;
          v39 = v38 >> 2;
          if ( v38 == -4 )
            break;
          v40 = v31;
          v41 = v29;
          if ( (int)v31 > v39 )
            v40 = v39;
          if ( v29 < v39 )
            v41 = v39;
          ++v30;
          v31 = (unsigned int)v40;
          v29 = v41;
          if ( v32 == v30 )
          {
            v15 = v33;
            if ( v40 <= v41 )
            {
              v42 = v14;
              v43 = v33;
              LODWORD(v14) = v31;
              v32 = 0;
              LODWORD(v33) = 0;
              v30 = v41;
              v31 = v42;
              goto LABEL_54;
            }
            v48 = 5;
            goto LABEL_62;
          }
        }
LABEL_57:
        if ( under_debugger )
          BUG();
        interr(40154, v39, v38, v36, a6);
LABEL_59:
        v51 = v43;
        v47 = (_DWORD *)v44(v31, v29);
        v43 = v51;
        while ( 1 )
        {
          LODWORD(v14) = v14 + 1;
          v32 = v32 + v47[2] + 10 - *v47;
          if ( (int)v14 > (int)v30 )
            break;
          v37 = *v43;
LABEL_54:
          if ( a3 == (_DWORD)v14 )
            LODWORD(v33) = v32 + (int)(v62[2] - *v62) / 2;
          v29 = *(_DWORD *)(v37 + 4LL * (int)v14);
          v44 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v31 + 152LL);
          if ( v44 != interactive_graph_t__::vfunc_19 )
            goto LABEL_59;
          v45 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 56LL);
          if ( v45 == interactive_graph_t__::vfunc_7 )
          {
            v46 = *(_DWORD *)(v31 + 184);
          }
          else
          {
            v52 = v43;
            v46 = v45(v31);
            v43 = v52;
          }
          if ( v29 >= v46 )
            sub_16B930((__int64)"nrect(%d) failed", v29);
          v47 = (_DWORD *)(*(_QWORD *)(v31 + 224) + 16LL * v29);
        }
        v58 += (int)v33;
        v14 = v31;
        v15 = v43;
        v48 = (v32 - 10) / -2;
LABEL_62:
        v58 += v48;
      }
      if ( ++v56 == v61 )
        return (unsigned int)(v58 / (int)v56 - (int)(v62[2] - *v62) / 2);
    }
  }
  return v11;
}
