__int64 __fastcall sub_BE6C30(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 **v3; // r8
  __int64 **v4; // r12
  __int64 **v5; // r13
  __int64 *v6; // rbx
  __int64 *v7; // r14
  int v8; // eax
  void *v9; // rbx
  char v11; // [rsp+2Fh] [rbp-59h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v13[9]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *a1;
  v13[0] = 1;
  v2 = *(_QWORD *)(v1 + 16);
  v12[0] = 0;
  v12[1] = 0;
  v3 = *(__int64 ***)(v2 + 8664);
  v13[1] = 0;
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 != v4 )
    {
      v5 = v3;
      while ( 1 )
      {
        v6 = *v5;
        if ( !(unsigned __int8)sub_1666AE0(a1 + 19, **v5, v12, &v11) )
          goto LABEL_4;
        if ( (v12[0] & 0x100000000LL) != 0 )
        {
          if ( (v13[0] & 0x100000000LL) != 0
            || LODWORD(v13[0]) != 1
            || !(unsigned __int8)sub_182CFC0(qword_1C7F2C0, v12)
            || (unsigned __int64)(sub_182D050(qword_1C7F2C0, v12) + 0x80000000LL) > 0xFFFFFFFF )
          {
            goto LABEL_4;
          }
        }
        else if ( (v13[0] & 0x100000000LL) != 0 || LODWORD(v13[0]) != 1 )
        {
          goto LABEL_4;
        }
        if ( (unsigned int)sub_182D050(qword_1C7F2C0, v12) == 0x80000000 || (v7 = (__int64 *)v6[2], v6 == v7) )
        {
LABEL_4:
          if ( v4 == ++v5 )
            break;
        }
        else
        {
          do
          {
            v8 = sub_182D050(qword_1C7F2C0, v12);
            sub_BE5FE0((__int64)a1, *v7, v8);
            v7 = (__int64 *)v7[2];
          }
          while ( v6 != v7 );
          if ( v4 == ++v5 )
            break;
        }
      }
    }
  }
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  return sub_182CBA0(v9, v13);
}

