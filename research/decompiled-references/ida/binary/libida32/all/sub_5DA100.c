__int64 __fastcall sub_5DA100(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  char tinfo_details; // al
  char *v8; // rdi
  char v9; // dl
  char *v10; // rax
  __int64 v11; // r13
  char *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rcx
  unsigned int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // r14
  char *v25; // rbx
  void *v26; // rdi
  void *v27; // rdi
  __int64 v29; // rax
  int v32[2]; // [rsp+28h] [rbp-B8h] BYREF
  void *ptr; // [rsp+30h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+38h] [rbp-A8h]
  _QWORD v35[4]; // [rsp+50h] [rbp-90h] BYREF
  void *v36; // [rsp+70h] [rbp-70h] BYREF
  __int128 v37; // [rsp+78h] [rbp-68h]
  __int128 v38; // [rsp+88h] [rbp-58h]
  __int64 v39; // [rsp+98h] [rbp-48h]
  int v40; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-38h]

  v5 = *a2;
  v41 = __readfsqword(0x28u);
  v36 = nullptr;
  v39 = 0;
  v40 = 1;
  v37 = 0;
  v38 = 0;
  tinfo_details = get_tinfo_details(v5, 13, &v36);
  v8 = (char *)v36;
  v9 = tinfo_details;
  v10 = (char *)v36;
  if ( v9 )
  {
    v11 = 0;
    if ( !(_QWORD)v37 )
    {
      v18 = 0;
      if ( !v36 )
        return v18;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v8 = v10;
      v12 = &v10[128 * v11];
      v13 = *((_DWORD *)v12 + 29);
      if ( (v13 & 0x20) == 0 )
        break;
      v14 = a1[3];
      v15 = a1[2];
      if ( a1[4] < (unsigned __int64)(v14 + 1) )
      {
        v29 = qvector_reserve(a1 + 2, v15, v14 + 1, 16);
        a1[2] = v29;
        v15 = v29;
        v14 = a1[3];
      }
      v16 = v15 + 16 * v14;
      *(_OWORD *)v16 = 0;
      ++a1[3];
      copy_tinfo_t(v16);
      v17 = *(_QWORD *)v12;
      *(_QWORD *)(v16 + 8) = *(_QWORD *)v12;
      v18 = sub_5DA100(a1, v12 + 64, a3, a4 + v17);
      v19 = a1[3];
      if ( v19 )
      {
        v20 = v19 - 1;
        a1[3] = v20;
        clear_tinfo_t(a1[2] + 16 * v20);
      }
      if ( v18 )
        goto LABEL_17;
      if ( ++v11 >= (unsigned __int64)v37 )
        goto LABEL_17;
      v10 = (char *)v36;
    }
    v18 = 0;
    if ( (v13 & 0x100) == 0 )
      goto LABEL_18;
    *(_QWORD *)v32 = 0;
    ptr = nullptr;
    v21 = a1[1];
    v34 = 0;
    v22 = *(_QWORD *)v12 + a4;
    v35[0] = &off_2B05F20;
    v35[1] = a1 + 2;
    v35[2] = 0;
    if ( (unsigned __int8)sub_53B800((__int64 *)v32, &ptr, v21, (__int64)v35, v22, a2, 0) )
    {
      v18 = sub_5D9DE0((__int64)a1, v22 + a3, v32);
      if ( !v18 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v34 = 0;
          qfree(ptr);
        }
        clear_tinfo_t(v32);
LABEL_17:
        v8 = (char *)v36;
        goto LABEL_18;
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v34 = 0;
      qfree(ptr);
    }
    clear_tinfo_t(v32);
    v8 = (char *)v36;
  }
  v18 = -1;
LABEL_18:
  if ( v8 )
  {
    v23 = v37;
    if ( (_QWORD)v37 )
    {
      v24 = 0;
      do
      {
        v25 = &v8[128 * v24];
        clear_tinfo_t(v25 + 64);
        v26 = *((void **)v25 + 5);
        if ( v26 )
        {
          *((_QWORD *)v25 + 6) = 0;
          qfree(v26);
        }
        v27 = *((void **)v25 + 2);
        if ( v27 )
        {
          *((_QWORD *)v25 + 3) = 0;
          qfree(v27);
        }
        v8 = (char *)v36;
        ++v24;
      }
      while ( v23 != v24 );
    }
LABEL_26:
    *(_QWORD *)&v37 = 0;
    qfree(v8);
  }
  return v18;
}

