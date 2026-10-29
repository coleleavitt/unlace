__int64 __fastcall sub_14FB800(__int64 a1, unsigned int a2, __m128i a3, __m128 a4)
{
  unsigned int v4; // r13d
  __int64 v5; // rbx
  unsigned int v7; // edx
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // bp
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 *v17; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int8 v18; // [rsp+8h] [rbp-80h]
  __int64 v19; // [rsp+10h] [rbp-78h]
  int v20; // [rsp+18h] [rbp-70h]
  __int16 v21; // [rsp+1Ch] [rbp-6Ch]
  __int64 (__fastcall *v22)(__int64); // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v4 = *(_DWORD *)(a1 + 40);
  if ( *(_WORD *)(a1 + 32) == 22 )
  {
    v19 = a1;
    v7 = *(unsigned __int16 *)(a1 + 88);
    v17 = (unsigned __int8 *)(a1 + 1952);
    v8 = *(_BYTE *)(a1 + 1952);
    v20 = 1507350;
    v18 = v8;
    v21 = 63;
    v22 = sub_146A990;
    v9 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 1952) = 1;
    v23 = 0;
    v24 = 0;
    if ( v7 >= *(_DWORD *)(*(_QWORD *)(v9 + 56) + 144LL) )
      sub_1568800(&v17);
    else
      LODWORD(v24) = sub_146A990(a1);
    v10 = sub_1496480(a1, nullptr, 5, 3u, nullptr, 0, a3, a4);
    v12 = v11;
    v13 = v10;
    sub_14808E0((__int64)&v17, nullptr, v11, v14, v15, v16);
    if ( v12 )
      v5 = 1;
    else
      v5 = sub_19D3030(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a2, v4, (unsigned int)v24, v13, HIDWORD(v24));
    *v17 = v18;
  }
  else
  {
    v5 = 1;
    sub_1564840(&v17, a1, a1 + 16, 1625);
    sub_AE9DF0(&v17, (__int64)"@encode", 1u);
    sub_AEA040((__int64)&v17);
  }
  return v5;
}
