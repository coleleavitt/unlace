void __fastcall sub_1F45F20(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 *v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int8 v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // r9
  __int64 v25; // rbx
  __int64 v26; // r13
  __int64 v27; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v28[16]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v29; // [rsp+20h] [rbp-48h]

  sub_1F458C0((__int64)a1, a2);
  v2 = a1[2];
  v3 = *(_QWORD **)(v2 + 8);
  v4 = sub_1EE13A0((__int64)v3, *(_QWORD *)(v2 + 16), (__int64 *)(v2 + 32), (_DWORD *)(v2 + 24));
  *(_QWORD *)(a2 + 48) = sub_1EDB980(v3, v4, v5, v6, v7, v8);
  if ( *(_DWORD *)(a2 + 56) )
  {
    v9 = 0;
    do
    {
      v10 = v9++;
      v11 = (__int64 *)(a2 + 8 * v10 + 64);
      v12 = a1[2];
      v13 = *(_QWORD **)(v12 + 8);
      v14 = sub_1EE13A0((__int64)v13, *(_QWORD *)(v12 + 16), (__int64 *)(v12 + 32), (_DWORD *)(v12 + 24));
      *v11 = sub_1EDB980(v13, v14, v15, v16, v17, v18);
    }
    while ( *(_DWORD *)(a2 + 56) != v9 );
  }
  v19 = *(_QWORD *)(*(_QWORD *)(*a1 + 144LL) + 2320LL);
  if ( (*(_BYTE *)(v19 + 21) & 2) != 0 )
  {
    if ( (*(_BYTE *)(v19 + 1) & 8) != 0
      || (v20 = *(_BYTE *)(a2 + 28) & 0x7F, ((v20 + 96) & 0x7Fu) <= 1)
      || (unsigned int)v20 - 49 <= 2 )
    {
      sub_1F43500((__int64)v28, (__int64)a1, a2);
      v25 = v29;
      if ( v29 && (*(_BYTE *)(v29 + 28) & 0x7F) == 0x37 )
      {
        v26 = *(_QWORD *)(*a1 + 144LL);
        if ( *(char *)(v29 + 29) < 0 )
          v25 = sub_B72720(v29);
        v27 = a2;
        *sub_1742A40(v26 + 1728, &v27, v21, v22, v23, v24) = v25;
      }
      sub_1F42E40((__int64)v28);
    }
  }
}
