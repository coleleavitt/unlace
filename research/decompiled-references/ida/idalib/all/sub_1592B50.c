void __fastcall sub_1592B50(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rax
  char ***v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // [rsp+8h] [rbp-78h]
  int v12; // [rsp+10h] [rbp-70h]
  char v13; // [rsp+14h] [rbp-6Ch]
  void *ptr[2]; // [rsp+18h] [rbp-68h] BYREF
  _BYTE v15[88]; // [rsp+28h] [rbp-58h] BYREF

  if ( a1 != a2 )
  {
    v3 = a1 + 64;
    if ( a2 != a1 + 64 )
    {
      v5 = a1 + ((a2 - 128 - a1) & 0xFFFFFFFFFFFFFFC0LL) + 128;
      do
      {
        v6 = v3 + 64;
        if ( sub_157E6E0(v3, a1, a3) )
        {
          v7 = *(_QWORD *)v3;
          ptr[0] = v15;
          v11 = v7;
          v12 = *(_DWORD *)(v3 + 8);
          v13 = *(_BYTE *)(v3 + 12);
          ptr[1] = (void *)0x200000000LL;
          if ( *(_DWORD *)(v3 + 24) )
            sub_1591FE0((char ***)ptr, (char ***)(v3 + 16));
          v8 = (char ***)(v3 + 16);
          v9 = v3 - a1;
          v10 = (v3 - a1) >> 6;
          if ( v9 > 0 )
          {
            do
            {
              *(v8 - 2) = *(v8 - 10);
              *((_BYTE *)v8 - 8) = *((_BYTE *)v8 - 72);
              *((_BYTE *)v8 - 7) = *((_BYTE *)v8 - 71);
              *((_BYTE *)v8 - 6) = *((_BYTE *)v8 - 70);
              *((_BYTE *)v8 - 5) = *((_BYTE *)v8 - 69);
              *((_BYTE *)v8 - 4) = *((_BYTE *)v8 - 68);
              sub_1591FE0(v8, v8 - 8);
              v8 -= 8;
              --v10;
            }
            while ( v10 );
          }
          *(_QWORD *)a1 = v11;
          *(_DWORD *)(a1 + 8) = v12;
          *(_BYTE *)(a1 + 12) = v13;
          sub_1591FE0((char ***)(a1 + 16), (char ***)ptr);
          if ( ptr[0] != v15 )
            free(ptr[0]);
        }
        else
        {
          sub_15928D0(v3, a1, a3);
        }
        v3 = v6;
      }
      while ( v6 != v5 );
    }
  }
}
