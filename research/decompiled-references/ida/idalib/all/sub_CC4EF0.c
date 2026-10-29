__int64 __fastcall sub_CC4EF0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  unsigned __int64 v13; // rbp
  unsigned int v14; // r15d
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  int v17; // esi
  char v18; // al
  char v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int16 v22; // ax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  unsigned int v30; // edx
  __int64 *v31; // rsi
  __int64 v32; // rbp
  unsigned __int64 v33; // rax
  unsigned int v34; // esi
  int v35; // eax
  unsigned int v36; // eax
  int v37; // esi
  __int64 v38; // rbp
  __int64 v39; // rdx
  void (__fastcall *v40)(__int64, __int64); // rax
  int v41; // r9d
  __int64 v42; // rsi
  __int64 v43; // r10
  int v44; // [rsp+Ch] [rbp-BCh]
  unsigned __int64 v45; // [rsp+10h] [rbp-B8h]
  int v46; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v47; // [rsp+28h] [rbp-A0h] BYREF
  __m128 v48; // [rsp+30h] [rbp-98h] BYREF
  __int64 (__fastcall **v49)(); // [rsp+40h] [rbp-88h] BYREF
  __int64 v50; // [rsp+48h] [rbp-80h]
  __int64 v51; // [rsp+50h] [rbp-78h]
  __int64 v52; // [rsp+58h] [rbp-70h]
  int v53; // [rsp+60h] [rbp-68h]
  unsigned int v54; // [rsp+64h] [rbp-64h]
  char v55; // [rsp+68h] [rbp-60h]
  __int64 v56; // [rsp+70h] [rbp-58h]
  int v57; // [rsp+78h] [rbp-50h]
  __int64 v58; // [rsp+80h] [rbp-48h]

  if ( (_BYTE)a3 )
  {
    v51 = *(_QWORD *)(a1 + 552);
    *(_QWORD *)(a1 + 552) = &v49;
    v50 = a1;
    v52 = a2;
    v53 = 1;
    v49 = &off_2B4B5B8;
    v55 = 0;
    v22 = sub_CC4950(a1, a2, 1, 0);
    if ( !HIBYTE(v22) || !(_BYTE)v22 )
      goto LABEL_14;
    v24 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 48));
    v44 = v24;
    v46 = v24;
    v25 = HIDWORD(v24);
    v45 = HIDWORD(v24);
    v14 = sub_CAFB70(a2);
    if ( (_BYTE)v14 )
    {
      v26 = sub_E2F250(*(_QWORD *)(a1 + 496), a2);
      LOBYTE(v45) = v25;
      v48.m128_u64[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
      if ( (_BYTE)v25 )
      {
        if ( !(unsigned __int8)sub_CA47B0(a1, v46, v26, (__int64 *)&v48) )
          goto LABEL_14;
      }
      else if ( !(unsigned __int8)sub_CA4B70(a1, v26, (__int64 *)&v48) )
      {
        goto LABEL_14;
      }
LABEL_27:
      v35 = 13;
      if ( (_BYTE)v45 )
        v35 = v44;
      v48.m128_u64[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
      if ( (unsigned __int8)sub_CA2A10(a1, v35, (__int64 *)&v48) )
      {
        if ( !v55
          || (v36 = sub_CBBA10((__int64)&v49, 0),
              v48.m128_u64[0] = 4,
              v14 = v36,
              sub_CA4500(v50, v54, (__int64 *)&v48),
              (_BYTE)v14) )
        {
          v48.m128_u64[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
          v14 = sub_CAB260(a1, (__int64 *)&v48);
        }
        goto LABEL_15;
      }
      v14 = sub_CAFB70(a2);
      if ( !(_BYTE)v14 )
      {
LABEL_15:
        sub_CBB210((__int64)&v49);
        return v14;
      }
      v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 496) + 224LL)
                      + 8LL * (unsigned int)sub_E2F250(*(_QWORD *)(a1 + 496), a2));
      v39 = *(_QWORD *)(v38 + 32);
      *(_DWORD *)(v38 + 40) = 2;
      v40 = *(void (__fastcall **)(__int64, __int64))(v39 + 72);
      if ( v40 )
        v40(v38, v38 + *(unsigned int *)(v39 + 24) + 40);
      *(_BYTE *)(v38 + 27) = 0;
LABEL_14:
      v14 = 0;
      goto LABEL_15;
    }
    v27 = *(unsigned int *)(a1 + 520);
    v28 = a1 + 504;
    v29 = *(_QWORD *)(a1 + 504);
    if ( (_DWORD)v27 )
    {
      v30 = (v27 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v31 = (__int64 *)(v29 + 24LL * v30);
      v32 = *v31;
      if ( a2 == *v31 )
      {
LABEL_24:
        sub_CBBC50(&v48, v31, (_QWORD *)(v29 + 24 * v27), v28, 1);
        v33 = v48.m128_u64[0];
        goto LABEL_25;
      }
      v37 = 1;
      if ( v32 != -4096 )
      {
        do
        {
          v41 = v37 + 1;
          v42 = ((_DWORD)v27 - 1) & (v30 + v37);
          v30 = v42;
          v31 = (__int64 *)(v29 + 24 * v42);
          v43 = *v31;
          if ( a2 == *v31 )
            goto LABEL_24;
          v37 = v41;
        }
        while ( v43 != -4096 );
      }
    }
    sub_CBBC50(&v48, (_QWORD *)(v29 + 24 * v27), (_QWORD *)(v29 + 24 * v27), v28, 1);
    v33 = v48.m128_u64[0];
LABEL_25:
    v34 = *(_DWORD *)(v33 + 8);
    v48.m128_u64[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
    if ( (_BYTE)v45 )
    {
      if ( !(unsigned __int8)sub_CA48C0(a1, v46, v34, (__int64 *)&v48) )
        goto LABEL_15;
    }
    else if ( !(unsigned __int8)sub_CA4BA0(a1, v34, (__int64 *)&v48) )
    {
      goto LABEL_15;
    }
    goto LABEL_27;
  }
  v51 = *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a1 + 552) = &v49;
  v50 = a1;
  v49 = &off_2B4B658;
  v6 = *(_QWORD *)(a1 + 496);
  v52 = a2;
  v7 = *(_DWORD *)(v6 + 324);
  v8 = *(_DWORD *)(v6 + 320);
  v56 = v6;
  v53 = 1;
  v57 = v7;
  v55 = 0;
  *(_DWORD *)(v6 + 320) = v8 + 1;
  *(_DWORD *)(v6 + 324) = v8 + 1;
  v9 = *(_QWORD *)(a1 + 592);
  *(_QWORD *)(a1 + 592) = a2;
  v10 = *(unsigned int *)(a1 + 612);
  v58 = v9;
  v11 = *(unsigned int *)(a1 + 608);
  if ( v11 + 1 > v10 )
  {
    sub_2237220(a1 + 600, a1 + 616, v11 + 1, 16);
    v11 = *(unsigned int *)(a1 + 608);
  }
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 600) + 16 * v11);
  *v12 = 3;
  v12[1] = a2;
  ++*(_DWORD *)(a1 + 608);
  v13 = sub_B73640(a2);
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v13);
  if ( (_BYTE)v14 )
  {
    v15 = a2 & 0xFFFFFFFFFFFFFFFBLL;
    v47 = a2 & 0xFFFFFFFFFFFFFFFBLL;
    v16 = sub_CB13E0(a1, v13);
    v17 = 13;
    if ( BYTE4(v16) )
      v17 = v16;
    if ( (unsigned __int8)sub_CA2A10(a1, v17, (__int64 *)&v47)
      && (!v55
       || (v18 = sub_CBBA10((__int64)&v49, 0), v48.m128_u64[0] = 4,
                                               v19 = v18,
                                               sub_CA4500(v50, v54, (__int64 *)&v48),
                                               v19)) )
    {
      v48.m128_u64[0] = v15;
      v14 = sub_CAB260(a1, (__int64 *)&v48);
    }
    else
    {
      v14 = a3;
    }
  }
  v20 = v58;
  v49 = &off_2B4B658;
  v21 = v50;
  --*(_DWORD *)(v50 + 608);
  *(_QWORD *)(v21 + 592) = v20;
  *(_DWORD *)(v56 + 324) = v57;
  sub_CBB210((__int64)&v49);
  return v14;
}
