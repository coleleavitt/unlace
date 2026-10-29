__int64 __fastcall sub_188AD0(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v4)(_QWORD, __int64); // rax
  bool v5; // zf
  __int64 v7; // rdx
  void (*v8)(); // rdx
  int v9; // eax

  *((_BYTE *)a1 + 340) = 0;
  if ( a3 == -2 && (a1[47] & 1) != 0 && !(unsigned __int8)sub_188A00(a1) )
  {
    if ( !*((_BYTE *)a1 + 340) )
      goto LABEL_7;
    goto LABEL_6;
  }
  v4 = (__int64 (__fastcall *)(_QWORD, __int64))a1[40];
  *((_BYTE *)a1 + 288) = 1;
  if ( v4 && *((_DWORD *)a1 + 84) == 1 )
  {
    v7 = *a1;
    *((_DWORD *)a1 + 84) = 2;
    v8 = *(void (**)())(v7 + 216);
    if ( v8 == nullsub_56 )
    {
      v9 = v4(a3, (__int64)(a1 + 31));
    }
    else
    {
      ((void (__fastcall *)(__int64 *))v8)(a1);
      v9 = ((__int64 (__fastcall *)(_QWORD, __int64 *))a1[40])(a3, a1 + 31);
    }
    v5 = *((_BYTE *)a1 + 340) == 0;
    *((_BYTE *)a1 + 288) = 0;
    *((_DWORD *)a1 + 84) = 1;
    if ( !v5 )
      goto LABEL_6;
    if ( v9 <= 0 )
      goto LABEL_7;
  }
  else
  {
    v5 = *((_BYTE *)a1 + 340) == 0;
    *((_BYTE *)a1 + 288) = 0;
    if ( !v5 )
    {
LABEL_6:
      (*(void (__fastcall **)(__int64 *))(*a1 + 184))(a1);
LABEL_7:
      TView::clearEvent(a1, a2);
      return 0;
    }
  }
  return 1;
}

