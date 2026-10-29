unsigned __int64 __fastcall sub_2E350(std::string *this, _BYTE *a2)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // r8
  _QWORD *v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  char *v11; // r14
  size_t v12; // r12
  unsigned __int64 v13; // rdx
  char *v14; // rdi
  int v15; // edx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r14
  __int64 v18; // rsi
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  unsigned int v22; // r12d
  unsigned int v23; // [rsp+0h] [rbp-A8h]
  unsigned int v24; // [rsp+Ch] [rbp-9Ch]
  char v25; // [rsp+17h] [rbp-91h] BYREF
  char *v26; // [rsp+18h] [rbp-90h] BYREF
  _QWORD v27[5]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v28[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 (__fastcall *v29)(_QWORD *, _QWORD *, int); // [rsp+58h] [rbp-50h]
  __int64 (__fastcall *v30)(__int64, void (__fastcall **)(__int64, _QWORD, _QWORD), _QWORD *, _QWORD *); // [rsp+60h] [rbp-48h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v24 = sub_BFF0((__int64)a2);
  if ( v24 )
  {
    v4 = 0;
    do
    {
      v5 = sub_BFF0((__int64)a2);
      v6 = nullptr;
      if ( v4 < v5 )
        v6 = *(_QWORD **)&sub_C020(a2)[8 * v4];
      v7 = v4 + 1;
      switch ( *v6 )
      {
        case 0LL:
        case 1LL:
          std::string::append(this, "[", 1u);
          if ( v4 < (unsigned __int64)sub_BFF0((__int64)a2) )
            sub_C020(a2);
          v4 += 2;
          sub_24010(this);
          std::string::append(this, " : ", 3u);
          v9 = sub_BFF0((__int64)a2);
          v10 = 0;
          if ( v7 < v9 )
            v10 = *(_QWORD *)&sub_C020(a2)[8 * v7];
          v11 = *(char **)v10;
          v12 = *(_QWORD *)(v10 + 8);
          v27[0] = 0x101010101010100LL;
          v27[1] = 0x101000000000101LL;
          v27[2] = 0x100010101LL;
          v28[0] = sub_237A0;
          v30 = sub_AD80;
          v29 = sub_ADD0;
          v27[3] = 0;
          v27[4] = 0;
          v28[1] = 0;
          sub_23590(&v26, v11, v12, (__int64)v27);
          if ( v29 )
            v29(v28, v28, 3);
          v13 = *((_QWORD *)v26 - 3);
          if ( v13 )
            std::string::append(this, v26, v13);
          else
            std::string::append(this, v11, v12);
          std::string::append(this, "]", 1u);
          v14 = v26 - 24;
          if ( v26 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v15 = _InterlockedExchangeAdd((volatile signed __int32 *)v26 - 2, 0xFFFFFFFF);
            }
            else
            {
              v15 = *((_DWORD *)v26 - 2);
              *((_DWORD *)v26 - 2) = v15 - 1;
            }
            if ( v15 <= 0 )
              std::string::_Rep::_M_destroy(v14, &v25);
          }
          break;
        case 2LL:
        case 3LL:
          std::string::append(this, "[", 1u);
          if ( v4 < (unsigned __int64)sub_BFF0((__int64)a2) )
            sub_C020(a2);
          v4 += 2;
          sub_24010(this);
          std::string::append(this, " : ", 3u);
          if ( v7 < sub_BFF0((__int64)a2) )
            sub_C020(a2);
          sub_24010(this);
          std::string::append(this, "]", 1u);
          break;
        case 4LL:
          std::string::append(this, "[", 1u);
          if ( v4 < (unsigned __int64)sub_BFF0((__int64)a2) )
            sub_C020(a2);
          sub_24010(this);
          std::string::append(this, " : ", 3u);
          v22 = v4 + 2;
          if ( v7 < sub_BFF0((__int64)a2) )
            sub_C020(a2);
          sub_24010(this);
          v4 += 3;
          std::string::append(this, "'", 1u);
          if ( v22 < (unsigned __int64)sub_BFF0((__int64)a2) )
            sub_C020(a2);
          sub_24010(this);
          std::string::append(this, "'", 1u);
          std::string::append(this, "]", 1u);
          break;
        case 5LL:
          std::string::append(this, "[", 1u);
          if ( v4 < (unsigned __int64)sub_BFF0((__int64)a2) )
            sub_C020(a2);
          v16 = v4 + 2;
          sub_24010(this);
          std::string::append(this, " : ", 3u);
          if ( v7 < sub_BFF0((__int64)a2) )
            sub_C020(a2);
          sub_24010(this);
          std::string::append(this, ", Argument Types : [", 0x14u);
          v23 = sub_BFF0((__int64)a2);
          if ( (unsigned int)v16 >= v23 )
          {
            v4 += 2;
          }
          else
          {
            v17 = v4 + 3;
            while ( 1 )
            {
              v4 = v16;
              v18 = 0;
              if ( sub_BFF0((__int64)a2) > v16 )
                v18 = *(_QWORD *)&sub_C020(a2)[8 * v16];
              if ( *(_WORD *)(v18 + 16) != 221 )
                break;
              v4 = v17;
              sub_24010(this);
              if ( (unsigned int)v17 >= v23 )
                goto LABEL_35;
              v19 = sub_BFF0((__int64)a2);
              v20 = 0;
              if ( v17 < v19 )
                v20 = *(_QWORD *)&sub_C020(a2)[8 * v17];
              if ( *(_BYTE *)(v20 + 18) == 1 )
              {
                ++v16;
                ++v17;
                std::string::append(this, ", ", 2u);
                if ( v23 <= (unsigned int)v16 )
                  break;
              }
              else
              {
LABEL_35:
                ++v16;
                ++v17;
                if ( v23 <= (unsigned int)v16 )
                  break;
              }
            }
          }
          std::string::append(this, "]", 1u);
          break;
        case 9LL:
          std::string::append(this, "[", 1u);
          if ( v4 < (unsigned __int64)sub_BFF0((__int64)a2) )
            sub_C020(a2);
          sub_24010(this);
          std::string::append(this, " : ", 3u);
          if ( v7 < sub_BFF0((__int64)a2) )
            sub_C020(a2);
          sub_24010(this);
          v21 = v4 + 3;
          std::string::append(this, "<", 1u);
          if ( v4 + 2 < (unsigned __int64)sub_BFF0((__int64)a2) )
            sub_C020(a2);
          v4 += 4;
          sub_24010(this);
          std::string::append(this, ",", 1u);
          if ( v21 < sub_BFF0((__int64)a2) )
            sub_C020(a2);
          sub_24010(this);
          std::string::append(this, ">]", 2u);
          break;
        default:
          if ( v4 < (unsigned __int64)sub_BFF0((__int64)a2) )
            sub_C020(a2);
          ++v4;
          sub_24010(this);
          break;
      }
    }
    while ( v4 < v24 );
  }
  return v31 - __readfsqword(0x28u);
}
