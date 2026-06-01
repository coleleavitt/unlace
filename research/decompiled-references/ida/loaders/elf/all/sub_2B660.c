unsigned __int64 __fastcall sub_2B660(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // r14
  _QWORD *v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 j; // rbx
  __int64 v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax
  const char *v15; // rcx
  const char *v16; // r13
  const char *v17; // rdx
  __int64 named_type_tid; // rax
  __int64 v19; // [rsp+0h] [rbp-90h]
  char v21; // [rsp+17h] [rbp-79h]
  __int64 i; // [rsp+28h] [rbp-68h]
  const char *v23; // [rsp+30h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-60h]
  __int64 v25; // [rsp+38h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-58h]
  const char *v27; // [rsp+40h] [rbp-50h] BYREF
  __int128 v28; // [rsp+48h] [rbp-48h]
  unsigned __int64 v29; // [rsp+58h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  if ( *a3 > 0 )
  {
    if ( a3[2] )
    {
      v5 = *(_QWORD *)(a2 + 608) + a3[1];
      v21 = *(_BYTE *)(a2 + 617);
      sub_E890(v5, 1u, (__int64)"ELF GNU Symbol Version Requirements");
      v19 = *(_QWORD *)(a4 + 32);
      if ( v19 )
      {
        for ( i = 0; v19 != i; ++i )
        {
          v6 = (_QWORD *)(*(_QWORD *)(a4 + 24) + 40 * i);
          v7 = v5 + *v6;
          if ( (unsigned __int8)is_loaded(v7) )
          {
            v8 = *(_QWORD *)(a1 + 456);
            if ( v8 == -1 )
            {
              v15 = "OFF64";
              v28 = 0;
              v27 = nullptr;
              v16 = "Elf64_Verneed";
              if ( !v21 )
              {
                v15 = "OFF32";
                v16 = "Elf32_Verneed";
              }
              sub_2B240(
                (__int64 *)&v27,
                (__int64)"struct %s{unsigned __int16 vn_version;unsigned __int16 vn_cnt;unsigned __int32 vn_file __offset"
                         "(%s,0x%a);unsigned __int32 vn_aux;unsigned __int32 vn_next;};",
                v16,
                v15,
                0.0);
              v17 = &s1;
              if ( (_QWORD)v28 )
                v17 = v27;
              h2ti(0, 0, v17, 1024, 0, 0, sub_EAA0, 0, 0);
              named_type_tid = get_named_type_tid(v16);
              v8 = named_type_tid;
              if ( v27 )
              {
                v26 = named_type_tid;
                *(_QWORD *)&v28 = 0;
                qfree(v27);
                v8 = v26;
              }
              *(_QWORD *)(a1 + 456) = v8;
              if ( v8 == -1 )
                return v29 - __readfsqword(0x28u);
            }
            create_data(v7, 1610612736, 16, v8);
            v9 = v6[3];
            if ( v9 )
            {
              for ( j = 0; j != v9; ++j )
              {
                v25 = v5 + *(_QWORD *)(v6[2] + 24 * j);
                if ( (unsigned __int8)is_loaded(v25) )
                {
                  v11 = *(_QWORD *)(a1 + 448);
                  if ( v11 == -1 )
                  {
                    v28 = 0;
                    v27 = nullptr;
                    if ( v21 )
                    {
                      v23 = "Elf64_Vernaux";
                      sub_2B240(
                        (__int64 *)&v27,
                        (__int64)"struct %s{unsigned __int32 vna_hash;unsigned __int16 vna_flags;unsigned __int16 vna_oth"
                                 "er;unsigned __int32 vna_name  __offset(%s,0x%a);unsigned __int32 vna_next;};",
                        "Elf64_Vernaux",
                        "OFF64",
                        0.0);
                    }
                    else
                    {
                      v23 = "Elf32_Vernaux";
                      sub_2B240(
                        (__int64 *)&v27,
                        (__int64)"struct %s{unsigned __int32 vna_hash;unsigned __int16 vna_flags;unsigned __int16 vna_oth"
                                 "er;unsigned __int32 vna_name  __offset(%s,0x%a);unsigned __int32 vna_next;};",
                        "Elf32_Vernaux",
                        "OFF32",
                        0.0);
                    }
                    v12 = &s1;
                    if ( (_QWORD)v28 )
                      v12 = v27;
                    h2ti(0, 0, v12, 1024, 0, 0, sub_EAA0, 0, 0);
                    v13 = get_named_type_tid(v23);
                    v11 = v13;
                    if ( v27 )
                    {
                      v24 = v13;
                      *(_QWORD *)&v28 = 0;
                      qfree(v27);
                      v11 = v24;
                    }
                    *(_QWORD *)(a1 + 448) = v11;
                    if ( v11 == -1 )
                      break;
                  }
                  create_data(v25, 1610612736, 16, v11);
                }
              }
            }
          }
        }
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}

