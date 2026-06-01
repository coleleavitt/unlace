unsigned __int64 __fastcall sub_903510(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r13
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax

  v3 = a1;
  v4 = a3 + 0x27D4EB2F165667C5LL;
  if ( a2 > 0x1F )
  {
    v5 = a3 + 0x60EA27EEADC0B5D6LL;
    v6 = a3 - 0x3D4D51C2D82B14B1LL;
    v7 = a3 + 0x61C8864E7A143579LL;
    do
    {
      v8 = *(_QWORD *)v3;
      v9 = *(_QWORD *)(v3 + 8);
      v3 += 32LL;
      v10 = __ROL8__(v5 - 0x3D4D51C2D82B14B1LL * v8, 31);
      v11 = __ROL8__(v6 - 0x3D4D51C2D82B14B1LL * v9, 31);
      v12 = __ROL8__(a3 - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(v3 - 16), 31);
      v5 = 0x9E3779B185EBCA87LL * v10;
      v13 = __ROL8__(v7 - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(v3 - 8), 31);
      v6 = 0x9E3779B185EBCA87LL * v11;
      a3 = 0x9E3779B185EBCA87LL * v12;
      v7 = 0x9E3779B185EBCA87LL * v13;
    }
    while ( a1 + a2 - 31 > v3 );
    v4 = 0x9E3779B185EBCA87LL
       * ((0x9E3779B185EBCA87LL
         * ((0x9E3779B185EBCA87LL
           * ((0x9E3779B185EBCA87LL * __ROL8__(0xDEF35B010F796CA9LL * v11, 31))
            ^ (0x9E3779B185EBCA87LL
             * ((0x9E3779B185EBCA87LL * __ROL8__(0xDEF35B010F796CA9LL * v10, 31))
              ^ (__ROL8__(v7, 18) + __ROL8__(v6, 7) + __ROL8__(v5, 1) + __ROL8__(a3, 12)))
             - 0x7A1435883D4D519DLL))
           - 0x7A1435883D4D519DLL)
          ^ (0x9E3779B185EBCA87LL * __ROL8__(0xDEF35B010F796CA9LL * v12, 31)))
         - 0x7A1435883D4D519DLL)
        ^ (0x9E3779B185EBCA87LL * __ROL8__(0xDEF35B010F796CA9LL * v13, 31)))
       - 0x7A1435883D4D519DLL;
  }
  return sub_9033E0(a2 + v4, (unsigned int *)v3, a2);
}
