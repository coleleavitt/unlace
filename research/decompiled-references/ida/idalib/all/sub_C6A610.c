__int64 __fastcall sub_C6A610(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v7; // ax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 result; // rax
  __int64 *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int8 v21; // [rsp+Fh] [rbp-F9h]
  unsigned __int8 v22; // [rsp+Fh] [rbp-F9h]
  unsigned int v23; // [rsp+10h] [rbp-F8h] BYREF
  char v24; // [rsp+14h] [rbp-F4h]
  __int64 v25; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  char v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  void *ptr; // [rsp+80h] [rbp-88h]
  __int64 v32; // [rsp+88h] [rbp-80h]
  _BYTE v33[120]; // [rsp+90h] [rbp-78h] BYREF

  v7 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
  {
    v17 = *a1;
    v26 = 0;
    v27 = 0;
    ptr = v33;
    v28 = 0;
    v29 |= 1u;
    v30 = 0;
    v32 = 0x800000000LL;
    v33[65] = 0;
    v18 = sub_C5E0F0(v17, a2, (__int64)&v26, 1u, a5, a6);
    result = 0;
    if ( v18 )
    {
      v19 = *(_QWORD *)(a2 + 8);
      v20 = *a1;
      v24 &= ~1u;
      v23 = 0;
      result = sub_C36570(v20, (_DWORD *)a2, v19, (__int64)&v26, (__int64)&v23, 0);
      if ( (_BYTE)result )
        result = sub_C103E0(a1 + 1, (__int64)&v25);
      if ( v23 > 1 )
      {
        v21 = result;
        sub_A4F8E0((int *)&v23);
        result = v21;
      }
    }
    if ( ptr != v33 )
    {
      v22 = result;
      free(ptr);
      return v22;
    }
  }
  else
  {
    v8 = ((_BYTE)v7 + 43) & 0x3F;
    if ( (unsigned __int8)v8 > 0xBu )
    {
      return sub_C69C70(a1, a2, v8, a4);
    }
    else
    {
      v9 = *a1;
      if ( (_BYTE)v7 == 32 )
      {
        sub_C3FAF0(v9, *(_QWORD *)(a2 + 16), v8, a4, a5);
        return sub_C68630(a1, *(_QWORD *)(a2 + 24), v10, v11, v12, v13);
      }
      else
      {
        v15 = (__int64 *)sub_E33C10(v9, a2, 108, 0);
        v16 = sub_EEC8C0(a2);
        if ( v15 )
        {
          v26 = v16;
          LOBYTE(v27) = 1;
          sub_AEC610(v15, &v26);
        }
        return 0;
      }
    }
  }
  return result;
}
