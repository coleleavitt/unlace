_QWORD *__fastcall sub_4B1D30(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned __int64 *v7; // rax
  __int128 v9[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+78h] [rbp-30h]
  __int64 v12; // [rsp+80h] [rbp-28h]
  char v13; // [rsp+88h] [rbp-20h]
  unsigned __int64 v14; // [rsp+98h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64);
  v14 = __readfsqword(0x28u);
  v11 = -1;
  v5 = *(_QWORD *)(a1 + 56) + 144 * v3;
  v10 = 1;
  v13 = 0;
  v12 = 0;
  v6 = 0x8E38E38E38E38E39LL * ((v5 - (__int64)a3) >> 4);
  v9[0] = 0;
  while ( v6 > 0 )
  {
    while ( 1 )
    {
      v7 = &a3[18 * (v6 >> 1)];
      if ( *v7 >= a2 )
        break;
      a3 = v7 + 18;
      v6 = v6 - 1 - (v6 >> 1);
      if ( v6 <= 0 )
        goto LABEL_5;
    }
    v6 >>= 1;
  }
LABEL_5:
  clear_tinfo_t(v9);
  return a3;
}
