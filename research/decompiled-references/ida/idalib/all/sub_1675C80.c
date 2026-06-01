void __fastcall sub_1675C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  __int64 v6; // rax
  char v7; // dl
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int8 v10; // al
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+0h] [rbp-4Ch] BYREF
  _QWORD v16[2]; // [rsp+4h] [rbp-48h] BYREF
  _QWORD v17[7]; // [rsp+14h] [rbp-38h] BYREF

  if ( a4 )
  {
    if ( *(_QWORD *)(a1 + 480) )
    {
      v5 = *(_DWORD *)(a2 + 24);
      v16[1] = a4;
      v16[0] = a3;
      v17[0] = "<API Notes>";
      v17[1] = j__strlen("<API Notes>");
      v15 = v5;
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *, int *))(a1 + 488))(a1 + 464, v16, v17, &v15);
      if ( v6 )
      {
        if ( !v7 )
        {
          v8 = sub_1E5F010(v6, 0);
          v9 = (unsigned __int64)sub_A81910(*(_QWORD **)(a1 + 248), v8, *(_DWORD *)(a2 + 24));
          v10 = *(_BYTE *)(a2 + 28) & 0x7F;
          if ( (unsigned int)v10 - 40 > 6 )
          {
            if ( !(unsigned __int8)sub_16750D0(a1, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 56), v8) )
            {
              *(_QWORD *)(a2 + 56) = v8;
              *(_QWORD *)(a2 + 64) = v9;
            }
          }
          else
          {
            v11 = *(_DWORD *)(a2 + 24);
            if ( v10 == 43 )
            {
              v13 = sub_189C400(*(_QWORD *)(a1 + 736), v8, v11, v9);
              v14 = sub_A75DA0(*(_QWORD *)(a1 + 248), v13);
              v11 = *(_DWORD *)(a2 + 24);
              v8 = v14;
            }
            if ( !(unsigned __int8)sub_16750D0(a1, v11, *(_QWORD *)(a2 + 48), v8) )
            {
              v12 = *(_QWORD *)(a2 + 56);
              *(_QWORD *)(a2 + 48) = v8;
              if ( (v12 & 4) != 0 )
                *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v9;
              else
                *(_QWORD *)(a2 + 56) = v9 & 0xFFFFFFFFFFFFFFFBLL;
            }
          }
        }
      }
    }
  }
}
