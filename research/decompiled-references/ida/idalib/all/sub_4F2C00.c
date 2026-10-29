unsigned __int64 __fastcall sub_4F2C00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r14
  __int64 *v4; // r15
  char *v5; // rbx
  __int64 v6; // rax
  __int64 i; // rax
  _QWORD *v8; // [rsp+8h] [rbp-D0h]
  _BYTE v9[128]; // [rsp+10h] [rbp-C8h] BYREF
  char v10; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+98h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1752);
  v8 = (_QWORD *)v1;
  if ( !*(_BYTE *)(v1 + 56) )
  {
    v3 = *(_QWORD *)(a1 + 1672);
    *(_BYTE *)(v1 + 56) = 1;
    if ( sub_630CA0(a1, 83, v9, 128) == 128 )
    {
      for ( i = 0; i != 128; i += 8 )
        *(_QWORD *)(v3 + i + 2624) = *(_QWORD *)&v9[i];
    }
    else
    {
      v4 = (__int64 *)(v3 + 2624);
      v5 = v9;
      do
      {
        sub_7BF040(v4, a1, 0, 0);
        v6 = *v4;
        v5 += 8;
        ++v4;
        *((_QWORD *)v5 - 1) = v6;
      }
      while ( v5 != &v10 );
      sub_632C30(a1, 83, v9, 128);
    }
    *(_QWORD *)(v3 + 2616) = -1;
    sub_4F23A0(v8);
  }
  return v11 - __readfsqword(0x28u);
}
