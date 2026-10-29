__int64 __fastcall sub_554950(
        __int64 *a1,
        void **a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 *a6,
        char a7)
{
  void **p_ptr; // r13
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64 *); // rdx
  __int64 (__fastcall *v12)(__int64, double); // rax
  __int64 v13; // rax
  __int64 *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rax
  __int64 (__fastcall *v24)(__int64); // rax
  __int64 result; // rax
  __int64 v26; // rax
  unsigned __int8 v28; // [rsp+0h] [rbp-128h]
  __int64 tinfo_property; // [rsp+28h] [rbp-100h] BYREF
  void *ptr; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v32; // [rsp+38h] [rbp-F0h]
  __int64 v33; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-D0h]
  void *v35; // [rsp+60h] [rbp-C8h]
  __int128 v36; // [rsp+68h] [rbp-C0h]
  void *v37; // [rsp+78h] [rbp-B0h]
  __int128 v38; // [rsp+80h] [rbp-A8h]
  _OWORD v39[3]; // [rsp+90h] [rbp-98h] BYREF
  char *v40; // [rsp+C0h] [rbp-68h]
  int v41; // [rsp+C8h] [rbp-60h]
  __int64 v42; // [rsp+D0h] [rbp-58h]
  char v43; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+E8h] [rbp-40h]

  p_ptr = a2;
  v10 = *a6;
  v44 = __readfsqword(0x28u);
  ptr = nullptr;
  if ( !a2 )
    p_ptr = &ptr;
  v32 = 0;
  tinfo_property = get_tinfo_property(v10, 10);
  v11 = **(__int64 (__fastcall ***)(__int64 *))a4;
  if ( v11 != sub_5547B0 )
  {
    v26 = ((__int64 (__fastcall *)(__int64, double))v11)(a4, 0.0);
LABEL_31:
    v14 = (__int64 *)v26;
    goto LABEL_11;
  }
  v12 = *(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)a4 + 8LL);
  if ( (char *)v12 != (char *)sub_554050 )
  {
    v26 = v12(a4, 0.0);
    goto LABEL_31;
  }
  v13 = *(_QWORD *)(a4 + 8);
  v34 = 0;
  v35 = nullptr;
  v37 = nullptr;
  v40 = (_BYTE *)(&dword_0 + 1);
  v41 = -1;
  v42 = 0;
  v43 = 0;
  v33 = v13;
  v36 = 0;
  v38 = 0;
  v39[0] = 0;
  if ( (unsigned int)find_tinfo_udt_member((int)&v33) == -1 )
  {
    v14 = nullptr;
  }
  else
  {
    v14 = (__int64 *)(a4 + 16);
    *(_QWORD *)(a4 + 24) = v33;
    copy_tinfo_t(a4 + 16);
    v15 = *(_QWORD *)&v39[0];
    *(_QWORD *)(a4 + 8) -= v33;
    v16 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 32) = v15;
    *(_QWORD *)&v39[0] = v16;
  }
  clear_tinfo_t(v39);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
LABEL_11:
  if ( v14 )
  {
    while ( (unsigned int)lexcompare_tinfo(*v14, tinfo_property, 0, v17, v18) )
    {
      v22 = sub_550F40(a1, (__int64)p_ptr, a3, *v14, a5, 0);
      if ( v22 )
        goto LABEL_26;
      v23 = v14[1];
      if ( a5 < v23 )
        break;
      a5 -= v23;
      v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL);
      if ( (char *)v24 == (char *)sub_554050 )
      {
        v19 = *(_QWORD *)(a4 + 8);
        v36 = 0;
        v34 = 0;
        v35 = nullptr;
        v37 = nullptr;
        v40 = (char *)&dword_0 + 1;
        v41 = -1;
        v42 = 0;
        v43 = 0;
        v33 = v19;
        v38 = 0;
        v39[0] = 0;
        if ( (unsigned int)find_tinfo_udt_member((int)&v33) == -1 )
        {
          v14 = nullptr;
        }
        else
        {
          v14 = (__int64 *)(a4 + 16);
          *(_QWORD *)(a4 + 24) = v33;
          copy_tinfo_t(a4 + 16);
          v20 = *(_QWORD *)&v39[0];
          *(_QWORD *)(a4 + 8) -= v33;
          v21 = *(_QWORD *)(a4 + 32);
          *(_QWORD *)(a4 + 32) = v20;
          *(_QWORD *)&v39[0] = v21;
        }
        clear_tinfo_t(v39);
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree(v37);
        }
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree(v35);
        }
        if ( !v14 )
          break;
      }
      else
      {
        v14 = (__int64 *)v24(a4);
        if ( !v14 )
          break;
      }
    }
  }
  v22 = sub_550F40(a1, (__int64)p_ptr, a3, tinfo_property, a5, a7);
LABEL_26:
  v28 = v22;
  clear_tinfo_t(&tinfo_property);
  result = v28;
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
    return v28;
  }
  return result;
}
