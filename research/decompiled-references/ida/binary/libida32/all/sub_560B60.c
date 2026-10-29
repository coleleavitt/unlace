__int64 __fastcall sub_560B60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 frame_var; // rax
  __int64 v9; // r12
  unsigned int v10; // ebx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 tinfo_property; // rax
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // rdi
  int v21; // eax
  __int64 dtype_flag; // rax
  char v23; // al
  unsigned __int64 v24; // r10
  char v25; // al
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-118h]
  _QWORD *v28; // [rsp+10h] [rbp-110h]
  __int64 v29; // [rsp+18h] [rbp-108h]
  int v30; // [rsp+20h] [rbp-100h]
  unsigned __int64 v31; // [rsp+28h] [rbp-F8h]
  __int64 v32; // [rsp+30h] [rbp-F0h]
  __int64 v33; // [rsp+30h] [rbp-F0h]
  unsigned __int64 v34; // [rsp+30h] [rbp-F0h]
  __int64 v35; // [rsp+30h] [rbp-F0h]
  unsigned __int64 v36; // [rsp+38h] [rbp-E8h]
  unsigned __int64 v37; // [rsp+38h] [rbp-E8h]
  __int64 v38; // [rsp+38h] [rbp-E8h]
  int v39; // [rsp+38h] [rbp-E8h]
  __int64 v41; // [rsp+50h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-C0h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-B8h]
  void *v45; // [rsp+70h] [rbp-B0h]
  __int128 v46; // [rsp+78h] [rbp-A8h]
  void *ptr; // [rsp+88h] [rbp-98h]
  __int128 v48; // [rsp+90h] [rbp-90h]
  _OWORD v49[2]; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-60h]
  int v51; // [rsp+C8h] [rbp-58h]
  __int64 v52; // [rsp+D0h] [rbp-50h]
  char v53; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v54; // [rsp+E8h] [rbp-38h]

  v54 = __readfsqword(0x28u);
  v41 = 0;
  frame_var = get_frame_var(&v41, 0, a2, a3, a4);
  v9 = frame_var;
  if ( frame_var == -1 )
  {
    v10 = sub_5A3C40(a1, a2, a3, a4, a5);
  }
  else
  {
    if ( (a5 & 2) == 0 && (a5 & 1) != 0 )
    {
      v53 = 0;
      v44 = 0;
      v45 = nullptr;
      ptr = nullptr;
      v50 = 1;
      v51 = -1;
      v52 = 0;
      v43 = frame_var;
      v46 = 0;
      v48 = 0;
      v49[0] = 0;
      find_tinfo_udt_member((int)&v43);
      v12 = sub_69E150((char *)v49 + 8, v49);
      v13 = sub_560450(*(_BYTE *)(a3 + 5), v12);
      if ( v13 && v44 < -8LL * v13 )
      {
        v36 = v13;
        v32 = -8LL * v13;
        v30 = sub_5AFCE0(a1);
        v31 = v43;
        tinfo_property = get_tinfo_property(v41, 309);
        v15 = v36;
        v16 = v32;
        v17 = (_QWORD *)tinfo_property;
        if ( !tinfo_property )
        {
          if ( !under_debugger )
            interr(3119);
          BUG();
        }
        v18 = v9 + 1;
        v19 = v9 + 1;
        if ( (unsigned __int64)(v9 + 1) < *(_QWORD *)(tinfo_property + 8) )
        {
          do
          {
            v20 = *v17 + (v19 << 7);
            if ( *(_QWORD *)v20 - v43 >= v16 )
              break;
            if ( (*(_BYTE *)(v20 + 117) & 0x30) != 0 )
              goto LABEL_12;
            v27 = v16;
            v28 = v17;
            v29 = v19;
            v33 = v18;
            v37 = v15;
            v21 = sub_69E150(v20 + 72, v20 + 64);
            v15 = v37;
            v18 = v33;
            v17 = v28;
            v16 = v27;
            if ( (v21 & 0x600) == 0x400 && (((v21 & 0xF0000000) - 1342177280LL) & 0xFFFFFFFFE0000000LL) == 0 )
              goto LABEL_12;
            if ( (v21 & 0xFF00000) != 0 )
              goto LABEL_12;
            v19 = v29 + 1;
          }
          while ( (unsigned __int64)(v29 + 1) < v28[1] );
        }
        v34 = v15;
        set_tinfo_property4(&v41, 10, v18, v19, 0, 0);
        dtype_flag = get_dtype_flag(*(unsigned __int8 *)(a3 + 5));
        v42 = 0;
        v38 = dtype_flag;
        v23 = sub_5EFCC0(a1, &v42, dtype_flag, 1, a2, a3);
        v35 = -(__int64)v34;
        v24 = v31 >> 3;
        if ( !v23 && (v25 = sub_5F8DF0(a1, &v42, v38, 0, (unsigned int)v35, 0), v24 = v31 >> 3, !v25)
          || (v39 = v24, v26 = sub_5A32A0(a1, v30, v24, 0, (unsigned int)&v42, 0, 0, 0), LODWORD(v24) = v39, v26 == -1) )
        {
          if ( (v24 & 0x80000000) == 0LL && (v52 & 0x300000000000LL) == 0 )
            sub_49E040(
              (int)"%a: interr: create_stkvar(%a, %zd) dtype=%d",
              *(unsigned int *)(a2 + 8),
              (unsigned int)v24,
              v35,
              *(unsigned __int8 *)(a3 + 5));
        }
        clear_tinfo_t(&v42);
      }
LABEL_12:
      clear_tinfo_t(v49);
      if ( ptr )
      {
        *(_QWORD *)&v48 = 0;
        qfree(ptr);
      }
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45);
      }
    }
    v10 = 1;
  }
  clear_tinfo_t(&v41);
  return v10;
}

