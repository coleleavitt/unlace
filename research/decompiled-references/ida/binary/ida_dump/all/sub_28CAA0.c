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
  int v21; // r13d
  _QWORD *v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // r15
  __int64 v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rsi
  _QWORD *v33; // [rsp+0h] [rbp-108h]
  __int64 v34; // [rsp+8h] [rbp-100h]
  __int64 v35; // [rsp+8h] [rbp-100h]
  __int64 v36; // [rsp+10h] [rbp-F8h]
  __int64 v37; // [rsp+20h] [rbp-E8h]
  __int64 v38; // [rsp+30h] [rbp-D8h]
  unsigned __int8 tinfo_details; // [rsp+3Eh] [rbp-CAh]
  char v40; // [rsp+3Fh] [rbp-C9h]
  _QWORD v41[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h]
  __int128 v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+78h] [rbp-90h]
  _QWORD v46[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v47; // [rsp+90h] [rbp-78h]
  __int64 v48; // [rsp+A0h] [rbp-68h]
  __int128 v49; // [rsp+A8h] [rbp-60h]
  char v50; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v51; // [rsp+C8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_QWORD *)(a1 + 72);
  v51 = __readfsqword(0x28u);
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
    v36 = v9;
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
    v41[0] = 0;
    v37 = v12;
    v13 = sub_284900((_QWORD *)a1, (int)v41, a2);
    v14 = v41;
    if ( !v13 )
    {
      v14 = nullptr;
      if ( *(_DWORD *)(v12 + 8) == 48 )
        v14 = (_QWORD *)(v12 + 48);
    }
    v7 = sub_2801E0(v36, v2 + 48, (__int64)v14);
    if ( (_BYTE)v7 )
    {
      v7 = 0;
LABEL_15:
      clear_tinfo_t();
      return v7;
    }
    v43 = 0;
    v45 = 0;
    v46[0] = 0;
    v46[1] = 0;
    v48 = 0;
    v50 = 16;
    v41[1] = 0;
    v44 = 0;
    v47 = 0;
    v49 = 0;
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
        v16 = v43;
        v34 = v43 + 80 * v44;
        if ( v34 != v43 )
        {
          while ( !(unsigned int)verify_tinfo() )
          {
            v16 += 80;
            if ( v16 == v34 )
              goto LABEL_40;
          }
          goto LABEL_29;
        }
LABEL_40:
        if ( (get_tinfo_property() & 0x3F) == 1 || !(unsigned int)verify_tinfo() )
        {
          if ( *(_DWORD *)(v37 + 8) == 59 )
          {
            v38 = a2 + 48;
            if ( (get_tinfo_property() & 0x3F) != 1 && !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72), v46, a2 + 48) )
              goto LABEL_29;
          }
          else
          {
            v38 = a2 + 48;
          }
          tinfo_property = 0;
          copy_tinfo_t();
          v40 = sub_29D090(a2, v38);
          sub_255850((__int64 *)v2, v36);
          sub_2804B0(*(_QWORD *)(a1 + 72), *(_QWORD *)(a2 + 24));
          sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
          v21 = v44;
          v22 = *(_QWORD **)(a2 + 32);
          v33 = v22;
          if ( (int)v44 != v22[1] )
          {
            if ( (unsigned __int64)(int)v44 >= v22[1] )
              goto LABEL_68;
            v23 = v50 & 0xF0;
            if ( (v50 & 0xF0) == 0xC0 )
              v23 = HIDWORD(v45);
            if ( v23 <= 0x10 )
              v23 = getinf();
            v24 = v23 & 0xFFFFFFF0;
            if ( v24 != 64 && v24 != 208 )
            {
LABEL_68:
              if ( !under_debugger )
                sub_383060(50622);
              BUG();
            }
            v33 = *(_QWORD **)(a2 + 32);
          }
          if ( v21 > 0 )
          {
            v25 = (unsigned int)(v21 - 1);
            v26 = v43;
            v27 = 0;
            v28 = 0;
            v35 = 8 * (9 * v25 + 9);
            do
            {
              v29 = v28 + *v33;
              sub_246B40(v29, *(_QWORD *)(a1 + 72), (_QWORD *)(v26 + v27 + 64));
              v26 = v43;
              v30 = *(_QWORD *)(v29 + 64);
              v28 += 72;
              v31 = v43 + v27;
              v27 += 80;
              *(_QWORD *)(v29 + 64) = *(_QWORD *)(v31 + 64);
              *(_QWORD *)(v31 + 64) = v30;
            }
            while ( v28 != v35 );
          }
          if ( sub_256740(a2, v37) )
          {
            copy_tinfo_t();
            sub_246B40(a2, *(_QWORD *)(a1 + 72), &tinfo_property);
          }
          v32 = tinfo_property;
          if ( ((unsigned int)lexcompare_tinfo() || v40 != (unsigned __int8)sub_29D090(a2, v32))
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
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree();
    }
    cleanup_argloc();
    clear_tinfo_t();
    v17 = v43;
    if ( v43 )
    {
      v18 = v44;
      if ( (_QWORD)v44 )
      {
        v19 = 0;
        do
        {
          v20 = (_QWORD *)(v17 + 80 * v19);
          clear_tinfo_t();
          if ( v20[5] )
          {
            v20[6] = 0;
            qfree();
          }
          if ( v20[2] )
          {
            v20[3] = 0;
            qfree();
          }
          ++v19;
          cleanup_argloc();
          v17 = v43;
        }
        while ( v18 != v19 );
      }
      *(_QWORD *)&v44 = 0;
      qfree();
    }
    goto LABEL_15;
  }
  return 0;
}
