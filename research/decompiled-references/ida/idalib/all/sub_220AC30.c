__int64 __fastcall sub_220AC30(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned int v6; // edx
  unsigned __int64 v7; // rdx
  int v8; // edx
  int v9; // esi
  unsigned int v10; // edx
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-20h]
  __int64 v15; // [rsp+10h] [rbp-18h] BYREF
  int v16; // [rsp+18h] [rbp-10h]

  result = a1;
  LODWORD(v4) = a2[2];
  if ( (_DWORD)v4 == 16 )
  {
    v7 = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 8) = 16;
    *(_QWORD *)a1 = (unsigned __int16)__ROL2__(v7, 8);
    return result;
  }
  if ( (_DWORD)v4 == 32 )
  {
    v6 = *a2;
    *(_DWORD *)(a1 + 8) = 32;
    *(_QWORD *)a1 = _byteswap_ulong(v6);
    return result;
  }
  if ( (unsigned int)v4 <= 0x40 )
  {
    v5 = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = _byteswap_uint64(v5) >> (64 - (unsigned __int8)v4);
    return result;
  }
  v8 = ((unsigned __int64)(unsigned int)v4 + 63) >> 6;
  v16 = v8 << 6;
  if ( (unsigned int)(v8 << 6) > 0x40 )
  {
    sub_2205470((__int64)&v15, 0, 0);
    v9 = v16;
    result = a1;
    v4 = a2[2];
    v8 = (unsigned __int64)(v4 + 63) >> 6;
    if ( !((unsigned __int64)(v4 + 63) >> 6) )
      goto LABEL_11;
  }
  else
  {
    v15 = 0;
    v9 = 0;
  }
  v10 = v8 - 1;
  v11 = 0;
  do
  {
    v12 = v10--;
    *(_QWORD *)(v15 + v11) = _byteswap_uint64(*(_QWORD *)(*(_QWORD *)a2 + 8 * v12));
    v11 += 8;
  }
  while ( v10 != -1 );
LABEL_11:
  if ( v9 != (_DWORD)v4 )
  {
    v14 = result;
    sub_220ABF0((__int64)&v15, v9 - v4);
    LODWORD(v4) = a2[2];
    result = v14;
  }
  v13 = v15;
  *(_DWORD *)(result + 8) = v4;
  *(_QWORD *)result = v13;
  return result;
}
