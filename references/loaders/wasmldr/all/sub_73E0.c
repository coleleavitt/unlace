__int64 __fastcall sub_73E0(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  char *v7; // rsi
  unsigned int i; // ebx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // ecx
  unsigned int v15; // edx
  char *v16; // rsi
  unsigned int v17; // edx
  char *v18; // rsi
  __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdi
  char *v24; // rsi
  int v25; // edx
  char *v26; // rsi
  unsigned __int64 v27; // rdi
  unsigned int v28; // ebx
  unsigned int j; // r13d
  __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // r14d
  __int64 v36; // rsi
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rsi
  unsigned int v44; // [rsp+10h] [rbp-88h]
  int v45; // [rsp+14h] [rbp-84h]
  unsigned int v46; // [rsp+2Ch] [rbp-6Ch] BYREF
  unsigned int v47; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v49; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v50; // [rsp+3Ch] [rbp-5Ch] BYREF
  char *v51; // [rsp+40h] [rbp-58h] BYREF
  __int128 v52; // [rsp+48h] [rbp-50h]
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v53 = __readfsqword(0x28u);
  v46 = 0;
  v3 = v1 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, &v46)) == 0 )
    sub_3890((__int64)"code metadata section: couldn't read function count at 0x%llx\n", *(_QWORD *)(a1 + 40));
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  create_data(v6, 0, v5, -1);
  v51 = nullptr;
  v52 = 0;
  v51 = (char *)qvector_reserve(&v51, 0, 16, 1);
  *(_QWORD *)&v52 = 16;
  strcpy(v51, "function count ");
  sub_4EE0((__int64 *)&v51, (__int64)"(%u)", v46);
  v7 = (char *)&unk_10F58;
  if ( (_QWORD)v52 )
    v7 = v51;
  set_cmt(*(_QWORD *)(a1 + 40), v7, 0);
  if ( v46 )
  {
    v45 = 0;
    for ( i = -1; ; i = v44 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = v9 + *(_QWORD *)(a1 + 24);
      v11 = *(_QWORD *)(a1 + 32) + v9;
      if ( v10 >= v11 || (v12 = sub_E440(v10, v11, &v47)) == 0 )
        sub_3890((__int64)"code metadata section: couldn't read function index at 0x%llx\n", *(_QWORD *)(a1 + 40));
      v13 = *(_QWORD *)(a1 + 24);
      v14 = v47;
      *(_QWORD *)(a1 + 40) = v13;
      *(_QWORD *)(a1 + 24) = v12 + v13;
      v15 = *(_DWORD *)(a1 + 76);
      v44 = v14;
      if ( v14 < v15 )
        sub_3890((__int64)"code metadata section: function import can't have metadata (index %u) at 0x%llx\n", v14, v13);
      if ( v14 >= *(_DWORD *)(a1 + 88) + v15 )
        sub_3890((__int64)"code metadata section: invalid function index %u at 0x%llx\n", v14, v13);
      if ( v14 == i )
        sub_3890((__int64)"code metadata section: duplicated function index %u at 0x%llx\n", i, v13);
      if ( i < v14 )
        sub_3890((__int64)"code metadata section:function index %u out of order at 0x%llx\n", v14, v13);
      create_data(v13, 0, v12, -1);
      v16 = v51;
      if ( *((_QWORD *)&v52 + 1) <= 6u )
      {
        v51 = (char *)qvector_reserve(&v51, v51, 7, 1);
        v16 = v51;
      }
      *(_QWORD *)&v52 = 7;
      *(_DWORD *)v16 = 1701080681;
      v17 = v47;
      *((_WORD *)v16 + 2) = 8312;
      v51[6] = 0;
      sub_4EE0((__int64 *)&v51, (__int64)"(%u)", v17);
      v18 = (char *)&unk_10F58;
      if ( (_QWORD)v52 )
        v18 = v51;
      set_cmt(*(_QWORD *)(a1 + 40), v18, 0);
      v19 = *(_QWORD *)(a1 + 8);
      v20 = v19 + *(_QWORD *)(a1 + 24);
      v21 = *(_QWORD *)(a1 + 32) + v19;
      if ( v20 >= v21 || (v22 = sub_E440(v20, v21, &v48)) == 0 )
        sub_3890(
          (__int64)"code metadata section: couldn't read metadata count for function index %u at 0x%llx\n",
          v47,
          *(_QWORD *)(a1 + 40));
      v23 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = v23;
      *(_QWORD *)(a1 + 24) = v22 + v23;
      create_data(v23, 0, v22, -1);
      v24 = v51;
      if ( *((_QWORD *)&v52 + 1) <= 0xFu )
      {
        v51 = (char *)qvector_reserve(&v51, v51, 16, 1);
        v24 = v51;
      }
      v25 = v48;
      *(_QWORD *)&v52 = 16;
      qmemcpy(v24, "metadata count ", 15);
      v51[15] = 0;
      sub_4EE0((__int64 *)&v51, (__int64)"(%u)", v25);
      v26 = (char *)&unk_10F58;
      if ( (_QWORD)v52 )
        v26 = v51;
      set_cmt(*(_QWORD *)(a1 + 40), v26, 0);
      if ( v48 )
        break;
LABEL_40:
      if ( ++v45 >= v46 )
        goto LABEL_42;
    }
    v27 = *(_QWORD *)(a1 + 24);
    v28 = 0;
    for ( j = -1; ; j = v35 )
    {
      v30 = *(_QWORD *)(a1 + 8);
      v31 = v30 + v27;
      v32 = *(_QWORD *)(a1 + 32) + v30;
      if ( v31 >= v32 || (v33 = sub_E440(v31, v32, &v49)) == 0 )
        sub_3890(
          (__int64)"code metadata section: couldn't read metadata %u for function index %u at 0x%llx\n",
          v28,
          v47,
          *(_QWORD *)(a1 + 40));
      v34 = *(_QWORD *)(a1 + 24);
      v35 = v49;
      *(_QWORD *)(a1 + 40) = v34;
      *(_QWORD *)(a1 + 24) = v34 + v33;
      if ( v35 == j )
        sub_3890(
          (__int64)"code metadata section: duplicate offset in metadata %u for function index %u at 0x%llx\n",
          v28,
          v47,
          v34);
      if ( j < v35 )
        sub_3890(
          (__int64)"code metadata section: offset out of order in metadata %u for function index %u at 0x%llx\n",
          v28,
          v47,
          v34);
      v36 = *(_QWORD *)(a1 + 8);
      v37 = v36 + v34 + v33;
      v38 = *(_QWORD *)(a1 + 32) + v36;
      if ( v37 < v38 && (v39 = sub_E440(v37, v38, &v50)) != 0 )
      {
        v40 = *(_QWORD *)(a1 + 24);
        v41 = v40 + v39;
        v42 = v50;
        *(_QWORD *)(a1 + 40) = v40;
        *(_QWORD *)(a1 + 24) = v41;
        v27 = v41 + v42;
        if ( *(_QWORD *)(a1 + 32) >= (unsigned __int64)(v41 + v42) )
          goto LABEL_36;
      }
      else
      {
        sub_3940((__int64)"couldn't read data size");
        v41 = *(_QWORD *)(a1 + 24);
        LODWORD(v42) = v50;
        v27 = v41 + v50;
        if ( *(_QWORD *)(a1 + 32) >= v27 )
          goto LABEL_36;
      }
      sub_3940((__int64)"data size is too big (%u)", v42);
      v41 = *(_QWORD *)(a1 + 24);
      v27 = v41 + v50;
LABEL_36:
      *(_QWORD *)(a1 + 40) = v41;
      ++v28;
      *(_QWORD *)(a1 + 24) = v27;
      if ( v28 >= v48 )
        goto LABEL_40;
    }
  }
LABEL_42:
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  return 1;
}
