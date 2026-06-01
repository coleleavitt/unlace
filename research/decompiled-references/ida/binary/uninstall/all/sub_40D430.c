__int64 __fastcall sub_40D430(__int64 a1, __int64 a2)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  _DWORD *v5; // r13
  _BYTE *i; // rbp
  __int64 v7; // rax
  void (__fastcall *v8)(__int64); // rax
  __int64 v10; // rax
  __int16 v11; // [rsp+Ah] [rbp-2Eh] BYREF
  int v12; // [rsp+Ch] [rbp-2Ch] BYREF

  if ( *(char ***)(a2 + 24) != &off_653DC0 )
  {
    if ( *(_QWORD *)(a2 + 8) )
    {
      v2 = *(_DWORD *)(a2 + 16);
      v3 = *(_QWORD *)(a2 + 8);
      v12 = v2;
    }
    else
    {
      v10 = sub_47ACD0(a2, &v12);
      v2 = v12;
      v3 = v10;
    }
    v4 = v2 + v3;
    v5 = (_DWORD *)sub_40FB00((unsigned int)(v2 + 8));
    for ( i = v5 + 2; v3 < v4; ++i )
    {
      v3 += (int)sub_49BBC0(v3, &v11);
      *i = v11;
    }
    *v5 = (_DWORD)i - (_DWORD)v5 - 8;
    v5[1] = v12;
    v7 = *(_QWORD *)(a2 + 24);
    if ( v7 )
    {
      v8 = *(void (__fastcall **)(__int64))(v7 + 8);
      if ( v8 )
        v8(a2);
    }
    *(_QWORD *)(a2 + 32) = v5;
    *(_QWORD *)(a2 + 24) = &off_653DC0;
  }
  return 0;
}

