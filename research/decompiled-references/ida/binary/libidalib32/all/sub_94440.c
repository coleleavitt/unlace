__int64 __fastcall sub_94440(char a1)
{
  __int64 license_manager; // rax
  void **v2; // rax
  char *v3; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rdx
  bool v8; // zf
  const char *v9; // rax
  int v10; // r12d
  __int64 v11; // rax
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rbx
  _QWORD *v16; // rax
  unsigned __int64 i; // rbx
  size_t v19; // rax
  const char *v20; // rsi
  size_t v21; // r12
  size_t v22; // r14
  const char *v23; // rsi
  _QWORD *v24; // [rsp+40h] [rbp-A1B0h] BYREF
  __int128 v25; // [rsp+48h] [rbp-A1A8h]
  __int64 v26; // [rsp+60h] [rbp-A190h]
  __int128 v27; // [rsp+68h] [rbp-A188h]
  __int64 v28; // [rsp+80h] [rbp-A170h]
  __int128 v29; // [rsp+88h] [rbp-A168h]
  __int64 v30; // [rsp+A0h] [rbp-A150h]
  __int128 v31; // [rsp+A8h] [rbp-A148h]
  _BYTE *v32; // [rsp+C0h] [rbp-A130h]
  __int128 v33; // [rsp+C8h] [rbp-A128h]
  __int64 v34; // [rsp+140h] [rbp-A0B0h] BYREF
  _BYTE v35[88]; // [rsp+148h] [rbp-A0A8h] BYREF
  unsigned __int64 v36; // [rsp+1A0h] [rbp-A050h]
  char s[40968]; // [rsp+1B0h] [rbp-A040h] BYREF
  unsigned __int64 v38; // [rsp+A1B8h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  time(nullptr);
  reg_int_op();
  license_manager = get_license_manager();
  if ( (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(license_manager, 0, 0) )
  {
    v25 = 0;
    v24 = (_QWORD *)qvector_reserve();
    *v24 = 0;
    v26 = 0;
    *(_QWORD *)&v25 = v25 + 1;
    v27 = 0;
    if ( (unsigned __int8)get_mac_addresses() )
      sub_92640((__int64 *)&v24);
    v28 = 0;
    v29 = 0;
    if ( (unsigned __int8)qgethostname() )
      sub_92640((__int64 *)&v24);
    sub_928D0();
    sub_92640((__int64 *)&v24);
    v34 = 0;
    *(_OWORD *)v35 = 0;
    sub_94360(&v34);
    sub_92640((__int64 *)&v24);
    if ( v34 )
    {
      *(_QWORD *)v35 = 0;
      qfree();
    }
    sub_92640((__int64 *)&v24);
    if ( a1 )
      sub_92640((__int64 *)&v24);
    memset(&v35[8], 0, 0x50u);
    v34 = 104;
    *(_QWORD *)v35 = 0xFFFF00000041LL;
    *(_QWORD *)&v35[64] = "idat_930";
    v36 = 40960;
    *(_QWORD *)&v35[32] = v24;
    *(__m128i *)&v35[8] = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)&off_22E448),
                            (__m128i)(unsigned __int64)"/cgi-bin/oracle_9.cgi");
    v2 = sub_928D0();
    v3 = strrchr((const char *)*v2, 46);
    *(_QWORD *)&v35[80] = s;
    v7 = v3 + 1;
    v8 = v3 == nullptr;
    v9 = "none";
    if ( !v8 )
      v9 = v7;
    *(_QWORD *)&v35[72] = v9;
    if ( a1 )
    {
      v10 = http_request();
    }
    else
    {
      sub_10DDF0((unsigned int)"Connecting to the server...", 46, (_DWORD)v7, v4, v5, v6);
      v10 = http_request();
      sub_10D850(&v34);
    }
    v30 = 0;
    v32 = nullptr;
    v31 = 0;
    v33 = 0;
    if ( v10 )
    {
      v11 = v36;
      if ( v36 > 0x9FFF )
        v11 = 40959;
      s[v11] = 0;
      parse_json_string();
      v12 = v32;
      if ( *((_QWORD *)&v33 + 1) <= 0x17u )
      {
        v32 = (_BYTE *)qvector_reserve();
        v12 = v32;
      }
      *(_QWORD *)&v33 = 24;
      *(__m128i *)v12 = _mm_load_si128(xmmword_1D1F40);
      *(_QWORD *)(v12 + 15) = 0x74616D726F662065LL;
      v32[23] = 0;
      jvalue_t_clear();
      if ( a1 )
        goto LABEL_20;
LABEL_49:
      if ( (_QWORD)v33 )
      {
        v20 = v32;
        goto LABEL_42;
      }
LABEL_41:
      v20 = s1;
LABEL_42:
      sub_92120((__int64)"AUTOHIDE NONE\n%s", v20);
LABEL_20:
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree();
      }
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
      }
      v13 = v26;
      if ( v26 )
      {
        v14 = v27;
        if ( (_QWORD)v27 )
        {
          v15 = 0;
          do
          {
            v16 = (_QWORD *)(v13 + 24 * v15);
            if ( *v16 )
            {
              v16[1] = 0;
              qfree();
              v13 = v26;
            }
            ++v15;
          }
          while ( v14 != v15 );
        }
        *(_QWORD *)&v27 = 0;
        qfree();
      }
      for ( i = 0; i < (unsigned __int64)v25; ++i )
        qfree();
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree();
      }
      return v38 - __readfsqword(0x28u);
    }
    v19 = strlen(s);
    if ( v19 )
    {
      v21 = v19 + 1;
      v22 = v19;
      v32 = (_BYTE *)qvector_reserve();
      *(_QWORD *)&v33 = v21;
      memmove(v32, s, v22);
      v32[v22] = 0;
      if ( !a1 )
        goto LABEL_49;
      if ( (_QWORD)v33 )
      {
        v23 = v32;
        goto LABEL_48;
      }
    }
    else if ( !a1 )
    {
      goto LABEL_41;
    }
    v23 = s1;
LABEL_48:
    sub_8F660(
      (__int64)"Auto-check for update failed: %s. (Auto-check for updates can be turned off in 'Help > Check for free update')\n",
      v23);
    goto LABEL_20;
  }
  if ( a1 )
    return v38 - __readfsqword(0x28u);
  return sub_92120((__int64)"IDA is currently not using any license.\n"
                            "Please select a license file (or server) and try again!");
}

