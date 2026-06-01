unsigned __int64 __fastcall sub_57FF80(_QWORD *a1, unsigned int a2, _BYTE *a3)
{
  _BYTE *v3; // rbx
  char valid; // al
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  char v9; // r15
  _BYTE *v10; // rsi
  char *v11; // rsi
  unsigned int name_ea; // eax
  unsigned int v13; // ebp
  const char *v14; // rsi
  unsigned int v15; // eax
  __int64 udm_by_tid; // rax
  unsigned int tinfo_property4; // eax
  unsigned int v18; // eax
  __int64 v19; // rbp
  unsigned __int64 v20; // rdx
  _BYTE *v21; // rsi
  int v22; // eax
  int v23; // eax
  int v25; // [rsp+8h] [rbp-100h]
  unsigned __int64 v26; // [rsp+8h] [rbp-100h]
  __int64 v27; // [rsp+18h] [rbp-F0h] BYREF
  void *v28; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v29; // [rsp+28h] [rbp-E0h]
  __int128 v30; // [rsp+40h] [rbp-C8h] BYREF
  void *v31; // [rsp+50h] [rbp-B8h]
  __int128 v32; // [rsp+58h] [rbp-B0h]
  void *ptr; // [rsp+68h] [rbp-A0h]
  __int128 v34; // [rsp+70h] [rbp-98h]
  _OWORD v35[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-68h]
  int v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  char v39; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v3 = a3;
  if ( !a3 )
    return v40 - __readfsqword(0x28u);
LABEL_2:
  while ( 2 )
  {
    if ( (unsigned __int8)is_valid_cp((unsigned __int8)*v3, 2, 0) )
    {
      v25 = 0;
      v28 = nullptr;
      v29 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          valid = is_valid_cp((unsigned __int8)*v3, 2, 0);
          v7 = v29;
          if ( !valid )
            break;
          ++v3;
          v8 = 2;
          v9 = *(v3 - 1);
          if ( (_QWORD)v29 )
          {
            v8 = v29 + 1;
            v7 = v29 - 1;
          }
          v10 = v28;
          if ( *((_QWORD *)&v29 + 1) < v8 )
          {
            v28 = (void *)qvector_reserve(&v28, v28, v8, 1);
            v10 = v28;
          }
          *(_QWORD *)&v29 = v8;
          v10[v7] = v9;
          *((_BYTE *)v28 + v7 + 1) = 0;
        }
        if ( (_QWORD)v29 )
        {
          v11 = (char *)v28;
          if ( v25 < (unsigned __int64)(v29 - 1) && (unsigned __int8)(*((_BYTE *)v28 + v25) - 48) <= 9u )
            goto LABEL_15;
        }
        else
        {
          v11 = (char *)haystack;
        }
        name_ea = get_name_ea(a2, v11);
        v13 = name_ea;
        if ( name_ea != -1 )
          sub_3FE080((__int64)a1, a2, name_ea, 4u);
        v27 = 0;
        v31 = nullptr;
        v14 = haystack;
        ptr = nullptr;
        v36 = 1;
        v37 = -1;
        v38 = 0;
        v39 = 0;
        v30 = 0;
        v32 = 0;
        v34 = 0;
        v35[0] = 0;
        if ( (_QWORD)v29 )
          v14 = (const char *)v28;
        v15 = sub_698F20(a1, v14, 0, 0);
        udm_by_tid = get_udm_by_tid(&v27, &v30, v15);
        if ( udm_by_tid != -1 )
        {
          tinfo_property4 = get_tinfo_property4(v27, 297, udm_by_tid, 0, 0, 0);
          sub_3FE080((__int64)a1, a2, tinfo_property4, 4u);
          if ( (get_tinfo_property(*(_QWORD *)&v35[0], 2) & 0x2F) == 0xD )
            break;
        }
        v23 = sub_3B9AA0((__int64)a1, v13, 4);
        if ( (v23 & 0x600) != 0x400 )
          goto LABEL_25;
        if ( (v23 & 0xF0000000) == 0x60000000 )
          break;
        if ( *v3 != 46 )
        {
LABEL_40:
          clear_tinfo_t(v35);
          if ( ptr )
          {
            *(_QWORD *)&v34 = 0;
            qfree(ptr);
          }
          if ( v31 )
          {
            *(_QWORD *)&v32 = 0;
            qfree(v31);
          }
          clear_tinfo_t(&v27);
          v11 = (char *)v28;
LABEL_15:
          if ( v11 )
          {
            *(_QWORD *)&v29 = 0;
            qfree(v11);
          }
          goto LABEL_2;
        }
LABEL_26:
        v19 = v29;
        ++v3;
        v20 = 2;
        if ( (_QWORD)v29 )
        {
          v20 = v29 + 1;
          v19 = v29 - 1;
        }
        v21 = v28;
        if ( *((_QWORD *)&v29 + 1) < v20 )
        {
          v26 = v20;
          v28 = (void *)qvector_reserve(&v28, v28, v20, 1);
          v20 = v26;
          v21 = v28;
        }
        *(_QWORD *)&v29 = v20;
        v21[v19] = 46;
        *((_BYTE *)v28 + v19 + 1) = 0;
        clear_tinfo_t(v35);
        if ( ptr )
        {
          *(_QWORD *)&v34 = 0;
          qfree(ptr);
        }
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree(v31);
        }
        clear_tinfo_t(&v27);
        v22 = v29 - 1;
        if ( !(_QWORD)v29 )
          v22 = 0;
        v25 = v22;
      }
      v18 = sub_3C3F20(a1, v13);
      if ( !(unsigned __int8)sub_69AD40(a1, &v28, v18) )
        goto LABEL_40;
LABEL_25:
      if ( *v3 != 46 )
        goto LABEL_40;
      goto LABEL_26;
    }
    if ( *v3++ )
      continue;
    return v40 - __readfsqword(0x28u);
  }
}

