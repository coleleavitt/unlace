__int64 __fastcall sub_249960(
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
  __int64 v19; // r15
  __int64 v20; // rax
  int v21; // r8d
  int v22; // r9d
  __int64 v24; // rbx
  __int64 v25; // rbx
  unsigned __int64 tinfo_size; // rbx
  bool v27; // bl
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  signed int v41; // [rsp+8h] [rbp-48h]
  __int64 v43; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v44; // [rsp+18h] [rbp-38h]

  v19 = a1 + 48;
  v44 = __readfsqword(0x28u);
  v41 = sub_2553C0(a3);
  if ( *(_DWORD *)(a1 + 8) == 48 )
  {
    v43 = 0;
    copy_tinfo_t(&v43, v19);
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 8) != 48 )
      {
        set_tinfo_property(&v43, 1, v41);
        sub_246F00(*(_QWORD *)(a1 + 24), a2, &v43);
        sub_246F00(*(_QWORD *)(a1 + 32), a2, &v43);
        clear_tinfo_t(&v43);
        goto LABEL_2;
      }
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 0);
      if ( tinfo_size < get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0) )
        break;
      v27 = (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 2) & 0xF) == 9;
      if ( v27 != ((get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0xF) == 9) )
        break;
      sub_255C10(a1, *(_QWORD *)(a1 + 24));
      if ( get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0) == -1 )
      {
        if ( !under_debugger )
          sub_3835A0(50402);
        BUG();
      }
    }
    v28 = j__qalloc_or_throw(64);
    *(_QWORD *)(v28 + 40) = 0;
    *(_QWORD *)(v28 + 8) = 0xFFFFFFFF00000000LL;
    *(_OWORD *)(v28 + 24) = 0;
    *(_QWORD *)v28 = -1;
    *(_QWORD *)(v28 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v28 + 48) = 0;
    *(_DWORD *)(v28 + 56) = 0;
    v29 = *(_QWORD *)a1;
    *(_QWORD *)a1 = -1;
    v30 = *(_DWORD *)(v28 + 8);
    *(_QWORD *)v28 = v29;
    LODWORD(v29) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 8) = v30;
    v31 = *(_DWORD *)(v28 + 12);
    *(_DWORD *)(v28 + 8) = v29;
    LODWORD(v29) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = v31;
    v32 = *(_QWORD *)(v28 + 24);
    *(_DWORD *)(v28 + 12) = v29;
    v33 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v32;
    v34 = *(_QWORD *)(v28 + 32);
    *(_QWORD *)(v28 + 24) = v33;
    v35 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v34;
    v36 = *(_QWORD *)(v28 + 40);
    *(_QWORD *)(v28 + 32) = v35;
    v37 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = v36;
    v38 = *(_QWORD *)(v28 + 48);
    *(_QWORD *)(v28 + 40) = v37;
    v39 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = v38;
    LODWORD(v38) = *(_DWORD *)(v28 + 56);
    *(_QWORD *)(v28 + 48) = v39;
    LODWORD(v39) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 56) = v38;
    *(_DWORD *)(v28 + 56) = v39;
    *(_QWORD *)(a1 + 24) = v28;
    if ( (get_tinfo_property(*(_QWORD *)(v28 + 48), 2) & 0xF) == 9 )
    {
      v40 = sub_23EBA0(xmmword_4292A0, *(_QWORD *)(a1 + 24) + 48LL);
      *(_DWORD *)(a1 + 56) |= 4u;
    }
    else
    {
      v40 = sub_241310(a2, 0, 0, -1, 0, v41, 0);
    }
    *(_QWORD *)(a1 + 32) = v40;
    *(_DWORD *)(a1 + 8) = a3;
    sub_244580(a1, *(_QWORD *)(a2 + 112), 0);
    clear_tinfo_t(&v43);
    return v44 - __readfsqword(0x28u);
  }
  else
  {
LABEL_2:
    v20 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v20 + 8) == 48 && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 48 )
    {
      v24 = (int)sub_23FC70((_QWORD *)(*(_QWORD *)(v20 + 24) + 48LL));
      if ( v24 == get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 0) )
      {
        v25 = (int)sub_23FC70((_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) + 48LL));
        if ( v25 == get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 0)
          && sub_245A10(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), a3) )
        {
          sub_255C10(*(_QWORD *)(a1 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL));
          sub_255C10(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL));
        }
      }
    }
    v43 = 8;
    *(_DWORD *)(a1 + 8) = a3;
    copy_tinfo_t(v19, &v43);
    clear_tinfo_t(&v43);
    return sub_2822D0(a1, a2, 0, 0, v21, v22, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
  }
}
