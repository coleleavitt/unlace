void __fastcall sub_17170F0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // r15
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  unsigned int v20[4]; // [rsp+10h] [rbp-98h] BYREF
  int v21; // [rsp+20h] [rbp-88h]
  __int64 v22; // [rsp+24h] [rbp-84h]
  int v23; // [rsp+30h] [rbp-78h]
  void *v24[2]; // [rsp+38h] [rbp-70h]
  __int64 v25; // [rsp+48h] [rbp-60h]
  char v26; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+58h] [rbp-50h]
  __int64 v28; // [rsp+60h] [rbp-48h]
  __int64 v29; // [rsp+68h] [rbp-40h]

  v6 = sub_B8E970(a1);
  if ( v6 )
  {
    v11 = v6;
    do
    {
      if ( (*(_BYTE *)(v11 + 28) & 0x7F) == 0x13 )
      {
        if ( !a3 )
          goto LABEL_8;
        v12 = *(_QWORD *)(v11 + 104);
        if ( !v12 )
        {
          sub_A79820((__int64 *)(*(_QWORD *)(v11 + 96) + 88LL), *(_QWORD *)(v11 + 96), v7, v8, v9, v10);
          v12 = *(_QWORD *)(v11 + 104);
        }
        if ( (v12 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
LABEL_8:
          v21 = sub_16FE9F0(a4, v11);
          *(_OWORD *)v24 = 0;
          *(_QWORD *)v20 = v11;
          v22 = 0;
          v26 = v26 & 0x80 | 0x40;
          v23 = 0;
          v25 = 0;
          v27 = 0;
          v28 = 0;
          v29 = 0;
          sub_15A3440(v20, 1, v13, v14, v15, v16);
          sub_1715C60(a4, (__int64)v20, a2, 0, 0, 0);
          v17 = v24[1];
          v18 = v24[0];
          if ( v24[1] != v24[0] )
          {
            do
            {
              while ( 1 )
              {
                v19 = (_QWORD *)v18[3];
                v7 = (__int64)(v18 + 5);
                if ( v19 == v18 + 5 )
                  break;
                operator delete(v19);
                v18 += 8;
                if ( v17 == v18 )
                  goto LABEL_11;
              }
              v18 += 8;
            }
            while ( v17 != v18 );
LABEL_11:
            v18 = v24[0];
          }
          if ( v18 )
            operator delete(v18);
        }
      }
      v11 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( v11 );
  }
}
