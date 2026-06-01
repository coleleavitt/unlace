__int64 __fastcall sub_295CC0(__int64 a1, __int64 a2)
{
  bool v3; // zf
  unsigned int v5; // eax
  __int64 v7; // rdx
  char v8; // al
  char v9; // r13
  unsigned int tinfo_size; // eax
  __int64 v11; // r14
  unsigned int tinfo_property; // eax
  _QWORD *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r14
  int v32; // ebp
  unsigned __int8 v33; // r13
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // r12
  __int64 v37; // rbp
  char v38; // r14
  __int64 v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // dl
  unsigned int v43; // eax
  int v44; // eax
  int v45; // r12d
  char v46; // r12
  unsigned int v47; // [rsp+8h] [rbp-80h]
  __int64 v48; // [rsp+8h] [rbp-80h]
  unsigned int v49; // [rsp+10h] [rbp-78h]
  int v50; // [rsp+18h] [rbp-70h]
  __int64 v51; // [rsp+20h] [rbp-68h]
  __int64 v52; // [rsp+28h] [rbp-60h]
  __int64 v53; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v54[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a2 + 8) == 61;
  v54[1] = __readfsqword(0x28u);
  if ( !v3 )
    goto LABEL_2;
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_BYTE *)(v7 + 13);
  if ( (v8 & 0x18) != 0 && (v8 & 6) == 0 )
  {
    v53 = 0;
    v9 = v8 & 8;
    *(_BYTE *)(v7 + 13) = v8 | ((v8 & 8) == 0 ? 4 : 2);
    tinfo_size = get_tinfo_size();
    v47 = sub_284430(a1, a2, tinfo_size, 0);
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    if ( (unsigned int)(*(_DWORD *)(v11 + 8) - 22) <= 1 )
    {
      copy_tinfo_t();
      v47 = get_tinfo_size();
    }
    tinfo_property = get_tinfo_property();
    v13 = *(_QWORD **)(a2 + 24);
    v49 = tinfo_property;
    v14 = -*v13;
    if ( !v9 )
      v14 = ~*v13;
    *v13 = sub_32ABC0(v14, v47, 0);
    if ( !(_BYTE)v53 )
    {
      sub_240880(v54, *(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), v47, v49);
      copy_tinfo_t();
      clear_tinfo_t();
    }
    v15 = *(_QWORD *)(a2 + 24);
    v16 = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFFDFFFFLL;
    sub_329C80(v15 + 8, v16);
    if ( v9 && (unsigned int)(*(_DWORD *)(v11 + 8) - 35) <= 1 && a2 == *(_QWORD *)(v11 + 32) )
    {
      copy_tinfo_t();
      v44 = 35;
      if ( *(_DWORD *)(v11 + 8) == 35 )
        v44 = 36;
      *(_DWORD *)(v11 + 8) = v44;
      clear_tinfo_t();
    }
    else
    {
      v19 = j__qalloc_or_throw(64, v16, v17, v18);
      *(_QWORD *)(v19 + 40) = 0;
      *(_QWORD *)(v19 + 8) = 0xFFFFFFFF00000000LL;
      *(_OWORD *)(v19 + 24) = 0;
      *(_QWORD *)v19 = -1;
      *(_QWORD *)(v19 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v19 + 48) = 0;
      *(_DWORD *)(v19 + 56) = 0;
      v20 = *(_QWORD *)a2;
      *(_QWORD *)a2 = -1;
      v21 = *(_DWORD *)(v19 + 8);
      *(_QWORD *)v19 = v20;
      LODWORD(v20) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = v21;
      v22 = *(_DWORD *)(v19 + 12);
      *(_DWORD *)(v19 + 8) = v20;
      LODWORD(v20) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v22;
      v23 = *(_QWORD *)(v19 + 24);
      *(_DWORD *)(v19 + 12) = v20;
      v24 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 24) = v23;
      v25 = *(_QWORD *)(v19 + 32);
      *(_QWORD *)(v19 + 24) = v24;
      v26 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 32) = v25;
      v27 = *(_QWORD *)(v19 + 40);
      *(_QWORD *)(v19 + 32) = v26;
      v28 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = v27;
      v29 = *(_QWORD *)(v19 + 48);
      *(_QWORD *)(v19 + 40) = v28;
      v30 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 48) = v29;
      LODWORD(v29) = *(_DWORD *)(v19 + 56);
      *(_QWORD *)(v19 + 48) = v30;
      LODWORD(v30) = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a2 + 56) = v29;
      *(_DWORD *)(v19 + 56) = v30;
      *(_QWORD *)(a2 + 24) = v19;
      *(_DWORD *)(a2 + 8) = v9 == 0 ? 50 : 47;
      *(_QWORD *)a2 = *(_QWORD *)v19;
      sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
      if ( (unsigned int)lexcompare_tinfo() )
      {
        v54[0] = 7;
        copy_tinfo_t();
        clear_tinfo_t();
        v45 = get_tinfo_property();
        if ( v45 != (unsigned int)get_tinfo_property() )
          sub_246B40(a2, *(_QWORD *)(a1 + 72), &v53);
        v46 = sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
        clear_tinfo_t();
        if ( v46 )
        {
          *(_DWORD *)(a1 + 8) |= 8u;
          return 1;
        }
      }
      else
      {
        clear_tinfo_t();
      }
    }
  }
  if ( *(_BYTE *)(a1 + 88) )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    if ( (unsigned int)(*(_DWORD *)(v31 + 8) - 22) > 9 )
    {
LABEL_3:
      if ( (unsigned __int8)sub_295110((_QWORD *)a1, (char *)a2) )
      {
        ++*(_DWORD *)(a1 + 80);
        if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
          return 1;
      }
      goto LABEL_5;
    }
    v32 = get_tinfo_size();
    v33 = *(_BYTE *)(*(_QWORD *)(a1 + 72) + 130LL);
    if ( v32 < v33 )
    {
      v34 = sub_255A30(*(__int64 **)(a2 + 24));
      v35 = 8 * v32 - 1;
      v48 = v34;
      if ( (unsigned __int64)v35 <= 0x3F )
      {
        v36 = 1LL << v35;
        if ( (-(1LL << v35) & v34) != 0 )
        {
          v37 = *(_QWORD *)(v31 + 24);
          if ( a2 == v37 )
            v37 = *(_QWORD *)(v31 + 32);
          v50 = get_tinfo_property();
          v51 = 2 * v36 - 1;
          if ( v50 == 1 && get_tinfo_size() < (unsigned __int64)v33 )
          {
            v38 = is_invsign();
            if ( v38 )
            {
              if ( (v36 & v48) != 0 && v48 != v36 )
                goto LABEL_2;
              v38 = 0;
              v39 = v51 & v48;
            }
            else
            {
              v39 = v51 & v48;
            }
          }
          else
          {
            if ( !*(_BYTE *)(*(_QWORD *)(a2 + 24) + 13LL) )
            {
              v52 = *(_QWORD *)(a2 + 24);
              if ( (unsigned __int8)is_numop() )
              {
                if ( (unsigned int)get_radix() == 10 && (unsigned int)sub_255000(*(_DWORD *)(v31 + 8)) != 1 )
                  sub_329C80(v52 + 8, 0x11111101100000LL);
              }
            }
            v38 = is_invsign();
            if ( !v38 || (v36 & v48) == 0 || v48 == v36 )
              goto LABEL_2;
            v39 = -v48 & v51;
          }
          if ( (get_tinfo_property() & 0x3F) == 0x2D )
          {
            LOBYTE(v40) = (unsigned int)get_tinfo_property() == 1;
            if ( (_BYTE)v40 == (v50 == 1) )
              goto LABEL_2;
          }
          else
          {
            v54[0] = 7;
            copy_tinfo_t();
            clear_tinfo_t();
            if ( !v38 )
              **(_QWORD **)(a2 + 24) = v39;
          }
          sub_244D80((__int64 *)a2, v37 + 48, v40, v41);
        }
      }
    }
LABEL_2:
    if ( !*(_BYTE *)(a1 + 88) )
      goto LABEL_5;
    goto LABEL_3;
  }
LABEL_5:
  *(_DWORD *)(a1 + 80) += sub_294400(a1, a2);
  v5 = *(_DWORD *)(a1 + 8) & 8;
  if ( !*(_BYTE *)(a1 + 88) )
    return v5 >> 3;
  if ( v5 )
    return 1;
  v42 = sub_290F60(a1, a2);
  v43 = *(_DWORD *)(a1 + 8);
  if ( v42 )
  {
    ++*(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 8) = v43 | 8;
    return 1;
  }
  return (v43 >> 3) & 1;
}
