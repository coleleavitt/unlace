__int64 __fastcall sub_1879B50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        char a7)
{
  int v8; // ebx
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  bool v15; // al
  __int64 v16; // rcx
  bool v17; // zf
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbp
  unsigned int v24; // ebx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rdx
  __int64 v52; // rdx
  unsigned int v53; // [rsp+Ch] [rbp-12Ch]
  unsigned __int8 v55; // [rsp+1Bh] [rbp-11Dh]
  unsigned int v56; // [rsp+1Ch] [rbp-11Ch]
  unsigned __int64 v57; // [rsp+20h] [rbp-118h]
  unsigned __int64 v58; // [rsp+28h] [rbp-110h]
  unsigned int v59; // [rsp+30h] [rbp-108h]
  int v60; // [rsp+34h] [rbp-104h] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-100h] BYREF
  unsigned __int8 v62; // [rsp+4Eh] [rbp-EAh] BYREF
  char v63; // [rsp+4Fh] [rbp-E9h] BYREF
  unsigned int v64; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v65; // [rsp+54h] [rbp-E4h] BYREF
  __int64 v66; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v67; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v68; // [rsp+68h] [rbp-D0h] BYREF
  unsigned __int8 *v69[25]; // [rsp+70h] [rbp-C8h] BYREF

  v8 = a3;
  v61 = a2;
  v60 = a6;
  v66 = a1;
  v69[0] = nullptr;
  v9 = sub_B76070(a2, a2, a3, a4);
  if ( (unsigned int)sub_B76070(a2, a2, v10, v11)
    && (unsigned __int8)sub_1844A50(
                          a1,
                          *(_QWORD *)(**(_QWORD **)(a2 + 120) + 48LL),
                          nullptr,
                          "type_identity",
                          (_QWORD **)(a1 + 4184),
                          (__int64 *)v69) )
  {
    v62 = 1;
    v64 = 1;
    v55 = 0;
    if ( !sub_B77D90(v61) )
    {
LABEL_17:
      sub_168B9F0((__int64)v69, (__int64 *)(a1 + 8), *(_DWORD *)(v61 + 24), 0x1AE9u, 0);
      sub_15F7200(v69);
      if ( !v8 )
        goto LABEL_18;
      goto LABEL_5;
    }
LABEL_4:
    if ( !v8 )
    {
LABEL_18:
      v64 = 3;
      v14 = 3;
      v53 = 2;
      v56 = 1;
      v59 = 1;
      goto LABEL_6;
    }
LABEL_5:
    v64 = 4;
    v14 = 4;
    v53 = 3;
    v56 = 2;
    v59 = 1;
    goto LABEL_6;
  }
  if ( v69[0] )
  {
    v62 = 1;
    v64 = 1;
    v55 = 1;
    if ( !sub_B77D90(v61) )
      goto LABEL_17;
    goto LABEL_4;
  }
  v62 = 0;
  v14 = 2;
  v64 = 1;
  v53 = 1;
  v55 = 0;
  v56 = 0;
  v59 = 0;
LABEL_6:
  v15 = sub_1844F30(a1, v61, v12, v13);
  v17 = !v15;
  v63 = v15;
  v18 = v64;
  if ( !v17 )
  {
    v16 = v53;
    v18 = v64 + 1;
    v53 = v14;
    ++v64;
    v56 = v16;
  }
  v19 = v61;
  if ( v9 < v18 )
  {
    sub_168B9F0((__int64)v69, (__int64 *)(a1 + 8), *(_DWORD *)(v61 + 24), 0x1274u, 0);
    v35 = sub_15890D0((__int64)v69, &v62);
    v36 = sub_15890D0(v35, (unsigned __int8 *)&v63);
    v68 = *(_QWORD *)(v61 + 40);
    v37 = sub_15894B0(v36, &v68);
    v24 = *(unsigned __int8 *)(sub_1588370(v37, &v64) + 120);
    sub_15F7200(v69);
    return v24;
  }
  v65 = 0;
  if ( v18 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(v19 + 120) + 8 * v20);
      if ( sub_B74820(v21) )
        break;
      v19 = v61;
      v20 = v65 + 1;
      v65 = v20;
      if ( v64 <= (unsigned int)v20 )
        goto LABEL_19;
    }
    sub_168B9F0((__int64)v69, (__int64 *)(a1 + 8), *(_DWORD *)(v61 + 24), 0x126Eu, 0);
    v67 = *(_QWORD *)(v61 + 40);
    v22 = sub_15894B0((__int64)v69, &v67);
    v23 = sub_1588370(v22, &v65);
    v68 = sub_B74790(v21);
    v24 = *(unsigned __int8 *)(sub_1587DB0(v23, &v68) + 120);
    sub_15F7200(v69);
    return v24;
  }
LABEL_19:
  v26 = *(_QWORD *)(*(_QWORD *)(v19 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v27 = (unsigned int)*(unsigned __int8 *)(v26 + 16) - 25;
  if ( (unsigned int)v27 > 1 )
    v26 = sub_F63050(v26, v61, v27, v16);
  v58 = sub_183A700(&v66, *(_QWORD *)(v26 + 24), v27, v16);
  v57 = sub_183A700(&v66, a4, v28, v29);
  v32 = sub_183A700(&v66, a5, v30, v31);
  if ( v57 != v58 )
  {
    sub_168B9F0(
      (__int64)v69,
      (__int64 *)(a1 + 8),
      *(_DWORD *)(v61 + 24),
      ((*(_BYTE *)(*(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0) + 4721,
      0);
    v67 = *(_QWORD *)(v61 + 40);
    v33 = sub_15894B0((__int64)v69, &v67);
    v34 = v33;
    if ( *(_BYTE *)(v33 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v33 + 32), a4, 8u);
      v24 = *(unsigned __int8 *)(v34 + 120);
    }
    else
    {
      v24 = *(unsigned __int8 *)(v33 + 132);
      if ( (_BYTE)v24 )
      {
        v41 = sub_168B9E0((_QWORD *)v33);
        v44 = *(_QWORD *)(v34 + 16);
        if ( v44 )
          v44 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v44 + 32LL))(*(_QWORD *)(v34 + 16));
        v68 = v44;
        v45 = sub_1587BC0(v41, &v68, v39, v40, v42, v43);
        sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * *(unsigned int *)(v34 + 128) + 8), a4, 8u);
        v24 = *(unsigned __int8 *)(v34 + 120);
      }
    }
    goto LABEL_24;
  }
  v38 = sub_B77A30(v61);
  if ( v9 <= 1 && v38 )
  {
    sub_168B9F0((__int64)v69, (__int64 *)(a1 + 8), *(_DWORD *)(v61 + 24), 0x1273u, 0);
    v68 = *(_QWORD *)(v61 + 40);
    v24 = *(unsigned __int8 *)(sub_15894B0((__int64)v69, &v68) + 120);
LABEL_24:
    sub_15F7200(v69);
    return v24;
  }
  v69[0] = (unsigned __int8 *)&v61;
  v69[2] = (unsigned __int8 *)&a7;
  v69[3] = &v62;
  v69[4] = (unsigned __int8 *)&v63;
  v69[1] = (unsigned __int8 *)a1;
  v69[5] = (unsigned __int8 *)&v66;
  v69[6] = (unsigned __int8 *)&v60;
  if ( !(unsigned __int8)sub_1879720(v69, v59, v32, (__int64)"size_t") )
  {
    sub_B74C40(v61, v63);
    v24 = v62;
    if ( !v62 )
      return v24;
    v46 = sub_A63CE0(*(_QWORD **)(a1 + 248));
    if ( !(unsigned __int8)sub_1879720(v69, v56, v46, (__int64)"size_t") )
    {
      v47 = sub_183D310(a1);
      v51 = 0;
      if ( v47 )
      {
        v52 = *(_QWORD *)(v47 + 48);
        if ( v52 )
          v51 = v52 & 0xFFFFFFFFFFFFFFF0LL;
        else
          v51 = sub_A7AA70(*(_QWORD *)(a1 + 248), v47, 0, v48, v49, v50);
      }
      if ( !(unsigned __int8)sub_1879720(v69, v53, v51, (__int64)"std::align_val_t") )
      {
        sub_B74C90(v61, 1);
        return v55;
      }
    }
  }
  return 1;
}
