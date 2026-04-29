__int64 __fastcall sub_28CAA0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // ebp
  __int64 v9; // rax
  int v10; // edx
  int v11; // esi
  __int64 v12; // r12
  char v13; // al
  _QWORD *v14; // rdx
  int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r12
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  int v23; // r13d
  _QWORD *v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // r15
  __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rsi
  _QWORD *v35; // [rsp+0h] [rbp-108h]
  __int64 v36; // [rsp+8h] [rbp-100h]
  __int64 v37; // [rsp+8h] [rbp-100h]
  __int64 v38; // [rsp+10h] [rbp-F8h]
  __int64 v39; // [rsp+20h] [rbp-E8h]
  __int64 v40; // [rsp+30h] [rbp-D8h]
  unsigned __int8 tinfo_details; // [rsp+3Eh] [rbp-CAh]
  char v42; // [rsp+3Fh] [rbp-C9h]
  _QWORD v43[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A8h]
  __int128 v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+78h] [rbp-90h]
  _QWORD v48[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v49; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+A0h] [rbp-68h]
  __int128 v51; // [rsp+A8h] [rbp-60h]
  char v52; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+C8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_QWORD *)(a1 + 72);
  v53 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 112);
  v6 = *(_DWORD *)(v2 + 8);
  if ( v6 == 51 )
  {
    while ( *(_DWORD *)(v5 + 84) == *(_DWORD *)(v2 + 40) )
    {
      v2 = *(_QWORD *)(v2 + 24);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 != 51 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  if ( v6 == 48 )
  {
    v9 = *(_QWORD *)(v2 + 24);
    v10 = *(_DWORD *)(v9 + 8);
    v38 = v9;
    if ( v10 == 51 )
    {
      v11 = *(_DWORD *)(v5 + 84);
      while ( v11 == *(_DWORD *)(v9 + 40) )
      {
        v9 = *(_QWORD *)(v9 + 24);
        v10 = *(_DWORD *)(v9 + 8);
        if ( v10 != 51 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      v7 = 0;
      if ( v10 == 48 )
        return v7;
    }
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    v43[0] = 0;
    v39 = v12;
    v13 = sub_284900((_QWORD *)a1, (int)v43, a2);
    v14 = v43;
    if ( !v13 )
    {
      v14 = nullptr;
      if ( *(_DWORD *)(v12 + 8) == 48 )
        v14 = (_QWORD *)(v12 + 48);
    }
    v7 = sub_2801E0(v38, v2 + 48, (__int64)v14);
    if ( (_BYTE)v7 )
    {
      v7 = 0;
LABEL_15:
      clear_tinfo_t();
      return v7;
    }
    v45 = 0;
    v47 = 0;
    v48[0] = 0;
    v48[1] = 0;
    v50 = 0;
    v52 = 16;
    v43[1] = 0;
    v46 = 0;
    v49 = 0;
    v51 = 0;
    copy_tinfo_t();
    v15 = 0;
    while ( (get_tinfo_property() & 0xF) == 0xA )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      ++v15;
      clear_tinfo_t();
    }
    tinfo_details = get_tinfo_details();
    if ( tinfo_details )
    {
      clear_tinfo_t();
      if ( v15 >= 0 )
      {
        v16 = v45;
        v36 = v45 + 80 * v46;
        if ( v36 != v45 )
        {
          while ( !(unsigned int)verify_tinfo() )
          {
            v16 += 80;
            if ( v16 == v36 )
              goto LABEL_40;
          }
          goto LABEL_29;
        }
LABEL_40:
        if ( (get_tinfo_property() & 0x3F) == 1 || !(unsigned int)verify_tinfo() )
        {
          if ( *(_DWORD *)(v39 + 8) == 59 )
          {
            v40 = a2 + 48;
            if ( (get_tinfo_property() & 0x3F) != 1 && !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72), v48, a2 + 48) )
              goto LABEL_29;
          }
          else
          {
            v40 = a2 + 48;
          }
          tinfo_property = 0;
          copy_tinfo_t();
          v42 = sub_29D090(a2, v40);
          sub_255850((__int64 *)v2, v38);
          sub_2804B0(*(_QWORD *)(a1 + 72), *(_QWORD *)(a2 + 24));
          sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
          v23 = v46;
          v24 = *(_QWORD **)(a2 + 32);
          v35 = v24;
          if ( (int)v46 != v24[1] )
          {
            if ( (unsigned __int64)(int)v46 >= v24[1] )
              goto LABEL_68;
            v25 = v52 & 0xF0;
            if ( (v52 & 0xF0) == 0xC0 )
              v25 = HIDWORD(v47);
            if ( v25 <= 0x10 )
              v25 = getinf();
            v26 = v25 & 0xFFFFFFF0;
            if ( v26 != 64 && v26 != 208 )
            {
LABEL_68:
              if ( !under_debugger )
                sub_383060(50622);
              BUG();
            }
            v35 = *(_QWORD **)(a2 + 32);
          }
          if ( v23 > 0 )
          {
            v27 = (unsigned int)(v23 - 1);
            v28 = v45;
            v29 = 0;
            v30 = 0;
            v37 = 8 * (9 * v27 + 9);
            do
            {
              v31 = v30 + *v35;
              sub_246B40(v31, *(_QWORD *)(a1 + 72), (_QWORD *)(v28 + v29 + 64));
              v28 = v45;
              v32 = *(_QWORD *)(v31 + 64);
              v30 += 72;
              v33 = v45 + v29;
              v29 += 80;
              *(_QWORD *)(v31 + 64) = *(_QWORD *)(v33 + 64);
              *(_QWORD *)(v33 + 64) = v32;
            }
            while ( v30 != v37 );
          }
          if ( sub_256740(a2, v39) )
          {
            copy_tinfo_t();
            sub_246B40(a2, *(_QWORD *)(a1 + 72), &tinfo_property);
          }
          v34 = tinfo_property;
          if ( ((unsigned int)lexcompare_tinfo() || v42 != (unsigned __int8)sub_29D090(a2, v34))
            && (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
          {
            *(_DWORD *)(a1 + 8) |= 8u;
          }
          clear_tinfo_t();
          v7 = tinfo_details;
        }
      }
    }
    else
    {
      clear_tinfo_t();
    }
LABEL_29:
    if ( v50 )
    {
      *(_QWORD *)&v51 = 0;
      qfree(v50);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v17 = v45;
    if ( v45 )
    {
      v18 = v46;
      if ( (_QWORD)v46 )
      {
        v19 = 0;
        do
        {
          v20 = (_QWORD *)(v17 + 80 * v19);
          clear_tinfo_t();
          v21 = v20[5];
          if ( v21 )
          {
            v20[6] = 0;
            qfree(v21);
          }
          v22 = v20[2];
          if ( v22 )
          {
            v20[3] = 0;
            qfree(v22);
          }
          ++v19;
          cleanup_argloc();
          v17 = v45;
        }
        while ( v18 != v19 );
      }
      *(_QWORD *)&v46 = 0;
      qfree(v17);
    }
    goto LABEL_15;
  }
  return 0;
}
