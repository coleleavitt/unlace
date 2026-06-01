__int64 __fastcall sub_14FB980(__int64 a1, int a2)
{
  int *v3; // rbp
  int v5; // r13d
  unsigned int v7; // edx
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int16 v11; // r14
  char v12; // al
  __int64 v13; // r14
  __int64 *v14; // rdi
  __int64 *v15; // rsi
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 *v21; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int8 v22; // [rsp+8h] [rbp-70h]
  __int64 v23; // [rsp+10h] [rbp-68h]
  int v24; // [rsp+18h] [rbp-60h]
  __int16 v25; // [rsp+1Ch] [rbp-5Ch]
  __int64 (__fastcall *v26)(__int64); // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]

  v3 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_DWORD *)(a1 + 40);
  if ( *(_WORD *)(a1 + 32) == 22 )
  {
    v7 = *(unsigned __int16 *)(a1 + 88);
    v23 = a1;
    v21 = (unsigned __int8 *)(a1 + 1952);
    v8 = *(_BYTE *)(a1 + 1952);
    v24 = 1507350;
    v22 = v8;
    v26 = sub_146A990;
    v9 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 1952) = 1;
    v25 = 63;
    v27 = 0;
    v28 = 0;
    if ( v7 >= *(_DWORD *)(*(_QWORD *)(v9 + 56) + 144LL) )
      sub_1568800(&v21);
    else
      LODWORD(v28) = sub_146A990(a1);
    if ( (unsigned __int8)sub_15648A0(a1) )
    {
      v10 = 1;
    }
    else
    {
      v11 = *(_WORD *)(a1 + 32);
      v12 = sub_141A630(v11);
      if ( v11 == 1 || v12 )
        LODWORD(v13) = 0;
      else
        v13 = *(_QWORD *)(a1 + 24);
      v14 = *(__int64 **)(a1 + 8);
      v15 = (__int64 *)v3;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v14, v3);
      v16 = *(_DWORD *)(a1 + 40);
      sub_14808E0((__int64)&v21, v15, v17, v18, v19, v20);
      v10 = sub_19D8F00(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), v13, a2, v5, v28, v16, HIDWORD(v28));
    }
    *v21 = v22;
    return v10;
  }
  else
  {
    sub_1564840(&v21, a1, v3, 1625);
    sub_AE9DF0(&v21, (__int64)"@protocol", 1u);
    sub_AEA040((__int64)&v21);
    return 1;
  }
}
