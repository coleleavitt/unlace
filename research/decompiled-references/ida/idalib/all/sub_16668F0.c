void __fastcall sub_16668F0(__int64 a1, _BYTE *a2)
{
  __int64 v4; // r12
  const void *v5; // r15
  _BYTE *v6; // rsi
  signed __int64 v7; // r12
  __int64 v8; // r14
  int v9; // eax
  unsigned __int32 v10; // edx
  __m128i *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rdi
  int v17; // ecx
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+8h] [rbp-70h]
  _BYTE v20[104]; // [rsp+10h] [rbp-68h] BYREF

  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2) + 82) & 0x40) == 0
    && (a2[83] & 2) == 0 )
  {
    v4 = *(unsigned int *)(a1 + 2368);
    v5 = *(const void **)(a1 + 2360);
    v6 = v20;
    v19 = 0x300000000LL;
    v7 = 16 * v4;
    ptr = v20;
    v8 = v7 >> 4;
    if ( (unsigned __int64)v7 > 0x30 )
    {
      sub_2237220(&ptr, v20, v7 >> 4, 16);
      v16 = (char *)ptr + 16 * (unsigned int)v19;
    }
    else
    {
      if ( !v7 )
      {
        v9 = *(_DWORD *)(a1 + 2368);
        v10 = 0;
        LODWORD(v19) = 0;
        if ( !v9 )
          return;
        goto LABEL_7;
      }
      v16 = v20;
    }
    memcpy(v16, v5, v7);
    v17 = *(_DWORD *)(a1 + 2368);
    v6 = ptr;
    v10 = v19 + v8;
    LODWORD(v19) = v19 + v8;
    if ( !v17 )
    {
LABEL_10:
      if ( v6 != v20 )
        free(v6);
      return;
    }
LABEL_7:
    v11 = sub_B38DC0(*(__int64 **)(a1 + 248), (__int64)v6, v10, 0, 0);
    sub_B8CC60((__int64)a2, (__int64)v11, v12, v13, v14, v15);
    v6 = ptr;
    goto LABEL_10;
  }
}
