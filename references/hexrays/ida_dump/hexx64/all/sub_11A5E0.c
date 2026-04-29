bool __fastcall sub_11A5E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v7; // dl
  bool result; // al
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-A0h]
  __int64 (__fastcall **v16)(); // [rsp+10h] [rbp-98h] BYREF
  __int64 v17; // [rsp+18h] [rbp-90h]
  __int64 v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+28h] [rbp-80h]
  __int64 v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  __int64 v22; // [rsp+40h] [rbp-68h]
  int v23; // [rsp+48h] [rbp-60h]
  _QWORD v24[11]; // [rsp+50h] [rbp-58h] BYREF

  v24[5] = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)a4 - 15) > 3 || (*(_BYTE *)(a1 + 606) & 2) == 0 )
    return 0;
  v7 = *(_BYTE *)(a4 + 48);
  if ( v7 != 2 )
  {
    result = a3 == 0 || a2 == 0;
    if ( result )
      return result;
    v10 = a4 + 48;
    if ( v7 == 4 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( (unsigned int)(*(_DWORD *)v11 - 8) > 1 )
          break;
        v10 = v11 + 32;
        v7 = *(_BYTE *)(v11 + 32);
        if ( v7 != 4 )
          goto LABEL_15;
      }
      v14 = -1;
      v15 = 0;
    }
    else
    {
LABEL_15:
      v14 = -1;
      v15 = 0;
      if ( v7 == 1 )
      {
        v12 = *(int *)(v10 + 8);
        LOBYTE(v15) = 1;
        v14 = v12;
        HIDWORD(v15) = *(_DWORD *)(v10 + 4);
        goto LABEL_17;
      }
      if ( v7 == 5 )
      {
        v13 = *(_QWORD *)(v10 + 8);
        LOBYTE(v15) = 5;
        v14 = *(_QWORD *)(v13 + 8);
        HIDWORD(v15) = *(_DWORD *)(v10 + 4);
LABEL_17:
        if ( !(unsigned __int8)sub_1EAE10(
                                 a2,
                                 (unsigned int)v24,
                                 (unsigned int)&v14,
                                 a3,
                                 0,
                                 a6,
                                 v14,
                                 v15,
                                 (char)v16,
                                 v17,
                                 v18,
                                 v19,
                                 v20,
                                 v21,
                                 v22,
                                 v23,
                                 0,
                                 0,
                                 0,
                                 0,
                                 v24[4])
          || (unsigned __int8)sub_315890(v24, 0) )
        {
          sub_312B80(v24);
          goto LABEL_11;
        }
        sub_312B80(v24);
        return 0;
      }
    }
    HIDWORD(v15) = *(_DWORD *)(v10 + 4);
LABEL_11:
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v16 = &off_4DD520;
    v21 = a3;
    v22 = a4;
    return (unsigned int)sub_11F830(a2, &v16) == 0;
  }
  if ( !(unsigned __int8)sub_11FD80(a4 + 48, &v16, 1) || v16 )
    return 0;
  result = a3 == 0 || a2 == 0;
  if ( !result )
  {
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v16 = &off_4DD4F8;
    v21 = a4;
    return (unsigned int)sub_11F830(a2, &v16) == 0;
  }
  return result;
}
