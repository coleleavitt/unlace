void __fastcall sub_20AC2A0(unsigned __int8 *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rdx
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  unsigned __int8 *v5; // [rsp+8h] [rbp-10h] BYREF

  v1 = 0x3FFFFFFDC0LL;
  a1[1] = a1[1] & 0x80 | 1;
  if ( !_bittest64(&v1, *a1) )
    *((_DWORD *)a1 + 1) = 0;
  v2 = (_QWORD *)(*((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*((_QWORD *)a1 + 1) & 4) != 0 )
    v2 = (_QWORD *)*v2;
  v3 = (_QWORD *)*v2;
  v5 = a1;
  v4 = (_QWORD *)v3[169];
  if ( v4 == (_QWORD *)v3[170] )
  {
    sub_20AC150((__int64)(v3 + 168), v4, (__int64 *)&v5);
  }
  else
  {
    *v4 = a1;
    v3[169] = v4 + 1;
  }
}
