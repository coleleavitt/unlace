__int64 __fastcall sub_1785C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // r13
  __int64 v15; // rbp
  size_t v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // r14
  unsigned __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 result; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // [rsp+0h] [rbp-58h] BYREF
  __int64 v44; // [rsp+8h] [rbp-50h]
  __int64 v45; // [rsp+10h] [rbp-48h]
  int v46; // [rsp+18h] [rbp-40h]
  __int64 v47; // [rsp+20h] [rbp-38h]
  __int16 v48; // [rsp+28h] [rbp-30h]

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 25;
  if ( (unsigned int)v7 > 1 )
    v6 = sub_F63050(v6, a2, v7, a4);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = *(_QWORD *)(a1 + 112);
  v10 = *(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)v5 | (unsigned __int8)*(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
  v11 = *(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v8) & 7;
  v12 = *(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_BYTE *)(*(_QWORD *)v12 + 16LL) != 13 || ((*(_WORD *)(*(_QWORD *)v12 + 18LL) >> 3) & 0x1FF) != 0x1B3 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1B3 )
    {
      v39 = *(_DWORD *)(a1 + 140);
      v45 = v8;
      v40 = *(_QWORD *)(a1 + 72);
      BYTE4(v47) = 0;
      LODWORD(v43) = 3;
      v44 = 0;
      v46 = 0;
      LODWORD(v47) = v39;
      sub_1A24E20(v9, &v43, 0, v40, 0, 0);
    }
    else if ( v10 == v11 )
    {
      v41 = sub_1C46CA0(v9, *(unsigned int *)(a1 + 140), *(_QWORD *)(a1 + 72), 0);
      if ( v41 != 1 )
      {
        v37 = v41 & 0xFFFFFFFFFFFFFFFELL;
LABEL_19:
        *(_QWORD *)(a1 + 80) = v37;
        return 1;
      }
    }
    else
    {
      v14 = sub_A81910(*(_QWORD **)(v9 + 248), v5, *(_DWORD *)(a1 + 140));
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 240LL);
      v16 = j__strlen("__coro_gro");
      v17 = sub_6F3470(v15 + 552, "__coro_gro", v16);
      v18 = sub_B731A0(
              *(_QWORD *)(*(_QWORD *)(a1 + 112) + 248LL),
              *(_QWORD *)(a1 + 120) + 72LL,
              *(_DWORD *)(*(_QWORD *)(a1 + 120) + 24LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 120) + 24LL),
              v17,
              v5,
              (__int64)v14,
              0);
      *(_BYTE *)(v18 + 29) |= 2u;
      v19 = v18;
      sub_17CB060(*(_QWORD *)(a1 + 112), v18);
      if ( *(char *)(v19 + 28) < 0 )
        return 0;
      LODWORD(v43) = 0;
      v20 = *(_QWORD *)(a1 + 112);
      v44 = 0;
      v21 = *(_QWORD *)(v19 + 48);
      v22 = *(_QWORD *)(a1 + 72);
      v46 = 0;
      v45 = v21;
      v47 = v19;
      v48 = 0;
      v23 = sub_1A24E20(v20, &v43, 0, v22, 0, 0);
      if ( v23 == 1 )
        return 0;
      v26 = 0;
      v27 = v23 & 0xFFFFFFFFFFFFFFFELL;
      v28 = *(_QWORD *)(a1 + 112);
      v29 = v27;
      if ( v27 )
        v26 = (unsigned int)sub_C00A40(v27, (__int64)&v43, 0, v24, v25);
      v30 = sub_19B4A30(v28, v29, v26, 0, 0, 0);
      if ( v30 == 1 )
        return 0;
      sub_17ED4C0(*(_QWORD *)(a1 + 112), v19, v30 & 0xFFFFFFFFFFFFFFFELL, 0);
      sub_17BF6B0(*(_QWORD *)(a1 + 112), v19);
      v31 = *(_QWORD *)(a1 + 112);
      v32 = sub_17A2530(v31, v19, 0);
      v33 = sub_1C36280(v31, v32, *(unsigned int *)(a1 + 140), *(unsigned int *)(a1 + 140));
      if ( v33 == 1 )
        return 0;
      v34 = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 64) = v33 & 0xFFFFFFFFFFFFFFFELL;
      v35 = sub_190BDA0(v34, v19, v5, 1, *(unsigned int *)(a1 + 140), 0, v43, v44);
      if ( v35 == 1 )
        return 0;
      v36 = sub_1C46CA0(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 140), v35 & 0xFFFFFFFFFFFFFFFELL, 0);
      if ( v36 != 1 )
      {
        v37 = v36 & 0xFFFFFFFFFFFFFFFELL;
        if ( (*(_WORD *)v37 & 0x200) != 0 && v19 == *(_QWORD *)(v37 + 16) )
          *(_BYTE *)(v19 + 97) |= 4u;
        goto LABEL_19;
      }
    }
    sub_17856D0(*(_QWORD *)(a1 + 112), *(_WORD **)(a1 + 72), *(_QWORD *)(a1 + 128));
    return 0;
  }
  v42 = sub_19B4A30(v9, *(_QWORD *)(a1 + 72), *(unsigned int *)(a1 + 140), 0, 0, 0);
  result = 0;
  if ( v42 != 1 )
  {
    result = 1;
    if ( v10 != v11 )
      *(_QWORD *)(a1 + 64) = v42 & 0xFFFFFFFFFFFFFFFELL;
  }
  return result;
}
