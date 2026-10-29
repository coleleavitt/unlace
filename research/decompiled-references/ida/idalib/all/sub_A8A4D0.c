__int64 __fastcall sub_A8A4D0(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  unsigned int v3; // r13d
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r13
  size_t v8; // rdx
  char *v9; // r15
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  size_t v21; // rax
  __int64 result; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rax
  __int64 v35; // rsi
  const char *v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // [rsp+8h] [rbp-90h]
  unsigned __int64 v43; // [rsp+10h] [rbp-88h]
  char *v44; // [rsp+18h] [rbp-80h]
  unsigned __int64 v45; // [rsp+20h] [rbp-78h]
  char *v46; // [rsp+28h] [rbp-70h]
  unsigned __int64 v47; // [rsp+30h] [rbp-68h]
  const char *v48; // [rsp+38h] [rbp-60h]
  unsigned __int64 v49; // [rsp+40h] [rbp-58h]
  char *v50; // [rsp+48h] [rbp-50h]
  unsigned __int64 v51; // [rsp+50h] [rbp-48h]
  char *v52; // [rsp+58h] [rbp-40h]

  v1 = a1[290];
  v43 = 0;
  v45 = 0;
  v2 = *(_DWORD *)(v1 + 388);
  v47 = 0;
  v49 = 0;
  v51 = 0;
  if ( v2 > 2 )
  {
    v24 = sub_A63B40(a1, *(_DWORD *)(a1[2181] + 148LL));
    v43 = sub_A70710(a1, v24, v25, v26, v27);
    v44 = "_cfisa";
    v28 = sub_A63B40(a1, *(_DWORD *)(a1[2181] + 148LL));
    v45 = sub_A70710(a1, v28, v29, v30, v31);
    v32 = a1[2181];
    v46 = "_swift_rc";
    switch ( *(_DWORD *)(v32 + 168) )
    {
      case 0:
      case 2:
      case 4:
      case 6:
      case 8:
      case 9:
        v33 = 10;
        break;
      case 1:
        v33 = 2;
        break;
      case 3:
        v33 = 4;
        break;
      case 5:
        v33 = 6;
        break;
      case 7:
        v33 = 8;
        break;
    }
    v34 = sub_A63B40(a1, v33);
    v35 = a1[2331];
    v47 = v34;
    v48 = v36;
    v50 = "_ptr";
    v49 = sub_A70010((__int64)a1, v35 | 1);
    if ( v2 - 5 > 1 )
    {
      v3 = 5;
      v38 = sub_A63D00(a1);
      v52 = "_ptr";
      v51 = sub_A70710(a1, v38, v39, v40, v41);
    }
    else
    {
      v37 = a1[2340];
      v52 = "_ptr";
      v3 = 5;
      v51 = v37;
    }
  }
  else
  {
    v3 = 4;
    v4 = sub_A70010((__int64)a1, a1[2340] | 1LL);
    v5 = a1[2331];
    v43 = v4;
    v44 = "isa";
    v45 = a1[2340];
    v46 = "flags";
    v47 = sub_A70010((__int64)a1, v5 | 1);
    v48 = "str";
    v49 = a1[2341];
    v50 = "length";
  }
  v6 = 0;
  v42 = v3;
  do
  {
    while ( 1 )
    {
      v7 = a1[2188];
      v8 = 0;
      v9 = (&v44)[2 * v6];
      if ( v9 )
        v8 = j__strlen((&v44)[2 * v6]);
      v10 = 16LL * (unsigned int)v6;
      v11 = sub_6F3470(v7, v9, v8);
      v12 = a1[201];
      if ( !v12 )
        break;
      ++v6;
      v13 = sub_B7BC50((_DWORD)a1, (int)v12 + 64, 0, 0, v11, *(unsigned __int64 *)((char *)&v43 + v10), 0, 0, 0, 0);
      *(_BYTE *)(v13 + 29) &= 0x9Fu;
      sub_B94AD0(a1[201] + 64LL, v13);
      if ( v6 == v42 )
        goto LABEL_8;
    }
    ++v6;
    v23 = sub_B7BC50((_DWORD)a1, 0, 0, 0, v11, *(unsigned __int64 *)((char *)&v43 + v10), 0, 0, 0, 0);
    *(_BYTE *)(v23 + 29) &= 0x9Fu;
    sub_B94AD0(a1[201] + 64LL, v23);
  }
  while ( v42 != v6 );
LABEL_8:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[201] + 104LL))(a1[201]);
  v18 = a1[201];
  v19 = *(_QWORD *)(v18 + 48);
  if ( v19 )
    v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v20 = sub_A7AA70((__int64)a1, v18, v14, v15, v16, v17);
  v21 = j__strlen("__NSConstantString");
  result = sub_A8A070(a1, v20, "__NSConstantString", v21);
  a1[202] = result;
  return result;
}
