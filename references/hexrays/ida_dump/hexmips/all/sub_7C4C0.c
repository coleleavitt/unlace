unsigned __int64 __fastcall sub_7C4C0(__int64 a1, __int64 *a2)
{
  int v3; // r14d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbp
  __int64 *v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int128 v13; // rt0
  char v15[8]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v16[8]; // [rsp+18h] [rbp-40h] BYREF

  v16[0] = __readfsqword(0x28u);
  sub_7B6E0(a2, *(_DWORD *)(a1 + 32));
  if ( *(_QWORD *)(a1 + 32) )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = pack_dd(v15, v16, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 4 * v4));
      sub_7B560(a2, (__int64)v15, v5 - (_QWORD)v15);
      v6 = *(_QWORD *)a1 + 24 * v4;
      v7 = pack_dd(v15, v16, *(unsigned int *)(v6 + 8));
      sub_7B560(a2, (__int64)v15, v7 - (_QWORD)v15);
      v8 = *(__int64 **)v6;
      v9 = *(_QWORD *)v6 + 8LL * *(_QWORD *)(v6 + 8);
      if ( v8 != (__int64 *)v9 )
      {
        v10 = v8;
        do
        {
          v11 = *v10;
          v12 = -*v10;
          if ( *v10 > 0 )
            v12 = *v10;
          ++v10;
          *(_QWORD *)&v13 = v11;
          *((_QWORD *)&v13 + 1) = v12;
          sub_7B740(a2, v13 >> 63);
        }
        while ( (__int64 *)v9 != v10 );
      }
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 32) );
  }
  return v16[0] - __readfsqword(0x28u);
}
