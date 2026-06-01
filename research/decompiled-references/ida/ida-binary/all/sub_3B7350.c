__int64 __fastcall sub_3B7350(__int64 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v11; // rsi
  _OWORD v12[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+78h] [rbp-30h]
  __int64 v15; // [rsp+80h] [rbp-28h]
  char v16; // [rsp+88h] [rbp-20h]
  unsigned __int64 v17; // [rsp+98h] [rbp-10h]

  v17 = __readfsqword(0x28u);
  v3 = a1[1];
  if ( a3 == 1 )
  {
    v11 = a2 + 1;
    if ( v11 >= v3 )
      return 0;
    else
      return *a1 + 144 * v11;
  }
  else
  {
    v4 = *a1;
    v5 = 144 * v3;
    v6 = *a1 + v5;
    v12[0] = 0;
    v7 = 0x8E38E38E38E38E39LL * (v5 >> 4);
    v13 = 1;
    v14 = -1;
    v15 = 0;
    v16 = 0;
    if ( v5 > 0 )
    {
      do
      {
        while ( 1 )
        {
          v8 = v7 >> 1;
          v9 = v4 + 144 * (v7 >> 1);
          if ( (*(_BYTE *)(v9 + 133) & 4) != 0 || a2 >= *(_QWORD *)v9 )
            break;
          v7 >>= 1;
          if ( v8 <= 0 )
            goto LABEL_8;
        }
        v4 = v9 + 144;
        v7 = v7 - 1 - v8;
      }
      while ( v7 > 0 );
    }
LABEL_8:
    if ( v6 == v4 )
      v4 = 0;
    clear_tinfo_t(v12);
  }
  return v4;
}
