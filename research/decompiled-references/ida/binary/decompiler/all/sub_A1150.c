__int64 __fastcall sub_A1150(char *a1, _QWORD *a2)
{
  char v2; // al
  unsigned int v4; // ebx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // edx
  int v11; // esi
  _QWORD v12[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v2 = *a1;
  v17 = __readfsqword(0x28u);
  if ( v2 == 1 )
  {
    v10 = *((_DWORD *)a1 + 1);
    v11 = *((_DWORD *)a1 + 2);
    v13 = 0;
    v14 = 0;
    sub_63580(&v13, v11, v10);
    v15 = 0;
    v16 = 0;
    v4 = sub_63F20(&v13, a2);
    if ( (_BYTE)v4 )
      v4 = sub_3149F0(a2 + 2, &v15);
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    qfree();
  }
  else
  {
    v4 = 0;
    if ( v2 == 5 )
    {
      v6 = (__int64 *)*((_QWORD *)a1 + 1);
      v7 = *((int *)a1 + 1);
      v16 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v8 = *v6;
      v9 = v6[1];
      v12[1] = v7;
      v12[0] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v8 + 1440) + v9);
      ((void (__fastcall *)(__int64 *, _QWORD *))sub_313630)(&v15, v12);
      v4 = sub_63F20(&v13, a2);
      if ( (_BYTE)v4 )
        v4 = sub_3149F0(a2 + 2, &v15);
      if ( v15 )
      {
        *(_QWORD *)&v16 = 0;
        qfree();
      }
      qfree();
    }
  }
  return v4;
}
