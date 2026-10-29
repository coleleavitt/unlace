__int64 __fastcall sub_C55870(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // [rsp+0h] [rbp-F8h] BYREF
  char v19; // [rsp+4h] [rbp-F4h]
  __int64 v20; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B0h]
  __int64 v22; // [rsp+50h] [rbp-A8h]
  char v23; // [rsp+58h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-88h]
  __int64 v26; // [rsp+78h] [rbp-80h]
  _BYTE v27[120]; // [rsp+80h] [rbp-78h] BYREF

  v7 = *a1;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) > 1 )
  {
    if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x20 )
    {
      sub_C1BDB0(v7, *(_QWORD *)(a2 + 16), a3, a4, a5);
      return (unsigned int)sub_C52EC0(a1, *(_QWORD *)(a2 + 24), v14, v15, v16, v17);
    }
    else
    {
      v8 = (__int64 *)sub_E0FED0(v7, a2, 108, 0);
      v9 = sub_EC8B80(a2);
      if ( v8 )
      {
        v20 = v9;
        LOBYTE(v21) = 1;
        sub_AC88D0(v8, &v20);
      }
      return 0;
    }
  }
  v10 = 0;
  v20 = 0;
  v21 = 0;
  ptr = v27;
  v22 = 0;
  v23 |= 1u;
  v24 = 0;
  v26 = 0x800000000LL;
  v27[65] = 0;
  if ( sub_C3A3B0(v7, a2, (__int64)&v20, 1u, a5, a6) )
  {
    v12 = *(_QWORD *)(a2 + 8);
    v13 = *a1;
    v18 = 0;
    v19 &= ~1u;
    v10 = sub_C12830(v13, (_DWORD *)a2, v12, (__int64)&v20, (__int64)&v18, 0);
    if ( (_BYTE)v10 )
    {
      sub_A30FE0(a1[2], (int *)&v18);
      if ( v18 <= 1 )
        goto LABEL_10;
    }
    else if ( v18 <= 1 )
    {
      goto LABEL_10;
    }
    sub_A2BBA0((int *)&v18);
  }
LABEL_10:
  if ( ptr != v27 )
    free(ptr);
  return v10;
}

