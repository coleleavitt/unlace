__int64 __fastcall sub_1610(__int64 *a1, __int64 *a2, __int64 a3)
{
  void *v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD v10[23]; // [rsp+0h] [rbp-B8h] BYREF

  v10[17] = __readfsqword(0x28u);
  qlseek(a3, 0, 0);
  if ( qlread(a3, v10, 128) != 128 || !(unsigned int)sub_1310((__int64)v10) )
    return 0;
  v6 = (void *)*a1;
  if ( (unsigned __int64)a1[2] <= 0xE )
  {
    v8 = qvector_reserve(a1, v6, 15, 1);
    *a1 = v8;
    v6 = (void *)v8;
  }
  a1[1] = 15;
  qmemcpy(v6, "ARM Image File", 14);
  *(_BYTE *)(*a1 + 14) = 0;
  v7 = *a2;
  if ( (unsigned __int64)a2[2] <= 3 )
  {
    v9 = qvector_reserve(a2, v7, 4, 1);
    *a2 = v9;
    v7 = v9;
  }
  a2[1] = 4;
  *(_WORD *)v7 = 29281;
  *(_BYTE *)(v7 + 2) = 109;
  *(_BYTE *)(*a2 + 3) = 0;
  return 1;
}

