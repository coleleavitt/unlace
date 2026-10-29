__int64 __fastcall sub_92E670(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // r13
  _BYTE *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // r13
  _WORD *v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // r13
  _DWORD *v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // r13
  _QWORD *v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // rsi
  __int64 v35[13]; // [rsp+0h] [rbp-68h] BYREF

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v7 = *(_QWORD *)(a1 + 792);
      v8 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v8);
      v6 = sub_9E4580(a1 + 384, v7, v35, 3);
      if ( (_BYTE)v6 )
        v6 = sub_922520(a1 + 384, v7, (__int64)v35);
      goto LABEL_37;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v9 = *(_QWORD *)(a1 + 792);
      v10 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v10);
      v6 = sub_9E4580(a1 + 384, v9, v35, 3);
      if ( (_BYTE)v6 )
      {
        v11 = *(_QWORD *)(a1 + 568);
        v12 = (_BYTE *)sub_8F6BD0(v35);
        *(_BYTE *)sub_A1A4E0(v11, 8) = *v12;
        *(_BYTE *)sub_8F6BD0(v35) = *v12 + 1;
      }
      goto LABEL_37;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v13 = *(_QWORD *)(a1 + 792);
      v14 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v14);
      v6 = sub_9E4580(a1 + 384, v13, v35, 3);
      if ( (_BYTE)v6 )
        v6 = sub_922840(a1 + 384, v13, (__int64)v35);
      goto LABEL_37;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v15 = *(_QWORD *)(a1 + 792);
      v16 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v16);
      v6 = sub_9E4580(a1 + 384, v15, v35, 3);
      if ( (_BYTE)v6 )
      {
        v17 = *(_QWORD *)(a1 + 568);
        v18 = (_WORD *)sub_8F7430(v35);
        *(_WORD *)sub_A1A4E0(v17, 8) = *v18;
        *(_WORD *)sub_8F7430(v35) = *v18 + 1;
      }
      goto LABEL_37;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v19 = *(_QWORD *)(a1 + 792);
      v20 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v20);
      v6 = sub_9E4580(a1 + 384, v19, v35, 3);
      if ( (_BYTE)v6 )
        v6 = sub_922B60(a1 + 384, v19, (__int64)v35);
      goto LABEL_37;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v21 = *(_QWORD *)(a1 + 792);
      v22 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v22);
      v6 = sub_9E4580(a1 + 384, v21, v35, 3);
      if ( (_BYTE)v6 )
      {
        v23 = *(_QWORD *)(a1 + 568);
        v24 = (_DWORD *)sub_8F7C70(v35);
        *(_DWORD *)sub_A1A4E0(v23, 8) = *v24;
        *(_DWORD *)sub_8F7C70(v35) = *v24 + 1;
      }
      goto LABEL_37;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v25 = *(_QWORD *)(a1 + 792);
      v26 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v26);
      v6 = sub_9E4580(a1 + 384, v25, v35, 3);
      if ( (_BYTE)v6 )
        v6 = sub_922E70(a1 + 384, v25, (__int64)v35);
      goto LABEL_37;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v27 = *(_QWORD *)(a1 + 792);
      v28 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v28);
      v6 = sub_9E4580(a1 + 384, v27, v35, 3);
      if ( (_BYTE)v6 )
      {
        v29 = *(_QWORD *)(a1 + 568);
        v30 = (_QWORD *)sub_8F84D0(v35);
        *(_QWORD *)sub_A1A4E0(v29, 8) = *v30;
        *(_QWORD *)sub_8F84D0(v35) = *v30 + 1LL;
      }
      goto LABEL_37;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v31 = *(_QWORD *)(a1 + 792);
      v32 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v32);
      v6 = sub_9E4580(a1 + 384, v31, v35, 3);
      if ( (_BYTE)v6 )
        sub_8E5B00(*(_QWORD *)(a1 + 568), (__int64)v35);
      goto LABEL_37;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v33 = *(_QWORD *)(a1 + 792);
      v34 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v34);
      v6 = sub_9E4580(a1 + 384, v33, v35, 3);
      if ( (_BYTE)v6 )
        v6 = sub_92E160(a1 + 384, v33, v35);
      goto LABEL_37;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      return sub_8F98A0((_QWORD *)a1, *a3);
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v4 = *(_QWORD *)(a1 + 792);
      v5 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v5);
      v6 = sub_9E4580(a1 + 384, v4, v35, 3);
      if ( (_BYTE)v6 )
        v6 = sub_923190((_QWORD *)(a1 + 384), v4, (__int64)v35);
LABEL_37:
      sub_A1C0C0(v35);
      return v6;
  }
}

