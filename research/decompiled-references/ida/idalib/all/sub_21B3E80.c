unsigned __int64 __fastcall sub_21B3E80(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  void (*v3)(void); // rax
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v7; // [rsp+10h] [rbp-58h] BYREF
  __int64 v8; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int8 *v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  char v12; // [rsp+40h] [rbp-28h]

  v2 = *(_QWORD *)a1;
  v9[0] = a2;
  v3 = *(void (**)(void))(v2 + 64);
  v9[1] = a1;
  if ( (char *)v3 != (char *)sub_21B1110 )
    v3();
  if ( (v9[0][16] & 0xFB) == 0x6B || (v4 = 0, v9[0][16] == 2) )
  {
    sub_21B2E70((__int64)&v10, v9);
    v5 = (_QWORD *)v10;
    if ( (v12 & 1) != 0 )
    {
      v10 = 0;
      v7 = v5;
      sub_A05760(&v8, &v7);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
    }
    else if ( v10 )
    {
      if ( (*(_BYTE *)(v10 + 10) & 5) == 1 )
      {
        v4 = _byteswap_ulong(*(_DWORD *)v10);
        goto LABEL_9;
      }
    }
    else if ( (*(_BYTE *)(v11 + 10) & 5) == 1 )
    {
      v4 = _byteswap_ulong(*(_DWORD *)v11) | ((unsigned __int64)_byteswap_ulong(*(_DWORD *)(v11 + 12)) << 32);
      goto LABEL_9;
    }
    v4 = 0;
LABEL_9:
    sub_21B3170(&v10);
  }
  return v4;
}
