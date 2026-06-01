unsigned __int64 __fastcall sub_46B970(__int64 a1, int a2, __int64 a3)
{
  char v5; // al
  void *v6; // rdx
  _BYTE *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h]
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  if ( a2 == 2 )
  {
    sub_30EC30((__int64)&ptr);
    v6 = ptr;
    v7 = *(_BYTE **)a3;
    if ( *(_QWORD *)a3 )
    {
      v6 = *(void **)v7;
      *(_QWORD *)v7 = ptr;
      v8 = *((_QWORD *)v7 + 1);
      ptr = v6;
      *((_QWORD *)v7 + 1) = v11;
      v11 = v8;
      v9 = *((_QWORD *)v7 + 2);
      *((_QWORD *)v7 + 2) = v12;
      v12 = v9;
    }
    if ( v6 && !_InterlockedSub((volatile signed __int32 *)v6, 1u) )
      free(ptr);
  }
  else if ( a2 == 3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, **(_QWORD **)(a3 + 8));
    if ( *(_QWORD *)a3 )
      **(_BYTE **)a3 = v5;
  }
  return v13 - __readfsqword(0x28u);
}
