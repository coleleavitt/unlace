__int64 __fastcall sub_A0220(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  __int64 v6; // r14
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  int v11; // [rsp+0h] [rbp-98h] BYREF
  __int128 v12; // [rsp+8h] [rbp-90h]
  _QWORD v13[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v15[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 112);
  v15[3] = __readfsqword(0x28u);
  v13[0] = 0xFFFFFFFF00000000LL;
  v13[1] = 0;
  v14[0] = 0xFFFFFFFF00000000LL;
  v14[1] = 0;
  v15[0] = 0xFFFFFFFF00000000LL;
  v15[1] = 0;
  v12 = 0;
  sub_122EA0(&v11, a3);
  if ( v11 == 2 )
  {
    if ( *(_BYTE *)(a1 + 145) == a5
      || (unsigned __int8)sub_12A680(&v11, v6, (unsigned int)(HIDWORD(v15[0]) - *(_DWORD *)(a2 + 68))) )
    {
      goto LABEL_3;
    }
LABEL_7:
    v9 = 0;
    goto LABEL_4;
  }
  v8 = a5 + 10;
  sub_1291D0(&v11, v6, v8, *(unsigned int *)(a2 + 68), 1);
  if ( v11 == v8 )
    goto LABEL_7;
LABEL_3:
  v9 = sub_123690(a2, v6, &v11, a4);
LABEL_4:
  sub_11A960(v15);
  sub_11A960(v14);
  sub_11A960(v13);
  return v9;
}
