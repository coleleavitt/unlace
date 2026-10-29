unsigned __int64 __fastcall sub_16FF440(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // cl
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+8h] [rbp-50h]
  _BYTE v23[72]; // [rsp+10h] [rbp-48h] BYREF

  v7 = a3;
  v22 = 0x400000000LL;
  ptr = v23;
  if ( !a3 )
    return v7;
  while ( !(unsigned __int8)sub_B91990(v7, a2, a3, a4, a5, a6) )
  {
    if ( !sub_B8E490(v7) )
    {
      v10 = *(_BYTE *)(v7 + 8) & 0x7F;
      if ( v10 <= 0x12u )
      {
        if ( ((1LL << v10) & 0x40182) == 0 )
          goto LABEL_4;
      }
      else if ( ((v10 + 94) & 0x7Fu) > 5 )
      {
LABEL_4:
        v8 = (unsigned int)v22;
        v9 = (unsigned int)v22 + 1LL;
        if ( v9 > HIDWORD(v22) )
        {
          sub_2237220(&ptr, v23, v9, 8);
          v8 = (unsigned int)v22;
        }
        *((_QWORD *)ptr + v8) = v7;
        LODWORD(v22) = v22 + 1;
      }
    }
    v7 = sub_B8ED10(v7);
    if ( !v7 )
      break;
  }
  LODWORD(v12) = v22;
  v13 = ptr;
  v7 = 0;
  if ( (_DWORD)v22 )
  {
    do
    {
      v16 = (unsigned int)v12;
      v12 = (unsigned int)(v12 - 1);
      v17 = v13[v16 - 1];
      LODWORD(v22) = v12;
      v18 = *(_BYTE *)(v17 + 8) & 0x7F;
      if ( v18 == 24 )
      {
        a3 = v17 - 48;
        if ( v17 != 48 )
        {
          v14 = *(_QWORD *)(v17 - 8);
          if ( (v14 & 7) == 0 && (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v15 = sub_E91C40(a1, v7, a3);
            LODWORD(v12) = v22;
            v13 = ptr;
            v7 = (unsigned __int64)v15;
          }
        }
      }
      else if ( (unsigned int)v18 - 58 <= 4 && v17 != 64 )
      {
        v19 = *(_QWORD *)(v17 - 16);
        if ( !v19 )
          v19 = sub_A7AA70((__int64)a1, v17 - 64, a3, v12, v17, a6);
        v20 = sub_E91A00(a1, v7, *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL));
        LODWORD(v12) = v22;
        v13 = ptr;
        v7 = (unsigned __int64)v20;
      }
    }
    while ( (_DWORD)v12 );
  }
  if ( v13 != (_QWORD *)v23 )
    free(v13);
  return v7;
}
