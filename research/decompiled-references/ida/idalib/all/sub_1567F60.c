void __fastcall sub_1567F60(__int64 a1)
{
  __int16 v1; // ax
  __int16 i; // [rsp+Eh] [rbp-8Ah] BYREF
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v4; // [rsp+18h] [rbp-80h]
  _BYTE v5[120]; // [rsp+20h] [rbp-78h] BYREF

  v1 = *(_WORD *)(a1 + 32);
  if ( v1 == 64 )
  {
    LOWORD(ptr) = 63;
    sub_1566E40(a1, &ptr, 1, 0);
    return;
  }
  if ( v1 == 150 )
  {
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    ptr = v5;
    v4 = 0x400000000LL;
    if ( !(unsigned __int8)sub_146F400(a1, (__int64)&ptr) )
    {
      for ( i = 25; ; i = 25 )
      {
        sub_1566E40(a1, &i, 1, 0);
        if ( *(_WORD *)(a1 + 32) != 128 )
          break;
        i = 24;
        sub_1566E40(a1, &i, 1, 0);
      }
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  ptr = v5;
  v4 = 0x400000000LL;
  if ( (unsigned __int8)sub_146F400(a1, (__int64)&ptr) )
  {
LABEL_4:
    sub_147DEE0(a1);
    goto LABEL_5;
  }
  i = 25;
  sub_1566E40(a1, &i, 1, 0);
LABEL_5:
  if ( ptr != v5 )
    free(ptr);
}
