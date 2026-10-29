/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76F90
// Address: 0x0000000000076F90

//----- (0000000000076F90) ----------------------------------------------------
__int64 __fastcall sub_76F90(
        char *a1,
        char *a2,
        char *a3,
        char *a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  char *v11; // r13
  char *v12; // rbp
  int v13; // r13d
  unsigned __int64 v14; // rax
  const char *v15; // rax
  const char *v16; // rbx
  size_t v17; // rax
  size_t v18; // rbp
  size_t v19; // r14
  char *v20; // rdi
  unsigned int v21; // r14d
  char *v23; // rdi
  void *v24; // r15
  unsigned __int64 v25; // rbx
  __int64 i; // rbp
  char *v27; // [rsp+10h] [rbp-118h]
  void *v28[2]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v29; // [rsp+30h] [rbp-F8h]
  _QWORD v30[19]; // [rsp+38h] [rbp-F0h] BYREF
  char v31[8]; // [rsp+D0h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+D8h] [rbp-50h]
  __int64 v33; // [rsp+E8h] [rbp-40h]
  unsigned __int64 v34; // [rsp+F0h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  v31[0] = 2;
  *(_OWORD *)ptr = 0;
  v33 = 0;
  if ( !a2 || a3 )
  {
    if ( (unsigned int)get_idcv_attr(v31, (__int64)a2, a3, 0, 0.0, a8) )
      goto LABEL_13;
  }
  else
  {
    copy_idcv(v31, a2, 0.0, a8);
  }
  if ( deref_idcv(v31, 2, 0.0, a8) )
  {
    if ( v31[0] == 6 )
    {
      *(_OWORD *)v28 = 0;
      v29 = 0;
      if ( a2 )
      {
        sub_773D0((__int64)v28, a5 + 1, 0.0, a8);
        v11 = (char *)v28[0];
        copy_idcv((char *)v28[0], a2, 0.0, a8);
        if ( a5 )
        {
          v27 = v11;
          v12 = v11 + 32;
          v13 = 1;
          do
          {
            copy_idcv(v12, a4, 0.0, a8);
            a4 += 32;
            v14 = v13;
            v12 += 32;
            ++v13;
          }
          while ( v14 < a5 );
          LODWORD(a5) = a5 + 1;
          v11 = v27;
        }
        else
        {
          LODWORD(a5) = 1;
        }
      }
      else
      {
        v11 = a4;
      }
      sub_78CB0((__int64)v30, 0, 0);
      v21 = sub_766D0(v30, nullptr, (int)ptr[0], a5, v11, a1, 0.0, a8, a6);
      sub_78F40((__int64)v30, 0.0, a8);
      v23 = (char *)v28[0];
      if ( v28[0] )
      {
        v24 = v28[1];
        if ( v28[1] )
        {
          v25 = 1;
          for ( i = 0; ; i += 32 )
          {
            free_idcv(&v23[i], 0.0, a8);
            if ( v25 >= (unsigned __int64)v24 )
              break;
            v23 = (char *)v28[0];
            ++v25;
          }
          v23 = (char *)v28[0];
        }
        v28[1] = nullptr;
        qfree(v23);
        v28[0] = nullptr;
        v29 = 0;
      }
      goto LABEL_22;
    }
    set_qerrno(0x605u);
  }
LABEL_13:
  sub_75FD0((__int64)a1, 0.0, a8);
  if ( a6 )
  {
    v15 = qstrerror(0xFFFFFFFF);
    v16 = v15;
    if ( v15 && (v17 = strlen(v15)) != 0 )
    {
      v18 = v17;
      v19 = v17 + 1;
      if ( *(_QWORD *)(a6 + 16) >= v17 + 1 )
      {
        v20 = *(char **)a6;
      }
      else
      {
        v20 = (char *)qvector_reserve(a6, *(char **)a6, v17 + 1, 1u);
        *(_QWORD *)a6 = v20;
      }
      *(_QWORD *)(a6 + 8) = v19;
      memmove(v20, v16, v18);
      *(_BYTE *)(*(_QWORD *)a6 + v18) = 0;
    }
    else
    {
      *(_QWORD *)(a6 + 8) = 0;
    }
  }
  v21 = 0;
LABEL_22:
  if ( v31[0] == 5 )
  {
    sub_72DD0((char **)ptr[0], v31, 0.0, a8);
  }
  else if ( v31[0] == 7 && ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v33 = 0;
  }
  return v21;
}
