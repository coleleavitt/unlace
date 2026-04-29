__int64 __fastcall sub_156D0(int *a1, unsigned __int64 a2, int a3, const char *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  const char *v12; // r9
  unsigned __int64 v13; // rbx
  __int64 v14; // rbx
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // rax
  int v19; // r14d
  const char *v20; // rcx
  unsigned __int64 v21; // rbp
  unsigned int v22; // r13d
  struct _Unwind_Exception *v23; // rbx
  unsigned __int64 v24; // [rsp+8h] [rbp-70h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-60h] BYREF
  int v26; // [rsp+1Ch] [rbp-5Ch] BYREF
  const char *v27; // [rsp+20h] [rbp-58h] BYREF
  __int128 v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v24 = a2;
  v29 = __readfsqword(0x28u);
  v27 = (const char *)a2;
  if ( !sub_7BA0((int *)&v25, (__int64 *)&v27, 0) )
    return -1;
  v6 = sub_5F10(a2, (int)v27);
  v7 = v6;
  if ( v6 <= 0 )
    return -1;
  v8 = v25;
  if ( a3 )
    v8 = dword_28410 + v25;
  v9 = *a1;
  v10 = *((_QWORD *)a1 + 1);
  dword_28410 = v8;
  v27 = nullptr;
  v28 = 0;
  v11 = (unsigned int)(v9 - 1);
  if ( v11 >= *(_QWORD *)(v10 + 56) )
  {
    v23 = (struct _Unwind_Exception *)sub_59F0();
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
    _Unwind_Resume(v23);
  }
  if ( (unsigned __int8)sub_8BD0((__int64)&v27, *(_QWORD *)(*(_QWORD *)(v10 + 48) + 8 * v11), v8, 0x4Eu) )
    sub_57A0(&v27);
  v12 = s1;
  if ( (_QWORD)v28 )
    v12 = v27;
  sub_13370(a2, (__int64)"[0x%x] %s_method: (0x%x) '%s'", a3, a4, dword_28410, v12);
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  v13 = a2 + v7;
  if ( a2 >= v13 )
    return -1;
  if ( v13 < *((_QWORD *)a1 + 19) )
    return -1;
  if ( v13 >= *((_QWORD *)a1 + 20) )
    return -1;
  v24 = v13;
  v27 = (const char *)v13;
  if ( !sub_7BA0(&v26, (__int64 *)&v27, 0) )
    return -1;
  v16 = sub_5F10(v13, (int)v27);
  v17 = v16;
  if ( v16 <= 0 )
    return -1;
  v18 = num_flag();
  set_op_type(v13, v18, 0);
  v19 = v26;
  sub_7A30((__int64 *)&v27, v26);
  v20 = s1;
  if ( (_QWORD)v28 )
    v20 = v27;
  sub_13370(v13, (__int64)"Access flags: (0x%x) '%s'", v19, v20);
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  v21 = v13 + v17;
  if ( v13 >= v21 )
    return -1;
  if ( v21 < *((_QWORD *)a1 + 19) )
    return -1;
  if ( v21 >= *((_QWORD *)a1 + 20) )
    return -1;
  v24 = v21;
  if ( !sub_7BA0((int *)&v27, (__int64 *)&v24, 0) )
    return -1;
  v22 = (unsigned int)v27;
  sub_13370(v21, (__int64)"%s: 0x%x", "Offset to the code", (_DWORD)v27);
  v14 = v24;
  sub_5F10(v21, v24);
  add_dref(v21, *((_QWORD *)a1 + 19) + v22, 5);
  return v14;
}
