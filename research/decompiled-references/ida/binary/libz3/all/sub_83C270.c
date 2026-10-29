unsigned int *__fastcall sub_83C270(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int *result; // rax
  unsigned int *v5; // rbp
  _QWORD *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rax
  void *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rdx
  void *v12; // r12
  unsigned int v13; // r13d
  __int64 v14; // r12
  void *v15; // r13
  _QWORD *v16; // rax
  unsigned int v17; // r9d
  unsigned int v18; // r15d
  size_t v19; // rdi
  __int64 v20; // rax
  _DWORD *v21; // r14
  _DWORD *v22; // r10
  __int64 v23; // rax
  _QWORD *v24; // rdx
  _DWORD *v25; // rdi
  _DWORD *j; // rax
  int v27; // ecx
  char v28; // r8
  __int64 v29; // rcx
  char v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  _DWORD *v33; // r13
  _DWORD *v34; // rbp
  _QWORD *v35; // r14
  void *v36; // r12
  _DWORD *v37; // rsi
  char **exception; // rbp
  unsigned int *i; // [rsp+20h] [rbp-D8h]
  __int64 v41; // [rsp+28h] [rbp-D0h]
  _DWORD *v42; // [rsp+30h] [rbp-C8h]
  _DWORD *v43; // [rsp+30h] [rbp-C8h]
  unsigned int *v44; // [rsp+38h] [rbp-C0h]
  _QWORD v45[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v46[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v47[4]; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v48; // [rsp+90h] [rbp-68h]
  int v49; // [rsp+98h] [rbp-60h] BYREF
  char v50; // [rsp+9Ch] [rbp-5Ch]
  __int64 v51; // [rsp+A0h] [rbp-58h]
  int v52; // [rsp+A8h] [rbp-50h] BYREF
  char v53; // [rsp+ACh] [rbp-4Ch]
  __int64 v54; // [rsp+B0h] [rbp-48h]

  if ( !*(_QWORD *)(a2 + 56) )
    std::__throw_bad_function_call();
  v3 = (*(__int64 (__fastcall **)(__int64))(a2 + 64))(a2 + 40);
  result = (unsigned int *)sub_1005490(a1, v3);
  v5 = *(unsigned int **)result;
  if ( *(_QWORD *)result )
  {
    result = &v5[*(v5 - 1)];
    for ( i = result; i != v5; result = (unsigned int *)sub_182CBA0(v12, v46) )
    {
      v13 = *v5;
      v45[0] = 1;
      v45[1] = 0;
      v46[0] = 1;
      v46[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v46);
      BYTE4(v46[0]) &= ~1u;
      LODWORD(v46[0]) = 1;
      v14 = *(_QWORD *)(a3 + 56);
      sub_82E330(v14, v13);
      v48 = v13;
      v15 = qword_1C7F2C0;
      v50 &= 0xFCu;
      v53 &= 0xFCu;
      v49 = 0;
      v51 = 0;
      v52 = 1;
      v54 = 0;
      if ( (v45[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v49, v45);
        if ( (v46[0] & 0x100000000LL) == 0 )
        {
LABEL_6:
          v6 = *(_QWORD **)(v14 + 720);
          v53 &= ~1u;
          v52 = v46[0];
          if ( v6 )
            goto LABEL_7;
          goto LABEL_13;
        }
      }
      else
      {
        v49 = v45[0];
        if ( (v46[0] & 0x100000000LL) == 0 )
          goto LABEL_6;
      }
      sub_182C690(v15, &v52, v46);
      v6 = *(_QWORD **)(v14 + 720);
      if ( v6 )
      {
LABEL_7:
        v7 = *((unsigned int *)v6 - 1);
        if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
        {
          v17 = (unsigned int)(3 * v7 + 1) >> 1;
          v18 = v17;
          v19 = 40 * v17 + 8;
          if ( 40 * (int)v7 + 8 >= (unsigned int)v19 || (unsigned int)v7 >= v17 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v47, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v47);
            sub_233E40((__int64)v47);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v20 = sub_186B270(v19);
          v21 = *(_DWORD **)(v14 + 720);
          v22 = (_DWORD *)v20;
          v6 = (_QWORD *)(v20 + 8);
          if ( v21 )
          {
            v23 = (unsigned int)*(v21 - 1);
            v24 = v6;
            v22[1] = v23;
            v25 = &v21[10 * v23];
            for ( j = v21; v25 != j; *(v24 - 1) = v31 )
            {
              v27 = *j;
              j += 10;
              v24 += 5;
              *((_DWORD *)v24 - 10) = v27;
              v28 = *((_BYTE *)j - 28);
              *((_DWORD *)v24 - 8) = *(j - 8);
              *((_BYTE *)v24 - 28) = v28 & 3 | *((_BYTE *)v24 - 28) & 0xFC;
              v29 = *((_QWORD *)j - 3);
              *((_QWORD *)j - 3) = 0;
              *(v24 - 3) = v29;
              v30 = *((_BYTE *)j - 12);
              *((_DWORD *)v24 - 4) = *(j - 4);
              *((_BYTE *)v24 - 12) = v30 & 3 | *((_BYTE *)v24 - 12) & 0xFC;
              v31 = *((_QWORD *)j - 1);
              *((_QWORD *)j - 1) = 0;
            }
            v32 = (unsigned int)*(v21 - 1);
            if ( (_DWORD)v32 )
            {
              v41 = v14;
              v42 = v22;
              v33 = &v21[10 * v32];
              v44 = v5;
              v34 = v21;
              v35 = v6;
              do
              {
                v36 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v34 + 2);
                v37 = v34 + 6;
                v34 += 10;
                sub_182CBA0(v36, v37);
              }
              while ( v34 != v33 );
              v14 = v41;
              v6 = v35;
              v22 = v42;
              v5 = v44;
              v21 = *(_DWORD **)(v41 + 720);
            }
            v43 = v22;
            sub_186B220(v21 - 2);
            v22 = v43;
            v8 = &v6[5 * (unsigned int)v43[1]];
          }
          else
          {
            *(_DWORD *)(v20 + 4) = 0;
            v8 = (_QWORD *)(v20 + 8);
          }
          *(_QWORD *)(v14 + 720) = v6;
          *v22 = v18;
        }
        else
        {
          v8 = &v6[5 * v7];
        }
        goto LABEL_9;
      }
LABEL_13:
      v16 = (_QWORD *)sub_186B270(0x58u);
      v6 = v16 + 1;
      *v16 = 2;
      *(_QWORD *)(v14 + 720) = v16 + 1;
      v8 = v16 + 1;
LABEL_9:
      v9 = qword_1C7F2C0;
      ++v5;
      *(_DWORD *)v8 = v48;
      *((_DWORD *)v8 + 2) = v49;
      *((_BYTE *)v8 + 12) = v50 & 3 | *((_BYTE *)v8 + 12) & 0xFC;
      v10 = v51;
      v51 = 0;
      v8[2] = v10;
      *((_DWORD *)v8 + 6) = v52;
      *((_BYTE *)v8 + 28) = v53 & 3 | *((_BYTE *)v8 + 28) & 0xFC;
      v11 = v54;
      v54 = 0;
      v8[4] = v11;
      ++*((_DWORD *)v6 - 1);
      sub_182CBA0(v9, &v49);
      sub_182CBA0(v9, &v52);
      v12 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v45);
    }
  }
  return result;
}

