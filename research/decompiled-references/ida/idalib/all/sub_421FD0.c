unsigned __int64 __fastcall sub_421FD0(__int64 a1)
{
  __int64 v1; // rax
  _BYTE *v3; // rsi
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  char v8; // al
  _BYTE *v9; // [rsp+0h] [rbp-448h] BYREF
  _BYTE *v10; // [rsp+8h] [rbp-440h]
  _BYTE v11[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v12; // [rsp+418h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 136) = 0;
  v1 = sub_630CA0(*(_QWORD *)a1, 70, v11, 1024);
  if ( v1 > 0 )
  {
    v3 = &v11[v1];
    v9 = v11;
    v10 = &v11[v1];
    v4 = unpack_dd(&v9);
    v5 = 8;
    if ( v4 > 8 )
      v4 = 8;
    v6 = 0;
    for ( *(_DWORD *)(a1 + 136) = v4; (unsigned int)v6 < 2 * *(_DWORD *)(a1 + 136); *(_QWORD *)(a1 + 8 * v6++ + 8) = v7 )
    {
      v8 = is_cvt64(&v9, v3, v5);
      v3 = v10;
      if ( v8 )
      {
        LODWORD(v7) = unpack_dd(&v9);
        v5 = -1;
        v7 = (unsigned int)v7;
        if ( (unsigned int)v7 == 0xFFFFFFFFLL )
          v7 = -1;
      }
      else
      {
        v7 = unpack_dq(&v9);
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}
