void __fastcall sub_832C70(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  int v4; // r15d
  void *v5; // r13
  int v6; // r14d
  __int64 *v7; // r14
  void *v8; // r13
  unsigned int v9; // r13d
  int *v10; // rdx
  unsigned int v11; // [rsp+4h] [rbp-A4h]
  int v12; // [rsp+10h] [rbp-98h] BYREF
  char v13; // [rsp+14h] [rbp-94h]
  __int64 v14; // [rsp+18h] [rbp-90h]
  int v15; // [rsp+20h] [rbp-88h]
  char v16; // [rsp+24h] [rbp-84h]
  __int64 v17; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-78h] BYREF
  __int64 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  __int64 v21; // [rsp+48h] [rbp-60h]
  __int64 v22; // [rsp+50h] [rbp-58h] BYREF
  __int64 v23; // [rsp+58h] [rbp-50h]
  __int64 v24; // [rsp+60h] [rbp-48h] BYREF
  __int64 v25; // [rsp+68h] [rbp-40h]

  v4 = *(_DWORD *)(a3 + 4LL * a2 + 60);
  sub_10144C0(*(_QWORD *)(a1 + 496));
  if ( (unsigned int)sub_FF9DB0(*(_QWORD *)(a1 + 496)) != 1 )
  {
    v11 = sub_886F00(a1, *(unsigned __int8 *)(a3 + 20), *(unsigned int *)(a3 + 56), a2);
    if ( v11 >= 0xFFFFFFFE )
      ++*(_DWORD *)(a1 + 396);
    else
      ++*(_DWORD *)(a1 + 400);
    if ( a2 == (*(_BYTE *)(a3 + 8) & 1) )
    {
      v6 = *(_DWORD *)(a3 + 56);
      if ( *(_BYTE *)(a3 + 20) )
      {
        if ( v6 )
          v7 = (__int64 *)&qword_1C7F280;
        else
          v7 = &qword_1C7F260;
        v18 = 0;
        v19 = 0;
        v20 = 1;
        v21 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v18, (int *)(a3 + 24));
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v18, (__int64)v7, (__int64)&v18);
        v13 &= 0xFCu;
        v16 &= 0xFCu;
        v12 = 0;
        v14 = 0;
        v15 = 1;
        v17 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v12, (int *)&v18);
        sub_25A130((char *)&v18);
        v18 = 0;
        v19 = 0;
        v20 = 1;
        v21 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v18, &v12);
        v8 = qword_1C7F2C0;
        v22 = 0;
        v23 = 0;
        v24 = 1;
        v25 = 0;
        sub_182CEF0(qword_1C7F2C0, &v22);
        sub_182CBA0(v8, &v24);
        BYTE4(v24) &= ~1u;
        LODWORD(v24) = 1;
        sub_25A130((char *)&v12);
      }
      else
      {
        v18 = 0;
        v19 = 0;
        v20 = 1;
        v21 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v18, (int *)(a3 + 24));
        if ( v6 )
          v10 = &qword_1C7F280;
        else
          v10 = (int *)&qword_1C7F260;
        v22 = 0;
        v23 = 0;
        v24 = 1;
        v25 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v22, v10);
      }
    }
    else
    {
      v18 = 0;
      v19 = 0;
      v20 = 1;
      v21 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v18, (int *)(a3 + 24));
      v5 = qword_1C7F2C0;
      v22 = 0;
      v23 = 0;
      v24 = 1;
      v25 = 0;
      sub_182CEF0(qword_1C7F2C0, &v22);
      sub_182CBA0(v5, &v24);
      BYTE4(v24) &= ~1u;
      LODWORD(v24) = 1;
    }
    if ( *(_BYTE *)(sub_7E4EB0(a1) + 264) )
    {
      v9 = *(_DWORD *)(a1 + 392);
      if ( v9 < *(_DWORD *)(sub_7E4EB0(a1) + 344) && !(_DWORD)v22 )
        sub_832A70((__int64 *)a1, *(_DWORD *)(a3 + 16), v4, v11, a3, (int *)&v18);
    }
    sub_25A130((char *)&v22);
    sub_25A130((char *)&v18);
  }
}

