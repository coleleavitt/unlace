__int64 __fastcall sub_3EE8F0(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned int *a5, __int64 a6)
{
  unsigned int v8; // ecx
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+10h] [rbp-18h] BYREF

  v13[1] = __readfsqword(0x28u);
  v8 = 0;
  if ( a2 == *(_QWORD *)(a1 + 64) )
  {
    if ( a3 == 65 && a6 == 4 )
    {
      v10 = *a5;
      v11 = *(_QWORD *)(a1 + 24);
      v13[0] = a2;
      if ( v10 == 0xFFFFFFFFLL )
        v10 = -1;
      v12 = v10;
      sub_7BE7C0(v13, v11, a4, &v12, 8, 65);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return v8;
}
