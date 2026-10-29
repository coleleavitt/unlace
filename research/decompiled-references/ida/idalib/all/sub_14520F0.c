__int64 __fastcall sub_14520F0(__int64 a1, _DWORD *a2)
{
  char v2; // bp
  bool v3; // zf
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebp
  char v8; // bp
  char v9; // al
  int v10; // [rsp+0h] [rbp-98h] BYREF
  __int64 v11; // [rsp+8h] [rbp-90h]
  __int16 v12; // [rsp+10h] [rbp-88h]
  _BYTE v13[120]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_BYTE *)(a1 + 544);
  *(_BYTE *)(a1 + 544) = v2 | 0x20;
  sub_14634E0(a1, &v10);
  v3 = v12 == 5;
  *(_BYTE *)(a1 + 544) = (32 * ((v2 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
  if ( !v3 )
    goto LABEL_5;
  v4 = *(__int64 **)(v11 + 16);
  v5 = *v4;
  if ( (unsigned int)*v4 == 2 )
  {
    if ( *((_WORD *)v4 + 8) == 20047 )
    {
      *a2 = 0;
      goto LABEL_9;
    }
    goto LABEL_5;
  }
  if ( (_DWORD)v5 != 3 )
  {
    if ( (_DWORD)v5 == 7
      && *((_DWORD *)v4 + 4) == 1095124292
      && *((_WORD *)v4 + 10) == 19541
      && *((_BYTE *)v4 + 22) == 84 )
    {
      *a2 = 2;
      goto LABEL_9;
    }
LABEL_5:
    v6 = 1;
    sub_FC70B0((__int64)v13, *(_QWORD *)(a1 + 48), v10, 1232);
    sub_AEA040((__int64)v13);
    return v6;
  }
  if ( *((_WORD *)v4 + 8) != 17999 || *((_BYTE *)v4 + 18) != 70 )
    goto LABEL_5;
  *a2 = 1;
LABEL_9:
  v8 = *(_BYTE *)(a1 + 544);
  *(_BYTE *)(a1 + 544) = v8 | 0x20;
  sub_14634E0(a1, &v10);
  v9 = (32 * ((v8 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
  v6 = 0;
  v3 = v12 == 2;
  *(_BYTE *)(a1 + 544) = v9;
  if ( v3 )
    return v6;
  sub_FC70B0((__int64)v13, *(_QWORD *)(a1 + 48), v10, 1253);
  sub_AEA040((__int64)v13);
  return 0;
}
