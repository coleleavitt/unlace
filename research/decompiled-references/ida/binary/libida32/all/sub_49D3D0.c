_QWORD *__fastcall sub_49D3D0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int128 v8; // [rsp+40h] [rbp-58h] BYREF
  __int64 v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  __int64 v11; // [rsp+70h] [rbp-28h]
  char v12; // [rsp+78h] [rbp-20h]
  unsigned __int64 v13; // [rsp+88h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64);
  v13 = __readfsqword(0x28u);
  v4 = a3;
  v10 = -1;
  v12 = 0;
  v5 = (*(_QWORD *)(a1 + 56) + (v3 << 7) - (__int64)a3) >> 7;
  v9 = 1;
  v11 = 0;
  v8 = 0;
  while ( v5 > 0 )
  {
    while ( 1 )
    {
      v6 = &v4[16 * (v5 >> 1)];
      if ( *v6 >= (unsigned __int64)a2 )
        break;
      v4 = v6 + 16;
      v5 = v5 - 1 - (v5 >> 1);
      if ( v5 <= 0 )
        goto LABEL_5;
    }
    v5 >>= 1;
  }
LABEL_5:
  clear_tinfo_t(&v8);
  return v4;
}

