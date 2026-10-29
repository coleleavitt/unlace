void __fastcall sub_11BD180(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  const char **v5; // rax
  size_t v6; // rsi
  const char *v7; // r14
  void *v8[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v9; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int8 *v10[15]; // [rsp+20h] [rbp-78h] BYREF

  v3 = (_QWORD *)sub_10DCD30(a2, 0x90Du);
  if ( v3 )
  {
    v4 = v3;
    if ( *(_DWORD *)(*v3 + 40LL) == 2317 )
    {
      v5 = (const char **)v3[6];
      v6 = 0;
      v7 = *v5;
      if ( *v5 )
        v6 = j__strlen(*v5);
      if ( (unsigned __int8)sub_2247970(v7, v6, 0, v10)
        || v10[0] != (unsigned __int8 *)LODWORD(v10[0])
        || (unsigned int)(LODWORD(v10[0]) - 4) > 2 )
      {
        sub_FC70B0((__int64)v10, *a1, 0, 382);
        sub_21B5FF0(v8, v4, a2);
        sub_AEC220(v10, (_BYTE *)v8[0], (signed __int64)v8[1]);
        sub_AE9DF0(v10, *(_QWORD *)v4[6], 1u);
        if ( v8[0] != &v9 )
          operator delete(v8[0]);
        sub_AEA040((__int64)v10);
      }
    }
  }
}
