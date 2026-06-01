__int64 __fastcall sub_2135560(__int64 *a1)
{
  __int64 v2; // rdi
  bool v3; // zf
  unsigned int v4; // r12d
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  char vars10; // [rsp+10h] [rbp+10h] BYREF

  v2 = *a1;
  vars10 = 0;
  v3 = *(_BYTE *)(v2 + 861) == 0;
  vars8 = 0;
  vars0 = &vars10;
  if ( !v3 )
    goto LABEL_10;
  if ( !(unsigned __int8)sub_2129170(v2) )
  {
    while ( 1 )
    {
      v2 = *a1;
LABEL_10:
      if ( (unsigned __int8)sub_2135140(v2, &vars0) )
        break;
      (*(void (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(*a1 + 24) + 512LL))(
        *(_QWORD *)(*a1 + 24),
        vars0,
        vars8);
      if ( *(_BYTE *)a1[1] )
        goto LABEL_13;
      if ( *(_DWORD *)sub_2153C00(*a1) != 3 )
      {
        v4 = *(unsigned __int8 *)a1[1];
        if ( !(_BYTE)v4 )
          goto LABEL_4;
LABEL_13:
        v4 = 0;
        (*(void (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(*a1 + 24) + 512LL))(
          *(_QWORD *)(*a1 + 24),
          &unk_26F2938,
          1);
        goto LABEL_4;
      }
    }
  }
  v4 = 1;
LABEL_4:
  if ( vars0 != &vars0 )
    operator delete(vars0);
  return v4;
}
