__int64 __fastcall sub_10D3E0(__int64 *a1, int *a2, int *a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v6; // r15
  int v11; // eax
  int v12; // eax
  int v14; // eax
  __int64 *v15; // [rsp+10h] [rbp-58h]
  _QWORD *v16; // [rsp+18h] [rbp-50h]
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a1;
  v17[1] = __readfsqword(0x28u);
  *a2 = 0;
  v15 = a1 + 2;
  v16 = a1 + 3;
  if ( (unsigned __int8)sub_11BB80(a1[2], v17, 0) && !v17[0] )
  {
    v6 = a1 + 1;
    v16 = a1 + 2;
    v15 = a1 + 3;
LABEL_13:
    if ( !(unsigned int)sub_10D000(a4, a5, *v6, *v15, a6) )
      return 0;
    *v16 = 0;
    return 1;
  }
  if ( (unsigned __int8)sub_11BB80(a1[3], v17, 0) && !v17[0] )
    goto LABEL_13;
  v11 = sub_10D000(a4, a5, *a1, a1[2], a6);
  if ( !v11 )
  {
    v12 = sub_10D000(a4, a5, a1[1], a1[3], a6);
    if ( v12 )
    {
      *a3 = v12;
      v12 = 2;
    }
    goto LABEL_8;
  }
  *a3 = v11;
  v14 = sub_10D000(a4, a5, a1[1], a1[3], a6 | 0x20u);
  if ( !v14 )
  {
    v12 = 1;
LABEL_8:
    *a2 = v12;
    return 0;
  }
  *a3 = v14;
  return 1;
}
