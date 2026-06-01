__int64 __fastcall sub_57A470(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
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
  unsigned __int64 v23; // [rsp+8h] [rbp-128h]
  _QWORD *v24; // [rsp+10h] [rbp-120h]
  __int64 v25; // [rsp+18h] [rbp-118h]
  __int64 v26; // [rsp+18h] [rbp-118h]
  int v27; // [rsp+20h] [rbp-110h]
  unsigned __int64 v28; // [rsp+28h] [rbp-108h]
  __int64 v29; // [rsp+30h] [rbp-100h]
  __int64 v30; // [rsp+30h] [rbp-100h]
  __int64 v31; // [rsp+30h] [rbp-100h]
  unsigned __int64 v32; // [rsp+38h] [rbp-F8h]
  unsigned __int64 v33; // [rsp+38h] [rbp-F8h]
  unsigned __int64 v34; // [rsp+38h] [rbp-F8h]
  unsigned __int64 v35; // [rsp+38h] [rbp-F8h]
  __int64 v37; // [rsp+50h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-D0h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-C8h]
  void *v41; // [rsp+70h] [rbp-C0h]
  __int128 v42; // [rsp+78h] [rbp-B8h]
  void *ptr; // [rsp+88h] [rbp-A8h]
  __int128 v44; // [rsp+90h] [rbp-A0h]
  _OWORD v45[3]; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-60h]
  int v47; // [rsp+D8h] [rbp-58h]
  __int64 v48; // [rsp+E0h] [rbp-50h]
  char v49; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v50; // [rsp+F8h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  v37 = 0;
  frame_var = get_frame_var(&v37, 0, a2, a3, a4);
  v9 = frame_var;
  if ( frame_var == -1 )
  {
    v10 = sub_5BE350(a1, a2, a3, a4, a5);
  }
  else
  {
    if ( (a5 & 2) == 0 && (a5 & 1) != 0 )
    {
      v49 = 0;
      v40 = 0;
      v41 = nullptr;
      ptr = nullptr;
      v46 = 1;
      v47 = -1;
      v48 = 0;
      v39 = frame_var;
      v42 = 0;
      v44 = 0;
      v45[0] = 0;
      find_tinfo_udt_member((int)&v39);
      v12 = sub_6BEC10((char *)v45 + 8, v45);
      v13 = sub_579D10(*(_BYTE *)(a3 + 5), v12);
      if ( v13 && v40 < -8LL * v13 )
      {
        v32 = v13;
        v29 = -8LL * v13;
        v27 = sub_5CAA10(a1);
        v28 = v39;
        tinfo_property = get_tinfo_property(v37, 309);
        v15 = v32;
        v16 = v29;
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
            v20 = *v17 + 144 * v19;
            if ( *(_QWORD *)v20 - v39 >= v16 )
              break;
            if ( (*(_BYTE *)(v20 + 133) & 0x30) != 0 )
              goto LABEL_12;
            v23 = v16;
            v24 = v17;
            v25 = v19;
            v30 = v18;
            v33 = v15;
            v21 = sub_6BEC10(v20 + 72, v20 + 64);
            v15 = v33;
            v18 = v30;
            v17 = v24;
            v16 = v23;
            if ( (v21 & 0x600) == 0x400 && (((v21 & 0xF0000000) - 1342177280LL) & 0xFFFFFFFFE0000000LL) == 0 )
              goto LABEL_12;
            if ( (v21 & 0xFF00000) != 0 )
              goto LABEL_12;
            v19 = v25 + 1;
          }
          while ( (unsigned __int64)(v25 + 1) < v24[1] );
        }
        v34 = v15;
        set_tinfo_property4(&v37, 10, v18, v19, 0, 0);
        dtype_flag = get_dtype_flag(*(_BYTE *)(a3 + 5), &byte_9[1]);
        v38 = 0;
        v31 = dtype_flag;
        v26 = -(__int64)v34;
        v35 = v28 >> 3;
        if ( (!(unsigned __int8)sub_60BC50(a1, &v38, dtype_flag, 1, a2, a3)
           && !(unsigned __int8)sub_614E90(a1, &v38, v31, 0, v26, 0)
           || sub_5BD990(a1, v27, v35, 0, (unsigned int)&v38, 0, 0, 0) == -1)
          && (v48 & 0x300000000000LL) == 0 )
        {
          sub_4B3580(
            (int)"%a: interr: create_stkvar(%a, %zd) dtype=%d",
            *(_QWORD *)(a2 + 16),
            v35,
            v26,
            *(unsigned __int8 *)(a3 + 5));
        }
        clear_tinfo_t(&v38);
      }
LABEL_12:
      clear_tinfo_t(v45);
      if ( ptr )
      {
        *(_QWORD *)&v44 = 0;
        qfree(ptr);
      }
      if ( v41 )
      {
        *(_QWORD *)&v42 = 0;
        qfree(v41);
      }
    }
    v10 = 1;
  }
  clear_tinfo_t(&v37);
  return v10;
}
