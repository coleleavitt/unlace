void __fastcall sub_18D06E0(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4, int a5, double a6)
{
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // r15
  __int64 v21; // rax
  __int64 *v22; // rsi
  unsigned int v23; // ecx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  char v43; // al
  unsigned int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int8 v47; // [rsp+Bh] [rbp-EDh] BYREF
  int v48; // [rsp+Ch] [rbp-ECh] BYREF
  unsigned __int64 v49; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v50; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v53[200]; // [rsp+30h] [rbp-C8h] BYREF

  v10 = sub_BFD410(a2);
  v11 = a1[31];
  v49 = v10;
  v50 = sub_BFD410(a3);
  v47 = sub_F61000(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL), v11, v12, v13, v14, v15);
  v20 = sub_F61000(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL), v11, v16, v17, v18, v19);
  if ( a5 != 4 && v47 && sub_F58060(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL)) )
    goto LABEL_6;
  if ( !v20 )
    return;
  if ( sub_F58060(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
LABEL_6:
    v21 = a1[29];
    v22 = a1 + 1;
    v23 = 3060;
    if ( (*(_BYTE *)(v21 + 2) & 2) == 0 )
      v23 = ((unsigned int)*(char *)(v21 + 1) >> 31) + 6511;
    sub_168B9F0((__int64)v53, v22, a4, v23, 0);
    v51 = sub_EEC8C0(a2, (__int64)v22, a6);
    v24 = sub_1587DB0((__int64)v53, &v51);
    v52 = sub_EEC8C0(a3, (__int64)&v51, a6);
    v25 = sub_1587DB0(v24, &v52);
    v48 = a5;
    v26 = sub_1587D10(v25, &v48);
    v27 = sub_15890D0(v26, &v47);
    v28 = sub_1605D30(v27, (__int64 *)&v49);
    sub_1605D30(v28, (__int64 *)&v50);
    sub_15F7200(v53);
  }
  else if ( a5 != 4
         && v47
         && *(_QWORD *)(*(_QWORD *)&byte_8[v49 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v50 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v31 = a1[29];
    v32 = 6708;
    if ( (*(_BYTE *)(v31 + 2) & 2) == 0 )
    {
      v37 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
              v11,
              v31,
              6708,
              v29,
              v30);
      if ( (v37[5] || (v45 = v37[15], (v45 & 4) == 0) && (v45 & 0xFFFFFFFFFFFFFFF8LL) != 0)
        && ((v42 = sub_F60F10(
                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                     v11,
                     v38,
                     v39,
                     v40,
                     v41),
             v42[5])
         || (v46 = v42[15], (v46 & 4) == 0) && (v46 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
      {
        v43 = *(_BYTE *)(a1[29] + 1);
        if ( a5 == 3 )
        {
          v32 = ((unsigned int)v43 >> 31) + 6692;
        }
        else
        {
          v44 = (unsigned int)v43 >> 31;
          if ( a5 == 2 )
            v32 = v44 + 6679;
          else
            v32 = v44 + 6515;
        }
      }
      else
      {
        v32 = ((unsigned int)*(char *)(a1[29] + 1) >> 31) + 6513;
      }
    }
    sub_168B9F0((__int64)v53, a1 + 1, a4, v32, 0);
    v51 = sub_EEC8C0(a2, (__int64)(a1 + 1), a6);
    v33 = sub_1587DB0((__int64)v53, &v51);
    v52 = sub_EEC8C0(a3, (__int64)&v51, a6);
    v34 = sub_1587DB0(v33, &v52);
    v48 = a5;
    v35 = sub_1587D10(v34, &v48);
    v36 = sub_1605D30(v35, (__int64 *)&v49);
    sub_1605D30(v36, (__int64 *)&v50);
    sub_15F7200(v53);
  }
}
