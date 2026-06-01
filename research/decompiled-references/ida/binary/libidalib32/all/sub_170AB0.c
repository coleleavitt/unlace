__int64 __fastcall sub_170AB0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  unsigned int v5; // ebp
  unsigned int v6; // r13d
  char v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  char *v10; // r15
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdx
  const char *v14; // rsi
  const char *v15; // rdx
  __int64 v16; // rdx
  const char *v17; // rsi
  __int64 v19; // [rsp+20h] [rbp-168h]
  __int64 v20; // [rsp+28h] [rbp-160h]
  const char *v21; // [rsp+40h] [rbp-148h] BYREF
  __int128 v22; // [rsp+48h] [rbp-140h]
  const char *v23; // [rsp+60h] [rbp-128h]
  __int128 v24; // [rsp+68h] [rbp-120h]
  __int64 v25; // [rsp+80h] [rbp-108h]
  __int128 v26; // [rsp+88h] [rbp-100h]
  __int64 v27; // [rsp+98h] [rbp-F0h]
  __int128 v28; // [rsp+A0h] [rbp-E8h]
  __int128 v29; // [rsp+C0h] [rbp-C8h]
  __int64 v30; // [rsp+D0h] [rbp-B8h]
  __int128 v31; // [rsp+D8h] [rbp-B0h]
  __int64 v32; // [rsp+E8h] [rbp-A0h]
  __int128 v33; // [rsp+F0h] [rbp-98h]
  __int128 v34; // [rsp+100h] [rbp-88h]
  __int64 v35; // [rsp+120h] [rbp-68h]
  int v36; // [rsp+128h] [rbp-60h]
  __int64 v37; // [rsp+130h] [rbp-58h]
  char v38; // [rsp+138h] [rbp-50h]
  unsigned __int64 v39; // [rsp+148h] [rbp-40h]

  v3 = *(_QWORD **)(a1 + 192);
  v39 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(*v3 + 8 * a3);
  v6 = qword_251700;
  v19 = 0;
  v21 = nullptr;
  v7 = xrefchar();
  v23 = nullptr;
  v20 = 0;
  v22 = 0;
  v24 = 0;
  if ( !(unsigned __int8)is_mapped() )
  {
    v30 = 0;
    v32 = 0;
    v35 = 1;
    v36 = -1;
    v37 = 0;
    v38 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v34 = 0;
    get_udm_by_tid();
    v25 = 0;
    v27 = 0;
    v26 = 0;
    v28 = 0;
    get_edm_by_tid();
    get_type_by_tid();
    v7 = 115;
    clear_tinfo_t();
    clear_tinfo_t();
    goto LABEL_13;
  }
  if ( v5 < v6 )
  {
    v8 = 3;
    v9 = 2;
    v10 = "Up";
    goto LABEL_4;
  }
  if ( v6 < v5 )
  {
    v8 = 5;
    v9 = 4;
    v10 = "Down";
LABEL_4:
    v19 = qvector_reserve();
    v20 = v8;
    v11 = 0;
    do
    {
      v12 = v11++;
      *(_BYTE *)(v19 + v12) = v10[v12];
    }
    while ( v11 < (unsigned int)v9 );
    *(_BYTE *)(v19 + v9) = 0;
    goto LABEL_9;
  }
  v20 = 0;
LABEL_9:
  getinf_flag();
  *(_QWORD *)&v29 = 0;
  getinf_flag();
  if ( !(unsigned __int8)get_type_by_tid() || (unsigned int)get_tinfo_property4() != -1 )
  {
    if ( *(_BYTE *)(TProgram::application + 352LL) )
      get_nice_colored_name();
    else
      sub_94360((__int64 *)&v21);
  }
  clear_tinfo_t();
  generate_disasm_line();
LABEL_13:
  v13 = v20;
  v14 = s1;
  if ( v20 )
  {
    v14 = (const char *)v19;
    v13 = v20 - 1;
  }
  sub_1823B0(a2, v14, v13);
  sub_1827E0(a2, (unsigned int)v7);
  v15 = s1;
  if ( (_QWORD)v22 )
    v15 = v21;
  sub_1828B0(a2, v5, v15);
  v16 = v24;
  v17 = s1;
  if ( (_QWORD)v24 )
  {
    v17 = v23;
    v16 = v24 - 1;
  }
  sub_1823B0(a2, v17, v16);
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  if ( v19 )
    qfree();
  return 1;
}

