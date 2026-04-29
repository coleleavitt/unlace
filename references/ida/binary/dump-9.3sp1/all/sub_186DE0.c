__int64 __fastcall sub_186DE0(__int64 a1, unsigned __int8 *a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  _QWORD v13[2]; // [rsp+0h] [rbp-C8h] BYREF
  int v14; // [rsp+10h] [rbp-B8h]
  char v15; // [rsp+14h] [rbp-B4h]
  unsigned __int64 v16; // [rsp+18h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+20h] [rbp-A8h]
  __int128 v18; // [rsp+30h] [rbp-98h]
  __int64 v19; // [rsp+40h] [rbp-88h]
  __int128 v20; // [rsp+48h] [rbp-80h]
  __int128 v21; // [rsp+58h] [rbp-70h]
  __int128 v22; // [rsp+68h] [rbp-60h]
  int v23; // [rsp+78h] [rbp-50h]
  int v24; // [rsp+7Ch] [rbp-4Ch]
  __int64 v25; // [rsp+80h] [rbp-48h]
  int v26; // [rsp+88h] [rbp-40h]
  unsigned __int64 v27; // [rsp+98h] [rbp-30h]

  v4 = a1;
  v6 = *(_QWORD *)(a1 + 96);
  v27 = __readfsqword(0x28u);
  v13[0] = 0xFFFFFFFF00000000LL;
  v16 = 0xFFFFFFFF00000000LL;
  v13[1] = 0;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  v23 = 0;
  v25 = 0xFFFFFFFFLL;
  v26 = 16;
  v24 = a4;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v21 = -1;
  v22 = 0;
  if ( (unsigned __int8)sub_1836F0(v6, (__int64)v13, a2, a3, a4) && (unsigned int)sub_184C00(v4, (char *)v13) == 1 )
    LOBYTE(v4) = (_DWORD)v25 == a3 - 1;
  else
    LODWORD(v4) = 0;
  clear_tinfo_t();
  v7 = v19;
  if ( v19 )
  {
    v8 = v20;
    if ( (_QWORD)v20 )
    {
      v9 = 0;
      do
      {
        v10 = (__int64 *)(v7 + 40 * v9);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11);
          v7 = v19;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v20 = 0;
    qfree(v7);
  }
  if ( *((_QWORD *)&v17 + 1) )
  {
    *(_QWORD *)&v18 = 0;
    qfree(*((__int64 *)&v17 + 1));
  }
  sub_11CDA0((__int64)&v16);
  sub_11CDA0((__int64)v13);
  return (unsigned int)v4;
}
