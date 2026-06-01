_BOOL8 __fastcall sub_7A7280(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v6[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !*(_QWORD *)(a1 + 240) )
    return 0;
  v1 = *(_QWORD *)(a1 + 432);
  if ( v1 )
    v2 = *(_DWORD *)(v1 - 4);
  else
    v2 = 0;
  v5 = *(_QWORD *)(a1 + 120);
  v6[0] = a1 + 112;
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(a1 + 248))(a1 + 224, &v5, v6);
  v3 = *(_QWORD *)(a1 + 432);
  if ( v3 )
    return *(_DWORD *)(v3 - 4) != v2;
  else
    return v2 != 0;
}

