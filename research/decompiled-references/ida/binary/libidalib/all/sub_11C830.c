__int64 __fastcall sub_11C830(_QWORD *a1, char a2)
{
  _QWORD **v3; // rdi
  __int64 v4; // rax
  char v5; // r12
  __int64 v6; // r13
  unsigned int v7; // r13d
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v9[3] = __readfsqword(0x28u);
  v3 = (_QWORD **)*a1;
  if ( v3 )
  {
    v4 = ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*v3)[3])(v3, *v3[2]);
    v5 = *(_BYTE *)(v4 + 64);
    v6 = v4;
    if ( !v5 )
      v5 = *(_QWORD *)(v4 + 56) == -1;
    sub_11C1A0(a1);
    v7 = *(unsigned __int8 *)(v6 + 64);
    if ( (_BYTE)v7 )
    {
      if ( !*((_BYTE *)a1 + 114) && !a2 )
      {
        sub_109B30((__int64)v9, "Save snippet", "Save snippet");
        sub_10DAF0();
        if ( v9[0] )
        {
          v9[1] = 0;
          qfree();
        }
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 64LL))(*a1, 0);
    }
    sub_11C7D0(a1, v5);
    *((_BYTE *)a1 + 114) = a2;
  }
  else
  {
    return 0;
  }
  return v7;
}

