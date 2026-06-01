__int64 __fastcall sub_11C090(_QWORD *a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdx
  int v3; // eax
  int v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v1 = (**(__int64 (__fastcall ***)(_QWORD, __int64, int *))a1[1])(a1[1], 31, &v5);
  if ( (_BYTE)v1 )
  {
    v2 = *a1;
    v3 = v5;
    if ( **(_DWORD **)(*a1 + 24LL) == v5 )
    {
      return 0;
    }
    else
    {
      *((_BYTE *)a1 + 114) = 1;
      **(_DWORD **)(v2 + 24) = v3;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, 3);
      sub_11BE80(a1);
    }
  }
  return v1;
}

