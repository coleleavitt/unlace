__int64 __fastcall sub_18D56F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 *v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // [rsp+0h] [rbp-C8h]
  _DWORD *v19; // [rsp+0h] [rbp-C8h]
  __int64 v20; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v23[168]; // [rsp+20h] [rbp-A8h] BYREF

  v21 = a3;
  v22 = a2;
  v20 = a4;
  v5 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned int)(v6 - 31) > 1 )
    goto LABEL_6;
  v7 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 31;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 31) > 1u )
  {
    if ( (_DWORD)v6 == 31 )
    {
LABEL_4:
      sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), v22, 0xFB8u, 0);
      v9 = sub_1605D30((__int64)v23, &v20);
      v10 = &v21;
LABEL_5:
      v11 = sub_1605D30(v9, v10);
      v12 = *(unsigned __int8 *)(sub_15884C0(v11, &v22) + 120);
      sub_15F7200(v23);
      return v12;
    }
LABEL_6:
    if ( (_DWORD)v6 == 32 )
      goto LABEL_4;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 31 <= 1 )
    {
      v14 = (__int64 *)(a1 + 8);
      v15 = 4024;
LABEL_15:
      sub_168B9F0((__int64)v23, v14, v22, v15, 0);
      v9 = sub_1605D30((__int64)v23, &v21);
      v10 = &v20;
      goto LABEL_5;
    }
    goto LABEL_10;
  }
  if ( *(_BYTE *)(v5 + 16) != 31 )
  {
    if ( (_BYTE)v6 == 31 )
    {
      v19 = a5;
      v17 = sub_F63050(v5, a2, v6, v8);
      a5 = v19;
      v5 = v17;
      v7 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v5 = 0;
    }
  }
  if ( *(_BYTE *)(v7 + 16) != 31 )
  {
    v18 = a5;
    v16 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v16 + 16) != 31 )
      BUG();
    v7 = sub_F63050(v7, a2, v16, v8);
    a5 = v18;
  }
  if ( *(_DWORD *)(v5 + 40) != *(_DWORD *)(v7 + 40) || *(_DWORD *)(v5 + 44) != *(_DWORD *)(v7 + 44) )
  {
    v14 = (__int64 *)(a1 + 8);
    v15 = 4025;
    goto LABEL_15;
  }
LABEL_10:
  *a5 = 25;
  return 0;
}
