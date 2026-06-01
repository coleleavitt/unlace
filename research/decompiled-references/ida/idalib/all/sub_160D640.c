__int64 __fastcall sub_160D640(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned __int8 v5; // dl
  __int64 v6; // r13
  __int64 i; // rbx
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rsi

  v3 = *(_QWORD *)(a2 + 16);
  v4 = sub_C94450(a2);
  v5 = *(_BYTE *)(v3 + 28) & 0x7F;
  if ( (unsigned int)v5 - 40 > 6 )
  {
    if ( (unsigned int)v5 - 34 <= 5 )
    {
      sub_160DD70(a1, v4, v3);
      v3 = *(_QWORD *)(a2 + 16);
      goto LABEL_4;
    }
    if ( v5 == 7 )
    {
      if ( sub_B70A90(v3) )
      {
        sub_160D770(a1);
        v3 = *(_QWORD *)(a2 + 16);
        goto LABEL_4;
      }
    }
    else
    {
      if ( v5 != 8 )
        goto LABEL_4;
      v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL);
      if ( v9 == sub_6EE8D0 )
        v10 = *(_QWORD *)(v3 + 88);
      else
        v10 = v9(v3);
      if ( v10 )
        sub_160D770(a1);
    }
    v3 = *(_QWORD *)(a2 + 16);
  }
LABEL_4:
  v6 = sub_B98F20(v3) + 8LL * (unsigned __int16)(*(_DWORD *)(v3 + 84) >> 13);
  for ( i = sub_B98F20(v3); v6 != i; i += 8 )
  {
    while ( (**(_WORD **)(*(_QWORD *)i + 8LL) & 0x1FF) != 0x6F )
    {
      i += 8;
      if ( v6 == i )
        return sub_160DC40(a1, a2);
    }
    sub_160D770(a1);
  }
  return sub_160DC40(a1, a2);
}
