__int64 __fastcall sub_CB3E40(__int64 a1, __int64 a2, char a3, unsigned __int8 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int32 v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __m128 v19; // xmm0
  int v20; // ecx
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // r14d
  char v26; // bp
  unsigned __int8 v27; // al
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // ebp
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int8 v36; // dl
  char v37; // al
  char v38; // al
  char v39; // dl
  char v40; // al
  char v41; // r13
  __int64 *v42; // [rsp+8h] [rbp-130h] BYREF
  char v43; // [rsp+14h] [rbp-124h]
  __int64 v44; // [rsp+18h] [rbp-120h] BYREF
  unsigned __int64 v45; // [rsp+20h] [rbp-118h] BYREF
  __int64 v46; // [rsp+28h] [rbp-110h] BYREF
  __m128 v47; // [rsp+30h] [rbp-108h] BYREF
  __int64 v48; // [rsp+40h] [rbp-F8h]
  unsigned int *v49[6]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v50[6]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 (__fastcall **v51)(); // [rsp+B0h] [rbp-88h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-80h]
  __int64 v53; // [rsp+C0h] [rbp-78h]
  __int64 v54; // [rsp+C8h] [rbp-70h]
  int v55; // [rsp+D0h] [rbp-68h]
  unsigned int v56; // [rsp+D4h] [rbp-64h]
  char v57; // [rsp+D8h] [rbp-60h]
  __int64 v58; // [rsp+E0h] [rbp-58h]
  int v59; // [rsp+E8h] [rbp-50h]
  __int64 v60; // [rsp+F0h] [rbp-48h]

  v44 = a2;
  v43 = a3;
  if ( (*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 256;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 0;
  v8 = sub_B4F900(a2);
  v9 = *(_QWORD *)(a1 + 1264);
  v45 = v8;
  v46 = sub_CC2440(v9, *(_QWORD *)(v44 + 48));
  if ( v45 && (*(_DWORD *)v45 & 0x20000) != 0 )
  {
    return 256;
  }
  else
  {
    v10 = a1 + 1376;
    if ( !(unsigned __int8)sub_C8BE30(v44) )
    {
      sub_C963D0(v10, 3, v44);
      v11 = a4;
      v12 = *(_QWORD *)(v44 + 48);
      if ( BYTE4(v46) )
      {
        LOBYTE(v13) = 1;
        if ( (v12 & 1) == 0 )
          v13 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 1LL;
        v4 = 257;
        v51 = (__int64 (__fastcall **)())(v44 & 0xFFFFFFFFFFFFFFFDLL);
        v14 = sub_CAE4E0(a1, (__int64 *)&v51, v46, v13, 0, 1, v11);
        if ( !v45 )
          goto LABEL_17;
        v15 = *(_QWORD *)a1;
        if ( v43 )
        {
          v16 = *(_QWORD *)(a1 + 1328);
          v52 = a1;
          v54 = 0;
          v53 = v16;
          v55 = 1;
          *(_QWORD *)(a1 + 1328) = &v51;
          v51 = &off_2B216F8;
          v57 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(v15 + 48))(a1) )
          {
            v49[0] = (unsigned int *)(v44 & 0xFFFFFFFFFFFFFFFBLL);
            v38 = sub_D01960(a1, (unsigned int)v46, v14, v49);
            v39 = 0;
            if ( v38 )
            {
              v39 = 1;
              if ( v57 )
              {
                v40 = sub_C97A90((__int64)&v51, 0);
                v50[0] = 4;
                v41 = v40;
                sub_CDBA30(v52, v56, v50);
                v39 = v41;
              }
            }
            LOBYTE(v4) = v39;
            BYTE1(v4) = 1;
          }
          else
          {
            v4 = 256;
          }
          sub_C977B0((__int64)&v51);
          goto LABEL_17;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(v15 + 48))(a1, v45) )
        {
          v51 = (__int64 (__fastcall **)())(v44 & 0xFFFFFFFFFFFFFFFBLL);
          LOBYTE(v4) = sub_D01960(a1, (unsigned int)v46, v14, &v51);
          BYTE1(v4) = 1;
          goto LABEL_17;
        }
      }
      else
      {
        v51 = (__int64 (__fastcall **)())(v44 & 0xFFFFFFFFFFFFFFFDLL);
        v4 = 256;
        v32 = sub_C99000(a1, (__int64 *)&v51, v12, 0, 1, v11);
        if ( !BYTE4(v32) )
        {
LABEL_17:
          --*(_DWORD *)(a1 + 1384);
          return v4;
        }
        if ( !v45 )
        {
          v4 = 257;
          goto LABEL_17;
        }
        v51 = (__int64 (__fastcall **)())(v45 | 4);
        if ( (unsigned __int8)sub_CDB9E0(a1, (unsigned int)v32, &v51)
          && (unsigned __int8)sub_CB2E50(a1, v45, v33, v34, v35) )
        {
          v51 = (__int64 (__fastcall **)())(v45 | 4);
          LOBYTE(v4) = sub_CDD1D0(a1, &v51);
          BYTE1(v4) = 1;
          goto LABEL_17;
        }
      }
      v4 = 256;
      goto LABEL_17;
    }
    v49[1] = (unsigned int *)a1;
    v49[3] = (unsigned int *)&v44;
    v42 = &v44;
    v17 = *(_QWORD *)(a1 + 1328);
    *(_QWORD *)(a1 + 1328) = &v51;
    v53 = v17;
    v51 = &off_2B21798;
    v18 = *(_QWORD *)(a1 + 1272);
    v19 = _mm_loadh_ps((const double *)&v42);
    v49[0] = (unsigned int *)&v46;
    v20 = *(_DWORD *)(v18 + 324);
    v49[2] = (unsigned int *)&v45;
    v21 = v44;
    v58 = v18;
    v59 = v20;
    v22 = *(_DWORD *)(v18 + 320);
    v54 = v44;
    ++v22;
    v49[4] = (unsigned int *)&v47;
    v52 = a1;
    v55 = 1;
    v57 = 0;
    *(_DWORD *)(v18 + 320) = v22;
    *(_DWORD *)(v18 + 324) = v22;
    v23 = *(_QWORD *)(a1 + 1368);
    *(_QWORD *)(a1 + 1368) = v21;
    v47 = v19;
    v60 = v23;
    v48 = a1;
    sub_C963D0(v10, 3, v21);
    v24 = sub_E0B510(*(_QWORD *)(a1 + 1272), v44);
    v25 = v24;
    if ( BYTE4(v24) )
    {
      sub_E05460(v50, *(_QWORD *)(a1 + 1272), (unsigned int)v24);
      v26 = sub_DFFEE0(v50);
      sub_DFF560(v50);
      if ( v26 )
      {
        HIWORD(v4) = 0;
        LOBYTE(v4) = sub_C936E0((__int64)&v47);
        BYTE1(v4) = 1;
      }
      else
      {
        if ( v45 && (unsigned __int8)sub_C936E0((__int64)&v47) )
          v27 = sub_CB3D20(v49, v25);
        else
          v27 = 0;
        v4 = v27;
        BYTE1(v4) = 1;
      }
    }
    else
    {
      v30 = sub_E08F80(*(_QWORD *)(a1 + 1272), v44, v45);
      v31 = v30;
      if ( BYTE4(v30) )
      {
        v36 = 1;
        if ( v45 )
        {
          v37 = sub_C936E0((__int64)&v47);
          v36 = 0;
          if ( v37 )
            v36 = sub_CB3D20(v49, v31);
        }
        v4 = v36;
        BYTE1(v4) = 1;
      }
      else
      {
        v4 = 256;
      }
    }
    v28 = v60;
    v51 = &off_2B21798;
    v29 = v52;
    --*(_DWORD *)(v52 + 1384);
    *(_QWORD *)(v29 + 1368) = v28;
    *(_DWORD *)(v58 + 324) = v59;
    sub_C977B0((__int64)&v51);
  }
  return v4;
}

