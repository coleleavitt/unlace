char __fastcall sub_20C5EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // rdx
  char result; // al
  char v8; // [rsp+Fh] [rbp-49h]
  void *ptr[2]; // [rsp+10h] [rbp-48h] BYREF
  int v10; // [rsp+20h] [rbp-38h]
  char v11; // [rsp+24h] [rbp-34h]
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF

  v10 = 0;
  v11 = 1;
  ptr[0] = &v12;
  ptr[1] = &byte_4;
  for ( i = *(unsigned __int8 *)(a1 + 8); (_BYTE)i == 16; i = *(unsigned __int8 *)(a1 + 8) )
    a1 = *(_QWORD *)(a1 + 24);
  if ( (_BYTE)i == 15 )
  {
    result = sub_20C5D10(a1, (__int64)ptr, i, a4, a5, a6);
    goto LABEL_5;
  }
  result = 1;
  if ( (_BYTE)i != 18 )
  {
    result = 0;
    if ( (_BYTE)i == 20 )
    {
      result = *((_BYTE *)sub_20C5940(a1, (__int64)ptr, i, a4, a5, a6) + 8) == 18;
LABEL_5:
      if ( !v11 )
      {
        v8 = result;
        free(ptr[0]);
        return v8;
      }
    }
  }
  return result;
}
