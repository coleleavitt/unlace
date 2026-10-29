__int64 __fastcall sub_FA3A50(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // r13d
  unsigned __int8 v4; // al
  int v5; // ebp
  char v7; // al
  _DWORD v8[4]; // [rsp+0h] [rbp-78h] BYREF
  void *v9; // [rsp+10h] [rbp-68h]
  __int64 v10; // [rsp+20h] [rbp-58h] BYREF

  if ( !a3 )
    return (unsigned int)sub_FA37C0(a1, a2);
  sub_FA34F0((__int64)v8, a1, a2);
  v4 = sub_FB0100(*(_QWORD *)(a1 + 32), v8[3], v8[2], a1);
  v5 = v4;
  LOBYTE(v3) = v4 != 0;
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 48) + 56LL))(*(_QWORD *)(a1 + 48), v4, v8);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48));
    if ( v5 == 3 )
    {
      if ( v7 )
        ++*(_DWORD *)(a1 + 208);
    }
  }
  if ( v9 != &v10 )
    operator delete(v9);
  return v3;
}

