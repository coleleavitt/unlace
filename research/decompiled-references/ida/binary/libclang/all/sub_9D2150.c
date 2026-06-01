__int64 __fastcall sub_9D2150(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // ebx
  void *v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-30h]
  void *v12; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v11 = v4;
  v10 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 16);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v13 = v7;
  v12 = *(void **)v6;
  sub_A1A5E0(v5, 16);
  v8 = sub_933A70(a1, a2, 2 * v11, (__int64)&v12, (__int64)&v10);
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  return v8;
}

