__int64 __fastcall sub_783AC0(__m128i *a1, char a2, __int64 a3)
{
  size_t v4; // r14
  __int64 v5; // rax
  unsigned __int64 *v6; // r15
  unsigned __int64 *v7; // r13
  unsigned __int64 *v8; // r9
  __int64 v9; // rbx
  size_t v10; // r14
  _QWORD *v11; // rsi
  int v12; // eax
  unsigned __int64 v14; // rax
  __int64 *v15; // rax
  unsigned __int64 v16; // rax
  __int64 *v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  const char *src; // [rsp+8h] [rbp-50h]
  unsigned __int64 *srca; // [rsp+8h] [rbp-50h]
  char v23; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( !a2 )
    sub_77F0E0((__int64)a1, (__int64 *)a3);
  if ( (unsigned __int8)sub_780CA0((__int64)a1, (__int64 *)a3) )
    return 0;
  if ( (unsigned int)sub_7838B0(a1, a3, &v23) )
    return 0xFFFFFFFFLL;
  if ( !v23 )
  {
    if ( *(_QWORD *)(a3 + 8) )
    {
      src = *(const char **)a3;
      if ( *(_QWORD *)a3 )
      {
        v4 = strlen(*(const char **)a3);
        if ( v4 )
        {
          v5 = std::string::_Rep::_S_create();
          v6 = (unsigned __int64 *)v5;
          v7 = (unsigned __int64 *)(v5 + 24);
          if ( v4 == 1 )
            *(_BYTE *)(v5 + 24) = *src;
          else
            memcpy((void *)(v5 + 24), src, v4);
          v8 = std::string::_Rep::_S_empty_rep_storage;
          if ( v6 != std::string::_Rep::_S_empty_rep_storage )
          {
            *((_DWORD *)v6 + 4) = 0;
            *v6 = v4;
            *((_BYTE *)v6 + v4 + 24) = 0;
          }
          if ( a1[7].m128i_i64[0] > 0x14uLL )
          {
            v14 = std::_Hash_bytes(v7, *v6, 0xC70F6907);
            v15 = sub_77EAD0(a1[5].m128i_i64[1], a1[6].m128i_u64[0], v14 % a1[6].m128i_i64[0], v7, v14);
            v8 = std::string::_Rep::_S_empty_rep_storage;
            if ( v15 )
            {
              v9 = *v15;
              if ( v6 == std::string::_Rep::_S_empty_rep_storage )
                goto LABEL_36;
              if ( !&_pthread_key_create )
              {
                v18 = *((_DWORD *)v6 + 4);
                *((_DWORD *)v6 + 4) = v18 - 1;
LABEL_42:
                if ( v18 > 0 )
                  goto LABEL_36;
                goto LABEL_43;
              }
LABEL_41:
              v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v7 - 2, 0xFFFFFFFF);
              goto LABEL_42;
            }
          }
          else
          {
            v9 = a1[6].m128i_i64[1];
            if ( v9 )
              goto LABEL_15;
          }
          goto LABEL_32;
        }
LABEL_28:
        if ( a1[7].m128i_i64[0] <= 0x14uLL )
        {
          v9 = a1[6].m128i_i64[1];
          if ( v9 )
          {
            v8 = std::string::_Rep::_S_empty_rep_storage;
            v7 = &std::string::_Rep::_S_empty_rep_storage[3];
            v6 = std::string::_Rep::_S_empty_rep_storage;
LABEL_15:
            v10 = *(v7 - 3);
            while ( 1 )
            {
              v11 = *(_QWORD **)(v9 + 8);
              if ( v10 == *(v11 - 3) )
                break;
LABEL_16:
              v9 = *(_QWORD *)v9;
              if ( !v9 )
                goto LABEL_32;
            }
            if ( v10 )
            {
              while ( 1 )
              {
                srca = v8;
                v12 = memcmp(v7, v11, v10);
                v8 = srca;
                if ( !v12 )
                  break;
                v9 = *(_QWORD *)v9;
                if ( !v9 )
                  goto LABEL_32;
                v11 = *(_QWORD **)(v9 + 8);
                if ( *(v11 - 3) != v10 )
                  goto LABEL_16;
              }
            }
            if ( v6 == v8 )
              goto LABEL_24;
            if ( &_pthread_key_create )
              goto LABEL_41;
            v19 = *((_DWORD *)v7 - 2);
            *((_DWORD *)v7 - 2) = v19 - 1;
            if ( v19 > 0 )
              goto LABEL_24;
LABEL_43:
            std::string::_Rep::_M_destroy();
LABEL_36:
            if ( !v9 )
              goto LABEL_33;
LABEL_24:
            *(_WORD *)(a3 + 24) = *(_WORD *)(v9 + 16);
            return 0;
          }
LABEL_33:
          *(_WORD *)(a3 + 24) = 2;
          return 0;
        }
        v7 = &std::string::_Rep::_S_empty_rep_storage[3];
        v16 = std::_Hash_bytes(
                &std::string::_Rep::_S_empty_rep_storage[3],
                std::string::_Rep::_S_empty_rep_storage[0],
                0xC70F6907);
        v17 = sub_77EAD0(
                a1[5].m128i_i64[1],
                a1[6].m128i_u64[0],
                v16 % a1[6].m128i_i64[0],
                &std::string::_Rep::_S_empty_rep_storage[3],
                v16);
        v8 = std::string::_Rep::_S_empty_rep_storage;
        if ( v17 )
        {
          v9 = *v17;
          goto LABEL_36;
        }
        v6 = std::string::_Rep::_S_empty_rep_storage;
LABEL_32:
        if ( v6 != v8 )
        {
          if ( !&_pthread_key_create )
          {
            v20 = *((_DWORD *)v7 - 2);
            *((_DWORD *)v7 - 2) = v20 - 1;
            if ( v20 <= 0 )
              std::string::_Rep::_M_destroy();
            goto LABEL_33;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 - 2, 0xFFFFFFFF) <= 0 )
          {
            v9 = 0;
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

