__int64 __fastcall sub_A40930(__int64 a1, unsigned __int8 a2, char a3, char a4)
{
  __int64 result; // rax
  __int64 *v5; // r12
  __int64 v6; // r13
  __int64 (*v7)(); // rdx
  size_t v8; // rax
  __int64 (*v9)(); // r14

  if ( a3 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 17432) + 24LL))(*(_QWORD *)(a1 + 17432), a2);
  if ( a4 )
  {
LABEL_4:
    v5 = *(__int64 **)(a1 + 17448);
    v6 = *v5;
LABEL_5:
    v7 = *(__int64 (**)())(v6 + 752);
    result = 0;
    if ( v7 != sub_6CE300 )
      return ((__int64 (__fastcall *)(__int64 *))v7)(v5);
  }
  else
  {
    switch ( *(_BYTE *)(*(_QWORD *)(a1 + 2320) + 202LL) >> 5 )
    {
      case 1:
        return 0;
      case 2:
        v5 = *(__int64 **)(a1 + 17448);
        v8 = j__strlen("sse2");
        v6 = *v5;
        v9 = *(__int64 (**)())(*v5 + 584);
        if ( v9 == sub_A321A0 )
          goto LABEL_5;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, char *, size_t))v9)(v5, "sse2", v8) != 1 || a2 )
        {
          v5 = *(__int64 **)(a1 + 17448);
          v6 = *v5;
          goto LABEL_5;
        }
        result = 2;
        break;
      case 3:
        if ( a2 )
          goto LABEL_4;
        return 1;
      case 4:
        if ( a2 )
          goto LABEL_4;
        return 4;
      case 5:
        if ( a2 )
          goto LABEL_4;
        return 8;
      case 6:
        if ( a2 )
          goto LABEL_4;
        return 20;
      default:
        goto LABEL_4;
    }
  }
  return result;
}

