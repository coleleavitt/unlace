__int64 __fastcall sub_7EEBC0(void *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[1] = (void *)__readfsqword(0x28u);
  v4 = operator new(0x70u);
  *(_BYTE *)(v4 + 8) = 17;
  v5 = v4;
  *(_QWORD *)v4 = &off_2B12560;
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 64) = 0;
  *(_QWORD *)(v4 + 88) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 72) = 0;
  *(_OWORD *)(v4 + 96) = 0;
  if ( a1 )
  {
    v7[0] = a1;
    if ( __CFADD__(a2, a1) || !(unsigned __int8)sub_7EE9B0((__int64 *)(v4 + 16), v7, a2, a3) )
    {
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      return 0;
    }
  }
  return v5;
}

