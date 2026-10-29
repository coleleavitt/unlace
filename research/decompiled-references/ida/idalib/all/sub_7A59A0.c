unsigned __int64 __fastcall sub_7A59A0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  sub_7A5860(a1, a2, a3, a4, a5, a6);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(a1 + 560);
        vars0 = 1;
        vars8 = 0;
        v10 = *(_WORD *)(v9 + 24);
        if ( v10 != 42 )
          break;
        sub_7A5860(a1, (__int64)&vars0, 1, v6, v7, v8);
        *(_QWORD *)(a2 + 8) *= vars8;
      }
      if ( v10 != 47 )
        break;
      sub_7A5860(a1, (__int64)&vars0, 1, v6, v7, v8);
      v6 = vars8;
      if ( !vars8 )
LABEL_17:
        __longjmp_chk(a1 + 360, 86);
      v11 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)a2 || (_BYTE)vars0 )
        *(_QWORD *)(a2 + 8) = v11 / (unsigned __int64)vars8;
      else
        *(_QWORD *)(a2 + 8) = v11 / vars8;
    }
    if ( v10 != 37 )
      return vars18 - __readfsqword(0x28u);
    sub_7A5860(a1, (__int64)&vars0, 1, v6, v7, v8);
    v6 = vars8;
    if ( !vars8 )
      goto LABEL_17;
    if ( *(_BYTE *)a2 || (_BYTE)vars0 )
      *(_QWORD *)(a2 + 8) %= (unsigned __int64)vars8;
    else
      *(__int64 *)(a2 + 8) %= vars8;
  }
}
