__int64 __fastcall sub_3BE010(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 a5, const char *a6, char a7)
{
  char v11; // r8
  size_t v12; // r14
  int v13; // r9d
  const char *v14; // rsi
  __int64 v15; // rdx
  double v16; // xmm0_8
  int v17; // eax
  int v18; // r13d
  __int64 v19; // r12
  unsigned __int64 v20; // rbp
  double v21; // xmm0_8
  const char *v23; // r8
  void *v24; // rdi
  size_t v25; // r8
  const char *v26; // r9
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  size_t v31; // [rsp+8h] [rbp-250h]
  const char *v32; // [rsp+8h] [rbp-250h]
  const char *v33; // [rsp+10h] [rbp-248h]
  void *v35; // [rsp+30h] [rbp-228h] BYREF
  __int128 v36; // [rsp+38h] [rbp-220h]
  void *v37; // [rsp+50h] [rbp-208h] BYREF
  __int128 v38; // [rsp+58h] [rbp-200h]
  _QWORD v39[33]; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v40; // [rsp+178h] [rbp-E0h]
  __int64 v41; // [rsp+180h] [rbp-D8h]
  char v42[8]; // [rsp+190h] [rbp-C8h] BYREF
  char v43[8]; // [rsp+198h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+1A0h] [rbp-B8h]
  __int64 v45; // [rsp+1A8h] [rbp-B0h]
  void *v46; // [rsp+1B8h] [rbp-A0h]
  unsigned __int64 v47; // [rsp+1C0h] [rbp-98h]
  __int64 v48; // [rsp+1E0h] [rbp-78h]
  __int64 v49; // [rsp+1E8h] [rbp-70h]
  __int64 v50; // [rsp+1F8h] [rbp-60h]
  __int64 v51; // [rsp+200h] [rbp-58h]
  unsigned __int64 v52; // [rsp+218h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( a4 )
  {
    v35 = nullptr;
    v11 = a7;
    v37 = nullptr;
    v36 = 0;
    v38 = 0;
    if ( a6 )
    {
      v12 = strlen(a6);
      v37 = (void *)qvector_reserve(&v37, 0, v12 + 1, 1);
      *(_QWORD *)&v38 = v12 + 1;
      memmove(v37, a6, v12);
      v11 = a7;
      *((_BYTE *)v37 + v12) = 0;
    }
    sub_3BCE60((__int64)v39, a4, a5, (__int64)&v37, v11);
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37, (const char *)a4);
    }
    v14 = nullptr;
    v16 = callui(203, 0, (unsigned int)v39, (unsigned int)&v35, (unsigned int)&callui, v13);
    v18 = v17;
    if ( a2 )
    {
      v14 = v43;
      copy_tinfo_t(a2, v43, v15);
    }
    if ( a1 )
    {
      v19 = v36;
      if ( !(_QWORD)v36 || (v25 = v36 - 1, (_QWORD)v36 == 1) )
      {
        a1[1] = 0;
      }
      else
      {
        v26 = (const char *)v35;
        v27 = (void *)*a1;
        if ( a1[2] < (unsigned __int64)v36 )
        {
          v33 = (const char *)v35;
          v31 = v36 - 1;
          v28 = qvector_reserve(a1, *a1, v36, 1);
          *a1 = v28;
          v26 = v33;
          v27 = (void *)v28;
          v25 = v31;
        }
        a1[1] = v19;
        v14 = v26;
        memmove(v27, v26, v25);
        *(_BYTE *)(*a1 + v19 - 1) = 0;
      }
    }
    if ( a3 )
    {
      v20 = v47;
      if ( v47 > 1 )
      {
        v23 = (const char *)v46;
        v24 = (void *)*a3;
        if ( a3[2] < v47 )
        {
          v32 = (const char *)v46;
          v29 = qvector_reserve(a3, *a3, v47, 1);
          *a3 = v29;
          v23 = v32;
          v24 = (void *)v29;
        }
        a3[1] = v20;
        v14 = v23;
        memmove(v24, v23, v20 - 1);
        *(_BYTE *)(*a3 + v20 - 1) = 0;
      }
      else
      {
        a3[1] = 0;
      }
    }
    if ( a7 )
      LOBYTE(a3) = v18 != -1;
    else
      LOBYTE(a3) = v18 == 1;
    v39[0] = &edit_func_dialog_t___vtable;
    if ( v50 )
    {
      v51 = 0;
      v16 = qfree(v50, v14, v16);
    }
    if ( v48 )
    {
      v49 = 0;
      v16 = qfree(v48, v14, v16);
    }
    if ( v46 )
    {
      v47 = 0;
      v16 = qfree(v46, v14, v16);
    }
    if ( v44 )
    {
      v45 = 0;
      v16 = qfree(v44, v14, v16);
    }
    clear_tinfo_t(v43);
    clear_tinfo_t(v42);
    if ( v40 )
    {
      v41 = 0;
      qfree(v40, v14, v16);
    }
    v21 = forms::dialog_desc_t__::vfunc_0(v39, v14);
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35, v14, v21);
    }
  }
  else
  {
    LODWORD(a3) = 0;
  }
  return (unsigned int)a3;
}
