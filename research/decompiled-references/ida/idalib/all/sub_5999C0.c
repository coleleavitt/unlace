unsigned __int64 __fastcall sub_5999C0(__int64 *a1, unsigned __int64 a2, _BYTE *a3, double a4, __m128 a5)
{
  _BYTE *v5; // rbx
  char valid; // al
  __int64 v9; // r12
  unsigned __int64 v10; // rbp
  char v11; // r15
  _BYTE *v12; // rsi
  char *v13; // rsi
  char **name_ea; // rax
  unsigned __int64 v15; // rbp
  const char *v16; // rsi
  __int64 v17; // rax
  __int64 udm_by_tid; // rax
  char **tinfo_property4; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  _BYTE *v23; // rsi
  int v24; // eax
  int v25; // eax
  int v27; // [rsp+8h] [rbp-110h]
  unsigned __int64 v28; // [rsp+8h] [rbp-110h]
  __int64 v29; // [rsp+18h] [rbp-100h] BYREF
  void *v30; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v31; // [rsp+28h] [rbp-F0h]
  __int128 v32; // [rsp+40h] [rbp-D8h] BYREF
  void *v33; // [rsp+50h] [rbp-C8h]
  __int128 v34; // [rsp+58h] [rbp-C0h]
  void *ptr; // [rsp+68h] [rbp-B0h]
  __int128 v36; // [rsp+70h] [rbp-A8h]
  _OWORD v37[3]; // [rsp+80h] [rbp-98h] BYREF
  char *v38; // [rsp+B0h] [rbp-68h]
  int v39; // [rsp+B8h] [rbp-60h]
  __int64 v40; // [rsp+C0h] [rbp-58h]
  char v41; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+D8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v5 = a3;
  if ( !a3 )
    return v42 - __readfsqword(0x28u);
LABEL_2:
  while ( 2 )
  {
    if ( (unsigned __int8)is_valid_cp((unsigned __int8)*v5, 2, 0) )
    {
      v27 = 0;
      v30 = nullptr;
      v31 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          valid = is_valid_cp((unsigned __int8)*v5, 2, 0);
          v9 = v31;
          if ( !valid )
            break;
          ++v5;
          v10 = 2;
          v11 = *(v5 - 1);
          if ( (_QWORD)v31 )
          {
            v10 = v31 + 1;
            v9 = v31 - 1;
          }
          v12 = v30;
          if ( *((_QWORD *)&v31 + 1) < v10 )
          {
            v30 = (void *)qvector_reserve(&v30, v30, v10, 1);
            v12 = v30;
          }
          *(_QWORD *)&v31 = v10;
          v12[v9] = v11;
          *((_BYTE *)v30 + v9 + 1) = 0;
        }
        if ( (_QWORD)v31 )
        {
          v13 = (char *)v30;
          if ( v27 < (unsigned __int64)(v31 - 1) && (unsigned __int8)(*((_BYTE *)v30 + v27) - 48) <= 9u )
            goto LABEL_15;
        }
        else
        {
          v13 = (char *)haystack;
        }
        name_ea = (char **)get_name_ea(a2, v13);
        v15 = (unsigned __int64)name_ea;
        if ( name_ea != (char **)-1LL )
          sub_411350(a1, a2, name_ea, 4u, 0.0, a5);
        v29 = 0;
        v33 = nullptr;
        v16 = haystack;
        ptr = nullptr;
        v38 = (char *)&dword_0 + 1;
        v39 = -1;
        v40 = 0;
        v41 = 0;
        v32 = 0;
        v34 = 0;
        v36 = 0;
        v37[0] = 0;
        if ( (_QWORD)v31 )
          v16 = (const char *)v30;
        v17 = sub_6B9860(a1, v16, 0, 0);
        udm_by_tid = get_udm_by_tid(&v29, &v32, v17);
        if ( udm_by_tid != -1 )
        {
          tinfo_property4 = (char **)get_tinfo_property4(v29, 297, udm_by_tid, 0, 0, 0);
          sub_411350(a1, a2, tinfo_property4, 4u, 0.0, a5);
          if ( (get_tinfo_property(*(_QWORD *)&v37[0], 2) & 0x2F) == 0xD )
            break;
        }
        v25 = sub_3BE900(a1, v15, 4);
        if ( (v25 & 0x600) != 0x400 )
          goto LABEL_25;
        if ( (v25 & 0xF0000000) == 0x60000000 )
          break;
        if ( *v5 != 46 )
        {
LABEL_40:
          clear_tinfo_t(v37);
          if ( ptr )
          {
            *(_QWORD *)&v36 = 0;
            qfree(ptr);
          }
          if ( v33 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(v33);
          }
          clear_tinfo_t(&v29);
          v13 = (char *)v30;
LABEL_15:
          if ( v13 )
          {
            *(_QWORD *)&v31 = 0;
            qfree(v13);
          }
          goto LABEL_2;
        }
LABEL_26:
        v21 = v31;
        ++v5;
        v22 = 2;
        if ( (_QWORD)v31 )
        {
          v22 = v31 + 1;
          v21 = v31 - 1;
        }
        v23 = v30;
        if ( *((_QWORD *)&v31 + 1) < v22 )
        {
          v28 = v22;
          v30 = (void *)qvector_reserve(&v30, v30, v22, 1);
          v22 = v28;
          v23 = v30;
        }
        *(_QWORD *)&v31 = v22;
        v23[v21] = 46;
        *((_BYTE *)v30 + v21 + 1) = 0;
        clear_tinfo_t(v37);
        if ( ptr )
        {
          *(_QWORD *)&v36 = 0;
          qfree(ptr);
        }
        if ( v33 )
        {
          *(_QWORD *)&v34 = 0;
          qfree(v33);
        }
        clear_tinfo_t(&v29);
        v24 = v31 - 1;
        if ( !(_QWORD)v31 )
          v24 = 0;
        v27 = v24;
      }
      v20 = sub_3C9200(a1, v15);
      if ( !(unsigned __int8)sub_6BB720(a1, &v30, v20) )
        goto LABEL_40;
LABEL_25:
      if ( *v5 != 46 )
        goto LABEL_40;
      goto LABEL_26;
    }
    if ( *v5++ )
      continue;
    return v42 - __readfsqword(0x28u);
  }
}
