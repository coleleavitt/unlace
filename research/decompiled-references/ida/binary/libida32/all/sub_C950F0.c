__int64 __fastcall sub_C950F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  void *v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+8h] [rbp-30h]
  void *v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-20h]
  void *v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-10h]
  char v12; // [rsp+2Ch] [rbp-Ch]

  v3 = *(_DWORD *)(a2 + 8);
  v9 = v3;
  if ( v3 > 0x40 )
  {
    v7 = a3;
    sub_21E17D0(&v8);
    v3 = v9;
    v4 = v8;
    a3 = v7;
  }
  else
  {
    v4 = *(void **)a2;
    v8 = *(void **)a2;
  }
  v11 = v3;
  v10 = v4;
  v9 = 0;
  v12 = 1;
  v5 = sub_C950B0(a1, (__int64)&v10, a3);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  return v5;
}

