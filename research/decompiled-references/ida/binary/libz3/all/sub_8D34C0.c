__int64 __fastcall sub_8D34C0(__int64 a1, unsigned int a2, unsigned int a3)
{
  int *v4; // r15
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  void *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  void *v12; // rbp
  __int64 result; // rax
  _DWORD *v14; // rax
  void *v16; // [rsp+10h] [rbp-88h]
  int v17; // [rsp+2Ch] [rbp-6Ch] BYREF
  int v18[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+48h] [rbp-50h]
  int v22; // [rsp+50h] [rbp-48h]

  v4 = (int *)(40LL * a2 + *(_QWORD *)(a1 + 24));
  if ( *v4 || v4[8] )
  {
    *(_QWORD *)v18 = 0;
    v19 = 0;
    v20 = 1;
    v21 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v18, v4);
    v22 = v4[8];
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
            || (v20 & 0x100000000LL) != 0
            || (_DWORD)v20 != 1 )
          {
            sub_1852000(qword_1C7F2C0, v7, v18);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, v7, v18);
            sub_182CBA0(v8, v7 + 16);
            *(_BYTE *)(v7 + 20) &= ~1u;
            *(_DWORD *)(v7 + 16) = 1;
          }
          *(_DWORD *)(v7 + 32) -= v22;
          v7 += 40;
        }
        while ( v6 != v7 );
      }
    }
    sub_25A130((char *)v18);
  }
  else
  {
    sub_8BE480(a1, a3);
  }
  v9 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v9 + 40LL * a2)
    || *(_DWORD *)(v9 + 40LL * a2 + 32)
    || (v14 = (_DWORD *)(v9 + 40LL * a3), *v14)
    || (result = (unsigned int)v14[8], (_DWORD)result) )
  {
    v17 = -2;
    *(_QWORD *)v18 = 0;
    v19 = 0;
    v20 = 1;
    v21 = 0;
    sub_182CBA0(qword_1C7F2C0, &v20);
    BYTE4(v20) &= ~1u;
    LODWORD(v20) = 1;
    v22 = 0;
    v10 = sub_8AD5A0(a1, a2, a3, v18, &v17);
    sub_8D33D0(a1, v10);
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v18);
    sub_182CBA0(v16, &v20);
    v17 = -2;
    *(_QWORD *)v18 = 0;
    v19 = 0;
    v20 = 1;
    v21 = 0;
    sub_182CBA0(qword_1C7F2C0, &v20);
    BYTE4(v20) &= ~1u;
    LODWORD(v20) = 1;
    v22 = 0;
    v11 = sub_8AD5A0(a1, a3, a2, v18, &v17);
    sub_8D33D0(a1, v11);
    v12 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v18);
    return sub_182CBA0(v12, &v20);
  }
  return result;
}

