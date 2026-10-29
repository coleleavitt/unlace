__int64 __fastcall sub_1751D0(
        __int64 a1,
        unsigned int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r14d
  __int64 v14; // rdi
  __int64 v15; // rdi
  const char *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __int64 v24; // rdx
  const char *v25; // rsi
  __int64 v26; // rax
  __int128 v27; // xmm1
  __int64 v28; // xmm0_8
  int v29; // ecx
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // [rsp+0h] [rbp-D8h]
  char v41; // [rsp+0h] [rbp-D8h]
  int v42; // [rsp+8h] [rbp-D0h]
  __int64 v43; // [rsp+8h] [rbp-D0h]
  int v44; // [rsp+8h] [rbp-D0h]
  __int64 v45; // [rsp+10h] [rbp-C8h] BYREF
  int v46; // [rsp+18h] [rbp-C0h]
  __int64 v47; // [rsp+20h] [rbp-B8h] BYREF
  int v48; // [rsp+28h] [rbp-B0h]
  char v49[48]; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v50; // [rsp+60h] [rbp-78h] BYREF
  __int64 v51; // [rsp+70h] [rbp-68h]
  int v52; // [rsp+78h] [rbp-60h]
  int v53; // [rsp+7Ch] [rbp-5Ch]
  int v54; // [rsp+80h] [rbp-58h]
  __int64 v55; // [rsp+88h] [rbp-50h]
  unsigned __int64 v56; // [rsp+98h] [rbp-40h]

  v10 = 0;
  v56 = __readfsqword(0x28u);
  if ( (unsigned __int64)xmmword_8D0AA8 > 1 )
  {
    sub_1E96E0(v49, v40, v42, v45);
    v14 = *(_QWORD *)(a1 + 16);
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    if ( !(unsigned __int8)sub_1F07A0(v14, &v45, &v47, 0) )
    {
      v34 = *(_QWORD *)(sub_1EA680(*(_QWORD *)(a1 + 16) + 384LL) + 40);
      if ( v34 )
      {
        v43 = v34;
        v35 = sub_1EA680(*(_QWORD *)(a1 + 16) + 384LL);
        v36 = v43;
        v44 = *(__int16 *)(v35 + 28);
        if ( (BYTE2(xmmword_8BCDC0) & 1) != 0 )
        {
          v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          v15 = v45;
          v37 = *(_QWORD *)(a1 + 16);
          v48 = 0;
          v38 = *(_QWORD *)(v37 + 928);
          v46 = v44;
          v47 = v38;
LABEL_5:
          if ( !v15 )
          {
            v10 = 0;
            goto LABEL_18;
          }
          v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
          v16 = &s1;
          if ( (_QWORD)xmmword_8D0AA8 )
            v16 = (const char *)qword_8D0AA0;
          v17 = sub_1F34C0(
                  *(_QWORD *)(a1 + 16),
                  v16,
                  &v45,
                  &v47,
                  (unsigned __int8)(BYTE2(xmmword_8BCDC0) | (2 * (a2 & 1))));
          if ( v17 )
          {
            v24 = (unsigned int)(v17 - 1);
            if ( (unsigned int)v24 <= 1 )
            {
              v25 = "aborted";
              if ( v17 == 1 )
                v25 = "completed";
              sub_169700((int)"Search %s\n", (__int64)v25, v24, v19, v20, v21, a3, a4, a5, a6, v22, v23, a9, a10, v41);
              v26 = sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL);
              v27 = *(_OWORD *)v26;
              v28 = *(_QWORD *)(v26 + 16);
              v29 = *(_DWORD *)(v26 + 24);
              v30 = *(_DWORD *)(v26 + 32);
              LODWORD(v26) = *(unsigned __int16 *)(v26 + 30);
              v50 = v27;
              v52 = v29;
              v54 = v30;
              v55 = v45;
              v53 = (unsigned __int16)v46 | ((_DWORD)v26 << 16);
              v51 = v28;
              if ( v45 )
                v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
              (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 16) + 584LL))(*(_QWORD *)(a1 + 16), &v50);
              v16 = (const char *)&v50;
              sub_1FFC10(*(_QWORD *)(a1 + 16), &v50, 3, (a2 >> 1) & 1);
              if ( v55 )
                qfree(v55, &v50, v24, v19, v20);
              v10 = 1;
              goto LABEL_17;
            }
          }
          else
          {
            sub_169700(
              (int)"Pattern not found\n",
              (__int64)v16,
              v18,
              v19,
              v20,
              v21,
              a3,
              a4,
              a5,
              a6,
              v22,
              v23,
              a9,
              a10,
              v41);
          }
          v10 = 0;
LABEL_17:
          qfree(v45, v16, v24, v19, v20);
          qfree(v47, v16, v31, v32, v33);
LABEL_18:
          sub_1E98C0((QT::QObject *)v49);
          return v10;
        }
        v39 = *(_QWORD *)(a1 + 16);
        v46 = 0;
        v45 = *(_QWORD *)(v39 + 920);
        v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        v48 = v44;
      }
    }
    v15 = v45;
    goto LABEL_5;
  }
  return v10;
}
