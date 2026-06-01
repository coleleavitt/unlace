__int64 __fastcall sub_225AEF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v8; // eax
  bool v9; // al
  bool v10; // dl
  _QWORD *v11; // rdi
  void *v12[2]; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD v13[9]; // [rsp+10h] [rbp-D8h] BYREF
  char v14; // [rsp+58h] [rbp-90h]
  void *v15[2]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v16[9]; // [rsp+70h] [rbp-78h] BYREF
  char v17; // [rsp+B8h] [rbp-30h]

  (*(void (__fastcall **)(void **))(*(_QWORD *)a2 + 40LL))(v12);
  if ( (v14 & 1) != 0 )
  {
    v6 = (int)v12[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_DWORD *)a1 = v6;
    *(void **)(a1 + 8) = v12[1];
  }
  else
  {
    (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)a2 + 40LL))(v15, a2, a4);
    if ( (v17 & 1) != 0 )
    {
      v8 = (int)v15[0];
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_DWORD *)a1 = v8;
      *(void **)(a1 + 8) = v15[1];
    }
    else
    {
      v9 = v16[3] == v13[3];
      v10 = v16[2] == v13[2];
      v11 = v15[0];
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_BYTE *)a1 = v10 && v9;
      if ( v11 != v16 )
        operator delete(v11);
    }
    if ( (v14 & 1) == 0 && v12[0] != v13 )
      operator delete(v12[0]);
  }
  return a1;
}
