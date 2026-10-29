__int64 __fastcall sub_CA0C10(__int64 a1, __int64 a2, char a3, unsigned __int8 a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __m128 v13; // xmm0
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r14
  char v19; // bl
  unsigned int v20; // eax
  __int32 v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r13d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int8 v35; // dl
  char v36; // al
  unsigned int v37; // eax
  unsigned int v38; // eax
  char v39; // al
  char v40; // dl
  char v41; // al
  char v42; // r13
  unsigned int v43; // eax
  unsigned int v44; // eax
  __int64 *v45; // [rsp+8h] [rbp-130h] BYREF
  char v46; // [rsp+14h] [rbp-124h]
  __int64 v47; // [rsp+18h] [rbp-120h] BYREF
  unsigned __int64 v48; // [rsp+20h] [rbp-118h] BYREF
  __int64 v49; // [rsp+28h] [rbp-110h] BYREF
  __m128 v50; // [rsp+30h] [rbp-108h] BYREF
  __int64 v51; // [rsp+40h] [rbp-F8h]
  int *v52[6]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v53[6]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 (__fastcall **v54)(); // [rsp+B0h] [rbp-88h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-80h]
  __int64 v56; // [rsp+C0h] [rbp-78h]
  __int64 v57; // [rsp+C8h] [rbp-70h]
  int v58; // [rsp+D0h] [rbp-68h]
  unsigned int v59; // [rsp+D4h] [rbp-64h]
  char v60; // [rsp+D8h] [rbp-60h]
  __int64 v61; // [rsp+E0h] [rbp-58h]
  int v62; // [rsp+E8h] [rbp-50h]
  __int64 v63; // [rsp+F0h] [rbp-48h]

  v47 = a2;
  v46 = a3;
  if ( (*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 256;
  v8 = sub_B4F900(a2);
  v9 = *(_QWORD *)(a1 + 488);
  v48 = v8;
  v49 = sub_CC2440(v9, *(_QWORD *)(v47 + 48));
  if ( v48 )
  {
    if ( (*(_DWORD *)v48 & 0x20000) != 0 )
      return 256;
  }
  v10 = a1 + 600;
  if ( !(unsigned __int8)sub_C8BE30(v47) )
  {
    sub_C963D0(v10, 3, v47);
    v21 = a4;
    v22 = *(_QWORD *)(v47 + 48);
    if ( BYTE4(v49) )
    {
      LOBYTE(v23) = 1;
      if ( (v22 & 1) == 0 )
        v23 = *(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 1LL;
      v4 = 257;
      v54 = (__int64 (__fastcall **)())(v47 & 0xFFFFFFFFFFFFFFFDLL);
      v24 = sub_C9B2B0(a1, (__int64 *)&v54, v49, v23, 0, 1, v21);
      if ( !v48 )
        goto LABEL_21;
      v25 = *(_QWORD *)a1;
      if ( v46 )
      {
        v26 = *(_QWORD *)(a1 + 552);
        v55 = a1;
        v57 = 0;
        v56 = v26;
        v58 = 1;
        *(_QWORD *)(a1 + 552) = &v54;
        v54 = &off_2B21618;
        v60 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(v25 + 40))(a1) )
        {
          v52[0] = (int *)(v47 & 0xFFFFFFFFFFFFFFFBLL);
          v39 = sub_C81650(a1, v49, v24, (__int64 *)v52);
          v40 = 0;
          if ( v39 )
          {
            v40 = 1;
            if ( v60 )
            {
              v41 = sub_C97CD0((__int64)&v54, 0);
              v53[0] = 4;
              v42 = v41;
              sub_C807C0(v55, v59, v53);
              v40 = v42;
            }
          }
          LOBYTE(v4) = v40;
          v43 = v4;
          BYTE1(v43) = 1;
          v4 = v43;
        }
        else
        {
          v4 = 256;
        }
        sub_C974D0((__int64)&v54);
        goto LABEL_21;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(v25 + 40))(a1, v48) )
      {
        v54 = (__int64 (__fastcall **)())(v47 & 0xFFFFFFFFFFFFFFFBLL);
        LOBYTE(v4) = sub_C81650(a1, v49, v24, (__int64 *)&v54);
        v38 = v4;
        BYTE1(v38) = 1;
        v4 = v38;
        goto LABEL_21;
      }
    }
    else
    {
      v54 = (__int64 (__fastcall **)())(v47 & 0xFFFFFFFFFFFFFFFDLL);
      v4 = 256;
      v31 = sub_C986D0(a1, (__int64 *)&v54, v22, 0, 1, v21);
      if ( !BYTE4(v31) )
      {
LABEL_21:
        --*(_DWORD *)(a1 + 608);
        return v4;
      }
      if ( !v48 )
      {
        v4 = 257;
        goto LABEL_21;
      }
      v54 = (__int64 (__fastcall **)())(v48 | 4);
      if ( (unsigned __int8)sub_C80E60(a1, v31, (__int64 *)&v54) && (unsigned __int8)sub_C9FC20(a1, v48, v32, v33, v34) )
      {
        v54 = (__int64 (__fastcall **)())(v48 | 4);
        LOBYTE(v4) = sub_C87F20(a1, (__int64 *)&v54);
        v44 = v4;
        BYTE1(v44) = 1;
        v4 = v44;
        goto LABEL_21;
      }
    }
    v4 = 256;
    goto LABEL_21;
  }
  v52[1] = (int *)a1;
  v52[3] = (int *)&v47;
  v45 = &v47;
  v11 = *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a1 + 552) = &v54;
  v56 = v11;
  v54 = &off_2B216B8;
  v12 = *(_QWORD *)(a1 + 496);
  v13 = _mm_loadh_ps((const double *)&v45);
  v52[0] = (int *)&v49;
  v14 = *(_DWORD *)(v12 + 324);
  v52[2] = (int *)&v48;
  v15 = v47;
  v61 = v12;
  v62 = v14;
  v16 = *(_DWORD *)(v12 + 320);
  v57 = v47;
  ++v16;
  v52[4] = (int *)&v50;
  v55 = a1;
  v58 = 1;
  v60 = 0;
  *(_DWORD *)(v12 + 320) = v16;
  *(_DWORD *)(v12 + 324) = v16;
  v17 = *(_QWORD *)(a1 + 592);
  *(_QWORD *)(a1 + 592) = v15;
  v50 = v13;
  v63 = v17;
  v51 = a1;
  sub_C963D0(v10, 3, v15);
  v18 = sub_E0B510(*(_QWORD *)(a1 + 496), v47);
  if ( BYTE4(v18) )
  {
    sub_E05460(v53, *(_QWORD *)(a1 + 496), (unsigned int)v18);
    v19 = sub_DFFEE0(v53);
    sub_DFF560(v53);
    if ( v19 )
    {
      LOBYTE(v20) = sub_C93320((__int64)&v50);
    }
    else if ( v48 && (unsigned __int8)sub_C93320((__int64)&v50) )
    {
      LOBYTE(v20) = sub_CA0AF0(v52, v18);
    }
    else
    {
      LOBYTE(v20) = 0;
    }
    v20 = (unsigned __int8)v20;
    BYTE1(v20) = 1;
    v4 = v20;
  }
  else
  {
    v27 = sub_E08F80(*(_QWORD *)(a1 + 496), v47, v48);
    v28 = v27;
    if ( BYTE4(v27) )
    {
      v35 = 1;
      if ( v48 )
      {
        v36 = sub_C93320((__int64)&v50);
        v35 = 0;
        if ( v36 )
          v35 = sub_CA0AF0(v52, v28);
      }
      v37 = v35;
      BYTE1(v37) = 1;
      v4 = v37;
    }
    else
    {
      v4 = 256;
    }
  }
  v29 = v63;
  v54 = &off_2B216B8;
  v30 = v55;
  --*(_DWORD *)(v55 + 608);
  *(_QWORD *)(v30 + 592) = v29;
  *(_DWORD *)(v61 + 324) = v62;
  sub_C974D0((__int64)&v54);
  return v4;
}

