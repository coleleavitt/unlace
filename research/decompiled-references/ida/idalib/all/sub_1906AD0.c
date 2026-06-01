__int64 __fastcall sub_1906AD0(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  _QWORD *v4; // rbp
  _BYTE *v5; // r13
  _WORD *v6; // rbx
  __int16 v7; // ax
  __int64 v9; // r15
  __int64 *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // [rsp+10h] [rbp-88h]
  unsigned int v13; // [rsp+20h] [rbp-78h]
  _BYTE *v14; // [rsp+28h] [rbp-70h] BYREF
  __int64 v15; // [rsp+30h] [rbp-68h]
  _BYTE v16[96]; // [rsp+38h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a1 + 4416);
  *(_QWORD *)(a1 + 4416) = 0;
  v14 = v16;
  v15 = 0x400000000LL;
  v3 = *(_DWORD *)(a1 + 4432);
  v12 = v2;
  *(_DWORD *)(a1 + 4432) = 0;
  *(_QWORD *)(a1 + 4424) = 0;
  v13 = v3;
  sub_18C7340((__int64 *)&v14, (__int64 *)(a1 + 4440));
  v4 = v14;
  v5 = &v14[8 * (unsigned int)v15];
  if ( v14 != v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = (_WORD *)*v4;
        v7 = *(_WORD *)*v4 & 0x1FF;
        if ( v7 != 71 )
          break;
        sub_1905DD0(*((_QWORD *)v6 + 2), *((_DWORD *)v6 + 1), a1, nullptr);
LABEL_4:
        if ( v5 == (_BYTE *)++v4 )
          goto LABEL_8;
      }
      if ( v7 != 46 )
      {
        v9 = (__int64)&v6[4 * *((unsigned int *)v6 + 7) + 16];
        if ( (_WORD *)v9 != v6 + 16 )
        {
          v10 = (__int64 *)(v6 + 16);
          do
          {
            v11 = *v10++;
            sub_1905DD0(v11, *((_DWORD *)v6 + 6), a1, nullptr);
          }
          while ( (__int64 *)v9 != v10 );
        }
        goto LABEL_4;
      }
      ++v4;
      sub_1905DD0(*((_QWORD *)v6 + 3), *((_DWORD *)v6 + 10), a1, nullptr);
      if ( v5 == (_BYTE *)v4 )
      {
LABEL_8:
        v5 = v14;
        break;
      }
    }
  }
  if ( v5 != v16 )
    free(v5);
  return operator delete(v12, 8LL * v13, 8);
}
