__int64 *__fastcall sub_16BE480(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r15
  __int64 *result; // rax
  unsigned int v18; // r13d
  int v19; // eax
  unsigned __int64 v20; // rbp
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // eax
  unsigned __int64 v57; // r14
  int v58; // ebp
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rbp
  unsigned __int64 v66; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v67; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v68; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v69; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v70; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v71; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int8 *v72; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v73; // [rsp+58h] [rbp-50h]

  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), v6, a3, a4, a5, a6);
  v16 = sub_B7E900((__int64)v7, v6, v8, v9, v10, v11);
  result = (__int64 *)&v66;
  if ( !v16 )
    return result;
LABEL_2:
  v18 = *(_DWORD *)(v16 + 24);
  v66 = *(_QWORD *)(v16 + 48);
  v19 = sub_F67720(&v66, v6, v12, v13, v14, v15);
  v20 = v66;
  v21 = v19;
  v6 = v66;
  v22 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v66);
  if ( v22
    && (v23 = v22,
        v67 = sub_A71600(*(_QWORD *)(a1[1] + 248LL), v22),
        v28 = sub_F67720(&v67, v23, v24, v25, v26, v27),
        v20 = v67,
        v21 = v28,
        v6 = v67,
        (v29 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v67)) != 0)
    && (v30 = v29,
        v68 = sub_A71600(*(_QWORD *)(a1[1] + 248LL), v29),
        v35 = sub_F67720(&v68, v30, v31, v32, v33, v34),
        v20 = v68,
        v21 = v35,
        v6 = v68,
        (v36 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v68)) != 0)
    && (v37 = v36,
        v69 = sub_A71600(*(_QWORD *)(a1[1] + 248LL), v36),
        v42 = sub_F67720(&v69, v37, v38, v39, v40, v41),
        v20 = v69,
        v21 = v42,
        v6 = v69,
        (v43 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v69)) != 0)
    && (v44 = v43,
        v70 = sub_A71600(*(_QWORD *)(a1[1] + 248LL), v43),
        v49 = sub_F67720(&v70, v44, v45, v46, v47, v48),
        v20 = v70,
        v21 = v49,
        v6 = v70,
        (v50 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v70)) != 0) )
  {
    v51 = v50;
    v71 = sub_A71600(*(_QWORD *)(a1[1] + 248LL), v50);
    v56 = sub_F67720(&v71, v51, v52, v53, v54, v55);
    v57 = v71;
    v58 = v56;
    v6 = v71;
    v59 = sub_A72040(*(_QWORD **)(a1[1] + 248LL), v71);
    if ( v59 )
    {
      v60 = v59;
      v72 = (unsigned __int8 *)sub_A71600(*(_QWORD *)(a1[1] + 248LL), v59);
      v6 = (unsigned int)sub_F67720(&v72, v60, v61, v62, v63, v64);
      sub_16BE7B0(a1, v6, v72, v18);
      result = (__int64 *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      v16 = (unsigned __int64)result;
      if ( result )
        goto LABEL_16;
      return result;
    }
    if ( v58 != 1 )
    {
      if ( !v58 )
        goto LABEL_17;
      if ( v58 != 2 )
      {
        if ( v58 == 3 )
        {
          v6 = v57;
          sub_16BE480(a1, v57);
          goto LABEL_17;
        }
        return (__int64 *)((__int64 (*)(void))sub_16BE7B0)();
      }
    }
  }
  else if ( v21 != 1 )
  {
    if ( !v21 )
      goto LABEL_17;
    if ( v21 != 2 )
    {
      if ( v21 == 3 )
      {
        v6 = v20;
        sub_16BE480(a1, v20);
        goto LABEL_17;
      }
      return (__int64 *)((__int64 (*)(void))sub_16BE7B0)();
    }
  }
  v65 = a1[1];
  sub_168B9B0((__int64)&v72, v65 + 8, 6130);
  sub_16B71B0(&v72, 1);
  sub_18CAED0(v65, v18, *a1, &v72);
  v6 = (unsigned __int64)v72;
  if ( v72 )
  {
    if ( v73 )
      sub_1580C40(v73, (unsigned __int64)v72);
  }
LABEL_17:
  while ( 1 )
  {
    result = (__int64 *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    v16 = (unsigned __int64)result;
    if ( !result )
      return result;
LABEL_16:
    if ( (*((_BYTE *)result + 28) & 0x7Fu) - 49 <= 2 )
      goto LABEL_2;
  }
}
