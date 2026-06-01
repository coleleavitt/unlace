char **__fastcall sub_43F5C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  _DWORD *v7; // r12
  _QWORD *v8; // rdx
  _DWORD v10[13]; // [rsp+4h] [rbp-34h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v4 = sub_40FB00(120);
  sub_457B10(v4, 0xFFFFFFFFLL, &qword_655500);
  *(_QWORD *)(v4 + 88) = 0;
  v5 = *(_QWORD **)(v3 + 88);
  for ( *(_QWORD *)(v4 + 96) = 0; v5; v8[3] = v7 )
  {
    v6 = v5 + 4;
    if ( *(_DWORD *)(v3 + 60) == 1 || *(_DWORD *)(v3 + 60) == -1 )
      v6 = (_QWORD *)v5[4];
    v7 = (_DWORD *)v5[3];
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *, _DWORD *))(v4 + 72))(v4, v6, v10);
    if ( v10[0] )
    {
      v8[6] = 0;
      if ( *(_QWORD *)(v4 + 88) )
      {
        v8[5] = *(_QWORD *)(v4 + 96);
        *(_QWORD *)(*(_QWORD *)(v4 + 96) + 48LL) = v8;
      }
      else
      {
        v8[5] = 0;
        *(_QWORD *)(v4 + 88) = v8;
      }
      *(_QWORD *)(v4 + 96) = v8;
    }
    v5 = (_QWORD *)v5[6];
    ++*v7;
  }
  *(_DWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 108) = 1;
  *(_QWORD *)(a2 + 32) = v4;
  *(_QWORD *)(a2 + 24) = &off_6554A0;
  return &off_6554A0;
}

