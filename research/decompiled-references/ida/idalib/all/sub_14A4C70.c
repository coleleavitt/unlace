__int64 __fastcall sub_14A4C70(__int64 a1, _DWORD *a2)
{
  int *v3; // rbx
  unsigned __int16 v4; // bp
  __int64 *v5; // rdi
  unsigned int v6; // eax
  bool v7; // zf
  __int64 v8; // r13
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  char v11; // al
  unsigned int v12; // r15d
  unsigned __int64 v13; // rbx
  size_t v14; // rax
  char *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // dl
  __int64 v22; // rax
  const char *v23; // rax
  size_t v24; // rcx
  const char *v25; // rbp
  __int64 result; // rax
  size_t v27; // rax
  __int64 v28; // r12
  unsigned int i; // r15d
  unsigned __int64 v30; // rdx
  __int16 v31; // ax
  bool v32; // al
  __int64 v33; // rdi
  unsigned int v34; // ecx
  _BYTE *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  size_t v39; // rax
  __int64 v40; // [rsp+0h] [rbp-138h]
  __int64 v41; // [rsp+0h] [rbp-138h]
  unsigned int v42; // [rsp+Ch] [rbp-12Ch]
  __int64 v44; // [rsp+24h] [rbp-114h]
  _BYTE *v45; // [rsp+30h] [rbp-108h] BYREF
  char v46; // [rsp+38h] [rbp-100h]
  __int64 v47; // [rsp+40h] [rbp-F8h]
  int v48; // [rsp+48h] [rbp-F0h]
  __int16 v49; // [rsp+4Ch] [rbp-ECh]
  __int64 (__fastcall *v50)(__int64); // [rsp+50h] [rbp-E8h]
  __int64 v51; // [rsp+58h] [rbp-E0h]
  __int64 v52; // [rsp+60h] [rbp-D8h]
  _DWORD v53[6]; // [rsp+70h] [rbp-C8h] BYREF
  void *v54; // [rsp+88h] [rbp-B0h]
  __int64 v55; // [rsp+98h] [rbp-A0h] BYREF
  unsigned __int8 *v56[17]; // [rsp+B0h] [rbp-88h] BYREF

  v3 = (int *)(a1 + 16);
  v4 = *(_WORD *)(a1 + 32);
  if ( v4 == 119 )
  {
    sub_15687A0(a1, a1 + 16);
    v5 = *(__int64 **)(a1 + 8);
  }
  else
  {
    v5 = *(__int64 **)(a1 + 8);
    if ( v4 == 166 )
    {
      v35 = (_BYTE *)v5[7];
      if ( (v35[1] & 8) != 0 )
      {
        sub_1564840(v56, a1, v3, 2130);
        sub_AEA040((__int64)v56);
        v5 = *(__int64 **)(a1 + 8);
      }
      else if ( (*v35 & 8) != 0 )
      {
        sub_1564840(v56, a1, v3, 2071);
        v36 = sub_10CBF50(*(_WORD *)(a1 + 32));
        sub_149E970(v56, v36);
        sub_AEA040((__int64)v56);
        v5 = *(__int64 **)(a1 + 8);
      }
    }
  }
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v5, v3);
  v6 = *(_DWORD *)(a1 + 40);
  v7 = *(_WORD *)(a1 + 32) == 22;
  v47 = a1;
  v42 = v6;
  v45 = (_BYTE *)(a1 + 1952);
  LOBYTE(v6) = *(_BYTE *)(a1 + 1952);
  v48 = 1507350;
  v46 = v6;
  *(_BYTE *)(a1 + 1952) = 1;
  v49 = 63;
  v50 = sub_146A990;
  v51 = 0;
  v52 = 0;
  if ( !v7 )
    goto LABEL_24;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    if ( !(unsigned __int8)sub_1568800(&v45) )
      goto LABEL_6;
LABEL_24:
    sub_1564840(v56, a1, v3, 14);
    sub_AE9DF0(v56, 22, 4u);
    sub_AEA040((__int64)v56);
    sub_147DEE0(a1);
    result = 0;
    goto LABEL_25;
  }
  LODWORD(v52) = sub_146A990(a1);
LABEL_6:
  v8 = *(_QWORD *)(a1 + 96);
  sub_18C74E0(v8, 4, 0, 4);
  v40 = sub_14C4B50(a1, 0);
  if ( v40 == 1 )
    goto LABEL_48;
  if ( *(_WORD *)(a1 + 32) == 23 )
  {
    v9 = 2087;
    v10 = *(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL);
    v11 = v10[1];
    if ( (v11 & 0x40) == 0 )
    {
      v9 = 1962;
      if ( (v11 & 8) == 0 )
        v9 = (*v10 & 8) == 0 ? 1955 : 2069;
    }
    sub_1564840(v56, a1, v3, v9);
    v12 = *(_DWORD *)(a1 + 16);
    v13 = v40 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v40 & 0xFFFFFFFFFFFFFFFELL) != 0
      && ((*(_WORD *)v13 + 394) & 0x1FFu) <= 1
      && ((*(_WORD *)(v13 + 2) >> 3) & 0x3F) == 0x13
      && (*(_WORD *)sub_BFB840(*(_QWORD *)(v13 + 24)) & 0x1FF) == 9 )
    {
      v39 = j__strlen(",");
      LODWORD(v44) = *(_DWORD *)(v13 + 4);
      HIDWORD(v44) = v44;
      v15 = (char *)v44;
      sub_149EFC0((__int64)v53, v44, 1, ",", v39);
    }
    else
    {
      v14 = j__strlen(", \"\"");
      v15 = (char *)v12;
      sub_9EC740((__int64)v53, v12, ", \"\"", v14, 0);
    }
    if ( v53[0] && v53[1] )
    {
      v15 = (char *)v53;
      sub_14A2370((__int64 *)v56, (unsigned __int64)v53);
    }
    if ( v54 != &v55 )
      operator delete(v54);
    v16 = 0;
    sub_AEA040((__int64)v56);
    goto LABEL_18;
  }
  v27 = j__strlen(&byte_22F0C30);
  if ( (unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v27) )
  {
    LOWORD(v56[0]) = 63;
    sub_15680D0(a1, v56, 1, 0);
    v22 = 0;
    goto LABEL_22;
  }
  v15 = *(char **)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (v15[1] & 0x10) == 0 || *(_WORD *)(a1 + 32) == 23 )
  {
LABEL_45:
    if ( sub_13E0520((__int64)v3, v15) )
    {
      v16 = sub_14B6F70(a1);
      goto LABEL_47;
    }
    sub_1564840(v56, a1, v3, 19);
    sub_AE9DF0(v56, 1, 2u);
    sub_AEA040((__int64)v56);
LABEL_48:
    sub_147DEE0(a1);
    v22 = 0;
    goto LABEL_22;
  }
  v28 = (__int64)v3;
  for ( i = 0; ; i = v34 )
  {
    v32 = sub_13E0520(v28, v15);
    v33 = *(_QWORD *)(a1 + 8);
    if ( !v32 || (*(_BYTE *)(v28 + 18) & 0x20) != 0 )
      break;
    v31 = *(_WORD *)(a1 + 32);
    v34 = i + 1;
    if ( i == -1 )
    {
      v28 = (__int64)v3;
    }
    else
    {
      if ( v31 == 1 )
      {
        v15 = *(char **)(v33 + 56);
        v28 = (__int64)v3;
        continue;
      }
      v30 = *(_QWORD *)(v33 + 2944) + i;
      if ( v30 >= *(unsigned int *)(v33 + 2912) )
      {
        v37 = sub_14180A0(v33, v34);
        v33 = *(_QWORD *)(a1 + 8);
        v34 = i + 1;
        v28 = v37;
        v31 = *(_WORD *)(v37 + 16);
      }
      else
      {
        v28 = *(_QWORD *)(v33 + 2904) + 24 * v30;
        v31 = *(_WORD *)(v28 + 16);
      }
    }
    v15 = *(char **)(v33 + 56);
    if ( v31 == 23 )
      goto LABEL_45;
  }
  v38 = -((*(_BYTE *)(*(_QWORD *)(v33 + 56) + 2LL) & 2) == 0);
  LOBYTE(v38) = v38 & 0x74;
  sub_1564840(v56, a1, v3, (unsigned int)(v38 + 2103));
  sub_AEA040((__int64)v56);
  v15 = nullptr;
  v16 = sub_14C4B50(a1, 0);
LABEL_47:
  if ( v16 == 1 )
    goto LABEL_48;
LABEL_18:
  v21 = sub_14808E0((__int64)&v45, (__int64 *)v15, v17, v18, v19, v20);
  v22 = 0;
  if ( !v21 )
  {
    v23 = (const char *)sub_10CBF50(v4);
    v24 = 0;
    v25 = v23;
    *a2 = *(_DWORD *)(a1 + 16);
    if ( v23 )
      v24 = j__strlen(v23);
    sub_156A150(a1, 1645, v25, v24);
    v22 = sub_1863F60(*(_QWORD *)(a1 + 96), v42, v40 & 0xFFFFFFFFFFFFFFFELL, v16 & 0xFFFFFFFFFFFFFFFELL, HIDWORD(v52));
  }
LABEL_22:
  v41 = v22;
  sub_190D5E0(v8);
  result = v41;
LABEL_25:
  *v45 = v46;
  return result;
}
