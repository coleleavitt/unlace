__int64 __fastcall sub_C8AAC0(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // [rsp+0h] [rbp-10h] BYREF

  if ( !*(_BYTE *)(*a1 + 1360) )
    return 1;
  v2 = a1[2];
  v3 = *((unsigned int *)a1 + 2);
  v4 = *a1;
  v5 = v2 | 4;
  return sub_D014C0(v4, v3, &v5);
}

