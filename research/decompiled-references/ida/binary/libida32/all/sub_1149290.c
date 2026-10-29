void __fastcall sub_1149290(__int64 a1, __int64 a2)
{
  char *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int8 *v6[10]; // [rsp+0h] [rbp-D8h] BYREF
  void *v7[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v8; // [rsp+60h] [rbp-78h] BYREF
  char v9; // [rsp+70h] [rbp-68h]
  void *v10; // [rsp+78h] [rbp-60h]
  __int64 v11; // [rsp+88h] [rbp-50h] BYREF
  char v12; // [rsp+98h] [rbp-40h]
  void *ptr; // [rsp+A0h] [rbp-38h]
  int v14; // [rsp+A8h] [rbp-30h]
  int v15; // [rsp+ACh] [rbp-2Ch]
  char v16; // [rsp+B8h] [rbp-20h]

  sub_1148E10((__m128i **)v7, a1, a2);
  if ( v9 && !v12 )
  {
    sub_FA3370((__int64)v6, **(_QWORD **)(a1 + 8), 0, 326);
    sub_AC84E0(v6, (_BYTE *)v7[0], (signed __int64)v7[1]);
    sub_AC6300((__int64)v6);
  }
  if ( v16 )
  {
    v2 = (char *)ptr;
    if ( v15 && v14 )
    {
      v3 = 0;
      v4 = 8LL * (unsigned int)(v14 - 1) + 8;
      do
      {
        v5 = *(_QWORD *)&v2[v3];
        if ( v5 && v5 != -8 )
        {
          operator delete();
          v2 = (char *)ptr;
        }
        v3 += 8;
      }
      while ( v4 != v3 );
    }
    free(v2);
  }
  if ( v12 && v10 != &v11 )
    operator delete(v10);
  if ( v9 )
  {
    if ( v7[0] != &v8 )
      operator delete(v7[0]);
  }
}

