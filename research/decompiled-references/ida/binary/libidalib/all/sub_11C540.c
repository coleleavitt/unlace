__int64 __fastcall sub_11C540(_QWORD *a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  v1 = (**(__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *))a1[1])(a1[1], 31, v5);
  if ( (_BYTE)v1 )
  {
    v2 = *a1;
    v3 = v5[0];
    if ( **(_QWORD **)(*a1 + 24LL) == v5[0] )
    {
      return 0;
    }
    else
    {
      *((_BYTE *)a1 + 114) = 1;
      **(_QWORD **)(v2 + 24) = v3;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, 3);
      sub_11C330(a1);
    }
  }
  return v1;
}

