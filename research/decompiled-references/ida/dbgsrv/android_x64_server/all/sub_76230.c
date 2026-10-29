/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76230
// Address: 0x0000000000076230

//----- (0000000000076230) ----------------------------------------------------
__int64 __fastcall sub_76230(char *a1, char *a2, __int64 a3, unsigned __int64 a4, __int64 a5, double a6, __m128 a7)
{
  __int64 idc_class; // rbp
  const char *v13; // rax
  const char *v14; // rbx
  size_t v15; // rax
  size_t v16; // r14
  size_t v17; // rbp
  char *v18; // rdi
  void *v19; // rax
  void *v20; // r13
  int v21; // esi
  int v22; // ebp
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  unsigned __int64 *v26; // rax
  char *v27; // r13
  char *v28; // rcx
  int v29; // r15d
  int i; // ebp
  int v31; // eax
  char *v32; // rdi
  __int64 v33; // rbp
  __int64 v34; // rbp
  char *v35; // rbx
  __int64 v36; // rbp
  char *v38; // [rsp+8h] [rbp-100h]
  __int64 v39; // [rsp+10h] [rbp-F8h]
  void *ptr[19]; // [rsp+18h] [rbp-F0h] BYREF
  char v41[8]; // [rsp+B0h] [rbp-58h] BYREF
  void *v42; // [rsp+B8h] [rbp-50h]
  __int128 v43; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v44; // [rsp+D0h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  if ( a2 )
  {
    idc_class = find_idc_class(a2);
    if ( !idc_class )
    {
      LODWORD(a3) = 0;
      set_error_string(0, a2);
      set_qerrno(0x600u);
      sub_75FD0((__int64)a1, a6, a7);
      if ( a5 )
      {
        v13 = qstrerror(0xFFFFFFFF);
        if ( v13 && (v14 = v13, (v15 = strlen(v13)) != 0) )
        {
          v16 = v15;
          v17 = v15 + 1;
          if ( *(_QWORD *)(a5 + 16) >= v15 + 1 )
          {
            v18 = *(char **)a5;
          }
          else
          {
            v18 = (char *)qvector_reserve(a5, *(char **)a5, v15 + 1, 1u);
            *(_QWORD *)a5 = v18;
          }
          *(_QWORD *)(a5 + 8) = v17;
          memmove(v18, v14, v16);
          *(_BYTE *)(*(_QWORD *)a5 + v16) = 0;
        }
        else
        {
          *(_QWORD *)(a5 + 8) = 0;
        }
        LODWORD(a3) = 0;
      }
      return (unsigned int)a3;
    }
  }
  else
  {
    idc_class = 0;
  }
  v39 = a5;
  v43 = 0;
  v42 = nullptr;
  v41[0] = 5;
  v19 = operator new(0x20u);
  v20 = v19;
  if ( idc_class )
    v21 = *(_DWORD *)(idc_class + 28);
  else
    v21 = 0;
  sub_6B170((__int64)v19, v21);
  v42 = v20;
  if ( !idc_class )
    goto LABEL_25;
  sub_37F60((__int64)ptr, a2);
  v22 = sub_75750(idc_class, (__int64)ptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  if ( v22 == -1 )
  {
LABEL_25:
    LOBYTE(a3) = 1;
    move_idcv(a1, v41, 0.0, a7);
  }
  else
  {
    v23 = a4 + 1;
    if ( (a4 + 1) >> 59 )
    {
      v27 = (char *)qalloc_or_throw(0x7FFFFFFFFFFFFFFFLL);
    }
    else
    {
      v24 = 32 * v23 + 8;
      v25 = -1;
      if ( 32 * v23 >= 0xFFFFFFFFFFFFFFF8LL )
        v24 = -1;
      if ( is_mul_ok(0x20u, v23) )
        v25 = v24;
      v26 = (unsigned __int64 *)operator new[](v25);
      v27 = (char *)(v26 + 1);
      *v26 = v23;
      if ( a4 != -1 )
      {
        v28 = (char *)(v26 + 1);
        do
        {
          *v28 = 2;
          *(_OWORD *)(v28 + 8) = 0;
          *((_QWORD *)v28 + 3) = 0;
          *((_QWORD *)v28 + 1) = 0;
          v28 += 32;
        }
        while ( v28 != &v27[32 * v23] );
      }
    }
    copy_idcv(v27, v41, 0.0, a7);
    v38 = a1;
    v29 = v22;
    for ( i = 1; ; ++i )
    {
      v31 = i - 1;
      if ( i - 1 >= a4 )
        break;
      v32 = &v27[32 * i];
      copy_idcv(v32, (char *)(a3 + 32LL * v31), 0.0, a7);
    }
    sub_78CB0((__int64)ptr, 0, 0);
    LODWORD(a3) = sub_766D0(ptr, nullptr, v29, v23, v27, v38, 0.0, a7, v39);
    if ( v27 )
    {
      v33 = *((_QWORD *)v27 - 1);
      if ( v33 )
      {
        v34 = 32 * v33;
        v35 = &v27[v34 - 32];
        v36 = -v34;
        do
        {
          free_idcv(v35, 0.0, a7);
          v35 -= 32;
          v36 += 32;
        }
        while ( v36 );
      }
      operator delete[](v27 - 8);
    }
    sub_78F40((__int64)ptr, 0.0, a7);
  }
  if ( v41[0] == 5 )
  {
    sub_72DD0((char **)v42, v41, 0.0, a7);
  }
  else if ( v41[0] == 7 && v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
    v42 = nullptr;
    *((_QWORD *)&v43 + 1) = 0;
  }
  return (unsigned int)a3;
}
