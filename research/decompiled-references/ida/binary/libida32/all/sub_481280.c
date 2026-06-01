__int64 __fastcall sub_481280(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v6; // eax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-28h] BYREF
  __int16 v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  if ( a3 )
  {
    v6 = *(_DWORD *)(a1 + 176);
    v10 = 257;
    v9[1] = v6;
    v9[0] = get_idati(a1, a2);
    return create_tinfo(a2, 61, 189, v9);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    v3 = 0;
    if ( *(_QWORD *)(a1 + 56) > 1u )
      v3 = *(_QWORD *)(a1 + 48);
    v8 = v3;
    v4 = 0;
    if ( *(_QWORD *)(a1 + 104) > 1u )
      v4 = *(_QWORD *)(a1 + 96);
    v9[0] = v4;
    return deserialize_tinfo(a2, 0, &v7, &v8, v9, 0);
  }
}

