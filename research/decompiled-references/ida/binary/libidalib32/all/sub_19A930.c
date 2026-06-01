__int64 __fastcall sub_19A930(_QWORD *a1, __int64 (__fastcall ***a2)(_QWORD, _QWORD))
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 result; // rax

  while ( 1 )
  {
    v3 = a1[1];
    if ( v3 )
      break;
LABEL_6:
    a1 = (_QWORD *)a1[15];
    if ( !a1 )
      return 0;
  }
  v4 = 0;
  while ( 1 )
  {
    result = (**a2)(a2, *(_QWORD *)(*a1 + 8 * v4));
    if ( (_DWORD)result )
      return result;
    if ( v3 == ++v4 )
      goto LABEL_6;
  }
}

