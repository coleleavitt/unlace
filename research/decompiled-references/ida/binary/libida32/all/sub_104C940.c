__int64 __fastcall sub_104C940(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  unsigned int v11; // ebx
  int v13; // eax
  bool v14; // zf
  __int16 v15; // ax
  size_t v16; // rax
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+18h] [rbp-40h]
  __int16 v21; // [rsp+20h] [rbp-38h]

  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( !(unsigned __int8)sub_2278960(a2, a3, &v17, a8, 0) )
    return 0;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 560LL))(a1, a4, a5);
  if ( !(_BYTE)v11 )
    return 0;
  if ( v18 == 8 )
  {
    v13 = *(_QWORD *)v17 == 0x6661656C2D6E6F6ELL;
  }
  else if ( v18 == 3 && *(_WORD *)v17 == 27745 && *(_BYTE *)(v17 + 2) == 108 )
  {
    v13 = 2;
  }
  else
  {
    v13 = 0;
  }
  v14 = v20 == 5;
  *(_DWORD *)a6 = v13;
  if ( v14 && *(_DWORD *)v19 == 1701535586 && *(_BYTE *)(v19 + 4) == 121 )
  {
    v16 = j__strlen("b-key");
    *a8 = "b-key";
    a8[1] = v16;
  }
  v15 = v21;
  *(_DWORD *)(a6 + 4) = 0;
  *(_WORD *)(a6 + 8) = v15;
  return v11;
}

