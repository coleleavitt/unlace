char __fastcall sub_D1A0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v6; // r12
  __int64 v7; // rbp
  unsigned int dword; // ebx
  char v10; // al
  char v11; // dl
  unsigned __int32 v12; // eax
  unsigned __int64 v13; // rsi
  int v14; // ecx
  __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // rbp
  unsigned __int64 v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r14d
  char v24; // dl
  __int64 v25; // r8
  unsigned __int32 v26; // eax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  unsigned int v32; // r15d
  char v33; // cl
  unsigned __int32 v34; // eax
  unsigned int v35; // ecx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  int v41; // r15d
  char v42; // al
  __int64 v43; // rbx
  unsigned __int64 v44; // r12
  __int64 v45; // [rsp+8h] [rbp-70h]
  unsigned __int64 v46; // [rsp+10h] [rbp-68h]
  unsigned __int64 v47; // [rsp+18h] [rbp-60h]
  unsigned __int64 v48; // [rsp+20h] [rbp-58h]
  unsigned __int64 v49; // [rsp+28h] [rbp-50h]
  unsigned __int64 v50; // [rsp+30h] [rbp-48h]
  __int16 v51; // [rsp+3Eh] [rbp-3Ah]

  v4 = a1;
  v6 = *(_QWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a2 + 16);
  if ( v6 <= 0x37 )
  {
    if ( v6 <= 0x2F )
      return 0;
    goto LABEL_7;
  }
  dword = get_dword(v7 + 32, a2, a3, a4, a1);
  v10 = getinf_flag(3, 32);
  v4 = a1;
  v11 = v10;
  v12 = _byteswap_ulong(dword);
  if ( v11 )
    dword = v12;
  if ( dword != -721214369 )
  {
LABEL_7:
    v13 = 16;
    v14 = 0;
    v15 = 4;
    goto LABEL_8;
  }
  v13 = 24;
  v14 = 4;
  v15 = 8;
LABEL_8:
  v16 = v6 - 32;
  if ( v16 % v13 )
    return 0;
  v49 = v16 / v13;
  v17 = v7 + 32;
  if ( a3 )
  {
    v46 = *(_QWORD *)(a3 + 16);
    if ( v16 >= v13 )
    {
      v50 = *(_QWORD *)(a3 + 32);
      v18 = v16 / v13;
      v51 = *(_WORD *)(v4 + 346) & 2;
      v19 = v14 + v17;
      v47 = v13;
      v45 = v14;
      v48 = v4;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !(unsigned __int8)is_loaded(v19 - v45) )
            return v49 == 0;
          v23 = get_dword(v19, v13, v20, v21, v22);
          v24 = getinf_flag(3, 32);
          v26 = _byteswap_ulong(v23);
          if ( v24 )
            v23 = v26;
          v27 = 4LL * ((v23 >> 5) & 0x7FFFF);
          v28 = v27 | (v23 >> 29) & 3;
          v29 = (unsigned int)v27 | (v23 >> 29) & 3 | 0xFFFFFFFFFFE00000LL;
          if ( (v27 & 0x100000) != 0 )
            v28 = (unsigned int)v27 | (v23 >> 29) & 3 | 0xFFFFFFFFFFE00000LL;
          v30 = v28 << 12;
          if ( (v23 & 0x80000000) != 0 )
            v28 <<= 12;
          v31 = v28 + (v19 & 0xFFFFFFFFFFFFF000LL);
          v32 = get_dword(v19 + 4, 32, v30, v29, v25);
          v33 = getinf_flag(3, 32);
          v34 = _byteswap_ulong(v32);
          if ( v33 )
            v32 = v34;
          v35 = v32 >> 30;
          if ( !(v32 >> 30) )
            v35 = (v32 >> 21) & 4;
          v13 = v46;
          v36 = ((unsigned __int64)((v32 >> 10) & 0xFFF) << v35) + v31 - v46;
          if ( (v36 & 7) == 0 && v36 > 0x17 )
          {
            v13 = v50;
            if ( v36 < v50 )
              break;
          }
LABEL_32:
          v19 += v47;
          if ( !--v18 )
            return v49 == 0;
        }
        v13 = v48;
        v37 = *(_QWORD *)(*(_QWORD *)(v48 + 8) + 328LL) + get_qword();
        v38 = v37;
        if ( v51 )
        {
          if ( !getseg(v37) )
            goto LABEL_32;
          v39 = v38 - v19;
          if ( (((_BYTE)v38 - (_BYTE)v19) & 3) != 0 )
            goto LABEL_32;
          v40 = v39 & 0xFFFFFFF;
          if ( (v39 & 0x8000000) != 0 )
            v40 = v39 | 0xFFFFFFFFF0000000LL;
          if ( v39 != v40 )
            goto LABEL_32;
          v41 = (v39 >> 2) & 0x3FFFFFF ^ 0x14000000;
          create_insn(v19, 0);
          del_items(v19 + 4, 0, 1, 0);
          v42 = segtype(v38);
          sub_40E20(v48, v19, v42 == 1);
          sub_42050(v48, v19, v38, v41, 0, 4, 0, 8, 0);
        }
        v13 = v19 - v45;
        sub_40E60(v48, v19 - v45, v38, ".", "");
        --v49;
        v19 += v47;
        if ( !--v18 )
          return v49 == 0;
      }
    }
    v49 = 0;
    return v49 == 0;
  }
  else
  {
    v43 = v17 + v15;
    if ( v16 >= v13 )
    {
      v44 = v16 / v13;
      while ( (unsigned __int8)equal_bytes(v43, &unk_6BD38, &unk_6BD28, 12, 1) )
      {
        v43 += v13;
        if ( !--v44 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
}
