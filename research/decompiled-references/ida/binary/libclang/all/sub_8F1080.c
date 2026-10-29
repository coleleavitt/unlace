__int64 __fastcall sub_8F1080(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  _DWORD v11[6]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+18h] [rbp-A0h]
  _BYTE v13[120]; // [rsp+40h] [rbp-78h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v5 = *(_QWORD *)(a1 + 568);
    v6 = *(_QWORD *)(a1 + 792);
    v7 = a1 + 384;
    *(_QWORD *)(a1 + 800) = *a3;
    v8 = sub_A1A5A0(v5, 56);
    sub_A1C070(v11, v8);
    sub_A1A5E0(v5, 56);
    if ( (unsigned __int8)sub_9D4FE0(a1 + 384, v6, v11, 1)
      && (unsigned __int8)sub_9D71E0(v7, v6, v11, 1)
      && (v3 = sub_9C7700(v7, v6, v11, a2), (_BYTE)v3) )
    {
      v9 = *(_QWORD *)(a1 + 568);
      sub_A1C030(v13, v12, v11[0] - a2, v11[0] - a2);
      v10 = sub_A1A4E0(v9, 56);
      sub_A1C070(v10, v13);
      sub_A1C0C0(v13);
    }
    else
    {
      v3 = 0;
    }
    sub_A1C0C0(v11);
  }
  return v3;
}

