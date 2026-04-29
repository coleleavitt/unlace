__int64 __fastcall sub_2495A0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        char a14,
        int a15,
        int a16,
        int a17,
        int a18,
        __int64 a19)
{
  int v20; // r8d
  int v21; // r9d
  __int64 v23; // rbx
  __int64 v24; // rbx
  unsigned __int64 tinfo_size; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  bool v29; // bl
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // [rsp+8h] [rbp-48h]
  __int64 v47; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v48; // [rsp+18h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  v45 = sub_255000(a3, a2);
  if ( *(_DWORD *)(a1 + 8) == 48 )
  {
    v47 = 0;
    copy_tinfo_t();
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 8) != 48 )
      {
        set_tinfo_property();
        sub_246B40(*(_QWORD *)(a1 + 24), a2, &v47);
        sub_246B40(*(_QWORD *)(a1 + 32), a2, &v47);
        clear_tinfo_t();
        goto LABEL_2;
      }
      tinfo_size = get_tinfo_size();
      v26 = *(_QWORD *)(a1 + 48);
      if ( tinfo_size < get_tinfo_size() )
        break;
      v26 = 2;
      v29 = (get_tinfo_property() & 0xF) == 9;
      if ( v29 != ((get_tinfo_property() & 0xF) == 9) )
        break;
      sub_255850(a1, *(_QWORD *)(a1 + 24));
      if ( get_tinfo_size() == -1 )
      {
        if ( !under_debugger )
          sub_383060(50402);
        BUG();
      }
    }
    v30 = j__qalloc_or_throw(64, v26, v27, v28);
    *(_QWORD *)(v30 + 40) = 0;
    *(_QWORD *)(v30 + 8) = 0xFFFFFFFF00000000LL;
    *(_OWORD *)(v30 + 24) = 0;
    *(_QWORD *)v30 = -1;
    *(_QWORD *)(v30 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v30 + 48) = 0;
    *(_DWORD *)(v30 + 56) = 0;
    v31 = *(_QWORD *)a1;
    *(_QWORD *)a1 = -1;
    v32 = *(_DWORD *)(v30 + 8);
    *(_QWORD *)v30 = v31;
    LODWORD(v31) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 8) = v32;
    v33 = *(_DWORD *)(v30 + 12);
    *(_DWORD *)(v30 + 8) = v31;
    LODWORD(v31) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = v33;
    v34 = *(_QWORD *)(v30 + 24);
    *(_DWORD *)(v30 + 12) = v31;
    v35 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v34;
    v36 = *(_QWORD *)(v30 + 32);
    *(_QWORD *)(v30 + 24) = v35;
    v37 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v36;
    v38 = *(_QWORD *)(v30 + 40);
    *(_QWORD *)(v30 + 32) = v37;
    v39 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = v38;
    v40 = *(_QWORD *)(v30 + 48);
    *(_QWORD *)(v30 + 40) = v39;
    v41 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = v40;
    LODWORD(v40) = *(_DWORD *)(v30 + 56);
    *(_QWORD *)(v30 + 48) = v41;
    LODWORD(v41) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 56) = v40;
    *(_DWORD *)(v30 + 56) = v41;
    *(_QWORD *)(a1 + 24) = v30;
    if ( (get_tinfo_property() & 0xF) == 9 )
    {
      v44 = sub_23E7E0(xmmword_42E1E0, *(_QWORD *)(a1 + 24) + 48LL, v42, v43);
      *(_DWORD *)(a1 + 56) |= 4u;
    }
    else
    {
      v44 = sub_240F50(a2, 0, 0, -1, 0, v45, 0);
    }
    *(_QWORD *)(a1 + 32) = v44;
    *(_DWORD *)(a1 + 8) = a3;
    sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0);
    clear_tinfo_t();
    return v48 - __readfsqword(0x28u);
  }
  else
  {
LABEL_2:
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) == 48 && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 48 )
    {
      v23 = (int)sub_23F8B0();
      if ( v23 == get_tinfo_size() )
      {
        v24 = (int)sub_23F8B0();
        if ( v24 == get_tinfo_size()
          && sub_245650(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), a3) )
        {
          sub_255850(*(_QWORD *)(a1 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL));
          sub_255850(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL));
        }
      }
    }
    v47 = 8;
    *(_DWORD *)(a1 + 8) = a3;
    copy_tinfo_t();
    clear_tinfo_t();
    return sub_281F10(a1, a2, 0, 0, v20, v21, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
  }
}
