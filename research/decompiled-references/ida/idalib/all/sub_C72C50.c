__int64 __fastcall sub_C72C50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v7; // ax
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // r12d
  __int64 *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rbx
  bool v18; // cc
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // [rsp+0h] [rbp-F8h] BYREF
  char v22; // [rsp+4h] [rbp-F4h]
  __int64 v23; // [rsp+8h] [rbp-F0h] BYREF
  unsigned int v24; // [rsp+10h] [rbp-E8h]
  char v25; // [rsp+14h] [rbp-E4h]
  __int64 v26; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B0h]
  __int64 v30; // [rsp+50h] [rbp-A8h]
  char v31; // [rsp+58h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-88h]
  __int64 v34; // [rsp+78h] [rbp-80h]
  _BYTE v35[120]; // [rsp+80h] [rbp-78h] BYREF

  v7 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
  {
    v14 = *a1;
    v10 = 0;
    v28 = 0;
    ptr = v35;
    v29 = 0;
    v30 = 0;
    v31 |= 1u;
    v32 = 0;
    v34 = 0x800000000LL;
    v35[65] = 0;
    if ( sub_C5E0F0(v14, a2, (__int64)&v28, 1u, a5, a6) )
    {
      v15 = *(_QWORD *)(a2 + 8);
      v16 = *a1;
      v21 = 0;
      v22 &= ~1u;
      v10 = sub_C36570(v16, (_DWORD *)a2, v15, (__int64)&v28, (__int64)&v21, 0);
      if ( (_BYTE)v10 )
      {
        v17 = a1[1];
        if ( v21 == 6 )
        {
          *(_BYTE *)v17 = 0;
          sub_C17220((__int64 *)(v17 + 40), &v23);
          sub_C17220((__int64 *)(v17 + 64), &v27);
        }
        else
        {
          v18 = *(_DWORD *)(v17 + 16) <= 0x40u;
          *(_BYTE *)v17 = 1;
          if ( v18 && v24 <= 0x40 )
          {
            v20 = v23;
            *(_DWORD *)(v17 + 16) = v24;
            *(_QWORD *)(v17 + 8) = v20;
          }
          else
          {
            sub_22056A0(v17 + 8, &v23);
          }
          v18 = *(_DWORD *)(v17 + 32) <= 0x40u;
          *(_BYTE *)(v17 + 20) = v25;
          if ( v18 && (unsigned int)v27 <= 0x40 )
          {
            v19 = v26;
            *(_DWORD *)(v17 + 32) = v27;
            *(_QWORD *)(v17 + 24) = v19;
          }
          else
          {
            sub_22056A0(v17 + 24, &v26);
          }
          *(_BYTE *)(v17 + 36) = BYTE4(v27);
        }
      }
      if ( v21 > 1 )
        sub_A4F8E0((int *)&v21);
    }
    if ( ptr != v35 )
      free(ptr);
  }
  else
  {
    v8 = ((_BYTE)v7 + 43) & 0x3F;
    if ( (unsigned __int8)v8 > 0xBu )
    {
      return (unsigned int)sub_C71E10(a1, a2);
    }
    else
    {
      v9 = *a1;
      if ( (_BYTE)v7 == 32 )
      {
        sub_C3FAF0(v9, *(_QWORD *)(a2 + 16), v8, a4, a5);
        return (unsigned int)sub_C72E70(a1, *(_QWORD *)(a2 + 24));
      }
      else
      {
        v12 = (__int64 *)sub_E33C10(v9, a2, 108, 0);
        v13 = sub_EEC8C0(a2);
        if ( v12 )
        {
          v28 = v13;
          LOBYTE(v29) = 1;
          sub_AEC610(v12, &v28);
        }
        return 0;
      }
    }
  }
  return v10;
}
