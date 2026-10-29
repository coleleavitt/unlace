void __fastcall sub_AD6350(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r9
  __int64 *v4; // r12
  __int64 *v5; // rbx
  void (__fastcall *v6)(__int64 *, __int64 *, __int64); // rax
  _WORD v7[2]; // [rsp+0h] [rbp-4D8h] BYREF
  int v8; // [rsp+4h] [rbp-4D4h]
  _BYTE v9[16]; // [rsp+8h] [rbp-4D0h] BYREF
  __int64 *v10; // [rsp+18h] [rbp-4C0h]
  unsigned int v11; // [rsp+20h] [rbp-4B8h]
  __int64 v12; // [rsp+28h] [rbp-4B0h] BYREF
  void *v13; // [rsp+430h] [rbp-A8h]
  _QWORD v14[12]; // [rsp+440h] [rbp-98h] BYREF
  char v15; // [rsp+4A0h] [rbp-38h]

  v8 = 0;
  v7[0] = 0;
  v2 = sub_227D6D0(a1, a2);
  sub_F30380(v9, v2, 1);
  v14[11] = v2;
  v15 = 1;
  sub_AD2220((__int64)v9, 0, 0, a1, (__int64)v7, v3);
  if ( v13 != v14 )
    operator delete(v13);
  v4 = v10;
  v5 = &v10[4 * v11];
  if ( v10 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v5 -= 4;
        v6 = (void (__fastcall *)(__int64 *, __int64 *, __int64))v5[2];
        if ( !v6 )
          break;
        v6(v5, v5, 3);
        if ( v4 == v5 )
          goto LABEL_6;
      }
    }
    while ( v4 != v5 );
LABEL_6:
    v5 = v10;
  }
  if ( v5 != &v12 )
    free(v5);
}
