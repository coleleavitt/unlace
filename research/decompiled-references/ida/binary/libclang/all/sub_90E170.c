__int64 __fastcall sub_90E170(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbp
  unsigned int v8; // ebx
  __int64 v10; // rax
  void *v11; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-70h]
  __int64 v13[13]; // [rsp+10h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v12 = v6;
  v11 = *(void **)v5;
  sub_A1A5E0(v4, 16);
  v7 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( (unsigned __int8)sub_9D4FE0(a1, a2, v7, 2) && (unsigned __int8)sub_9D7120(a1, a2, v7, 2) )
  {
    sub_A1C030(v13, *(_QWORD *)(v7 + 24), (unsigned int)(a3 + *(_DWORD *)v7), (unsigned int)(a3 + *(_DWORD *)v7));
    v8 = sub_9E26A0(a1, a2, v13);
    if ( (_BYTE)v8 )
    {
      sub_A1DB00(v13);
      v10 = sub_8F8520(v13);
      if ( *(_DWORD *)(v10 + 8) <= 0x40u && v12 <= 0x40 )
      {
        *(_QWORD *)v10 = v11;
        *(_DWORD *)(v10 + 8) = v12;
      }
      else
      {
        sub_2585EA0(v10, &v11);
      }
    }
    sub_A1C0C0(v13);
  }
  else
  {
    v8 = 0;
  }
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return v8;
}

