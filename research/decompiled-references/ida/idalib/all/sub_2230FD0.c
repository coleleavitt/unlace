__int64 __fastcall sub_2230FD0(
        __int64 a1,
        const void ***a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int16 a6)
{
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  char v15; // dl
  __int64 v16; // rax
  int v17; // [rsp+1Ch] [rbp-6Ch] BYREF
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  char v19; // [rsp+28h] [rbp-60h]
  __int64 v20[2]; // [rsp+30h] [rbp-58h] BYREF
  char v21; // [rsp+40h] [rbp-48h]

  sub_228D350(&v18, a2, a3 != 0 ? 3 : 0, 0);
  if ( (v19 & 1) != 0 )
  {
    v10 = v18;
    v18 = 0;
    v20[0] = v10;
    v11 = sub_2220DB0((std::_V2 *)v20);
    v12 = v20[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_DWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = v13;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  else
  {
    v17 = v18;
    sub_2230A30((std::_V2 *)v20, (unsigned int)v18, a2, 0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFFFFFFFFFFLL, 0, a4, a5, a6);
    sub_228D590(&v17);
    v15 = v21 & 1;
    if ( (v21 & 1) != 0 )
    {
      *(_DWORD *)a1 = v20[0];
      *(_QWORD *)(a1 + 8) = v20[1];
    }
    else
    {
      v16 = v20[0];
      v20[0] = 0;
      *(_QWORD *)a1 = v16;
    }
    *(_BYTE *)(a1 + 16) = v15 | *(_BYTE *)(a1 + 16) & 0xFE;
    sub_FC2AF0(v20);
  }
  sub_215DE50(&v18);
  return a1;
}
