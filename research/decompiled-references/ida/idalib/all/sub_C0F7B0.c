__int64 __fastcall sub_C0F7B0(unsigned __int64 a1)
{
  __int16 v2; // ax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v7; // rbp

  while ( 1 )
  {
    v2 = *(_WORD *)a1 & 0x1FF;
    if ( v2 == 54 )
      return 0;
    if ( v2 != 53 )
      return 1;
    v3 = *(_QWORD **)(a1 + 16);
    v4 = (__int64)(*(_QWORD *)(a1 + 24) - (_QWORD)v3) >> 3;
    if ( (_DWORD)v4 )
      break;
LABEL_7:
    v7 = *(_QWORD *)(a1 + 56);
    if ( v7 )
    {
      if ( (v7 & 2) == 0 )
      {
        a1 = v7 & 0xFFFFFFFFFFFFFFFCLL;
        if ( a1 )
          continue;
      }
    }
    return 0;
  }
  v5 = (__int64)&v3[(unsigned int)(v4 - 1) + 1];
  while ( 1 )
  {
    result = sub_C0F7B0(*v3);
    if ( (_BYTE)result )
      return result;
    if ( (_QWORD *)v5 == ++v3 )
      goto LABEL_7;
  }
}
