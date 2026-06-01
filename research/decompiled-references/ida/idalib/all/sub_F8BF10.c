void __fastcall sub_F8BF10(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r13
  __int64 v17; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v33; // [rsp+18h] [rbp-40h]
  __int64 *v34; // [rsp+18h] [rbp-40h]

  v6 = a4;
  v33 = sub_EDE580(a1[5], (char *)a2, a3, a4, a5, a6);
  v7 = *(_QWORD *)(v33[9] + 48LL);
  v11 = sub_A7A590(a2, a2, v8, (__int64)v33, v9, v10);
  v14 = (__int64)v33;
  v15 = v11;
  v16 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  v34 = v33 + 9;
  if ( v11 != v12 )
  {
    v17 = v12;
    do
    {
      if ( (*(_BYTE *)(v15 + 12) & 1) == 0 )
      {
        v18 = sub_F79C60(*(__int64 **)(v15 + 16), a2, v12, v14, v13);
        v23 = (char *)sub_F63270(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL), a2, v19, v20, v21, v22);
        sub_7052B0((__int64 *)(*((_QWORD *)v23 + 13) + 96LL), *((_QWORD *)v23 + 13), v24, v25, v26, v27);
        if ( (*(_BYTE *)(*((_QWORD *)v23 + 16) + 1LL) & 4) != 0
          || (a2 = *((_QWORD *)v23 + 13),
              sub_7052B0((__int64 *)(a2 + 96), a2, v12, v14, v13, v28),
              v12 = *(unsigned int *)(*((_QWORD *)v23 + 16) + 20LL),
              (_DWORD)v12) )
        {
          if ( a1[1] == a1[4]
            || v6
            || (a2 = *((_QWORD *)v23 + 13),
                sub_7052B0((__int64 *)(a2 + 96), a2, v12, v14, v13, v28),
                *(_DWORD *)(*((_QWORD *)v23 + 16) + 20LL)) )
          {
            v29 = sub_F81500(v34, (__int64)v23, v12, v14, v13, v28);
            v30 = v29 + a3;
            if ( (char *)v16 == v23 )
            {
              a2 = v16;
              sub_F8BF10(a1, v16, v30, v6, a5 + v29);
            }
            else
            {
              a2 = (__int64)v23;
              sub_F8AB40((__int64)a1, v23, v30, v6, 0, a5 + v29);
            }
          }
        }
      }
      v15 += 24LL;
    }
    while ( v17 != v15 );
  }
}
