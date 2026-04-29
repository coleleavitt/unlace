__int64 __fastcall sub_2910C0(__int64 a1, __int64 a2)
{
  bool v3; // zf
  unsigned int v5; // eax
  __int64 v7; // rdx
  char v8; // al
  char v9; // r13
  unsigned int tinfo_size; // eax
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned int tinfo_property; // eax
  _QWORD *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r14
  int v29; // ebp
  unsigned __int8 v30; // r13
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // r12
  __int64 v34; // rbp
  __int64 v35; // rdx
  char v36; // r14
  __int64 v37; // r13
  char v38; // dl
  unsigned int v39; // eax
  int v40; // eax
  int v41; // r12d
  char v42; // r12
  char v43; // al
  int radix; // eax
  int v45; // eax
  unsigned int v46; // [rsp+8h] [rbp-80h]
  __int64 v47; // [rsp+8h] [rbp-80h]
  unsigned int v48; // [rsp+10h] [rbp-78h]
  int v49; // [rsp+18h] [rbp-70h]
  __int64 v50; // [rsp+20h] [rbp-68h]
  __int64 v51; // [rsp+28h] [rbp-60h]
  __int64 v52; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v53[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a2 + 8) == 61;
  v53[1] = __readfsqword(0x28u);
  if ( !v3 )
    goto LABEL_2;
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_BYTE *)(v7 + 13);
  if ( (v8 & 0x18) != 0 && (v8 & 6) == 0 )
  {
    v52 = 0;
    v9 = v8 & 8;
    *(_BYTE *)(v7 + 13) = v8 | ((v8 & 8) == 0 ? 4 : 2);
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
    v46 = sub_27F830(a1, a2, tinfo_size, 0);
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    if ( (unsigned int)(*(_DWORD *)(v11 + 8) - 22) <= 1 )
    {
      v12 = *(_QWORD *)(v11 + 24);
      if ( a2 == v12 )
        v12 = *(_QWORD *)(v11 + 32);
      copy_tinfo_t(&v52, v12 + 48);
      v46 = get_tinfo_size(0, v52, 0);
    }
    tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 48), 3);
    v14 = *(_QWORD **)(a2 + 24);
    v48 = tinfo_property;
    v15 = -*v14;
    if ( !v9 )
      v15 = ~*v14;
    *v14 = sub_325910(v15, v46, 0);
    if ( !(_BYTE)v52 )
    {
      sub_23BC80(v53, *(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), v46, v48);
      copy_tinfo_t(&v52, v53);
      clear_tinfo_t(v53);
    }
    sub_324B80(*(_QWORD *)(a2 + 24) + 8LL, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL) & 0xFFFFFFFFFFFDFFFFLL);
    if ( v9 && (unsigned int)(*(_DWORD *)(v11 + 8) - 35) <= 1 && a2 == *(_QWORD *)(v11 + 32) )
    {
      copy_tinfo_t(a2 + 48, &v52);
      v40 = 35;
      if ( *(_DWORD *)(v11 + 8) == 35 )
        v40 = 36;
      *(_DWORD *)(v11 + 8) = v40;
      clear_tinfo_t(&v52);
    }
    else
    {
      v16 = j__qalloc_or_throw(64);
      *(_QWORD *)(v16 + 40) = 0;
      *(_QWORD *)(v16 + 8) = 0xFFFFFFFF00000000LL;
      *(_OWORD *)(v16 + 24) = 0;
      *(_QWORD *)v16 = -1;
      *(_QWORD *)(v16 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v16 + 48) = 0;
      *(_DWORD *)(v16 + 56) = 0;
      v17 = *(_QWORD *)a2;
      *(_QWORD *)a2 = -1;
      v18 = *(_DWORD *)(v16 + 8);
      *(_QWORD *)v16 = v17;
      LODWORD(v17) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = v18;
      v19 = *(_DWORD *)(v16 + 12);
      *(_DWORD *)(v16 + 8) = v17;
      LODWORD(v17) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v19;
      v20 = *(_QWORD *)(v16 + 24);
      *(_DWORD *)(v16 + 12) = v17;
      v21 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 24) = v20;
      v22 = *(_QWORD *)(v16 + 32);
      *(_QWORD *)(v16 + 24) = v21;
      v23 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 32) = v22;
      v24 = *(_QWORD *)(v16 + 40);
      *(_QWORD *)(v16 + 32) = v23;
      v25 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = v24;
      v26 = *(_QWORD *)(v16 + 48);
      *(_QWORD *)(v16 + 40) = v25;
      v27 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 48) = v26;
      LODWORD(v26) = *(_DWORD *)(v16 + 56);
      *(_QWORD *)(v16 + 48) = v27;
      LODWORD(v27) = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a2 + 56) = v26;
      *(_DWORD *)(v16 + 56) = v27;
      *(_QWORD *)(a2 + 24) = v16;
      *(_DWORD *)(a2 + 8) = v9 == 0 ? 50 : 47;
      *(_QWORD *)a2 = *(_QWORD *)v16;
      sub_23F5C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
      if ( (unsigned int)lexcompare_tinfo(v52, *(_QWORD *)(a2 + 48), 0) )
      {
        v53[0] = 7;
        copy_tinfo_t(a2 + 48, v53);
        clear_tinfo_t(v53);
        v41 = get_tinfo_property(v52, 3);
        if ( v41 != (unsigned int)get_tinfo_property(*(_QWORD *)(a2 + 48), 3) )
          sub_241F40(a2, *(_QWORD *)(a1 + 72), &v52);
        v42 = sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
        clear_tinfo_t(&v52);
        if ( v42 )
        {
          *(_DWORD *)(a1 + 8) |= 8u;
          return 1;
        }
      }
      else
      {
        clear_tinfo_t(&v52);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 88) )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    if ( (unsigned int)(*(_DWORD *)(v28 + 8) - 22) > 9 )
    {
LABEL_3:
      if ( (unsigned __int8)sub_290510(a1, a2) )
      {
        ++*(_DWORD *)(a1 + 80);
        if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
          return 1;
      }
      goto LABEL_5;
    }
    v29 = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
    v30 = *(_BYTE *)(*(_QWORD *)(a1 + 72) + 130LL);
    if ( v29 < v30 )
    {
      v31 = sub_250E30(*(__int64 **)(a2 + 24), (_QWORD *)(a2 + 48));
      v32 = 8 * v29 - 1;
      v47 = v31;
      if ( (unsigned __int64)v32 <= 0x3F )
      {
        v33 = 1LL << v32;
        if ( (-(1LL << v32) & v31) != 0 )
        {
          v34 = *(_QWORD *)(v28 + 24);
          if ( a2 == v34 )
            v34 = *(_QWORD *)(v28 + 32);
          v49 = get_tinfo_property(*(_QWORD *)(v34 + 48), 3);
          v50 = 2 * v33 - 1;
          if ( v49 == 1 && get_tinfo_size(0, *(_QWORD *)(v34 + 48), 0) < (unsigned __int64)v30 )
          {
            v36 = is_invsign(
                    -1,
                    *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL),
                    (unsigned int)*(char *)(*(_QWORD *)(a2 + 24) + 12LL));
            if ( v36 )
            {
              if ( (v33 & v47) != 0 && v47 != v33 )
                goto LABEL_2;
              v36 = 0;
              v37 = v50 & v47;
            }
            else
            {
              v37 = v50 & v47;
            }
          }
          else
          {
            v35 = *(_QWORD *)(a2 + 24);
            if ( !*(_BYTE *)(v35 + 13) )
            {
              v51 = *(_QWORD *)(a2 + 24);
              v43 = is_numop(*(_QWORD *)(v35 + 40), (unsigned int)*(char *)(v35 + 12));
              v35 = v51;
              if ( v43 )
              {
                radix = get_radix(*(_QWORD *)(v51 + 40), (unsigned int)*(char *)(v51 + 12));
                v35 = v51;
                if ( radix == 10 )
                {
                  v45 = sub_250400(*(_DWORD *)(v28 + 8));
                  v35 = v51;
                  if ( v45 != 1 )
                  {
                    sub_324B80(v51 + 8, 0x11111101100000LL);
                    v35 = v51;
                  }
                }
              }
            }
            v36 = is_invsign(-1, *(_QWORD *)(v35 + 40), (unsigned int)*(char *)(v35 + 12));
            if ( !v36 || (v33 & v47) == 0 || v47 == v33 )
              goto LABEL_2;
            v37 = -v47 & v50;
          }
          if ( (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0x3F) == 0x2D )
          {
            if ( ((unsigned int)get_tinfo_property(*(_QWORD *)(a2 + 48), 3) == 1) == (v49 == 1) )
              goto LABEL_2;
          }
          else
          {
            v53[0] = 7;
            copy_tinfo_t(a2 + 48, v53);
            clear_tinfo_t(v53);
            if ( !v36 )
              **(_QWORD **)(a2 + 24) = v37;
          }
          sub_240180((__int64 *)a2, v34 + 48);
        }
      }
    }
LABEL_2:
    if ( !*(_BYTE *)(a1 + 88) )
      goto LABEL_5;
    goto LABEL_3;
  }
LABEL_5:
  *(_DWORD *)(a1 + 80) += sub_28F800(a1, a2);
  v5 = *(_DWORD *)(a1 + 8) & 8;
  if ( !*(_BYTE *)(a1 + 88) )
    return v5 >> 3;
  if ( v5 )
    return 1;
  v38 = sub_28C360(a1, a2);
  v39 = *(_DWORD *)(a1 + 8);
  if ( v38 )
  {
    ++*(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 8) = v39 | 8;
    return 1;
  }
  return (v39 >> 3) & 1;
}
