__int64 __fastcall sub_5A1A90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r14
  int v7; // eax
  _BYTE v9[12]; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 16);
  v10 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)&v9[8] = 0;
  *(_QWORD *)v9 = (unsigned __int16)v7 & 0x8000;
  get_frame_part(&v9[4], a3, 0);
  if ( *(char *)(v5 + 9) >= 0 )
  {
    if ( a4 >= *(_DWORD *)&v9[4] )
      goto LABEL_3;
LABEL_5:
    *(_QWORD *)&v9[4] = 0;
    get_frame_part(&v9[4], a3, 3);
    goto LABEL_6;
  }
  if ( a4 >= *(_DWORD *)&v9[8] )
    goto LABEL_5;
LABEL_3:
  *(_QWORD *)&v9[4] = 0;
  get_frame_part(&v9[4], a3, 0);
LABEL_6:
  sub_3573A0((char **)a2);
  return (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
}

