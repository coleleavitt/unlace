__int64 __fastcall sub_2B2B40(__int64 a1, int *a2, __int64 *a3)
{
  __int64 v3; // rax
  int v4; // r10d
  int v5; // ebx
  __int64 v6; // r8
  int v7; // edi
  int v8; // r11d
  __int64 v9; // r9
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  unsigned int v15; // ecx
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  unsigned __int64 v21; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v22[5]; // [rsp+10h] [rbp-28h] BYREF

  v22[1] = __readfsqword(0x28u);
  v21 = 0;
  v22[0] = 0;
  v3 = sub_298C80(a1, *a3, &v21, v22);
  v4 = *a2;
  v5 = a2[1];
  v6 = *(_QWORD *)(v3 + 24);
  v7 = a2[2];
  v8 = a2[3];
  if ( v6 )
  {
    v9 = *(_QWORD *)(v3 + 16);
    v10 = 0;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 8 * v10);
      v12 = v21;
      v13 = v11;
      if ( (int)v21 <= (int)v11 )
        v13 = v21;
      if ( v7 >= v13 )
      {
        if ( (int)v21 < (int)v11 )
          v12 = *(_QWORD *)(v9 + 8 * v10);
        if ( v4 <= v12 )
        {
          v14 = HIDWORD(*(_QWORD *)(v9 + 8 * v10));
          if ( SHIDWORD(v21) >= SHIDWORD(v11) )
            v14 = HIDWORD(v21);
          if ( v5 <= v14 && (v8 >= SHIDWORD(v21) || SHIDWORD(v11) <= v8) )
            return 1;
        }
      }
      ++v10;
      v21 = v11;
      if ( v6 == v10 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    v17 = v21;
    v18 = v22[0];
    if ( (int)v21 <= SLODWORD(v22[0]) )
      v18 = v21;
    v15 = 0;
    if ( v7 >= v18 )
    {
      if ( (int)v21 < SLODWORD(v22[0]) )
        v17 = v22[0];
      if ( v17 >= v4 )
      {
        v19 = HIDWORD(v21);
        v20 = HIDWORD(v22[0]);
        if ( SHIDWORD(v21) >= SHIDWORD(v22[0]) )
          v20 = HIDWORD(v21);
        if ( v20 >= v5 )
        {
          if ( SHIDWORD(v21) > SHIDWORD(v22[0]) )
            v19 = HIDWORD(v22[0]);
          LOBYTE(v15) = v8 >= v19;
        }
      }
    }
  }
  return v15;
}
