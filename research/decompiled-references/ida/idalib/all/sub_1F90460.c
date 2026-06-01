void __fastcall sub_1F90460(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r13
  void **v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rbx
  int v17; // r14d
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // [rsp+14h] [rbp-344h]
  __int64 v31; // [rsp+28h] [rbp-330h] BYREF
  __int64 v32; // [rsp+30h] [rbp-328h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-320h]
  void **v34; // [rsp+40h] [rbp-318h]
  void *v35; // [rsp+48h] [rbp-310h]
  __int64 v36; // [rsp+50h] [rbp-308h]
  _BYTE v37[128]; // [rsp+58h] [rbp-300h] BYREF
  void *ptr; // [rsp+D8h] [rbp-280h]
  __int64 v39; // [rsp+E0h] [rbp-278h]
  _BYTE v40[40]; // [rsp+E8h] [rbp-270h] BYREF
  void *v41[2]; // [rsp+110h] [rbp-248h] BYREF
  _BYTE v42[568]; // [rsp+120h] [rbp-238h] BYREF

  v6 = *(_QWORD *)(a2 + 736);
  v7 = *(unsigned int *)(v6 + 56);
  if ( (_DWORD)v7 )
  {
    v8 = a1;
    v9 = v41;
    v33 = a1;
    v41[0] = v42;
    v41[1] = (void *)0x4000000000LL;
    v10 = *(_QWORD *)(a2 + 248);
    v34 = v41;
    v32 = v10;
    v35 = v37;
    ptr = v40;
    v11 = *(_QWORD *)(v6 + 48);
    v12 = 0x800000000LL;
    v39 = 0x800000000LL;
    v13 = *(unsigned int *)(v6 + 56);
    v36 = 0x1000000000LL;
    v14 = v11 + 16 * v13;
    if ( v14 != v11 )
    {
      v15 = v11;
      while ( 1 )
      {
        v16 = *(_QWORD *)v15;
        v17 = *(_DWORD *)(v15 + 8);
        v31 = v16;
        if ( v16 )
        {
          v18 = *(_DWORD *)sub_1F90240((__int64)(v8 + 137), &v31, v7, v12, v11, a6);
          if ( !v18 )
          {
            v22 = v8[6];
            if ( !v22
              || (sub_1EAC1E0(v22), (v18 = *(_DWORD *)sub_1F90240((__int64)(v8 + 137), &v31, v23, v24, v25, v26)) == 0) )
            {
              v29 = *((unsigned int *)v8 + 273);
              v30 = *((_DWORD *)v8 + 273);
              *((_DWORD *)v8 + 273) = v29 + 1;
              v16 = v30;
              *(_DWORD *)sub_1F90240((__int64)(v8 + 137), &v31, v19, v29, v20, v21) = v30;
              v27 = *((unsigned int *)v9 + 2);
              v28 = v27 + 1;
              if ( v27 + 1 <= (unsigned __int64)*((unsigned int *)v9 + 3) )
                goto LABEL_10;
              goto LABEL_13;
            }
          }
          v16 = v18;
        }
        v27 = *((unsigned int *)v9 + 2);
        v28 = v27 + 1;
        if ( v27 + 1 <= (unsigned __int64)*((unsigned int *)v9 + 3) )
          goto LABEL_10;
LABEL_13:
        sub_2237220(v9, v9 + 2, v28, 8);
        v27 = *((unsigned int *)v9 + 2);
LABEL_10:
        v15 += 16;
        *((_QWORD *)*v9 + v27) = v16;
        ++*((_DWORD *)v9 + 2);
        sub_1F6F570(v33, v17, (__int64)v34);
        if ( v14 == v15 )
          break;
        v9 = v34;
        v8 = v33;
      }
    }
    sub_1F6EAE0((__int64)&v32, 0x15u);
    if ( ptr != v40 )
      free(ptr);
    if ( v35 != v37 )
      free(v35);
    if ( v41[0] != v42 )
      free(v41[0]);
  }
}
