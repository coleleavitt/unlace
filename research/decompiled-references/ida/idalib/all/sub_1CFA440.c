__int64 __fastcall sub_1CFA440(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r13
  __int64 *v5; // rbp
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // rsi
  __int64 v10; // r15
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+10h] [rbp-58h]
  unsigned int v18; // [rsp+18h] [rbp-50h]
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]

  if ( (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) != 0 )
  {
    v4 = a2 + 8LL * ((*(_DWORD *)(a2 + 20) & 0x1FFFFFFFu) - 1) + 32;
    v5 = (__int64 *)(a2 + 24);
    while ( 1 )
    {
      v6 = *v5;
      v7 = *(_BYTE *)(*v5 + 28) & 0x7F;
      if ( v7 != 67 )
      {
        v8 = *(_QWORD *)(v6 + 56);
        if ( v7 == 68 )
        {
          if ( (unsigned __int8)sub_1CFA440(a1, v8) )
            return 1;
          goto LABEL_20;
        }
        v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v8 & 4) != 0 )
          v10 = *(_QWORD *)(v10 + 32);
        if ( !v10 )
          return 1;
        v11 = *(_QWORD *)(v6 + 40);
        v12 = *(_DWORD *)(v6 + 24);
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0 )
        {
          v15 = a1;
          v20 = v11;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          v19 = v12;
          v10 = (__int64)sub_1CF6590((__int64)&v15, v10, a3, a4);
          operator delete(v16, 16LL * v18, 8);
          if ( !v10 )
            return 1;
        }
        v13 = sub_F57E80(*(_QWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v13 && (*(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v13 + 17) & 4) == 0 )
          v10 = sub_1D554E0(a1, v10);
        v14 = *(_QWORD *)(v6 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v6 + 56) & 4) != 0 )
        {
          if ( v10 == *(_QWORD *)(v14 + 32) )
            goto LABEL_20;
          *(_QWORD *)(v14 + 32) = v10;
          goto LABEL_19;
        }
        if ( v10 != v14 )
        {
          *(_QWORD *)(v6 + 56) = v10 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_19:
          *(_QWORD *)(v6 + 48) = *(_QWORD *)v10;
        }
      }
LABEL_20:
      if ( ++v5 == (__int64 *)v4 )
        return 0;
    }
  }
  return 0;
}
