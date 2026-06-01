__int64 __fastcall sub_302130(__int64 a1, const char *a2)
{
  __int64 result; // rax
  unsigned int v3; // eax
  void *v4; // rbx
  void *v5; // rbx
  __int64 v6; // r14
  char v7; // dl
  int v8; // eax
  char v9; // cl
  char v10; // r9
  char v11; // di
  int v12; // eax
  void *v13; // r14
  unsigned int v14; // eax
  __int64 v15; // rbx
  void *v16; // rbx
  void *v17; // rbx
  __int64 v18; // r14
  char v19; // dl
  int v20; // eax
  char v21; // cl
  char v22; // r9
  char v23; // di
  int v24; // eax
  void *v25; // r14
  __int64 v26; // [rsp+8h] [rbp-A0h]
  __int64 v27; // [rsp+8h] [rbp-A0h]
  int v28; // [rsp+10h] [rbp-98h] BYREF
  char v29; // [rsp+14h] [rbp-94h]
  __int64 v30; // [rsp+18h] [rbp-90h]
  int v31; // [rsp+20h] [rbp-88h] BYREF
  char v32; // [rsp+24h] [rbp-84h]
  __int64 v33; // [rsp+28h] [rbp-80h]
  int v34; // [rsp+30h] [rbp-78h] BYREF
  char v35; // [rsp+34h] [rbp-74h]
  __int64 v36; // [rsp+38h] [rbp-70h]
  int v37; // [rsp+40h] [rbp-68h] BYREF
  char v38; // [rsp+44h] [rbp-64h]
  __int64 v39; // [rsp+48h] [rbp-60h]
  void *v40; // [rsp+50h] [rbp-58h] BYREF
  __int64 v41; // [rsp+58h] [rbp-50h]
  __int64 v42; // [rsp+60h] [rbp-48h] BYREF
  __int64 v43; // [rsp+68h] [rbp-40h]

  result = sub_180B130();
  if ( (_DWORD)result )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      (*(void (__fastcall **)(int *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 104LL))(
        &v28,
        *(_QWORD *)(a1 + 16),
        *(unsigned int *)(a1 + 24),
        a1 + 72);
      (*(void (__fastcall **)(int *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 104LL))(
        &v34,
        *(_QWORD *)(a1 + 16),
        *(unsigned int *)(a1 + 24),
        a1 + 104);
      if ( (v38 & 1) != 0 || v37 != 1 || (v32 & 1) != 0 || v31 != 1 )
      {
        LOBYTE(v14) = sub_1848D40(qword_1C7F2C0, &v34, &v28);
      }
      else if ( (v35 & 1) != 0 || (v29 & 1) != 0 )
      {
        v14 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v34, &v28) >> 31;
      }
      else
      {
        LOBYTE(v14) = v34 < v28;
      }
      if ( (_BYTE)v14 )
      {
        v41 = 0;
        v18 = v30;
        v43 = 0;
        v19 = v32;
        v27 = v33;
        v20 = v34;
        v21 = v29 & 2;
        v22 = v29 & 1;
        v34 = v28;
        v28 = v20;
        v23 = v32 & 1;
        LODWORD(v40) = v34;
        v30 = v36;
        v36 = v18;
        LODWORD(v42) = v31;
        LOBYTE(v20) = v29 & 2 | v35 & 0xFC;
        v29 = v35 & 1 | v35 & 2 | v29 & 0xFC;
        v35 = v22 | v20;
        v24 = v37;
        v37 = v31;
        v31 = v24;
        v33 = v39;
        v32 = v38 & 3 | v32 & 0xFC;
        BYTE4(v40) = v22 | BYTE4(v40) & 0xFC | v21;
        v39 = v27;
        v38 = v23 | v19 & 2 | v38 & 0xFC;
        v25 = qword_1C7F2C0;
        BYTE4(v42) = v23 | v19 & 2 | BYTE4(v42) & 0xFC;
        sub_182CBA0(qword_1C7F2C0, &v40);
        sub_182CBA0(v25, &v42);
      }
      sub_180B150();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( a2 )
      {
        strlen(a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1850940(&v40, qword_1C7F2C0, &v28);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v40 != &v42 )
        operator delete(v40, v42 + 1);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1850940(&v40, qword_1C7F2C0, &v34);
      v15 = std::__ostream_insert<char,std::char_traits<char>>();
      if ( v40 != &v42 )
        operator delete(v40, v42 + 1);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v15, "])\n");
      v16 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v34);
      sub_182CBA0(v16, &v37);
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v28);
      return sub_182CBA0(v17, &v31);
    }
    else
    {
      (*(void (__fastcall **)(int *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 104LL))(
        &v28,
        *(_QWORD *)(a1 + 16),
        *(unsigned int *)(a1 + 24),
        a1 + 72);
      (*(void (__fastcall **)(int *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 104LL))(
        &v34,
        *(_QWORD *)(a1 + 16),
        *(unsigned int *)(a1 + 24),
        a1 + 104);
      if ( (v38 & 1) != 0 || v37 != 1 || (v32 & 1) != 0 || v31 != 1 )
      {
        LOBYTE(v3) = sub_1848D40(qword_1C7F2C0, &v34, &v28);
      }
      else if ( (v35 & 1) != 0 || (v29 & 1) != 0 )
      {
        v3 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v34, &v28) >> 31;
      }
      else
      {
        LOBYTE(v3) = v34 < v28;
      }
      if ( (_BYTE)v3 )
      {
        v41 = 0;
        v6 = v30;
        v43 = 0;
        v7 = v32;
        v26 = v33;
        v8 = v34;
        v9 = v29 & 2;
        v10 = v29 & 1;
        v34 = v28;
        v28 = v8;
        v11 = v32 & 1;
        LODWORD(v40) = v34;
        v30 = v36;
        v36 = v6;
        LODWORD(v42) = v31;
        LOBYTE(v8) = v29 & 2 | v35 & 0xFC;
        v29 = v35 & 1 | v35 & 2 | v29 & 0xFC;
        v35 = v10 | v8;
        v12 = v37;
        v37 = v31;
        v31 = v12;
        v33 = v39;
        v32 = v38 & 3 | v32 & 0xFC;
        BYTE4(v40) = v10 | BYTE4(v40) & 0xFC | v9;
        v39 = v26;
        v38 = v11 | v7 & 2 | v38 & 0xFC;
        v13 = qword_1C7F2C0;
        BYTE4(v42) = v11 | v7 & 2 | BYTE4(v42) & 0xFC;
        sub_182CBA0(qword_1C7F2C0, &v40);
        sub_182CBA0(v13, &v42);
      }
      sub_180B150();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( a2 )
      {
        strlen(a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1850940(&v40, qword_1C7F2C0, &v28);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v40 != &v42 )
        operator delete(v40, v42 + 1);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1850940(&v40, qword_1C7F2C0, &v34);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v40 != &v42 )
        operator delete(v40, v42 + 1);
      std::__ostream_insert<char,std::char_traits<char>>();
      v4 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v34);
      sub_182CBA0(v4, &v37);
      v5 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v28);
      return sub_182CBA0(v5, &v31);
    }
  }
  return result;
}

