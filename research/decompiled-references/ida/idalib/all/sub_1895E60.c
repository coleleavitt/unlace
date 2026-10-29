__int64 __fastcall sub_1895E60(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebp
  unsigned int v16; // eax
  __int64 v17; // r14
  int v18; // edx
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  int v37; // edx
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned int v49; // ebx
  unsigned int v50; // eax
  int v51; // [rsp+0h] [rbp-48h]
  _QWORD *v52; // [rsp+0h] [rbp-48h]
  __int64 v53; // [rsp+0h] [rbp-48h]
  _QWORD *v54; // [rsp+0h] [rbp-48h]
  __int64 v55; // [rsp+8h] [rbp-40h]

  v6 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = a4 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v9 == v8 )
    return 1;
  if ( a2 == 1 )
    return 0;
  if ( sub_F62670(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL),
         nullptr,
         v6,
         v7,
         a5,
         a6) )
  {
    return 0;
  }
  LOBYTE(v16) = sub_F62670(v9, nullptr, v10, v11, v12, v13);
  v14 = v16;
  if ( (_BYTE)v16 )
    return 0;
  v17 = sub_A97D20(a1, v8);
  v51 = v18;
  if ( v17 != sub_A97D20(a1, v9) || v51 != v19 )
    return 0;
  v23 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 57;
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 57 <= 1 )
  {
    LOBYTE(v14) = (unsigned int)v23 <= 1;
    return v14;
  }
  if ( (unsigned int)v23 <= 1 )
  {
    return 0;
  }
  else if ( sub_F61140(v8, v9, v23, v20, v21, v22) && sub_F61140(v9, v9, v24, v25, v26, v27) )
  {
    v49 = sub_F58130(v8);
    v50 = sub_F58130(v9);
    if ( v49 == 4 )
      v49 = 5;
    if ( v50 == 4 )
      v50 = 5;
    if ( v50 < 2 )
      v50 = 2;
    if ( v49 < 2 )
      v49 = 2;
    LOBYTE(v14) = v50 == v49;
  }
  else if ( *(_BYTE *)(v8 + 16) == 48 && *(_BYTE *)(v9 + 16) == 48 )
  {
    v28 = sub_F60F10(v8, v9, v24, v25, v26, v27);
    v33 = sub_F60F10(v9, v9, v29, v30, v31, v32);
    LOBYTE(v36) = *((_BYTE *)v28 + 73) >> 5 == 2;
    if ( (_BYTE)v36 == (*((_BYTE *)v33 + 73) >> 5 == 2) )
    {
      if ( (*((_BYTE *)v28 + 28) & 0x7Fu) - 59 > 2
        || (v54 = v33,
            sub_7052B0((__int64 *)(v28[13] + 96LL), v28[13], v36, (__int64)v33, v34, v35),
            v33 = v54,
            (*(_BYTE *)(v28[16] + 1LL) & 1) != 0) )
      {
        if ( (*((_BYTE *)v33 + 28) & 0x7Fu) - 59 > 2
          || (v52 = v33,
              sub_7052B0((__int64 *)(v33[13] + 96LL), v33[13], v36, (__int64)v33, v34, v35),
              v33 = v52,
              (*(_BYTE *)(v52[16] + 1LL) & 1) != 0) )
        {
          v55 = (__int64)v33;
          v53 = sub_A97D20(a1, v8);
          v38 = v37;
          if ( v53 == sub_A97D20(a1, v9) && v38 == (_DWORD)v39 )
          {
            v42 = sub_B7E900((__int64)v28, v9, v39, v55, v40, v41);
            v46 = sub_B7E900(v55, v9, v43, v55, v44, v45);
            while ( v42 )
            {
              if ( !v46 || !(unsigned __int8)sub_1895E60(a1, a2, *(_QWORD *)(v42 + 48), *(_QWORD *)(v46 + 48)) )
                return v14;
              do
              {
                v47 = *(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v42 = v47;
              }
              while ( v47 && (*(_BYTE *)(v47 + 28) & 0x7Fu) - 49 > 2 );
              do
              {
                v48 = *(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v46 = v48;
              }
              while ( v48 && (*(_BYTE *)(v48 + 28) & 0x7Fu) - 49 > 2 );
            }
            LOBYTE(v14) = v46 == 0;
          }
        }
      }
    }
  }
  return v14;
}
