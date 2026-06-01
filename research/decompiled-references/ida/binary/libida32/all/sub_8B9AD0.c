__int64 __fastcall sub_8B9AD0(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rbx
  __int64 v4; // r12
  void (__fastcall *v6)(void *); // rax
  unsigned __int64 v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v7[0] = a1;
  v2 = operator new(0x18u);
  *(_BYTE *)(v2 + 8) = 94;
  v3 = (void *)v2;
  v4 = v2;
  *(_QWORD *)v2 = off_2B150E8;
  *(_DWORD *)(v2 + 12) = 0;
  *(_BYTE *)(v2 + 16) = 0;
  if ( !a1 || (unsigned __int8)sub_8B9A30(v2, v7, a2) )
    return v4;
  if ( v3 )
  {
    v6 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
    if ( v6 == sub_8B2230 )
      operator delete(v3, 0x18u);
    else
      v6(v3);
  }
  return 0;
}

