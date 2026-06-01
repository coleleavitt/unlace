__int64 __fastcall sub_B96310(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  char v9; // cl
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+8h] [rbp-30h]
  __int64 v13; // [rsp+10h] [rbp-28h]

  v1 = *(_DWORD *)(a1 + 56);
  if ( !v1 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 72);
      v11 = *(_QWORD *)(a1 + 64);
      v12 = v7;
      v8 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v8 )
      {
        v11 = v8;
        v9 = 0;
        for ( i = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL; i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
        {
          v8 = i;
          v9 = 1;
        }
        if ( v9 )
          v11 = v8;
      }
      v1 = sub_E90530(&v11);
    }
  }
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 80);
  v11 = *(_QWORD *)(a1 + 40);
  LODWORD(v12) = v2;
  v13 = v3;
  v4 = sub_B85A10((__int64)&v11);
  if ( !(_DWORD)v4 )
    v4 = (unsigned int)v12;
  return (v4 << 32) | v1;
}
