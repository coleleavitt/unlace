void __fastcall sub_1719AA0(__int64 a1, unsigned int *a2, char a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r15
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  __int64 v19; // [rsp+8h] [rbp-A0h]
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

  v19 = (__int64)a2;
  v6 = sub_B8E970(a1);
  if ( v6 )
  {
    v11 = v6;
    do
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v11 + 28) & 0x7F) == 0x14 && (!a3 || !sub_BAC6C0(v11, (__int64)a2, v7, v8, v9, v10)) )
        {
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
          sub_15A3440(v20, 1, v12, v13, v14, v15);
          a2 = v20;
          sub_1715C60(a4, (__int64)v20, v19, 0, 0, 0);
          v16 = v24[1];
          v17 = v24[0];
          if ( v24[1] != v24[0] )
          {
            do
            {
              while ( 1 )
              {
                v18 = (_QWORD *)v17[3];
                v7 = (__int64)(v17 + 5);
                if ( v18 == v17 + 5 )
                  break;
                operator delete(v18);
                v17 += 8;
                if ( v16 == v17 )
                  goto LABEL_10;
              }
              v17 += 8;
            }
            while ( v16 != v17 );
LABEL_10:
            v17 = v24[0];
          }
          if ( v17 )
            break;
        }
        v11 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v11 )
          return;
      }
      operator delete(v17);
      v11 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( v11 );
  }
}
