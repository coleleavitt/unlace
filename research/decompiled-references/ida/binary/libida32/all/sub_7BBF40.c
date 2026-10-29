__int64 __fastcall sub_7BBF40(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r12
  void (__fastcall *v8)(_QWORD *); // rax
  __int64 v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v9[0] = a1;
  v4 = operator new(0x40u);
  *(_BYTE *)(v4 + 8) = 14;
  v5 = (_QWORD *)v4;
  v6 = v4;
  *(_QWORD *)v4 = &off_2B11740;
  *(_DWORD *)(v4 + 12) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 40) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  if ( !a1 || (unsigned __int8)sub_7C9610(v4, v9, a2, a3) )
    return v6;
  if ( v5 )
  {
    v8 = *(void (__fastcall **)(_QWORD *))(*v5 + 8LL);
    if ( v8 == sub_7BA970 )
    {
      sub_7BA8E0(v5);
      operator delete(v5, 0x40u);
    }
    else
    {
      v8(v5);
    }
  }
  return 0;
}

