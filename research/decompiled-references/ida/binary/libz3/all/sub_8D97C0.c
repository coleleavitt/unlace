void __fastcall sub_8D97C0(__int64 a1, unsigned int a2, unsigned int a3)
{
  int *v4; // r15
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  void *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  _DWORD *v12; // rax
  void *v14; // [rsp+10h] [rbp-88h]
  int v15; // [rsp+2Ch] [rbp-6Ch] BYREF
  int v16[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h]
  __int64 v18; // [rsp+40h] [rbp-58h] BYREF
  __int64 v19; // [rsp+48h] [rbp-50h]
  int v20; // [rsp+50h] [rbp-48h]

  v4 = (int *)(40LL * a2 + *(_QWORD *)(a1 + 24));
  if ( *v4 || v4[8] )
  {
    *(_QWORD *)v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v16, v4);
    v20 = v4[8];
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 )
    {
      v6 = v5 + 40LL * *(unsigned int *)(v5 - 4);
      if ( v5 != v6 )
      {
        v7 = *(_QWORD *)(a1 + 24);
        do
        {
          v8 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v7 + 20) & 1) != 0
            || *(_DWORD *)(v7 + 16) != 1
            || (v18 & 0x100000000LL) != 0
            || (_DWORD)v18 != 1 )
          {
            sub_1852000(qword_1C7F2C0, v7, v16);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, v7, v16);
            sub_182CBA0(v8, v7 + 16);
            *(_BYTE *)(v7 + 20) &= ~1u;
            *(_DWORD *)(v7 + 16) = 1;
          }
          *(_DWORD *)(v7 + 32) -= v20;
          v7 += 40;
        }
        while ( v6 != v7 );
      }
    }
    sub_25A130((char *)v16);
  }
  else
  {
    sub_8C28B0(a1, a3);
  }
  v9 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v9 + 40LL * a2)
    || *(_DWORD *)(v9 + 40LL * a2 + 32)
    || (v12 = (_DWORD *)(v9 + 40LL * a3), *v12)
    || v12[8] )
  {
    v15 = -2;
    *(_QWORD *)v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    sub_182CBA0(qword_1C7F2C0, &v18);
    BYTE4(v18) &= ~1u;
    LODWORD(v18) = 1;
    v20 = 0;
    v10 = sub_8AD9E0(a1, a2, a3, v16, &v15);
    sub_8D96D0(a1, v10);
    v14 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v16);
    sub_182CBA0(v14, &v18);
    v15 = -2;
    *(_QWORD *)v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    sub_182CBA0(qword_1C7F2C0, &v18);
    BYTE4(v18) &= ~1u;
    LODWORD(v18) = 1;
    v20 = 0;
    v11 = sub_8AD9E0(a1, a3, a2, v16, &v15);
    sub_8D96D0(a1, v11);
    sub_25A130((char *)v16);
  }
}

