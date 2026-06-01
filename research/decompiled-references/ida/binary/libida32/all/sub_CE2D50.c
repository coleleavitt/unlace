__int64 __fastcall sub_CE2D50(__int64 a1, char a2, int a3, _QWORD *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // r13
  unsigned int v8; // eax
  unsigned __int8 **v9; // rax
  __int64 *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  unsigned __int8 **v14; // rax
  unsigned __int8 **v15; // rbx
  unsigned __int8 **v16; // rax
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  char v18; // [rsp+8h] [rbp-30h]

  v4 = 1;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return v4;
  v6 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a4;
  v8 = sub_DFC980(*(_QWORD *)(a1 + 784));
  switch ( a2 )
  {
    case 0:
      v9 = (unsigned __int8 **)sub_E0FDF0(a1 + 384, v8, 2417, 0);
      v10 = (__int64 *)v9;
      if ( v9 )
      {
        sub_AC60B0(v9, 0, 3u);
        v11 = sub_DFC9E0(*(_QWORD *)(a1 + 784), v6);
        v18 = 1;
        v17 = v11;
        sub_AC88D0(v10, &v17);
      }
      else
      {
        sub_DFC9E0(*(_QWORD *)(a1 + 784), v6);
      }
      return a3 ^ 1u;
    case 1:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408), v6);
      if ( !(_BYTE)v4 )
      {
        v12 = a1 + 384;
        v13 = sub_DFB220(*(_QWORD *)(a1 + 784));
        if ( (*(_BYTE *)(sub_E0E500(a1 + 384) + 1) & 8) != 0 )
        {
          v14 = (unsigned __int8 **)sub_E0FED0(v12, v13, 2377, 0);
          v15 = v14;
          if ( v14 )
          {
            sub_AC60B0(v14, 0, 2u);
            sub_AC60B0(v15, *(_QWORD *)(*(_QWORD *)(v13 + 16) + 8LL), 8u);
          }
        }
        else
        {
          sub_E0FED0(v12, v13, 108, 0);
        }
        return v4;
      }
      break;
    case 2:
      v17 = sub_DFB160(*(_QWORD *)(a1 + 784), v6);
      v16 = (unsigned __int8 **)sub_E0FFE0(a1 + 384, &v17, 2417, 0);
      if ( v16 )
        sub_AC60B0(v16, 1, 2u);
      return 1;
  }
  return 0;
}

