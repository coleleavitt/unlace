__int64 __fastcall sub_7A3DC0(__m128i *a1, char a2, __int64 a3)
{
  size_t v4; // rax
  size_t v5; // r14
  __int64 v6; // rax
  unsigned __int64 *v7; // r15
  unsigned __int64 *v8; // r13
  unsigned __int64 *v9; // r9
  __int64 v10; // rbx
  size_t v11; // r14
  _QWORD *v12; // rsi
  int v13; // eax
  unsigned __int64 v15; // rax
  __int64 *v16; // rax
  unsigned __int64 v17; // rax
  __int64 *v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  const char *src; // [rsp+8h] [rbp-50h]
  unsigned __int64 *srca; // [rsp+8h] [rbp-50h]
  char v24; // [rsp+16h] [rbp-42h] BYREF
  char v25; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( !a2 )
    sub_79F3F0((__int64)a1, (__int64 *)a3);
  if ( (unsigned __int8)sub_7A0FA0((__int64)a1, (__int64 *)a3) )
    return 0;
  if ( (unsigned int)sub_7A3BB0(a1, a3, &v25) )
    return 0xFFFFFFFFLL;
  if ( !v25 )
  {
    if ( *(_QWORD *)(a3 + 8) )
    {
      src = *(const char **)a3;
      if ( *(_QWORD *)a3 )
      {
        v4 = strlen(*(const char **)a3);
        v5 = v4;
        if ( v4 )
        {
          v6 = std::string::_Rep::_S_create(v4, 0, &v24);
          v7 = (unsigned __int64 *)v6;
          v8 = (unsigned __int64 *)(v6 + 24);
          if ( v5 == 1 )
            *(_BYTE *)(v6 + 24) = *src;
          else
            memcpy((void *)(v6 + 24), src, v5);
          v9 = std::string::_Rep::_S_empty_rep_storage;
          if ( v7 != std::string::_Rep::_S_empty_rep_storage )
          {
            *((_DWORD *)v7 + 4) = 0;
            *v7 = v5;
            *((_BYTE *)v7 + v5 + 24) = 0;
          }
          if ( a1[7].m128i_i64[0] > 0x14uLL )
          {
            v15 = std::_Hash_bytes(v8, *v7, 0xC70F6907);
            v16 = sub_79EDE0(a1[5].m128i_i64[1], a1[6].m128i_u64[0], v15 % a1[6].m128i_i64[0], v8, v15);
            v9 = std::string::_Rep::_S_empty_rep_storage;
            if ( v16 )
            {
              v10 = *v16;
              if ( v7 == std::string::_Rep::_S_empty_rep_storage )
                goto LABEL_36;
              if ( !&_pthread_key_create )
              {
                v19 = *((_DWORD *)v7 + 4);
                *((_DWORD *)v7 + 4) = v19 - 1;
LABEL_42:
                if ( v19 > 0 )
                  goto LABEL_36;
                goto LABEL_43;
              }
LABEL_41:
              v19 = _InterlockedExchangeAdd((volatile signed __int32 *)v8 - 2, 0xFFFFFFFF);
              goto LABEL_42;
            }
          }
          else
          {
            v10 = a1[6].m128i_i64[1];
            if ( v10 )
              goto LABEL_15;
          }
          goto LABEL_32;
        }
LABEL_28:
        if ( a1[7].m128i_i64[0] <= 0x14uLL )
        {
          v10 = a1[6].m128i_i64[1];
          if ( v10 )
          {
            v9 = std::string::_Rep::_S_empty_rep_storage;
            v8 = &std::string::_Rep::_S_empty_rep_storage[3];
            v7 = std::string::_Rep::_S_empty_rep_storage;
LABEL_15:
            v11 = *(v8 - 3);
            while ( 1 )
            {
              v12 = *(_QWORD **)(v10 + 8);
              if ( v11 == *(v12 - 3) )
                break;
LABEL_16:
              v10 = *(_QWORD *)v10;
              if ( !v10 )
                goto LABEL_32;
            }
            if ( v11 )
            {
              while ( 1 )
              {
                srca = v9;
                v13 = memcmp(v8, v12, v11);
                v9 = srca;
                if ( !v13 )
                  break;
                v10 = *(_QWORD *)v10;
                if ( !v10 )
                  goto LABEL_32;
                v12 = *(_QWORD **)(v10 + 8);
                if ( *(v12 - 3) != v11 )
                  goto LABEL_16;
              }
            }
            if ( v7 == v9 )
              goto LABEL_24;
            if ( &_pthread_key_create )
              goto LABEL_41;
            v20 = *((_DWORD *)v8 - 2);
            *((_DWORD *)v8 - 2) = v20 - 1;
            if ( v20 > 0 )
              goto LABEL_24;
LABEL_43:
            std::string::_Rep::_M_destroy(v7, &v25);
LABEL_36:
            if ( !v10 )
              goto LABEL_33;
LABEL_24:
            *(_WORD *)(a3 + 24) = *(_WORD *)(v10 + 16);
            return 0;
          }
LABEL_33:
          *(_WORD *)(a3 + 24) = 2;
          return 0;
        }
        v8 = &std::string::_Rep::_S_empty_rep_storage[3];
        v17 = std::_Hash_bytes(
                &std::string::_Rep::_S_empty_rep_storage[3],
                std::string::_Rep::_S_empty_rep_storage[0],
                0xC70F6907);
        v18 = sub_79EDE0(
                a1[5].m128i_i64[1],
                a1[6].m128i_u64[0],
                v17 % a1[6].m128i_i64[0],
                &std::string::_Rep::_S_empty_rep_storage[3],
                v17);
        v9 = std::string::_Rep::_S_empty_rep_storage;
        if ( v18 )
        {
          v10 = *v18;
          goto LABEL_36;
        }
        v7 = std::string::_Rep::_S_empty_rep_storage;
LABEL_32:
        if ( v7 != v9 )
        {
          if ( !&_pthread_key_create )
          {
            v21 = *((_DWORD *)v8 - 2);
            *((_DWORD *)v8 - 2) = v21 - 1;
            if ( v21 <= 0 )
              std::string::_Rep::_M_destroy(v7, &v25);
            goto LABEL_33;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 - 2, 0xFFFFFFFF) <= 0 )
          {
            v10 = 0;
            goto LABEL_43;
          }
        }
        goto LABEL_33;
      }
    }
    else if ( haystack )
    {
      goto LABEL_28;
    }
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  }
  return 1;
}
