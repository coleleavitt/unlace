void __fastcall sub_16C5A70(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 *v7; // rax
  void *v8; // [rsp+10h] [rbp-4F8h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-4F0h]
  int v10; // [rsp+1Ch] [rbp-4ECh]
  _QWORD v11[8]; // [rsp+20h] [rbp-4E8h] BYREF
  _QWORD v12[2]; // [rsp+60h] [rbp-4A8h] BYREF
  void *ptr; // [rsp+70h] [rbp-498h]
  __int64 v14; // [rsp+78h] [rbp-490h]
  _DWORD v15[8]; // [rsp+80h] [rbp-488h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-468h]
  __int64 v17; // [rsp+A8h] [rbp-460h] BYREF
  unsigned int v18; // [rsp+B0h] [rbp-458h]
  int v19; // [rsp+4A8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+4B0h] [rbp-58h]
  void **v21; // [rsp+4B8h] [rbp-50h]
  __int64 v22; // [rsp+4C0h] [rbp-48h]

  v2 = 1;
  v11[0] = a2;
  v4 = v11;
  v10 = 8;
  v8 = v11;
  do
  {
    while ( 1 )
    {
      v5 = v4[v2 - 1];
      v9 = v2 - 1;
      v12[1] = a1;
      v6 = *(_QWORD *)(a1 + 248);
      ptr = v15;
      v15[0] = 0;
      v14 = 0x800000001LL;
      v16 = 1;
      v12[0] = v6;
      v7 = &v17;
      do
      {
        *v7 = -4096;
        v7 += 8;
      }
      while ( &v19 != (int *)v7 );
      v21 = &v8;
      v19 = 0;
      v20 = 0;
      v22 = 0;
      sub_16C1900((__int64)v12, v5);
      if ( (v16 & 1) == 0 )
        operator delete(v17, (unsigned __int64)v18 << 6, 8);
      if ( ptr == v15 )
        break;
      free(ptr);
      v2 = v9;
      v4 = v8;
      if ( !v9 )
        goto LABEL_8;
    }
    v2 = v9;
    v4 = v8;
  }
  while ( v9 );
LABEL_8:
  if ( v4 != v11 )
    free(v4);
}
