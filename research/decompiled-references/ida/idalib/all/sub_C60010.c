__int64 __fastcall sub_C60010(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rbx
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  __int64 v21; // rdx
  _QWORD v22[2]; // [rsp+0h] [rbp-108h] BYREF
  unsigned int v23; // [rsp+10h] [rbp-F8h] BYREF
  char v24; // [rsp+14h] [rbp-F4h]
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h]
  char v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+78h] [rbp-90h]
  void *ptr; // [rsp+80h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-80h]
  _BYTE v32[120]; // [rsp+90h] [rbp-78h] BYREF

  v7 = *a1;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) > 1 )
  {
    if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x20 )
    {
      sub_C3FAF0(v7, *(_QWORD *)(a2 + 16), a3, a4, a5);
      return (unsigned int)sub_C37DE0(a1, *(unsigned __int16 **)(a2 + 24), v14, v15, v16, v17);
    }
    else
    {
      v8 = (__int64 *)sub_E33C10(v7, a2, 108, 0);
      v9 = sub_EEC8C0(a2);
      if ( v8 )
      {
        v25 = v9;
        LOBYTE(v26) = 1;
        sub_AEC610(v8, &v25);
      }
      return 0;
    }
  }
  v10 = 0;
  v25 = 0;
  v26 = 0;
  ptr = v32;
  v27 = 0;
  v28 |= 1u;
  v29 = 0;
  v31 = 0x800000000LL;
  v32[65] = 0;
  if ( sub_C5E0F0(v7, a2, (__int64)&v25, 1u, a5, a6) )
  {
    v12 = *(_QWORD *)(a2 + 8);
    v13 = *a1;
    v24 &= ~1u;
    v23 = 0;
    v10 = sub_C36570(v13, (_DWORD *)a2, v12, (__int64)&v25, (__int64)&v23, 0);
    if ( (_BYTE)v10 )
    {
      v18 = a1[1];
      *(_QWORD *)v18 = *(_QWORD *)v18 & 7LL | sub_A51390((__int64)&v23);
      v19 = sub_A513A0((__int64)&v23);
      v20 = *(_QWORD *)v18;
      *(_DWORD *)(v18 + 16) = 0;
      *(_QWORD *)v18 = (4LL * v19) | v20 & 0xFFFFFFFFFFFFFFFBLL;
      v22[0] = sub_A513B0((__int64)&v23);
      v22[1] = v21;
      sub_C234C0(v18 + 8, (__int64)v22);
      if ( v23 <= 1 )
        goto LABEL_10;
    }
    else if ( v23 <= 1 )
    {
      goto LABEL_10;
    }
    sub_A4F8E0((int *)&v23);
  }
LABEL_10:
  if ( ptr != v32 )
    free(ptr);
  return v10;
}
