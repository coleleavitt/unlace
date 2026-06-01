void __fastcall sub_3CE780(__int64 *a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v5; // rax
  int v7; // edx
  char v8; // dl
  int v9; // edx
  unsigned int v10; // r14d
  int v11; // eax
  char v12; // al
  __int64 v13; // rdx
  __int64 (__fastcall **v14[6])(_QWORD, _QWORD *, __int64); // [rsp+0h] [rbp-68h] BYREF
  int v15; // [rsp+30h] [rbp-38h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v5 = a1[2];
  v16 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(v5 + 20);
  if ( *(_DWORD *)(v5 + 16) != v7 )
  {
    v8 = sub_4F8910(a1, a2);
    v5 = a1[2];
    if ( v8 != 2 )
    {
      if ( *(_DWORD *)(v5 + 20) != 8 )
        goto LABEL_3;
      goto LABEL_6;
    }
    v7 = *(_DWORD *)(v5 + 16);
  }
  if ( v7 != 8 )
  {
LABEL_3:
    sub_3CE4C0(a1, a2, a3, a4, (void (__fastcall *)(__int64 *, __int64, __int64, __int64))sub_3C9920);
    return;
  }
LABEL_6:
  v9 = *(_DWORD *)(v5 + 20);
  v10 = a2 + a4;
  if ( *(_DWORD *)(v5 + 16) != v9 )
  {
    v12 = sub_4F8910(a1, v10 - 1);
    v13 = a1[2];
    if ( v12 != 2 )
    {
      if ( *(_DWORD *)(v13 + 20) != 8 )
        goto LABEL_3;
      goto LABEL_8;
    }
    v9 = *(_DWORD *)(v13 + 16);
  }
  if ( v9 != 8 )
    goto LABEL_3;
LABEL_8:
  if ( (unsigned __int8)sub_3E9640(a1) )
    goto LABEL_3;
  v14[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))a1;
  v14[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))off_2AFCF48;
  v14[2] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))off_2AFCF78;
  v14[3] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))a3;
  v14[4] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))&a3[a4];
  v14[5] = nullptr;
  v15 = -1;
  if ( (unsigned int)a2 < v10 )
    sub_3B3AD0(a1, a2, v10, 0, v14);
  v11 = getinf(4);
  setinf(4, (unsigned int)(v11 + 1));
  if ( a1[95] )
    sub_3CE370(a1);
  sub_356720(*a1, a2, v10);
}

