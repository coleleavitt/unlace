__int64 __fastcall sub_DBA40(__int64 a1)
{
  __int64 flags; // rax
  int struct_operand; // eax
  int v3; // ebp
  __int64 tinfo_tid; // rbx
  char *v5; // r13
  int v6; // r14d
  char *v7; // r15
  __int64 udm_by_tid; // rbx
  __int64 best_fit_member; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  _QWORD *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-200h]
  __int64 tinfo_property4; // [rsp+8h] [rbp-200h]
  __int64 v25; // [rsp+8h] [rbp-200h]
  __int64 v26; // [rsp+8h] [rbp-200h]
  __int64 v27; // [rsp+18h] [rbp-1F0h] BYREF
  __int64 v28; // [rsp+20h] [rbp-1E8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-1E0h] BYREF
  unsigned __int64 v30; // [rsp+30h] [rbp-1D8h] BYREF
  __int128 v31; // [rsp+38h] [rbp-1D0h]
  __int128 v32; // [rsp+48h] [rbp-1C0h]
  __int64 v33; // [rsp+58h] [rbp-1B0h]
  __int128 v34; // [rsp+60h] [rbp-1A8h]
  _OWORD v35[3]; // [rsp+70h] [rbp-198h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-168h]
  int v37; // [rsp+A8h] [rbp-160h]
  __int64 v38; // [rsp+B0h] [rbp-158h]
  char v39; // [rsp+B8h] [rbp-150h]
  __int64 v40; // [rsp+C0h] [rbp-148h] BYREF
  char v41; // [rsp+C8h] [rbp-140h] BYREF
  unsigned __int64 v42; // [rsp+1C8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  flags = get_flags_ex(a1, 0);
  if ( !(unsigned __int8)is_stroff(flags, 15) )
    return -1;
  struct_operand = get_struct_operand(&v27, &v28, &v40, a1, 0);
  if ( !struct_operand )
  {
    struct_operand = get_struct_operand(&v27, &v28, &v40, a1, 1);
    if ( !struct_operand )
      return -1;
  }
  v3 = struct_operand - 2;
  tinfo_tid = v40;
  v27 += v28;
  v5 = &v41;
  while ( 1 )
  {
    v29 = 0;
    if ( !(unsigned __int8)get_type_by_tid(&v29, tinfo_tid) )
      goto LABEL_22;
    if ( (get_tinfo_property(v29, 2) & 0x3F) == 0x1D )
    {
      v6 = v3 - 1;
      if ( !v3 )
        goto LABEL_22;
      v7 = v5 + 8;
      udm_by_tid = get_udm_by_tid(&v29, 0, *(_QWORD *)v5);
    }
    else
    {
      LODWORD(v34) = 1;
      v30 = 0;
      v33 = 0;
      v31 = 0;
      v32 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v29, 13, &v30) )
      {
        v16 = v30;
        if ( v30 )
        {
          v17 = v31;
          if ( (_QWORD)v31 )
          {
            v18 = 0;
            do
            {
              v19 = (_QWORD *)(v16 + 144 * v18);
              clear_tinfo_t(v19 + 8);
              v20 = v19[5];
              if ( v20 )
              {
                v19[6] = 0;
                qfree(v20);
              }
              v21 = v19[2];
              if ( v21 )
              {
                v19[3] = 0;
                qfree(v21);
              }
              ++v18;
              v16 = v30;
            }
            while ( v17 != v18 );
          }
          *(_QWORD *)&v31 = 0;
          qfree(v16);
        }
        goto LABEL_22;
      }
      best_fit_member = udt_type_data_t__get_best_fit_member(&v30, v27);
      v11 = v30;
      udm_by_tid = best_fit_member;
      if ( v30 )
      {
        v23 = v31;
        if ( (_QWORD)v31 )
        {
          v12 = 0;
          do
          {
            v13 = (_QWORD *)(v11 + 144 * v12);
            clear_tinfo_t(v13 + 8);
            v14 = v13[5];
            if ( v14 )
            {
              v13[6] = 0;
              qfree(v14);
            }
            v15 = v13[2];
            if ( v15 )
            {
              v13[3] = 0;
              qfree(v15);
            }
            v11 = v30;
            ++v12;
          }
          while ( v23 != v12 );
        }
        *(_QWORD *)&v31 = 0;
        qfree(v11);
      }
      v7 = v5;
      v6 = v3;
    }
    if ( udm_by_tid == -1 )
      goto LABEL_22;
    v30 = udm_by_tid;
    v31 = 0u;
    v33 = 0;
    v36 = 1;
    v37 = -1;
    v38 = 0;
    v39 = 0;
    v32 = 0;
    v34 = 0;
    v35[0] = 0;
    if ( (int)find_tinfo_udt_member(&v30, v29, 1) < 0 || 8 * v27 < v30 )
      goto LABEL_18;
    v27 -= v30 >> 3;
    if ( (get_tinfo_property(*(_QWORD *)&v35[0], 2) & 0x2F) != 0xD )
      break;
    tinfo_tid = get_tinfo_tid(v35, 0);
    clear_tinfo_t(v35);
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    if ( *((_QWORD *)&v31 + 1) )
    {
      *(_QWORD *)&v32 = 0;
      qfree(*((_QWORD *)&v31 + 1));
    }
    v5 = v7;
    v3 = v6;
    clear_tinfo_t(&v29);
  }
  if ( v27 )
  {
LABEL_18:
    clear_tinfo_t(v35);
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    if ( *((_QWORD *)&v31 + 1) )
    {
      *(_QWORD *)&v32 = 0;
      qfree(*((_QWORD *)&v31 + 1));
    }
LABEL_22:
    clear_tinfo_t(&v29);
    return -1;
  }
  tinfo_property4 = get_tinfo_property4(v29, 297, udm_by_tid, 0, 0, 0);
  clear_tinfo_t(v35);
  v22 = tinfo_property4;
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
    v22 = tinfo_property4;
  }
  if ( *((_QWORD *)&v31 + 1) )
  {
    v25 = v22;
    *(_QWORD *)&v32 = 0;
    qfree(*((_QWORD *)&v31 + 1));
    v22 = v25;
  }
  v26 = v22;
  clear_tinfo_t(&v29);
  return v26;
}
