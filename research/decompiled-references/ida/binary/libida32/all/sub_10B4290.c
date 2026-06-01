void __fastcall sub_10B4290(int *a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  void *v4; // r14
  void *v5[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v6; // [rsp+10h] [rbp-78h] BYREF
  void *v7[2]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v8[22]; // [rsp+30h] [rbp-58h] BYREF

  v3 = 57;
  if ( *(_DWORD *)(a3 + 44) != 7 )
    goto LABEL_2;
  sub_223C690(v7);
  v4 = v7[0];
  if ( v7[0] && !_InterlockedSub((volatile signed __int32 *)v7[0] + 2, 1u) )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_2280D40(v5);
  sub_2296190(v7, v5);
  if ( v5[0] != &v6 )
    operator delete(v5[0]);
  if ( v8[7] == 7 )
  {
    if ( (void *)a2 == v4 )
    {
      if ( !(_BYTE)byte_2CAE868 && __cxa_guard_acquire(&byte_2CAE868) )
      {
        dword_2CAE870 = sub_10B29F0(a2);
        __cxa_guard_release(&byte_2CAE868);
      }
      v3 = dword_2CAE870;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( (void *)a2 != v4 )
  {
LABEL_10:
    v3 = sub_10B29F0(a2);
    goto LABEL_11;
  }
  v3 = 57;
LABEL_11:
  if ( v7[0] != v8 )
    operator delete(v7[0]);
LABEL_2:
  *a1 = v3;
}

