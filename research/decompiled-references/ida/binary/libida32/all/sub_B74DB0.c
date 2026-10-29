__int64 __fastcall sub_B74DB0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 *v3; // rdx
  __int64 v5; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = (*(__int64 *)a1 >> 1) & 3;
  if ( (**(_WORD **)(a1 + 8) & 0x1FF) == 0x6F )
  {
    if ( v2 == 1 )
    {
      return *(unsigned int *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 24);
    }
    else
    {
      if ( v2 != 2 )
        BUG();
      return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                                         + 8LL * *(unsigned int *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                                         - 8)
                             + 24LL);
    }
  }
  else if ( v2 == 1 || v2 == 2 )
  {
    return *(unsigned int *)(a1 + 16);
  }
  else
  {
    v3 = (__int64 *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v3 )
    {
      v5 = *v3;
      v6[1] = v3 + 1;
      v6[0] = v5;
      return sub_F48F70(v6);
    }
    else
    {
      return 0;
    }
  }
}

