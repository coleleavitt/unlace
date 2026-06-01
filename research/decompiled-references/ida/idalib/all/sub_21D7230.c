unsigned __int64 __fastcall sub_21D7230(__int64 a1, unsigned __int64 a2)
{
  char *v3; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rax
  __int64 *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int16 v15; // si
  __int16 v16; // cx
  __int16 v17; // dx
  char v18; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v19; // [rsp+10h] [rbp-E8h]
  __int64 v20; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v22[184]; // [rsp+40h] [rbp-B8h] BYREF

  v3 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 && *v3 == 66 )
  {
    while ( 1 )
    {
      *(_QWORD *)a1 = v3 + 1;
      v5 = sub_21D0000((char **)a1);
      v7 = v5;
      v8 = v6;
      if ( !v5 )
        break;
      v9 = v5;
      v10 = *(_BYTE *)(a1 + 937);
      ptr[0] = v22;
      v18 = v10;
      ptr[1] = (void *)0x2000000000LL;
      sub_21D0350((__int64)ptr, 9u, a2, v9, v6);
      v11 = sub_2223360(a1 + 904, ptr, &v20, off_2BE9FD0);
      if ( v11 )
      {
        a2 = v11 + 8;
        if ( ptr[0] != v22 )
          free(ptr[0]);
        if ( !a2 )
          return 0;
        ptr[0] = (void *)a2;
        v12 = sub_21D4F30(a1 + 944, (__int64 *)ptr);
        if ( v12 )
        {
          v13 = v12[1];
          if ( v13 )
            a2 = v13;
        }
        if ( *(_QWORD *)(a1 + 928) == a2 )
          *(_BYTE *)(a1 + 936) = 1;
      }
      else
      {
        if ( v18 )
        {
          v14 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
          v15 = *(_WORD *)(a2 + 9);
          v16 = *(_WORD *)(v14 + 16);
          *(_QWORD *)v14 = 0;
          v19 = v14 + 8;
          *(_QWORD *)(v14 + 24) = a2;
          *(_QWORD *)(v14 + 32) = v7;
          *(_WORD *)(v14 + 16) = v16 & 0xC000 | 9;
          v17 = *(_WORD *)(v14 + 17);
          *(_QWORD *)(v14 + 40) = v8;
          *(_WORD *)(v14 + 17) = v15 & 0xFC0 | v17 & 0xF03F;
          *(_QWORD *)(v14 + 8) = off_2BE6A20;
          sub_2223210(a1 + 904, v14, v20, off_2BE9FD0);
          a2 = v19;
        }
        else
        {
          a2 = 0;
        }
        if ( ptr[0] != v22 )
          free(ptr[0]);
        *(_QWORD *)(a1 + 920) = a2;
        if ( !a2 )
          return 0;
      }
      v3 = *(char **)a1;
      if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v3 != 66 )
        return a2;
    }
    return 0;
  }
  return a2;
}
