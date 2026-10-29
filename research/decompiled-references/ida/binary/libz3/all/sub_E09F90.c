void __fastcall sub_E09F90(__int64 a1, __int64 a2, __int64 *a3, double a4)
{
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // ebp
  std::chrono::_V2::steady_clock *v16; // rdi
  __int64 v17; // rax
  std::ostream *v18; // r13
  __int64 v19; // rax
  std::chrono::_V2::steady_clock *v20; // rbp
  __int64 (__fastcall *v21)(__int64); // rax
  std::ostream *v22; // rbp
  void (__fastcall ***v23)(_QWORD); // rax
  __int64 v24; // r13
  __int64 v25; // rax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 *v29; // r15
  __int64 v30; // rax
  char v31; // al
  std::ostream *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 i; // r15
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // [rsp+0h] [rbp-100h]
  __int64 v41; // [rsp+0h] [rbp-100h]
  __int64 v42; // [rsp+0h] [rbp-100h]
  unsigned int v43; // [rsp+Ch] [rbp-F4h]
  void (__fastcall ***v44)(_QWORD); // [rsp+10h] [rbp-F0h]
  char v45[8]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v49[16]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  std::chrono::_V2::steady_clock *v54; // [rsp+78h] [rbp-88h] BYREF
  int v55; // [rsp+80h] [rbp-80h]
  __int128 v56; // [rsp+88h] [rbp-78h]
  __int128 v57; // [rsp+98h] [rbp-68h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  __int16 v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]

  if ( !*(_BYTE *)(a1 + 273) )
  {
    if ( (unsigned int)sub_180B130(a1) > 0x63 )
    {
      if ( (unsigned __int8)sub_186A530(a4) )
      {
        sub_186A4C0(a4);
        v18 = (std::ostream *)sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_DF6320(v18);
        sub_186A500(v18, "(started \"check-sat\")");
      }
      else
      {
        v32 = (std::ostream *)sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_DF6320(v32);
      }
    }
    sub_DFBCB0(a1);
    v6 = *(_DWORD *)(a1 + 116);
    v7 = *(_BYTE *)(a1 + 904) == 0;
    *(_QWORD *)(a1 + 896) = 0;
    v40 = v6;
    v43 = *(_DWORD *)(a1 + 112);
    if ( v7 )
    {
      v17 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
      *(_BYTE *)(a1 + 904) = 1;
      *(_QWORD *)(a1 + 888) = v17;
    }
    v8 = *(_QWORD *)(a1 + 880);
    if ( v8 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8) )
    {
      v23 = *(void (__fastcall ****)(_QWORD))(a1 + 872);
      v24 = *(_QWORD *)(a1 + 880);
      v44 = v23;
      if ( v24 )
        ++*(_DWORD *)(v24 + 48);
      sub_DF6430(v23);
      *(_QWORD *)(a1 + 872) = v24;
      sub_DFBCB0(a1);
      v25 = *(_QWORD *)(a1 + 296);
      v54 = (std::chrono::_V2::steady_clock *)&off_1C4C9C8;
      v60 = v25;
      v59 = 0;
      v55 = 0;
      v58 = 0;
      v56 = 0;
      v57 = 0;
      sub_18086F0(v49, &v54, 1);
      sub_18561B0((unsigned int)v45, v40, (unsigned int)&v54, v26, v27, v28);
      sub_DFBCB0(a1);
      v42 = *(_QWORD *)(a1 + 296);
      sub_1829790(v42, v43);
      sub_DFBCB0(a1);
      v51 = 0;
      v50 = *(_QWORD *)(a1 + 296);
      if ( (_DWORD)a2 )
      {
        v29 = a3;
        do
        {
          v30 = *v29;
          v52 = v30;
          if ( v30 )
            ++*(_DWORD *)(v30 + 8);
          sub_DFA620(&v51, &v52);
          ++v29;
        }
        while ( &a3[(unsigned int)a2] != v29 );
      }
      v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 880) + 128LL))(*(_QWORD *)(a1 + 880));
      if ( !v44 || v31 != 1 )
      {
        sub_DFBCB0(a1);
        v53 = 0;
        v52 = *(_QWORD *)(a1 + 296);
        v33 = *(_QWORD *)(a1 + 760);
        if ( v33 )
        {
          v34 = *(unsigned int *)(v33 - 4);
          if ( (_DWORD)v34 )
          {
            for ( i = 0; i != v34; ++i )
            {
              v38 = *(_QWORD *)(a1 + 792);
              if ( v38 && (unsigned int)i < *(_DWORD *)(v38 - 4) && (v36 = *(_QWORD *)(v38 + 8 * i)) != 0 )
              {
                ++*(_DWORD *)(v36 + 8);
                v46 = v36;
                sub_DFA620(&v51, &v46);
                sub_DFBCB0(a1);
                v37 = sub_15E1B70(*(_QWORD *)(a1 + 296));
                v47 = v37;
                if ( v37 )
                  ++*(_DWORD *)(v37 + 8);
                sub_DFA620(&v53, &v47);
              }
              else
              {
                v39 = *(_QWORD *)(*(_QWORD *)(a1 + 760) + 8 * i);
                v48 = v39;
                if ( v39 )
                  ++*(_DWORD *)(v39 + 8);
                sub_DFA620(&v53, &v48);
              }
            }
          }
        }
        (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 880) + 112LL))(*(_QWORD *)(a1 + 880), &v52);
        sub_2334C0(&v52);
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 880) + 104LL))(
              *(_QWORD *)(a1 + 880),
              &v50);
      *(_DWORD *)(*(_QWORD *)(a1 + 880) + 52LL) = v15;
      sub_2334C0(&v50);
      sub_1829100(v42);
      sub_1856400(v45);
      sub_1808900(v49);
      sub_2495F0((__int64)&v54);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 864);
      if ( !v9 )
      {
        v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
        if ( v21 == sub_305010 )
          v22 = *(std::ostream **)(a1 + 408);
        else
          v22 = (std::ostream *)v21(a1);
        std::__ostream_insert<char,std::char_traits<char>>();
        v16 = v22;
        sub_DF6320(v22);
LABEL_12:
        if ( *(_BYTE *)(a1 + 904) )
        {
          v19 = std::chrono::_V2::steady_clock::now(v16);
          *(_BYTE *)(a1 + 904) = 0;
          *(_QWORD *)(a1 + 896) += v19 - *(_QWORD *)(a1 + 888);
        }
        return;
      }
      ++*(_DWORD *)(v9 + 48);
      sub_DF6430(*(void (__fastcall ****)(_QWORD))(a1 + 872));
      v10 = *(_QWORD *)(a1 + 864);
      *(_QWORD *)(a1 + 872) = v9;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 224LL))(v10, a1);
      sub_DFBCB0(a1);
      v11 = *(_QWORD *)(a1 + 296);
      v59 = 0;
      v55 = 0;
      v54 = (std::chrono::_V2::steady_clock *)&off_1C4C9C8;
      v58 = 0;
      v60 = v11;
      v56 = 0;
      v57 = 0;
      sub_18086F0(&v52, &v54, 1);
      sub_18561B0((unsigned int)&v50, v40, (unsigned int)&v54, v12, v13, v14);
      sub_DFBCB0(a1);
      v41 = *(_QWORD *)(a1 + 296);
      sub_1829790(v41, v43);
      v15 = sub_E60CB0(*(std::ios_base **)(a1 + 864), a2, (int)a3);
      if ( !v15 )
      {
        sub_DFBCB0(a1);
        if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 296)) )
          sub_E38C90(*(_QWORD *)(a1 + 864), &v54, "canceled");
        v15 = 0;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 864) + 52LL) = v15;
      sub_1829100(v41);
      sub_1856400(&v50);
      sub_1808900(&v52);
      sub_2495F0((__int64)&v54);
    }
    sub_DFDC60((_QWORD *)a1, v15);
    if ( v15 == 1 )
    {
      sub_E09930(a1);
      v16 = (std::chrono::_V2::steady_clock *)a1;
      sub_DF9320(a1, 1);
      v7 = *(_BYTE *)(a1 + 191) == 0;
      v54 = nullptr;
      if ( !v7 )
      {
        v16 = (std::chrono::_V2::steady_clock *)a1;
        if ( (unsigned __int8)sub_E02DB0(a1, (__int64 *****)&v54) )
        {
          v16 = (std::chrono::_V2::steady_clock *)a1;
          sub_E05330((_QWORD *)a1, (__int64 *)&v54);
        }
        v20 = v54;
        if ( v54 )
        {
          v7 = (*((_DWORD *)v54 + 4))-- == 1;
          if ( v7 )
          {
            (**(void (__fastcall ***)(std::chrono::_V2::steady_clock *))v20)(v20);
            v16 = v20;
            sub_186B220(v20);
          }
        }
      }
    }
    else
    {
      v16 = (std::chrono::_V2::steady_clock *)a1;
      sub_DF9320(a1, v15);
    }
    goto LABEL_12;
  }
}

