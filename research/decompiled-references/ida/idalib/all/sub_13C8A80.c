unsigned __int64 __fastcall sub_13C8A80(
        __int64 a1,
        _BYTE *a2,
        size_t a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        __int64 *a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  unsigned __int64 v14; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  std::_V2 *v18; // rax
  unsigned int v19; // eax
  std::_V2 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r15
  unsigned int v24; // [rsp+Ch] [rbp-BCh]
  unsigned __int64 v25; // [rsp+10h] [rbp-B8h] BYREF
  char v26; // [rsp+18h] [rbp-B0h]
  void *v27[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-98h] BYREF
  std::_V2 *v29[17]; // [rsp+40h] [rbp-88h] BYREF

  sub_FD9C70((__int64)&v25, *(_QWORD *)(a1 + 40), a2, a3, a9, a10, 1);
  if ( (v26 & 1) != 0 )
  {
    v18 = (std::_V2 *)v25;
    v25 = 0;
    v29[0] = v18;
    v19 = sub_2220DB0(v29);
    v20 = v29[0];
    v24 = v19;
    v22 = v21;
    if ( v29[0] )
      (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v29[0] + 8LL))(v29[0]);
    if ( v22 != std::_V2::generic_category(v20) || v24 - 20 > 2 && v24 != 2 )
    {
      sub_FC70B0((__int64)v29, *(_QWORD *)(a1 + 32), a4, 7);
      sub_AEC220((unsigned __int8 **)v29, a2, a3);
      (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v22 + 32LL))(v27, v22, v24);
      sub_AEC220((unsigned __int8 **)v29, (_BYTE *)v27[0], (signed __int64)v27[1]);
      if ( v27[0] != &v28 )
        operator delete(v27[0]);
      sub_AEA040((__int64)v29);
    }
  }
  else
  {
    if ( !a5 )
    {
      v16 = v25;
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        if ( !v17 )
          break;
        v16 = v17 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v17 & 4) == 0 || !v16 )
          goto LABEL_11;
      }
      v16 = 0;
LABEL_11:
      a5 = *(_QWORD *)(v16 + 48);
    }
    if ( (unsigned __int8)sub_13C8900(a1, v25, a5, a7, a8, a6) )
    {
      v14 = v25;
      goto LABEL_5;
    }
  }
  v14 = 0;
LABEL_5:
  sub_A04D90((__int64 *)&v25);
  return v14;
}
