void __fastcall sub_110FA20(__int64 a1, __int64 a2, __int64 a3)
{
  void **v4; // rbx
  void **v5; // r13
  __int64 v6; // rax
  void **v7; // rbp
  void *v8; // [rsp+0h] [rbp-88h] BYREF
  void **v9; // [rsp+8h] [rbp-80h]
  void **v10; // [rsp+20h] [rbp-68h] BYREF
  __int16 v11; // [rsp+40h] [rbp-48h]

  sub_2193FB0(a2, 3305);
  if ( !sub_10B8FF0(a2, 0xBECu) )
  {
    sub_2193410(&v8, a2, 3305);
    v4 = (void **)v8;
    v5 = v9;
    if ( v9 != v8 )
    {
      do
      {
        v10 = v4;
        v11 = 260;
        v4 += 4;
        sub_10B8890(a3, (__int64)"-internal-isystem");
        v6 = sub_10B6980(a2, (__int64)&v10);
        sub_10B8890(a3, v6);
      }
      while ( v5 != v4 );
      v7 = v9;
      v4 = (void **)v8;
      if ( v9 != v8 )
      {
        do
        {
          while ( *v4 != v4 + 2 )
          {
            operator delete(*v4);
            v4 += 4;
            if ( v4 == v7 )
              goto LABEL_8;
          }
          v4 += 4;
        }
        while ( v7 != v4 );
LABEL_8:
        v4 = (void **)v8;
      }
    }
    if ( v4 )
      operator delete(v4);
  }
}

