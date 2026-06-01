__int64 __fastcall sub_18391B0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-88h] BYREF
  int v17; // [rsp+8h] [rbp-80h]
  _QWORD v18[2]; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-58h]
  __int128 v21; // [rsp+40h] [rbp-48h]

  v3 = a1[2];
  if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 35 <= 3 )
  {
    if ( (unsigned __int8)sub_B98200((_QWORD *)v3, a2) )
    {
      v14 = sub_19B4F60(*a1, *((unsigned int *)a1 + 44));
      v8 = v14;
      if ( v14 == 1 )
      {
        v9 = 0;
      }
      else
      {
        v15 = sub_19249E0(*a1, *((unsigned int *)a1 + 44), 5, v14 & 0xFFFFFFFFFFFFFFFELL, 0);
        v9 = 0;
        v8 = v15;
      }
      goto LABEL_7;
    }
    v3 = a1[2];
  }
  v4 = *(__int64 **)(v3 + 120);
  v5 = *a1;
  v6 = *v4;
  v7 = *(_QWORD *)(*v4 + 40);
  v17 = *((_DWORD *)a1 + 44);
  v16 = v7;
  sub_B85890(v18, v7);
  v19 = 0;
  *(_OWORD *)ptr = 0;
  v21 = 0;
  v8 = sub_190AE60(v5, (unsigned int)&v19, (unsigned int)&v16, v6, 0, 0, 0);
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  v9 = 8;
LABEL_7:
  v10 = *a1;
  v11 = *(_QWORD *)(*(_QWORD *)(a1[2] + 120LL) + v9);
  v12 = *(_QWORD *)(v11 + 40);
  v17 = *((_DWORD *)a1 + 44);
  v16 = v12;
  sub_B85890(v18, v12);
  v19 = 0;
  *(_OWORD *)ptr = 0;
  v21 = 0;
  sub_190AE60(v10, (unsigned int)&v19, (unsigned int)&v16, v11, 0, 0, 0);
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  return v8;
}
