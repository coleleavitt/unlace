__int64 __fastcall sub_21B5640(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  void (*v3)(void); // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  _QWORD *v7; // [rsp+10h] [rbp-58h] BYREF
  __int64 v8; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int8 *v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-38h] BYREF
  char v11; // [rsp+40h] [rbp-28h]

  v2 = *(_QWORD *)a1;
  v9[0] = a2;
  v3 = *(void (**)(void))(v2 + 64);
  v9[1] = a1;
  if ( (char *)v3 != (char *)sub_21B1110 )
    v3();
  if ( (v9[0][16] & 0xFB) == 0x6B || (v4 = 0, v9[0][16] == 2) )
  {
    sub_21B2E70((__int64)v10, v9);
    v5 = v10[0];
    if ( (v11 & 1) != 0 )
    {
      v10[0] = 0;
      v7 = (_QWORD *)v5;
      sub_A05760(&v8, &v7);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      v4 = 0;
    }
    else
    {
      if ( !v10[0] )
        v5 = v10[1];
      v4 = 1 << (*(_BYTE *)(v5 + 10) >> 3);
    }
    sub_21B3170(v10);
  }
  return v4;
}
