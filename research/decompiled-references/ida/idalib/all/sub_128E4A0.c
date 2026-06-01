unsigned __int64 __fastcall sub_128E4A0(_DWORD *a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned int v6; // r9d
  unsigned __int64 v7; // r10
  __int64 v8; // r12
  int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // r8
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdx
  int v15; // eax
  bool v16; // [rsp+Bh] [rbp-6Dh]
  unsigned int v17; // [rsp+Ch] [rbp-6Ch]
  unsigned __int64 v18; // [rsp+18h] [rbp-60h]
  void *v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF

  v16 = 0;
  if ( a1[15] == 15 )
  {
    v15 = a1[16];
    v16 = 1;
    if ( v15 != 27 )
      v16 = v15 == 0;
  }
  v4 = (unsigned __int64)sub_11325F0((__int64)a1, a2, a3);
  v6 = v4;
  v7 = v4 >> 63;
  v8 = HIDWORD(v4) & 0x7FFFFFFF;
  v9 = v5 & 0x7FFFFFFF;
  v10 = (v5 >> 31) & 1;
  v11 = HIDWORD(v5) & 0x7FFFFFFF;
  if ( (_DWORD)v4 )
    goto LABEL_12;
  if ( ((HIDWORD(v5) | (unsigned int)v5 | HIDWORD(v4)) & 0x7FFFFFFF) == 0 )
  {
    v4 = sub_22B7A20(a1 + 4);
    v6 = 0;
    v7 = v4 >> 63;
    v8 = HIDWORD(v4) & 0x7FFFFFFF;
    v9 = v13 & 0x7FFFFFFF;
    v10 = (v13 >> 31) & 1;
    v11 = HIDWORD(v13) & 0x7FFFFFFF;
    if ( (_DWORD)v4 )
    {
      v6 = v4;
LABEL_12:
      v7 = (unsigned __int8)v7;
      return (v7 << 63) | ((unsigned __int64)(v8 & 0x7FFFFFFF) << 32) | v6;
    }
  }
  v7 = (unsigned __int8)v7;
  if ( !(((v8 << 32) & 0x7FFFFFFFFFFFFFFFLL | (unsigned __int64)(unsigned int)v4) >> 32)
    && (v9 & 0x7FFFFFFF) == 0
    && !(((v11 << 32) & 0x7FFFFFFFFFFFFFFFLL | (unsigned __int64)(((unsigned __int8)v10 << 31) | v9 & 0x7FFFFFFFu)) >> 32)
    && v16 )
  {
    v17 = v6;
    sub_22CA5A0((unsigned int)&v19, 0, a1[622], (_DWORD)a1 + 2456, a1[12], v6, (__int64)&byte_22F0C30, 0);
    v6 = v17;
    if ( v19 != &v20 )
    {
      operator delete(v19);
      v6 = v17;
    }
    LODWORD(v8) = 0;
    v7 = 0;
    v9 = 0;
    LODWORD(v11) = 0;
  }
  if ( (v8 & 0x7FFFFFFF) == 0 )
  {
    v6 = v9 & 0x7FFFFFFF;
    if ( (v9 & 0x7FFFFFFF) != 0 )
    {
      v6 = 0;
    }
    else if ( (v11 & 0x7FFFFFFF) == 0 )
    {
      v18 = v7;
      v12 = sub_21B7850(a3, 977, 1235, v16);
      if ( v12 )
      {
        v6 = 19;
        LODWORD(v8) = 33;
        v7 = v12;
      }
      else
      {
        v6 = 0;
        v7 = v18;
      }
    }
  }
  return (v7 << 63) | ((unsigned __int64)(v8 & 0x7FFFFFFF) << 32) | v6;
}
