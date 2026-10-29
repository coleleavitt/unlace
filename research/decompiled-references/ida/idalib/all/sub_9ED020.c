__int64 __fastcall sub_9ED020(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-30h]
  char v6; // [rsp+Ch] [rbp-2Ch]
  char v7; // [rsp+10h] [rbp-28h]

  sub_C3EB00(&v4, a1, a2, 0);
  if ( v7 )
  {
    if ( v6 )
    {
LABEL_3:
      sub_98E4B0((__int64)&v4);
      return 1;
    }
    v3 = 1LL << ((unsigned __int8)v5 - 1);
    if ( v5 > 0x40 )
    {
      if ( (*(_QWORD *)(v4 + 8LL * ((v5 - 1) >> 6)) & v3) == 0 )
        goto LABEL_3;
    }
    else if ( (v4 & v3) == 0 )
    {
      goto LABEL_3;
    }
  }
  else if ( (unsigned __int8)sub_F65360(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    goto LABEL_3;
  }
  sub_98E4B0((__int64)&v4);
  return 0;
}
