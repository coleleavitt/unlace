__int64 __fastcall sub_11E6640(int a1, __int64 a2, __int64 *a3)
{
  __int128 v5; // rax
  __int64 result; // rax
  __int128 v7; // rax
  __int128 v8; // rax
  __int64 v9; // rsi
  _BYTE *v10; // rax
  signed __int64 v11; // rdx
  __int128 v12; // rax
  __int128 v13; // rax
  __int128 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-D8h]
  __int128 v16; // [rsp+10h] [rbp-C8h] BYREF
  void *v17[2]; // [rsp+20h] [rbp-B8h] BYREF
  _DWORD v18[12]; // [rsp+30h] [rbp-A8h] BYREF
  void *v19[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v20; // [rsp+70h] [rbp-68h] BYREF

  v16 = 0;
  sub_22A4A80(v19);
  sub_22B9ED0(v17, v19);
  if ( v19[0] != &v20 )
    operator delete(v19[0]);
  switch ( a1 )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 29:
    case 31:
      *(_QWORD *)&v7 = sub_22B7B00(a2);
      v16 = v7;
      if ( !(_DWORD)v7 )
      {
        *(_QWORD *)&v8 = sub_2257B10(&v16, 1);
        v16 = v8;
      }
      break;
    case 1:
    case 9:
      if ( (*(_DWORD *)(a2 + 44) & 0xFFFFFFF7) == 1 && (v18[7] & 0xFFFFFFF7) == 1 && !(unsigned int)sub_22B7B00(a2) )
      {
        sub_22B7D00(v17, &v16);
      }
      else if ( !(unsigned __int8)sub_22B7D00(a2, &v16) )
      {
        v9 = *a3;
        sub_FC70B0((__int64)v19, *a3, 0, 374);
        v10 = (_BYTE *)sub_22B75A0(a2, v9);
        sub_AEC220((unsigned __int8 **)v19, v10, v11);
        sub_AEA040((__int64)v19);
      }
      break;
    case 5:
      if ( *(_DWORD *)(a2 + 48) != 32 || (unsigned int)sub_22B7B00(a2) )
      {
        *(_QWORD *)&v12 = sub_22B83A0(a2);
        v16 = v12;
      }
      else
      {
        v16 = 0x800000010000000DLL;
      }
      break;
    case 27:
      *(_QWORD *)&v13 = sub_22B7B00(a2);
      v16 = v13;
      break;
    case 28:
      *(_QWORD *)&v14 = sub_22B7E20(a2);
      v16 = v14;
      break;
    case 30:
      *(_QWORD *)&v5 = sub_22B7E60(a2);
      v16 = v5;
      break;
  }
  result = v16;
  if ( v17[0] != v18 )
  {
    v15 = v16;
    operator delete(v17[0]);
    return v15;
  }
  return result;
}
