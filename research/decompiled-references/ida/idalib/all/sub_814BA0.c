__int64 __fastcall sub_814BA0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5, int a6)
{
  __int64 v6; // rbx
  unsigned __int16 v8; // cx
  _QWORD v10[3]; // [rsp+0h] [rbp-48h] BYREF
  char v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v6 = *(_QWORD *)(a2 + 80);
  if ( !v6 )
    return v6;
  if ( *(int *)(a1 + 944) > 8 )
    return 0;
  v8 = *(_WORD *)(a2 + 41);
  v10[0] = a1;
  v10[1] = a2;
  v10[2] = a3;
  v11 = 0;
  v6 = sub_8148B0(v10, v6, a3, v8, 0, a6);
  if ( v6 && (debug & 4) != 0 )
    sub_3879F0();
  *a4 = v11;
  return v6;
}
