__int64 __fastcall sub_6902B0(__int64 a1, __int64 *a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v13; // rdx
  void *src; // [rsp+10h] [rbp-88h] BYREF
  size_t n; // [rsp+18h] [rbp-80h]
  _QWORD v16[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+48h] [rbp-50h]
  __int16 v20; // [rsp+50h] [rbp-48h]

  v3 = **(_DWORD **)(a1 + 56);
  if ( v3 > 0x2273 )
    return sub_690460(a3);
  sub_C73470(v17);
  v4 = sub_C74EA0(v17, v3);
  v6 = v5;
  v7 = v4;
  sub_C73B10(v17);
  if ( v6 )
  {
    if ( a2 )
    {
      v18 = v7;
      v19 = v6;
      v20 = 1283;
      v17[0] = "-Wno-";
      sub_25F1F70(&src, v17);
      v8 = sub_6905C0(src, n);
      v9 = src;
      *a2 = v8;
      a2[1] = v10;
      if ( v9 != v16 )
        operator delete(v9, v16[0] + 1LL);
    }
    v19 = v6;
    v17[0] = "-W";
    v20 = 1283;
    v18 = v7;
    sub_25F1F70(&src, v17);
    v11 = sub_6905C0(src, n);
    if ( src != v16 )
      operator delete(src, v16[0] + 1LL);
    return v11;
  }
  if ( v3 != 100 )
    return sub_690460(a3);
  if ( a2 )
  {
    *a2 = sub_6904A0("-ferror-limit=0");
    a2[1] = v13;
  }
  return sub_6904A0("-ferror-limit=");
}

