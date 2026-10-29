__int64 __fastcall sub_11E45B0(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *v5[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+10h] [rbp-68h] BYREF
  void *v7; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v8[18]; // [rsp+30h] [rbp-48h] BYREF

  v2 = a1[12];
  if ( v2 == 35 || (v3 = 0, v2 == 1) )
  {
    (*(void (__fastcall **)(void **, _DWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 520LL))(v5, a1, a2, 0);
    sub_22B9ED0(&v7, v5);
    if ( v5[0] != &v6 )
      operator delete(v5[0]);
    v3 = (v8[5] != 26) + 1;
    if ( v7 != v8 )
      operator delete(v7);
  }
  return v3;
}
